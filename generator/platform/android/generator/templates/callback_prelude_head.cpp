	#set $current_class_proxy = $current_class.class_name

	#def prefix_jstr($str)
j$str #end def

	#def wrap_in_quotes($str)
"$str" #end def

	${current_class.class_name}::~${current_class.class_name}()
	{
		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();
		
		long contextAddress = (long) this;
		jobject proxiedComponent = ctx->findProxyComponent(contextAddress);
		jni->deleteGlobalRef(proxiedComponent);
		ctx->deregisterProxyComponent(contextAddress);
		ctx->deregisterCallbackData(contextAddress);
	}

	class Proxied${current_class_proxy} : public ProxiedCallback
	{
	public:
		jobject callMethod(long contextAddress, std::string methodName, void * payload);
	};


	static Proxied${current_class_proxy} *proxied${current_class_proxy} = new Proxied${current_class_proxy}();

	jobject Proxied${current_class_proxy}::callMethod(long contextAddress, std::string methodName, void * payload)
	{
		LOGV("${current_class.class_name}::callMethod enter");
		LOGV("${current_class.class_name}::callMethod methodName %s", methodName.c_str());

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();

		jni->pushLocalFrame();

		long callbackAddress = ctx->findCallbackData(contextAddress);
		LOGV("callbackAddress for $current_class.class_name %ld (using contextAddress %ld)", callbackAddress, contextAddress);
		${current_class.class_name} *callback = (${current_class.class_name} *) reinterpret_cast<${current_class.class_name} *>(callbackAddress);

		void * userData = (void *) callback->userData;
		LOGV("userData for $current_class.class_name %ld", (long) userData);
		jobject response  = 0;

		#for $function in $current_class.functions
		if (methodName == "${function.function_name}")
		{
			LOGV("${function.function_name} invoked");

			jobjectArray array = (jobjectArray) payload;
			#set $callback_payload = ""
			#set $param_count = $len($function.function_params)
			jobject jobj = 0;
			#for $param in $function.function_params
			#set $jni_type = $param.jni_elem_type
			// param.resource_name ${param.resource_name} param.jni_elem_type ${param.jni_elem_type} param.jni_elem_call_type ${param.jni_elem_call_type}
			$jni_type $prefix_jstr($param.arg_name) = jni->read${param.jni_elem_call_type}ObjectArrayElement(array, ${param.idx});
			LOGV("callMethod jniType $jni_type");
			#if $jni_type == "jboolean"
			bool ${param.arg_name} = (bool) $prefix_jstr($param.arg_name);
			#elif $jni_type == "jbyte"
			int ${param.arg_name} = (int) $prefix_jstr($param.arg_name);
			#elif $jni_type == "jchar"
			char ${param.arg_name} = (char) $prefix_jstr($param.arg_name);
			#elif $jni_type == "jshort"
			int ${param.arg_name} = (int) $prefix_jstr($param.arg_name);
			#elif $jni_type == "jint"
			int ${param.arg_name} = (int) $prefix_jstr($param.arg_name);
			#elif $jni_type == "jlong"
			long ${param.arg_name} = (long) $prefix_jstr($param.arg_name);
			#elif $jni_type == "jfloat"
			float ${param.arg_name} = (float) $prefix_jstr($param.arg_name);
			#elif $jni_type == "jdouble"
			double ${param.arg_name} = (double) $prefix_jstr($param.arg_name);
			#elif $jni_type == "jstring"
			std::string ${param.arg_name} = jni->getUTFString($prefix_jstr($param.arg_name));
			#elif $jni_type == "jobject"
			#if $param.is_enum
			#set $rename_type = $param.rename
			jstring jenumString = jni->toCXXEnumString($prefix_jstr($param.arg_name));
			const char *cenumString = jni->getUTFString(jenumString).c_str();
			#set $enum_namespace = $param.rename
			$enum_namespace::$rename_type ${param.arg_name};
			do
			{
			#for $enum_value in $param.enum_values
			if (strcmp("$enum_value", cenumString) == 0)
			{
				${param.arg_name} = $enum_namespace::$enum_value;
				break;
			}
			#end for
			} while (0);
			#elif $param.is_proxied
			#set $rename_type = $param.pointer_name
			#set $rename_class = $param.generator.rename_classes_dict[$param.name]
			$rename_type ${param.arg_name} = 0;
			if ($prefix_jstr($param.arg_name) != 0) 
			{
				${param.arg_name} = new ${rename_class}($prefix_jstr($param.arg_name));
			}
			#else
			#set $rename_type = $param.pointer_name
			$rename_type ${param.arg_name};
			${param.to_cxx($prefix_jstr($param.arg_name), $param.arg_name, $wrap_in_quotes($param.name), $wrap_in_quotes($param.normalized_name))}
			#end if
			#end if

			#if $param.idx > 0
			#set $callback_payload += ","
			#end if

			#set $callback_payload += $param.arg_indirection_name

			#end for

			#if $param_count > 0
			#set $callback_payload += ","
			#end if
			#set $callback_payload += "(void *) userData"

			LOGV("invoking callback ${function.function_name}($callback_payload)");

			#if $function.function_ret_name == "void"
				callback->${function.function_name}($callback_payload);
			#else
				$function.function_ret_name retarg_name = callback->${function.function_name}($callback_payload);
				LOGV("processing response of type ${function.function_ret_name}");
				#set $ret = $function.function_ret[0]
				#if $ret.is_enum
					const char * enum_string = 0;
					do
					{
					#for $enum_value in $ret.enum_values
					if ($enum_value == retarg_name)
					{
						enum_string = "$enum_value";
						break;
					}
					#end for
					} while (0);
					jint value = (jint) jni->toJEnum(jni->getClassRef("${ret.resource_name}"), enum_string);
					response = jni->toIntObject(value);
				#else if $ret.name == "[Ljava.lang.String;"
					int count = retarg_name.length();
					response = jni->createStringArray(retarg_name, count);
				#else if $ret.name == "java.lang.String"
					response = jni->toJString(retarg_name);
				#else if $ret.name == "[Z"
					int count = sizeof(retarg_name)/sizeof(bool);
					response = jni->createBooleanArray(retarg_name, count);
				#else if $ret.name == "boolean"
					jboolean value = (jboolean) retarg_name;
					response = jni->toBooleanObject(value);
				#else if $ret.name == "java.lang.Boolean"
					jboolean value = (jboolean) retarg_name;
					response = jni->toBooleanObject(value);
				#else if $ret.name == "[B"
					int count = sizeof(retarg_name)/sizeof(char)
					response = jni->createByteArray(retarg_name, count);
				#else if $ret.name == "byte"
					jbyte value = (jbyte) retarg_name;
					response = jni->toByteObject(value);
				#else if $ret.name == "java.lang.Byte"
					jbyte value = (jbyte) retarg_name;
					response = jni->toByteObject(value);
				#else if $ret.name == "[C"
					int count = sizeof(retarg_name)/sizeof(char)
					response = jni->createCharArray(retarg_name, count);
				#else if $ret.name == "char"
					jchar value = (jchar) retarg_name;
					response = jni->toCharObject(value);
				#else if $ret.name == "java.lang.Character"
					jchar value = (jchar) retarg_name;
					response = jni->toCharObject(value);
				#else if $ret.name == "[S"
					int count = sizeof(retarg_name)/sizeof(short)
					response = jni->createShortArray($param.arg_name, count);
				#else if $ret.name == "short"
					jshort value = (jshort) retarg_name;
					response = jni->toShortObject(value);
				#else if $ret.name == "java.lang.Short"
					jshort value = (jshort) retarg_name;
					response = jni->toShortObject(value);
				#else if $ret.name == "[I"
					int count = sizeof(retarg_name)/sizeof(int)
					jintArray marg$marg_idx = jni->createIntArray(retarg_name, count);
				#else if $ret.name == "int"					
					jint value = (jint) retarg_name;
					response = jni->toIntObject(value);
				#else if $ret.name == "java.lang.Integer"					
					jint value = (jint) retarg_name;
					response = jni->toIntObject(value);
				#else if $ret.name == "[J"
					int count = sizeof(retarg_name)/sizeof(long)
					response = jni->createLongArray(retarg_name, count);
				#else if $ret.name == "long"
					jlong value = (jlong) retarg_name;
					response = jni->toLongObject(value);
				#else if $ret.name == "java.lang.Long"
					jlong value = (jlong) retarg_name;
					response = jni->toLongObject(value);
				#else if $ret.name == "[F"
					int count = sizeof(retarg_name)/sizeof(float)
					response = jni->createFloatArray(retarg_name, count);
				#else if $ret.name == "float"
					jfloat value = (jfloat) retarg_name;
					response = jni->toFloatObject(value);
				#else if $ret.name == "java.lang.Float"
					jfloat value = (jfloat) retarg_name;
					response = jni->toFloatObject(value);
				#else if $ret.name == "[D"
					int count = sizeof(retarg_name)/sizeof(double)
					response = jni->createDoubleArray($ret.arg_name, count);
				#else if $ret.name == "double"
					jdouble value = (jdouble) retarg_name;
					response = jni->toDoubleObject(value);
				#else if $ret.name == "java.lang.Double"
					jdouble value = (jdouble) retarg_name;
					response = jni->toDoubleObject(value);
				#else 
					${param.from_cxx(retarg_name, response, $wrap_in_quotes($function.function_ret[0].normalized_name), $wrap_in_quotes($ret.name))}
			  	#end if
			#end if
		}
		#end for

		response = jni->popLocalFrame(response);
		return response;
	}



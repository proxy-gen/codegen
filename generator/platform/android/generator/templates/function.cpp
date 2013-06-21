#set $function_ret_name = $current_function.function_ret_name
#set $is_constructed = $current_function.current_class.is_instance
#set $is_from_static_field = $current_function.current_class.is_enum
#set $is_abstract = $current_function.current_class.is_abstract
#set $is_singleton = $current_function.current_class.is_singleton
#set $is_static = $current_function.is_static
#set $singleton_function_name = $current_function.current_class.generator.singleton_function_name
#set $is_singleton_function = $current_function.function_name == $singleton_function_name and $is_singleton
#set $jni_type = $current_function.function_ret[0].jni_type
#set $ANDROID_ACTIVITY = "android.app.Activity"
#set $elem_prefix = "j"
#set $arg_prefix = "arg"

#set $function_signature = $current_function.function_param_signature

#def prefix_jstr($str)
j$str #end def

#def prefix_margstr($str)
marg$str #end def

#def wrap_in_quotes($str)
"$str" #end def

#if not ($current_function.function_body == None)
	$current_function.function_body
#else
	$function_ret_name ${current_function.current_class.class_name}::${current_function.rename_function_name}($function_signature)
	{
		LOGV("${current_function.current_class.class_name}::${current_function.function_name}");

		const char *methodName = "${current_function.function_name}";
		const char *methodSignature = "${current_function.function_type_signature}";
		const char *className =  "${current_function.current_class.resource_name}";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();

	#if $is_singleton_function ##

		if (!s${current_function.current_class.class_name})
			s${current_function.current_class.class_name} = new ${current_function.current_class.class_name}();
		long address = (long) &s${current_function.current_class.class_name};
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{

	#elif $is_static

		jobject javaObject = 0; // unused

	#else 

		jni->pushLocalFrame();

		#if $is_constructed
		long thisAddress = (long) this;
		#elif $is_singleton
		long thisAddress = (long) &s${current_function.current_class.class_name};
		#elif $is_from_static_field
		long thisAddress = (long) &s${current_function.current_class.class_name};
		#elif $is_abstract
		long thisAddress = (long) this;
		#end if ## //end #if $is_constructed

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	#end if ## 

## ~ Sets the methodPayload params
#set $marg_idx = 0
const char * enum_string = 0;
long param_address = 0;
#for $param in $current_function.function_params
	#if $param.is_dummy
		#continue
	#else if $param.is_phantom
	 	#if $param.name == "android.content.Context"
	  		jobject marg$marg_idx = ctx->getAndroidContext();
	  		#set $marg_idx += 1
	  	#else if $param.name == $ANDROID_ACTIVITY
	  		jobject marg$marg_idx = ctx->getAndroidContext();
	  		#set $marg_idx += 1
	  	#end if
	#else if $param.is_proxied
	  	param_address = (long) $param.arg_address_name;	
	  	#if $param.is_callback
		LOGV("registerProxyComponent param_address %d", param_address);
		jobject proxiedComponent = ctx->findProxyComponent(param_address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			proxiedComponent = ctx->createProxiedCallback(param_address,(long) proxied${param.rename}, "${param.resource_name}");
			proxiedComponent = jni->localToGlobalRef(proxiedComponent);
			LOGV("registerProxyComponent param_address %ld proxiedComponent %ld", param_address, proxiedComponent);
			ctx->registerProxyComponent(param_address, proxiedComponent);
			long userDataPtr = (long) (${param.arg_name}.userData);
			LOGV("registerUserData param_address %ld userData %ld", param_address, (long) userDataPtr);
			ctx->registerUserData(param_address, (long) userDataPtr);
			long heapPtr = (long) malloc(sizeof($param.arg_name));
			memcpy((void *) heapPtr, (void *) &$param.arg_name, sizeof($param.arg_name));
			LOGV("registerCallbackData param_address %ld callbackData %ld", param_address, heapPtr);
			ctx->registerCallbackData(param_address, heapPtr);
		}

	  	#end if
		jobject marg$marg_idx = ctx->findProxyComponent((long) param_address);
		#set $marg_idx += 1
	#else if $param.is_enum
		#set $enum_namespace = $param.normalized_name
		do
		{
		#for $enum_value in $param.enum_values
		if ($enum_namespace::$enum_value == ${param.arg_name})
		{
			enum_string = "$enum_value";
			break;
		}
		#end for
		} while (0);
		jobject marg$marg_idx = jni->toJEnum(jni->getClassRef("${param.resource_name}"), enum_string);
		#set $marg_idx += 1
	#else if $param.name == "[Ljava.lang.String;"
		#set $next_arg_idx = $param.idx + 1
		jobjectArray marg$marg_idx = jni->createStringArray($param.arg_name, ${arg_prefix}${next_arg_idx});
		#set $marg_idx += 1
	#else if $param.name == "java.lang.String"
		jobject marg$marg_idx = jni->toJString(${param.arg_name});
		#set $marg_idx += 1
	#else if $param.name == "[Z"
		#set $next_arg_idx = $param.idx + 1
		jbooleanArray marg$marg_idx = jni->createBooleanArray($param.arg_name, ${arg_prefix}${next_arg_idx});
		#set $marg_idx += 1
	#else if $param.name == "boolean"
		jboolean marg$marg_idx = (jboolean) $param.arg_name;
		#set $marg_idx += 1
	#else if $param.name == "java.lang.Boolean"
		jboolean marg$marg_idx = (jboolean) $param.arg_name;
		#set $marg_idx += 1
	#else if $param.name == "[B"
		#set $next_arg_idx = $param.idx + 1
		jbyteArray marg$marg_idx = jni->createByteArray($param.arg_name, ${arg_prefix}${next_arg_idx});
		#set $marg_idx += 1
	#else if $param.name == "byte"
		jbyte marg$marg_idx = (jbyte) $param.arg_name;
		#set $marg_idx += 1
	#else if $param.name == "java.lang.Byte"
		jbyte marg$marg_idx = (jbyte) $param.arg_name;
		#set $marg_idx += 1
	#else if $param.name == "[C"
		#set $next_arg_idx = $param.idx + 1
		jcharArray marg$marg_idx = jni->createCharArray($param.arg_name, ${arg_prefix}${next_arg_idx});
		#set $marg_idx += 1
	#else if $param.name == "char"
		jchar marg$marg_idx = (jchar) $param.arg_name;
		#set $marg_idx += 1
	#else if $param.name == "java.lang.Character"
		jchar marg$marg_idx = (jchar) $param.arg_name;
		#set $marg_idx += 1
	#else if $param.name == "[S"
		#set $next_arg_idx = $param.idx + 1
		jshortArray marg$marg_idx = jni->createShortArray($param.arg_name, ${arg_prefix}${next_arg_idx});
		#set $marg_idx += 1
	#else if $param.name == "short"
		jshort marg$marg_idx = (jshort) $param.arg_name;
		#set $marg_idx += 1
	#else if $param.name == "java.lang.Short"
		jshort marg$marg_idx = (jshort) $param.arg_name;
		#set $marg_idx += 1
	#else if $param.name == "[I"
		#set $next_arg_idx = $param.idx + 1
		jintArray marg$marg_idx = jni->createIntArray($param.arg_name, ${arg_prefix}${next_arg_idx});
		#set $marg_idx += 1
	#else if $param.name == "int"					
		jint marg$marg_idx = (jint) $param.arg_name;
		#set $marg_idx += 1
	#else if $param.name == "java.lang.Integer"					
		jint marg$marg_idx = (jint) $param.arg_name;
		#set $marg_idx += 1
	#else if $param.name == "[J"
		#set $next_arg_idx = $param.idx + 1
		jlongArray marg$marg_idx = jni->createLongArray($param.arg_name, ${arg_prefix}${next_arg_idx});
		#set $marg_idx += 1
	#else if $param.name == "long"
		jlong marg$marg_idx = (jlong) $param.arg_name;
		#set $marg_idx += 1
	#else if $param.name == "java.lang.Long"
		jlong marg$marg_idx = (jlong) $param.arg_name;
		#set $marg_idx += 1
	#else if $param.name == "[F"
		#set $next_arg_idx = $param.idx + 1
		jfloatArray marg$marg_idx = jni->createFloatArray($param.arg_name, ${arg_prefix}${next_arg_idx});
		#set $marg_idx += 1
	#else if $param.name == "float"
		jfloat marg$marg_idx = (jfloat) $param.arg_name;
		#set $marg_idx += 1
	#else if $param.name == "java.lang.Float"
		jfloat marg$marg_idx = (jfloat) $param.arg_name;
		#set $marg_idx += 1
	#else if $param.name == "[D"
		#set $next_arg_idx = $param.idx + 1
		jdoubleArray marg$marg_idx = jni->createDoubleArray($param.arg_name, ${arg_prefix}${next_arg_idx});
		#set $marg_idx += 1
	#else if $param.name == "double"
		jdouble marg$marg_idx = (jdouble) $param.arg_name;
		#set $marg_idx += 1
	#else if $param.name == "java.lang.Double"
		jdouble marg$marg_idx = (jdouble) $param.arg_name;
		#set $marg_idx += 1
	#else 
		jobject $prefix_margstr($marg_idx) = 0;
		LOGV("converting from_cxx");
		${param.from_cxx($param.arg_name, $prefix_margstr($marg_idx), $wrap_in_quotes($param.normalized_name), $wrap_in_quotes($param.name))}
		#set $marg_idx += 1
  	#end if
#end for
## ~

## ~ Generates the methodPayload
	#set $marg_count = $marg_idx
	#set $methodPayload = ""
	#for $idx in range($marg_count)
	  		#set $methodPayload += ", marg" + str($idx)
	#end for
## ~

#if $is_singleton_function
		proxiedComponent = jni->getStaticObjectRef(false, className, methodName, methodSignature $methodPayload);
		LOGV("${singleton_function_name} local proxiedComponent %ld", proxiedComponent);
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);
		LOGV("${singleton_function_name} registering proxiedComponent %ld at address %ld", proxiedComponent, address);
		ctx->registerProxyComponent(address, proxiedComponent);
#else
		#set $ret = $current_function.function_ret[0].arg_name
		#if $jni_type != "void"
		#if $is_static
		$jni_type $prefix_jstr($ret) = jni->invokeStatic${current_function.function_jni_call_type}Method(className, methodName, methodSignature $methodPayload);	
		#else
		$jni_type $prefix_jstr($ret) = jni->invoke${current_function.function_jni_call_type}Method(javaObject, className, methodName, methodSignature $methodPayload);	
		#end if	
		#else
		#if $is_static
		jni->invokeStatic${current_function.function_jni_call_type}Method(className, methodName, methodSignature $methodPayload);
		#else
		jni->invoke${current_function.function_jni_call_type}Method(javaObject, className, methodName, methodSignature $methodPayload);
		#end if	
		#end if
#end if

#if $is_singleton_function
		} ## 
		return s${current_function.current_class.class_name};
#else

#set $rename_type = $current_function.function_ret[0].normalized_name

#if $jni_type == "jboolean"
		bool cret = (bool) $prefix_jstr($ret);
		jni->popLocalFrame();
		return cret;
#elif $jni_type == "jbyte"
		int cret = (int) $prefix_jstr($ret);
		jni->popLocalFrame();
		return cret;
#elif $jni_type == "jchar"
		char cret = (char) $prefix_jstr($ret);
		jni->popLocalFrame();
		return cret;
#elif $jni_type == "jshort"
		int cret = (int) $prefix_jstr($ret);
		jni->popLocalFrame();
		return cret;
#elif $jni_type == "jint"
		int cret = (int) $prefix_jstr($ret);
		jni->popLocalFrame();
		return cret;
#elif $jni_type == "jlong"
		long cret = (long) $prefix_jstr($ret);
		jni->popLocalFrame();
		return cret;
#elif $jni_type == "jfloat"
		float cret = (float) $prefix_jstr($ret);
		jni->popLocalFrame();
		return cret;
#elif $jni_type == "jdouble"
		double cret = (double) $prefix_jstr($ret);
		jni->popLocalFrame();
		return cret;
#elif $jni_type == "jstring"
		std::string cret = jni->getUTFString($prefix_jstr($ret));
		jni->popLocalFrame();
		return cret;
#elif $jni_type == "jobject"
	#if $current_function.function_ret[0].is_enum
		jstring jenumString = jni->toCXXEnumString($prefix_jstr($ret));
		const char *cenumString = jni->getUTFString(jenumString).c_str();
		#set $enum_namespace = $current_function.function_ret[0].normalized_name
		$enum_namespace::$rename_type cret;
		do
		{
		#for $enum_value in $current_function.function_ret[0].enum_values
			if (strcmp("$enum_value", cenumString) == 0)
			{
				cret = $enum_namespace::$enum_value;
				break;
			}
		#end for
		} while (0);
		jni->popLocalFrame();
		return cret;
	#elif $current_function.function_ret[0].is_proxied
		#set $rename_class = $current_function.generator.rename_classes_dict[$current_function.function_ret[0].name]
		$rename_class *cret = new ${rename_class}($prefix_jstr($ret));
		jni->popLocalFrame();
		return cret;
	#else
		#if $current_function.function_ret_signature == "Ljava/lang/Boolean;"
		bool cret = (bool) jni->booleanValue($prefix_jstr($ret));
		jni->popLocalFrame();
		return cret;
		#elif $current_function.function_ret_signature == "Ljava/lang/Byte;"
		int cret = (int) jni->byteValue($prefix_jstr($ret));
		jni->popLocalFrame();
		return cret;
		#elif $current_function.function_ret_signature == "Ljava/lang/Character;"
		int cret = (int) jni->charValue($prefix_jstr($ret));
		jni->popLocalFrame();
		return cret;
		#elif $current_function.function_ret_signature == "Ljava/lang/Short;"
		int cret = (int) jni->shortValue($prefix_jstr($ret));
		jni->popLocalFrame();
		return cret;
		#elif $current_function.function_ret_signature == "Ljava/lang/Integer;"
		int cret = (int) jni->intValue($prefix_jstr($ret));
		jni->popLocalFrame();
		return cret;
		#elif $current_function.function_ret_signature == "Ljava/lang/Long;"
		long cret = (long) jni->longValue($prefix_jstr($ret));
		jni->popLocalFrame();
		return cret;
		#elif $current_function.function_ret_signature == "Ljava/lang/Float;"
		float cret = (long) jni->floatValue($prefix_jstr($ret));
		jni->popLocalFrame();
		return cret;
		#elif $current_function.function_ret_signature == "Ljava/lang/Double;"
		double cret = (long) jni->doubleValue($prefix_jstr($ret));
		jni->popLocalFrame();
		return cret;
		#else
		$rename_type $ret;
		if ($prefix_jstr($ret) != 0)
		{
			## TODO: fix workaround for converter
			#set $param = $current_function.function_ret[0]
			#set $ret_name_str = $current_function.function_ret[0].name
			#set $ret_rename_str = $current_function.function_ret[0].normalized_name
			${current_function.function_ret[0].to_cxx($prefix_jstr($ret), $ret, $wrap_in_quotes($ret_name_str), $wrap_in_quotes($ret_rename_str))}
		}
		jni->popLocalFrame();
		return $ret;
		#end if
	#end if
#elif $jni_type == "void"
		jni->popLocalFrame();		
#end if

#end if 
	}
#end if

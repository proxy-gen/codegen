#set $should_create_from_constructor = $current_class.is_instance
#set $should_create_from_singleton_function = $current_class.is_singleton_instance
#set $should_create_from_singleton_field = $current_class.is_enum or $current_class.is_singleton_field
#set $singleton_field_name = $current_class.generator.singleton_field_name
#set $singleton_function_name = $current_class.generator.singleton_function_name
#set $is_abstract = $current_class.is_abstract

#def prefix_margstr($str) 
marg$str #end def

#def wrap_in_quotes($str)
"$str" #end def

#if $is_abstract
// ${current_class.class_name} is abstract
	${current_class.class_name}::~${current_class.class_name}()
	{
		LOGV("${current_class.class_name}::~${current_class.class_name} invoked");
		CXXContext *ctx = CXXContext::sharedInstance();
		long address = (long) this;
		jobject proxiedComponent = ctx->findProxyComponent(address);
		if (proxiedComponent != 0)
		{
			ctx->deregisterProxyComponent(address);
		}		
	}
#elif $should_create_from_constructor
// ${current_class.class_name} is an instance
#for $current_constructor in $current_class.constructors
	${current_class.class_name}::${current_class.class_name}($current_constructor.constructor_param_signature)
	{
		LOGV("${current_class.class_name}::${current_class.class_name} invoked");
		
		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();
		long address = (long) this;
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			jclass clazz = jni->getClassRef("${current_class.resource_name}");

			## ~ Sets the constructorPayload params
			#set $marg_idx = 0
			#for $param in $current_constructor.constructor_params
				#if $param.is_dummy
					#continue
				#else if $param.is_phantom
			 		#if $param.name == "android.content.Context"
				  		jobject marg$marg_idx = ctx->getAndroidContext();
				  		#set $marg_idx += 1
			  		#end if
				#else if $param.is_proxied
					jobject marg$marg_idx = ctx->findProxyComponent((long) $param.arg_address_name);
					#set $marg_idx += 1
				#else if $param.is_enum
					const char * enum_string = 0;
					do
					{
					#for $enum_value in $param.enum_values
					if ($enum_value == ${param.arg_name})
					{
						enum_string = "$enum_value";
						break;
					}
					#end for
					} while (0);
					jobject marg$marg_idx = jni->toJEnum(jni->getClassRef("${param.resource_name}"), enum_string);
					#set $marg_idx += 1
				#else if $param.name == "java.lang.String"
					jobject marg$marg_idx = jni->toJString(${param.arg_name});
					#set $marg_idx += 1
				#else if $param.name == "boolean"
					jboolean marg$marg_idx = (jboolean) $param.arg_name;
					#set $marg_idx += 1
				#else if $param.name == "java.lang.Boolean"
					jboolean marg$marg_idx = (jboolean) $param.arg_name;
					#set $marg_idx += 1
				#else if $param.name == "byte"
					jbyte marg$marg_idx = (jbyte) $param.arg_name;
					#set $marg_idx += 1
				#else if $param.name == "java.lang.Byte"
					jbyte marg$marg_idx = (jbyte) $param.arg_name;
					#set $marg_idx += 1
				#else if $param.name == "char"
					jchar marg$marg_idx = (jchar) $param.arg_name;
					#set $marg_idx += 1
				#else if $param.name == "java.lang.Character"
					jchar marg$marg_idx = (jchar) $param.arg_name;
					#set $marg_idx += 1
				#else if $param.name == "short"
					jshort marg$marg_idx = (jshort) $param.arg_name;
					#set $marg_idx += 1
				#else if $param.name == "java.lang.Short"
					jshort marg$marg_idx = (jshort) $param.arg_name;
					#set $marg_idx += 1
				#else if $param.name == "int"					
					jint marg$marg_idx = (jint) $param.arg_name;
					#set $marg_idx += 1
				#else if $param.name == "java.lang.Integer"					
					jint marg$marg_idx = (jint) $param.arg_name;
					#set $marg_idx += 1
				#else if $param.name == "long"
					jlong marg$marg_idx = (jlong) $param.arg_name;
					#set $marg_idx += 1
				#else if $param.name == "java.lang.Long"
					jlong marg$marg_idx = (jlong) $param.arg_name;
					#set $marg_idx += 1
				#else if $param.name == "float"
					jfloat marg$marg_idx = (jfloat) $param.arg_name;
					#set $marg_idx += 1
				#else if $param.name == "java.lang.Float"
					jfloat marg$marg_idx = (jfloat) $param.arg_name;
					#set $marg_idx += 1
				#else if $param.name == "double"
					jdouble marg$marg_idx = (jdouble) $param.arg_name;
					#set $marg_idx += 1
				#else if $param.name == "java.lang.Double"
					jdouble marg$marg_idx = (jdouble) $param.arg_name;
					#set $marg_idx += 1
				#else 
					jobject $prefix_margstr($marg_idx) = 0;
					${param.from_cxx($param.arg_name, $prefix_margstr($marg_idx), $wrap_in_quotes($param.normalized_name), $wrap_in_quotes($param.name))}
					#set $marg_idx += 1
			  	#end if
			#end for
			## ~

			## ~ Generates the constructorPayload
				#set $marg_count = $marg_idx
				#set $constructorPayload = ""
				#for $idx in range($marg_count)
				  		#set $constructorPayload += ", marg" + str($idx)
				#end for
			## ~

			proxiedComponent = jni->createNewObject(clazz, jni->getMethodID(clazz, "<init>", "${current_constructor.constructor_type_signature}") ${constructorPayload});
			proxiedComponent = jni->localToGlobalRef(proxiedComponent);
			ctx->registerProxyComponent(address, proxiedComponent);
		}

	}
#end for

	${current_class.class_name}::~${current_class.class_name}()
	{
		LOGV("${current_class.class_name}::~${current_class.class_name} invoked");
		CXXContext *ctx = CXXContext::sharedInstance();
		long address = (long) this;
		jobject proxiedComponent = ctx->findProxyComponent(address);
		if (proxiedComponent != 0)
		{
			JNIContext *jni = JNIContext::sharedInstance();
			ctx->deregisterProxyComponent(address);
		}		
	}
#else if $should_create_from_singleton_field
// ${current_class.class_name} is a singleton (uses singleton FIELD)
	static ${current_class.class_name} *s${current_class.class_name} = 0;

	${current_class.class_name}::${current_class.class_name}() {}

	${current_class.class_name}& ${current_class.class_name}::${singleton_function_name}()
	{
		LOGV("${current_class.class_name}::${singleton_function_name} invoked");
		CXXContext *ctx = CXXContext::sharedInstance();
		if (!s${current_class.class_name})
			s${current_class.class_name} = new ${current_class.class_name}();
		long address = (long) &s${current_class.class_name};
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			JNIContext *jni = JNIContext::sharedInstance();
			proxiedComponent = jni->getStaticObjectRef(true, "${current_class.resource_name}", "$singleton_field_name", "L${current_class.resource_name};");
			proxiedComponent = jni->localToGlobalRef(proxiedComponent);
			ctx->registerProxyComponent(address, proxiedComponent);
		}

		return *s${current_class.class_name};
	}

	${current_class.class_name}::~${current_class.class_name}()
	{
		LOGV("${current_class.class_name}::~${current_class.class_name} invoked");
		CXXContext *ctx = CXXContext::sharedInstance();
		long address = (long) &s${current_class.class_name};
		if (address != 0)
		{
			jobject proxiedComponent = ctx->findProxyComponent(address);
			if (proxiedComponent != 0)
			{
				JNIContext *jni = JNIContext::sharedInstance();
				ctx->deregisterProxyComponent(address);
			}
		}		
	}
#else if $should_create_from_singleton_function
// ${current_class.class_name} is a singleton (uses singleton INSTANCE)
	static ${current_class.class_name} *s${current_class.class_name} = 0;

	${current_class.class_name}::${current_class.class_name}() {}

	${current_class.class_name}::~${current_class.class_name}()
	{
		LOGV("${current_class.class_name}::~${current_class.class_name} invoked");
		CXXContext *ctx = CXXContext::sharedInstance();
		long address = (long) &s${current_class.class_name};
		if (address != 0)
		{
			jobject proxiedComponent = ctx->findProxyComponent(address);
			if (proxiedComponent != 0)
			{
				JNIContext *jni = JNIContext::sharedInstance();
				ctx->deregisterProxyComponent(address);
			}
		}		
	}

#end if



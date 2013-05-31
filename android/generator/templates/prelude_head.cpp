#set $should_create_from_constructor = (not $current_class.is_enum) and (not $current_class.is_singleton)
#set $should_create_from_static_method = $current_class.is_singleton
#set $should_create_from_static_field = $current_class.is_enum
#set $static_field_name = "INSTANCE"
#set $static_field_signature = "L${current_class.resource_name};"
#set $static_method_name = "sharedInstance"
#set $static_method_signature = "()L${current_class.resource_name};"
#set $proxied_class_name = "${current_class.resource_name}"

#define LOG_TAG "${current_class.class_name}"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

#if $should_create_from_constructor
#for $constructor in $current_class.constructors
	${current_class.class_name}::${current_class.class_name}($constructor.constructor_param_signature)
	{
		LOGV("${current_class.class_name}::${current_class.class_name} invoked");
		
		CXXContext *ctx = CXXContext::sharedInstance();
		long address = (long) this;
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			JNIContext *jni = JNIContext::sharedInstance();
			jclass clazz = jni->getClassRef($proxied_class_name);
			proxiedComponent = jni->createNewObject(clazz, jni->getMethodID(clazz, "<init>", "${constructor.constructor_type_signature}") ${constructor.constructor_payload_signature});
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
#else if $should_create_from_static_field
	${current_class.class_name}::${static_method_name}()
	{
		LOGV("${current_class.class_name}::${static_method_name} invoked");
		CXXContext *ctx = CXXContext::sharedInstance();
		long address = (long) this;
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			proxiedComponent = jni->getStaticObjectRef(true, $proxied_class_name, $static_field_name, $static_field_signature);
			proxiedComponent = jni->localToGlobalRef(proxiedComponent);
			ctx->registerProxyComponent(address, proxiedComponent);
		}
	}
#else if $should_create_from_static_method
	${current_class.class_name}::${static_method_name}()
	{
		LOGV("${current_class.class_name}::${static_method_name} invoked");
		CXXContext *ctx = CXXContext::sharedInstance();
		long address = (long) this;
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			proxiedComponent = jni->getStaticObjectRef(false, $proxied_class_name, $static_method_name, $static_method_signature);
			proxiedComponent = jni->localToGlobalRef(proxiedComponent);
			ctx->registerProxyComponent(address, proxiedComponent);
		}
	}
#end if



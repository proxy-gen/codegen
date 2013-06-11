#set $is_abstract = $current_class.is_abstract
#if $is_abstract
	${current_class.class_name}::${current_class.class_name}()
	{
	}
#end if
#if (not $current_class.is_static_methods)
	${current_class.class_name}::${current_class.class_name}(const ${current_class.class_name}& cc)
	{
		LOGV("${current_class.class_name}::${current_class.class_name}(const ${current_class.class_name}& cc) invoked");

		CXXContext *ctx = CXXContext::sharedInstance();
		this->self = cc.self;
		long address = (long) this;
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			JNIContext *jni = JNIContext::sharedInstance();
			proxiedComponent = (jobject) this->self;
			ctx->registerProxyComponent(address, proxiedComponent);
		}
	}
	${current_class.class_name}::${current_class.class_name}(void * proxy)
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
			proxiedComponent = jni->localToGlobalRef((jobject) proxy);
			this->self = (void *) proxiedComponent;
			ctx->registerProxyComponent(address, proxiedComponent);
		}

	}
#end if
 
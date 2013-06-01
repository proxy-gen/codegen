/*
 * FacebookCXX.cpp
 *
 * Author: CXX CodeGenerator
 */

#include "FacebookCXX/FacebookCXX.hpp"
#include <map>

#include <android/log.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>


#define LOG_TAG "FacebookCXX"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace ZDK;






	FacebookSession::FacebookSession()
	{
		LOGV("FacebookSession::FacebookSession invoked");
		
		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();
		long address = (long) this;
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			jclass clazz = jni->getClassRef("com/facebook/Session");

				  		jobject marg0 = ctx->getAndroidContext();


			proxiedComponent = jni->createNewObject(clazz, jni->getMethodID(clazz, "<init>", "(Landroid/content/Context;)V") , marg0);
			proxiedComponent = jni->localToGlobalRef(proxiedComponent);
			ctx->registerProxyComponent(address, proxiedComponent);
		}

	}

	FacebookSession::~FacebookSession()
	{
		LOGV("FacebookSession::~FacebookSession invoked");
		CXXContext *ctx = CXXContext::sharedInstance();
		long address = (long) this;
		jobject proxiedComponent = ctx->findProxyComponent(address);
		if (proxiedComponent != 0)
		{
			JNIContext *jni = JNIContext::sharedInstance();
			ctx->deregisterProxyComponent(address);
		}		
	}










	bool FacebookSession::isOpened()
	{
		LOGV("FacebookSession::isOpened");

		const char *methodName = "isOpened";
		const char *methodSignature = "()Z";
		const char *className =  "com/facebook/Session";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;


		jboolean jret0  = jni->invokeBooleanMethod(javaObject, className, methodName, methodSignature );	



		bool cret = (bool) jret0 ;
		jni->popLocalFrame();
		return cret;

	}
	FacebookSession::FacebookSession(const FacebookSession& cc)
	{
		LOGV("FacebookSession::FacebookSession(const FacebookSession& cc) invoked");

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
	FacebookSession::FacebookSession(void * proxy)
	{
		LOGV("FacebookSession::FacebookSession invoked");
		
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
  
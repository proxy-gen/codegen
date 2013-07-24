/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//











// Generated Code 

#include <com_facebook_AuthorizationClient_BackgroundProcessingListener.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <FacebookCXXConverter.hpp>
// TODO: FIXME: add include package
// FIXME: remove after testing
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "com_facebook_AuthorizationClient_BackgroundProcessingListener"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace FacebookCXX;

// 
// 

static long static_obj;
static long static_address = (long) &static_obj;

// Default Instance Constructors
com_facebook_AuthorizationClient_BackgroundProcessingListener::com_facebook_AuthorizationClient_BackgroundProcessingListener(const com_facebook_AuthorizationClient_BackgroundProcessingListener& cc)
{
	LOGV("com_facebook_AuthorizationClient_BackgroundProcessingListener::com_facebook_AuthorizationClient_BackgroundProcessingListener(const com_facebook_AuthorizationClient_BackgroundProcessingListener& cc) enter");

	CXXContext *ctx = CXXContext::sharedInstance();
	long ccaddress = (long) &cc;
	LOGV("registerProxyComponent ccaddress %ld", ccaddress);
	jobject proxiedCCComponent = ctx->findProxyComponent(ccaddress);
	LOGV("registerProxyComponent proxiedCCComponent %ld", (long) proxiedCCComponent);
	long address = (long) this;
	LOGV("registerProxyComponent address %ld", address);
	jobject proxiedComponent = ctx->findProxyComponent(address);
	LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
	if (proxiedComponent == 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		proxiedComponent = proxiedCCComponent;
		LOGV("registerProxyComponent registering proxied component %ld using %d", proxiedComponent, address);
		ctx->registerProxyComponent(address, proxiedComponent);
	}

	LOGV("com_facebook_AuthorizationClient_BackgroundProcessingListener::com_facebook_AuthorizationClient_BackgroundProcessingListener(const com_facebook_AuthorizationClient_BackgroundProcessingListener& cc) exit");
}
com_facebook_AuthorizationClient_BackgroundProcessingListener::com_facebook_AuthorizationClient_BackgroundProcessingListener(void * proxy)
{
	LOGV("com_facebook_AuthorizationClient_BackgroundProcessingListener::com_facebook_AuthorizationClient_BackgroundProcessingListener(void * proxy) enter");

	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	LOGV("registerProxyComponent address %d", address);
	jobject proxiedComponent = ctx->findProxyComponent(address);
	LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
	if (proxiedComponent == 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		proxiedComponent = jni->localToGlobalRef((jobject) proxy);
		ctx->registerProxyComponent(address, proxiedComponent);
	}

	LOGV("com_facebook_AuthorizationClient_BackgroundProcessingListener::com_facebook_AuthorizationClient_BackgroundProcessingListener(void * proxy) exit");
}
// TODO: remove
// 
// 
// com_facebook_AuthorizationClient_BackgroundProcessingListener::com_facebook_AuthorizationClient_BackgroundProcessingListener()
// {
// 	LOGV("com_facebook_AuthorizationClient_BackgroundProcessingListener::com_facebook_AuthorizationClient_BackgroundProcessingListener() enter");	

// 	const char *methodName = "<init>";
// 	const char *methodSignature = "()V";
// 	const char *className = "com/facebook/AuthorizationClient$BackgroundProcessingListener";

// 	LOGV("com_facebook_AuthorizationClient_BackgroundProcessingListener className %d methodName %s methodSignature %s", className, methodName, methodSignature);

// 	CXXContext *ctx = CXXContext::sharedInstance();
// 	JNIContext *jni = JNIContext::sharedInstance();

// 	jni->pushLocalFrame();

// 	long cxxAddress = (long) this;
// 	LOGV("com_facebook_AuthorizationClient_BackgroundProcessingListener cxx address %d", cxxAddress);
// 	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
// 	LOGV("com_facebook_AuthorizationClient_BackgroundProcessingListener jni address %d", proxiedComponent);

// 	if (proxiedComponent == 0)
// 	{
// 		jclass clazz = jni->getClassRef(className);

// 		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, "<init>", methodSignature));
// 		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

// 		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
// 	}

// 	jni->popLocalFrame();

// 	LOGV("com_facebook_AuthorizationClient_BackgroundProcessingListener::com_facebook_AuthorizationClient_BackgroundProcessingListener() exit");	
// }
// 
// 
// Public Constructors
// Default Instance Destructor
com_facebook_AuthorizationClient_BackgroundProcessingListener::~com_facebook_AuthorizationClient_BackgroundProcessingListener()
{
	LOGV("com_facebook_AuthorizationClient_BackgroundProcessingListener::~com_facebook_AuthorizationClient_BackgroundProcessingListener() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("com_facebook_AuthorizationClient_BackgroundProcessingListener::~com_facebook_AuthorizationClient_BackgroundProcessingListener() exit");
}
// Functions
void com_facebook_AuthorizationClient_BackgroundProcessingListener::onBackgroundProcessingStarted()
{
	LOGV("void com_facebook_AuthorizationClient_BackgroundProcessingListener::onBackgroundProcessingStarted() enter");

	const char *methodName = "onBackgroundProcessingStarted";
	const char *methodSignature = "()V";
	const char *className = "com/facebook/AuthorizationClient$BackgroundProcessingListener";

	LOGV("com_facebook_AuthorizationClient_BackgroundProcessingListener className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_AuthorizationClient_BackgroundProcessingListener cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_AuthorizationClient_BackgroundProcessingListener jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	jni->popLocalFrame();

	LOGV("void com_facebook_AuthorizationClient_BackgroundProcessingListener::onBackgroundProcessingStarted() exit");

}
void com_facebook_AuthorizationClient_BackgroundProcessingListener::onBackgroundProcessingStopped()
{
	LOGV("void com_facebook_AuthorizationClient_BackgroundProcessingListener::onBackgroundProcessingStopped() enter");

	const char *methodName = "onBackgroundProcessingStopped";
	const char *methodSignature = "()V";
	const char *className = "com/facebook/AuthorizationClient$BackgroundProcessingListener";

	LOGV("com_facebook_AuthorizationClient_BackgroundProcessingListener className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_AuthorizationClient_BackgroundProcessingListener cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_AuthorizationClient_BackgroundProcessingListener jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	jni->popLocalFrame();

	LOGV("void com_facebook_AuthorizationClient_BackgroundProcessingListener::onBackgroundProcessingStopped() exit");

}

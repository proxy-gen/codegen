/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//











// Generated Code 

#include <android_webkit_SslErrorHandler.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>
// TODO: FIXME: add include package
// FIXME: remove after testing

#define LOG_TAG "android_webkit_SslErrorHandler"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace AndroidCXX;

// 
// 

static long static_obj;
static long static_address = (long) &static_obj;

android_webkit_SslErrorHandler::android_webkit_SslErrorHandler(const android_webkit_SslErrorHandler& cc)
{
	LOGV("android_webkit_SslErrorHandler::android_webkit_SslErrorHandler(const android_webkit_SslErrorHandler& cc) enter");

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

	LOGV("android_webkit_SslErrorHandler::android_webkit_SslErrorHandler(const android_webkit_SslErrorHandler& cc) exit");
}
android_webkit_SslErrorHandler::android_webkit_SslErrorHandler(Proxy proxy)
{
	LOGV("android_webkit_SslErrorHandler::android_webkit_SslErrorHandler(Proxy proxy) enter");

	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	LOGV("registerProxyComponent address %d", address);
	jobject proxiedComponent = ctx->findProxyComponent(address);
	LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
	if (proxiedComponent == 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		// ensure local ref
		jobject proxyref = jni->newLocalRef((jobject) proxy.address);
		proxiedComponent = jni->localToGlobalRef(proxyref);
		ctx->registerProxyComponent(address, proxiedComponent);
	}

	LOGV("android_webkit_SslErrorHandler::android_webkit_SslErrorHandler(Proxy proxy) exit");
}
Proxy android_webkit_SslErrorHandler::proxy() const
{	
	LOGV("android_webkit_SslErrorHandler::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_webkit_SslErrorHandler cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("android_webkit_SslErrorHandler jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("android_webkit_SslErrorHandler::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
android_webkit_SslErrorHandler::~android_webkit_SslErrorHandler()
{
	LOGV("android_webkit_SslErrorHandler::~android_webkit_SslErrorHandler() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("android_webkit_SslErrorHandler::~android_webkit_SslErrorHandler() exit");
}
// Functions
void android_webkit_SslErrorHandler::cancel()
{
	LOGV("void android_webkit_SslErrorHandler::cancel() enter");

	const char *methodName = "cancel";
	const char *methodSignature = "()V";
	const char *className = "android/webkit/SslErrorHandler";

	LOGV("android_webkit_SslErrorHandler className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_webkit_SslErrorHandler cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_webkit_SslErrorHandler jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	LOGV("void android_webkit_SslErrorHandler::cancel() exit");

}
void android_webkit_SslErrorHandler::proceed()
{
	LOGV("void android_webkit_SslErrorHandler::proceed() enter");

	const char *methodName = "proceed";
	const char *methodSignature = "()V";
	const char *className = "android/webkit/SslErrorHandler";

	LOGV("android_webkit_SslErrorHandler className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_webkit_SslErrorHandler cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_webkit_SslErrorHandler jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	LOGV("void android_webkit_SslErrorHandler::proceed() exit");

}

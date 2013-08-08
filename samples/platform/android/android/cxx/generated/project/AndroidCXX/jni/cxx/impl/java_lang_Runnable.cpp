/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//










// Generated Code 

#include <java_lang_Runnable.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "java_lang_Runnable"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace AndroidCXX;

// 
// 

static long static_obj;
static long static_address = (long) &static_obj;

java_lang_Runnable::java_lang_Runnable(const java_lang_Runnable& cc)
{
	LOGV("java_lang_Runnable::java_lang_Runnable(const java_lang_Runnable& cc) enter");

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

	LOGV("java_lang_Runnable::java_lang_Runnable(const java_lang_Runnable& cc) exit");
}
java_lang_Runnable::java_lang_Runnable(Proxy proxy)
{
	LOGV("java_lang_Runnable::java_lang_Runnable(Proxy proxy) enter");

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

	LOGV("java_lang_Runnable::java_lang_Runnable(Proxy proxy) exit");
}
Proxy java_lang_Runnable::proxy() const
{	
	LOGV("java_lang_Runnable::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_lang_Runnable cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("java_lang_Runnable jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("java_lang_Runnable::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
java_lang_Runnable::~java_lang_Runnable()
{
	LOGV("java_lang_Runnable::~java_lang_Runnable() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("java_lang_Runnable::~java_lang_Runnable() exit");
}
// Functions
void java_lang_Runnable::run()
{
	LOGV("void java_lang_Runnable::run() enter");

	const char *methodName = "run";
	const char *methodSignature = "()V";
	const char *className = "java/lang/Runnable";

	LOGV("java_lang_Runnable className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_lang_Runnable cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_lang_Runnable jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	LOGV("void java_lang_Runnable::run() exit");

}

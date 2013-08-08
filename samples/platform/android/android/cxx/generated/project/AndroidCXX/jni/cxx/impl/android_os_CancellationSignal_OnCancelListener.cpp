/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//










// Generated Code 

#include <android_os_CancellationSignal_OnCancelListener.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "android_os_CancellationSignal_OnCancelListener"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace AndroidCXX;

// 
// 

static long static_obj;
static long static_address = (long) &static_obj;

android_os_CancellationSignal_OnCancelListener::android_os_CancellationSignal_OnCancelListener(const android_os_CancellationSignal_OnCancelListener& cc)
{
	LOGV("android_os_CancellationSignal_OnCancelListener::android_os_CancellationSignal_OnCancelListener(const android_os_CancellationSignal_OnCancelListener& cc) enter");

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

	LOGV("android_os_CancellationSignal_OnCancelListener::android_os_CancellationSignal_OnCancelListener(const android_os_CancellationSignal_OnCancelListener& cc) exit");
}
android_os_CancellationSignal_OnCancelListener::android_os_CancellationSignal_OnCancelListener(Proxy proxy)
{
	LOGV("android_os_CancellationSignal_OnCancelListener::android_os_CancellationSignal_OnCancelListener(Proxy proxy) enter");

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

	LOGV("android_os_CancellationSignal_OnCancelListener::android_os_CancellationSignal_OnCancelListener(Proxy proxy) exit");
}
Proxy android_os_CancellationSignal_OnCancelListener::proxy() const
{	
	LOGV("android_os_CancellationSignal_OnCancelListener::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_os_CancellationSignal_OnCancelListener cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("android_os_CancellationSignal_OnCancelListener jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("android_os_CancellationSignal_OnCancelListener::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
android_os_CancellationSignal_OnCancelListener::~android_os_CancellationSignal_OnCancelListener()
{
	LOGV("android_os_CancellationSignal_OnCancelListener::~android_os_CancellationSignal_OnCancelListener() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("android_os_CancellationSignal_OnCancelListener::~android_os_CancellationSignal_OnCancelListener() exit");
}
// Functions
void android_os_CancellationSignal_OnCancelListener::onCancel()
{
	LOGV("void android_os_CancellationSignal_OnCancelListener::onCancel() enter");

	const char *methodName = "onCancel";
	const char *methodSignature = "()V";
	const char *className = "android/os/CancellationSignal$OnCancelListener";

	LOGV("android_os_CancellationSignal_OnCancelListener className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_os_CancellationSignal_OnCancelListener cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_os_CancellationSignal_OnCancelListener jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	LOGV("void android_os_CancellationSignal_OnCancelListener::onCancel() exit");

}

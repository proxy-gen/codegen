/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//











// Generated Code 

#include <android_view_ViewTreeObserver_OnWindowAttachListener.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "android_view_ViewTreeObserver_OnWindowAttachListener"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace AndroidCXX;

// 
// 

static long static_obj;
static long static_address = (long) &static_obj;

android_view_ViewTreeObserver_OnWindowAttachListener::android_view_ViewTreeObserver_OnWindowAttachListener(const android_view_ViewTreeObserver_OnWindowAttachListener& cc)
{
	LOGV("android_view_ViewTreeObserver_OnWindowAttachListener::android_view_ViewTreeObserver_OnWindowAttachListener(const android_view_ViewTreeObserver_OnWindowAttachListener& cc) enter");

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

	LOGV("android_view_ViewTreeObserver_OnWindowAttachListener::android_view_ViewTreeObserver_OnWindowAttachListener(const android_view_ViewTreeObserver_OnWindowAttachListener& cc) exit");
}
android_view_ViewTreeObserver_OnWindowAttachListener::android_view_ViewTreeObserver_OnWindowAttachListener(Proxy proxy)
{
	LOGV("android_view_ViewTreeObserver_OnWindowAttachListener::android_view_ViewTreeObserver_OnWindowAttachListener(Proxy proxy) enter");

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

	LOGV("android_view_ViewTreeObserver_OnWindowAttachListener::android_view_ViewTreeObserver_OnWindowAttachListener(Proxy proxy) exit");
}
Proxy android_view_ViewTreeObserver_OnWindowAttachListener::proxy() const
{	
	LOGV("android_view_ViewTreeObserver_OnWindowAttachListener::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewTreeObserver_OnWindowAttachListener cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewTreeObserver_OnWindowAttachListener jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("android_view_ViewTreeObserver_OnWindowAttachListener::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
android_view_ViewTreeObserver_OnWindowAttachListener::~android_view_ViewTreeObserver_OnWindowAttachListener()
{
	LOGV("android_view_ViewTreeObserver_OnWindowAttachListener::~android_view_ViewTreeObserver_OnWindowAttachListener() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("android_view_ViewTreeObserver_OnWindowAttachListener::~android_view_ViewTreeObserver_OnWindowAttachListener() exit");
}
// Functions
void android_view_ViewTreeObserver_OnWindowAttachListener::onWindowAttached()
{
	LOGV("void android_view_ViewTreeObserver_OnWindowAttachListener::onWindowAttached() enter");

	const char *methodName = "onWindowAttached";
	const char *methodSignature = "()V";
	const char *className = "android/view/ViewTreeObserver$OnWindowAttachListener";

	LOGV("android_view_ViewTreeObserver_OnWindowAttachListener className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewTreeObserver_OnWindowAttachListener cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewTreeObserver_OnWindowAttachListener jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	LOGV("void android_view_ViewTreeObserver_OnWindowAttachListener::onWindowAttached() exit");

}
void android_view_ViewTreeObserver_OnWindowAttachListener::onWindowDetached()
{
	LOGV("void android_view_ViewTreeObserver_OnWindowAttachListener::onWindowDetached() enter");

	const char *methodName = "onWindowDetached";
	const char *methodSignature = "()V";
	const char *className = "android/view/ViewTreeObserver$OnWindowAttachListener";

	LOGV("android_view_ViewTreeObserver_OnWindowAttachListener className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewTreeObserver_OnWindowAttachListener cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewTreeObserver_OnWindowAttachListener jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	LOGV("void android_view_ViewTreeObserver_OnWindowAttachListener::onWindowDetached() exit");

}

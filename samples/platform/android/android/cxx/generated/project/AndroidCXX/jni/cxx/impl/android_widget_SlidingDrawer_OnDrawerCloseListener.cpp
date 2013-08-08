/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//










// Generated Code 

#include <android_widget_SlidingDrawer_OnDrawerCloseListener.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "android_widget_SlidingDrawer_OnDrawerCloseListener"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace AndroidCXX;

// 
// 

static long static_obj;
static long static_address = (long) &static_obj;

android_widget_SlidingDrawer_OnDrawerCloseListener::android_widget_SlidingDrawer_OnDrawerCloseListener(const android_widget_SlidingDrawer_OnDrawerCloseListener& cc)
{
	LOGV("android_widget_SlidingDrawer_OnDrawerCloseListener::android_widget_SlidingDrawer_OnDrawerCloseListener(const android_widget_SlidingDrawer_OnDrawerCloseListener& cc) enter");

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

	LOGV("android_widget_SlidingDrawer_OnDrawerCloseListener::android_widget_SlidingDrawer_OnDrawerCloseListener(const android_widget_SlidingDrawer_OnDrawerCloseListener& cc) exit");
}
android_widget_SlidingDrawer_OnDrawerCloseListener::android_widget_SlidingDrawer_OnDrawerCloseListener(Proxy proxy)
{
	LOGV("android_widget_SlidingDrawer_OnDrawerCloseListener::android_widget_SlidingDrawer_OnDrawerCloseListener(Proxy proxy) enter");

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

	LOGV("android_widget_SlidingDrawer_OnDrawerCloseListener::android_widget_SlidingDrawer_OnDrawerCloseListener(Proxy proxy) exit");
}
Proxy android_widget_SlidingDrawer_OnDrawerCloseListener::proxy() const
{	
	LOGV("android_widget_SlidingDrawer_OnDrawerCloseListener::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_SlidingDrawer_OnDrawerCloseListener cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_SlidingDrawer_OnDrawerCloseListener jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("android_widget_SlidingDrawer_OnDrawerCloseListener::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
android_widget_SlidingDrawer_OnDrawerCloseListener::~android_widget_SlidingDrawer_OnDrawerCloseListener()
{
	LOGV("android_widget_SlidingDrawer_OnDrawerCloseListener::~android_widget_SlidingDrawer_OnDrawerCloseListener() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("android_widget_SlidingDrawer_OnDrawerCloseListener::~android_widget_SlidingDrawer_OnDrawerCloseListener() exit");
}
// Functions
void android_widget_SlidingDrawer_OnDrawerCloseListener::onDrawerClosed()
{
	LOGV("void android_widget_SlidingDrawer_OnDrawerCloseListener::onDrawerClosed() enter");

	const char *methodName = "onDrawerClosed";
	const char *methodSignature = "()V";
	const char *className = "android/widget/SlidingDrawer$OnDrawerCloseListener";

	LOGV("android_widget_SlidingDrawer_OnDrawerCloseListener className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_SlidingDrawer_OnDrawerCloseListener cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_SlidingDrawer_OnDrawerCloseListener jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	LOGV("void android_widget_SlidingDrawer_OnDrawerCloseListener::onDrawerClosed() exit");

}

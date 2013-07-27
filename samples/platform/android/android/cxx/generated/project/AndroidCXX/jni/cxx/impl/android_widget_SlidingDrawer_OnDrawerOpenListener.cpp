/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//










// Generated Code 

#include <android_widget_SlidingDrawer_OnDrawerOpenListener.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>
// TODO: FIXME: add include package
// FIXME: remove after testing

#define LOG_TAG "android_widget_SlidingDrawer_OnDrawerOpenListener"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace AndroidCXX;

// 
// 

static long static_obj;
static long static_address = (long) &static_obj;

android_widget_SlidingDrawer_OnDrawerOpenListener::android_widget_SlidingDrawer_OnDrawerOpenListener(const android_widget_SlidingDrawer_OnDrawerOpenListener& cc)
{
	LOGV("android_widget_SlidingDrawer_OnDrawerOpenListener::android_widget_SlidingDrawer_OnDrawerOpenListener(const android_widget_SlidingDrawer_OnDrawerOpenListener& cc) enter");

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

	LOGV("android_widget_SlidingDrawer_OnDrawerOpenListener::android_widget_SlidingDrawer_OnDrawerOpenListener(const android_widget_SlidingDrawer_OnDrawerOpenListener& cc) exit");
}
android_widget_SlidingDrawer_OnDrawerOpenListener::android_widget_SlidingDrawer_OnDrawerOpenListener(Proxy proxy)
{
	LOGV("android_widget_SlidingDrawer_OnDrawerOpenListener::android_widget_SlidingDrawer_OnDrawerOpenListener(Proxy proxy) enter");

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

	LOGV("android_widget_SlidingDrawer_OnDrawerOpenListener::android_widget_SlidingDrawer_OnDrawerOpenListener(Proxy proxy) exit");
}
Proxy android_widget_SlidingDrawer_OnDrawerOpenListener::proxy() const
{	
	LOGV("android_widget_SlidingDrawer_OnDrawerOpenListener::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_SlidingDrawer_OnDrawerOpenListener cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_SlidingDrawer_OnDrawerOpenListener jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("android_widget_SlidingDrawer_OnDrawerOpenListener::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
android_widget_SlidingDrawer_OnDrawerOpenListener::~android_widget_SlidingDrawer_OnDrawerOpenListener()
{
	LOGV("android_widget_SlidingDrawer_OnDrawerOpenListener::~android_widget_SlidingDrawer_OnDrawerOpenListener() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("android_widget_SlidingDrawer_OnDrawerOpenListener::~android_widget_SlidingDrawer_OnDrawerOpenListener() exit");
}
// Functions
void android_widget_SlidingDrawer_OnDrawerOpenListener::onDrawerOpened()
{
	LOGV("void android_widget_SlidingDrawer_OnDrawerOpenListener::onDrawerOpened() enter");

	const char *methodName = "onDrawerOpened";
	const char *methodSignature = "()V";
	const char *className = "android/widget/SlidingDrawer$OnDrawerOpenListener";

	LOGV("android_widget_SlidingDrawer_OnDrawerOpenListener className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_SlidingDrawer_OnDrawerOpenListener cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_SlidingDrawer_OnDrawerOpenListener jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	LOGV("void android_widget_SlidingDrawer_OnDrawerOpenListener::onDrawerOpened() exit");

}

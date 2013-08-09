/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//










// Generated Code 

#include <android_support_v4_app_FragmentManager_OnBackStackChangedListener.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>
// TODO: FIXME: add include package
// FIXME: remove after testing

#define LOG_TAG "android_support_v4_app_FragmentManager_OnBackStackChangedListener"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace AndroidCXX;

// 
// 

static long static_obj;
static long static_address = (long) &static_obj;

android_support_v4_app_FragmentManager_OnBackStackChangedListener::android_support_v4_app_FragmentManager_OnBackStackChangedListener(const android_support_v4_app_FragmentManager_OnBackStackChangedListener& cc)
{
	LOGV("android_support_v4_app_FragmentManager_OnBackStackChangedListener::android_support_v4_app_FragmentManager_OnBackStackChangedListener(const android_support_v4_app_FragmentManager_OnBackStackChangedListener& cc) enter");

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

	LOGV("android_support_v4_app_FragmentManager_OnBackStackChangedListener::android_support_v4_app_FragmentManager_OnBackStackChangedListener(const android_support_v4_app_FragmentManager_OnBackStackChangedListener& cc) exit");
}
android_support_v4_app_FragmentManager_OnBackStackChangedListener::android_support_v4_app_FragmentManager_OnBackStackChangedListener(Proxy proxy)
{
	LOGV("android_support_v4_app_FragmentManager_OnBackStackChangedListener::android_support_v4_app_FragmentManager_OnBackStackChangedListener(Proxy proxy) enter");

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

	LOGV("android_support_v4_app_FragmentManager_OnBackStackChangedListener::android_support_v4_app_FragmentManager_OnBackStackChangedListener(Proxy proxy) exit");
}
Proxy android_support_v4_app_FragmentManager_OnBackStackChangedListener::proxy() const
{	
	LOGV("android_support_v4_app_FragmentManager_OnBackStackChangedListener::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_support_v4_app_FragmentManager_OnBackStackChangedListener cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("android_support_v4_app_FragmentManager_OnBackStackChangedListener jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("android_support_v4_app_FragmentManager_OnBackStackChangedListener::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
android_support_v4_app_FragmentManager_OnBackStackChangedListener::~android_support_v4_app_FragmentManager_OnBackStackChangedListener()
{
	LOGV("android_support_v4_app_FragmentManager_OnBackStackChangedListener::~android_support_v4_app_FragmentManager_OnBackStackChangedListener() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("android_support_v4_app_FragmentManager_OnBackStackChangedListener::~android_support_v4_app_FragmentManager_OnBackStackChangedListener() exit");
}
// Functions
void android_support_v4_app_FragmentManager_OnBackStackChangedListener::onBackStackChanged()
{
	LOGV("void android_support_v4_app_FragmentManager_OnBackStackChangedListener::onBackStackChanged() enter");

	const char *methodName = "onBackStackChanged";
	const char *methodSignature = "()V";
	const char *className = "android/support/v4/app/FragmentManager$OnBackStackChangedListener";

	LOGV("android_support_v4_app_FragmentManager_OnBackStackChangedListener className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_support_v4_app_FragmentManager_OnBackStackChangedListener cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_support_v4_app_FragmentManager_OnBackStackChangedListener jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	LOGV("void android_support_v4_app_FragmentManager_OnBackStackChangedListener::onBackStackChanged() exit");

}
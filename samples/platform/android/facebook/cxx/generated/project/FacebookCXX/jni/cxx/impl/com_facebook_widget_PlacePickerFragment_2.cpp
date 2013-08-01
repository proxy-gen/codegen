/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//










// Generated Code 

#include <com_facebook_widget_PlacePickerFragment_2.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <FacebookCXXConverter.hpp>
// TODO: FIXME: add include package
// FIXME: remove after testing
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "com_facebook_widget_PlacePickerFragment_2"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace FacebookCXX;

// 
// 

static long static_obj;
static long static_address = (long) &static_obj;

com_facebook_widget_PlacePickerFragment_2::com_facebook_widget_PlacePickerFragment_2(const com_facebook_widget_PlacePickerFragment_2& cc)
{
	LOGV("com_facebook_widget_PlacePickerFragment_2::com_facebook_widget_PlacePickerFragment_2(const com_facebook_widget_PlacePickerFragment_2& cc) enter");

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

	LOGV("com_facebook_widget_PlacePickerFragment_2::com_facebook_widget_PlacePickerFragment_2(const com_facebook_widget_PlacePickerFragment_2& cc) exit");
}
com_facebook_widget_PlacePickerFragment_2::com_facebook_widget_PlacePickerFragment_2(Proxy proxy)
{
	LOGV("com_facebook_widget_PlacePickerFragment_2::com_facebook_widget_PlacePickerFragment_2(Proxy proxy) enter");

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

	LOGV("com_facebook_widget_PlacePickerFragment_2::com_facebook_widget_PlacePickerFragment_2(Proxy proxy) exit");
}
Proxy com_facebook_widget_PlacePickerFragment_2::proxy() const
{	
	LOGV("com_facebook_widget_PlacePickerFragment_2::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_PlacePickerFragment_2 cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_PlacePickerFragment_2 jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("com_facebook_widget_PlacePickerFragment_2::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
com_facebook_widget_PlacePickerFragment_2::~com_facebook_widget_PlacePickerFragment_2()
{
	LOGV("com_facebook_widget_PlacePickerFragment_2::~com_facebook_widget_PlacePickerFragment_2() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("com_facebook_widget_PlacePickerFragment_2::~com_facebook_widget_PlacePickerFragment_2() exit");
}
// Functions
void com_facebook_widget_PlacePickerFragment_2::run()
{
	LOGV("void com_facebook_widget_PlacePickerFragment_2::run() enter");

	const char *methodName = "run";
	const char *methodSignature = "()V";
	const char *className = "com/facebook/widget/PlacePickerFragment$2";

	LOGV("com_facebook_widget_PlacePickerFragment_2 className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_PlacePickerFragment_2 cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_PlacePickerFragment_2 jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	LOGV("void com_facebook_widget_PlacePickerFragment_2::run() exit");

}

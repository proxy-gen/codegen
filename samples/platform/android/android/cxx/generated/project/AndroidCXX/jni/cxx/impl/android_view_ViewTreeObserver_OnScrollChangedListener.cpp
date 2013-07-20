/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//




// Generated Code 

#include <android_view_ViewTreeObserver_OnScrollChangedListener.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>

#define LOG_TAG "android_view_ViewTreeObserver_OnScrollChangedListener"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace AndroidCXX;

static long static_obj;
static long static_address = (long) &static_obj;

void android_view_ViewTreeObserver_OnScrollChangedListener::onScrollChanged()
{
	const char *methodName = "onScrollChanged";
	const char *methodSignature = "()V";
	const char *className = "android_view_ViewTreeObserver_OnScrollChangedListener";

	LOGV("android_view_ViewTreeObserver_OnScrollChangedListener className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewTreeObserver_OnScrollChangedListener cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewTreeObserver_OnScrollChangedListener jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	jni->popLocalFrame();

}

/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//





// Generated Code 

#include <android_webkit_WebChromeClient_CustomViewCallback.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>

#define LOG_TAG "android_webkit_WebChromeClient_CustomViewCallback"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace AndroidCXX;

static long static_obj;
static long static_address = (long) &static_obj;

// Proxy Converter Template
template <class T>
void convert_proxy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

template <class T>
void convert_proxy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx_value = 0; // TODO: add constructor (long) new T((void *)java_value);
	}
}

// Proxy Converter Types

// Functions
void android_webkit_WebChromeClient_CustomViewCallback::onCustomViewHidden()
{
	const char *methodName = "onCustomViewHidden";
	const char *methodSignature = "()V";
	const char *className = "android_webkit_WebChromeClient_CustomViewCallback";

	LOGV("android_webkit_WebChromeClient_CustomViewCallback className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_webkit_WebChromeClient_CustomViewCallback cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_webkit_WebChromeClient_CustomViewCallback jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	jni->popLocalFrame();

}

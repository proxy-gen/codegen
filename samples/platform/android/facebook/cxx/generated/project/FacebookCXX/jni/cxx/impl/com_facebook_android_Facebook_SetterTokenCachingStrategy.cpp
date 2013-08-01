/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
 		 










// Generated Code 

#include <com_facebook_android_Facebook_SetterTokenCachingStrategy.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <FacebookCXXConverter.hpp>
// TODO: FIXME: add include package
// FIXME: remove after testing
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "com_facebook_android_Facebook_SetterTokenCachingStrategy"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace FacebookCXX;

// 
// 
// 
// 
// 
// 
// using namespace AndroidCXX;
// 
// 
// 
// 
// 
// 

static long static_obj;
static long static_address = (long) &static_obj;

com_facebook_android_Facebook_SetterTokenCachingStrategy::com_facebook_android_Facebook_SetterTokenCachingStrategy(const com_facebook_android_Facebook_SetterTokenCachingStrategy& cc)
{
	LOGV("com_facebook_android_Facebook_SetterTokenCachingStrategy::com_facebook_android_Facebook_SetterTokenCachingStrategy(const com_facebook_android_Facebook_SetterTokenCachingStrategy& cc) enter");

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

	LOGV("com_facebook_android_Facebook_SetterTokenCachingStrategy::com_facebook_android_Facebook_SetterTokenCachingStrategy(const com_facebook_android_Facebook_SetterTokenCachingStrategy& cc) exit");
}
com_facebook_android_Facebook_SetterTokenCachingStrategy::com_facebook_android_Facebook_SetterTokenCachingStrategy(Proxy proxy)
{
	LOGV("com_facebook_android_Facebook_SetterTokenCachingStrategy::com_facebook_android_Facebook_SetterTokenCachingStrategy(Proxy proxy) enter");

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

	LOGV("com_facebook_android_Facebook_SetterTokenCachingStrategy::com_facebook_android_Facebook_SetterTokenCachingStrategy(Proxy proxy) exit");
}
Proxy com_facebook_android_Facebook_SetterTokenCachingStrategy::proxy() const
{	
	LOGV("com_facebook_android_Facebook_SetterTokenCachingStrategy::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_android_Facebook_SetterTokenCachingStrategy cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_android_Facebook_SetterTokenCachingStrategy jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("com_facebook_android_Facebook_SetterTokenCachingStrategy::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
com_facebook_android_Facebook_SetterTokenCachingStrategy::~com_facebook_android_Facebook_SetterTokenCachingStrategy()
{
	LOGV("com_facebook_android_Facebook_SetterTokenCachingStrategy::~com_facebook_android_Facebook_SetterTokenCachingStrategy() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("com_facebook_android_Facebook_SetterTokenCachingStrategy::~com_facebook_android_Facebook_SetterTokenCachingStrategy() exit");
}
// Functions
void com_facebook_android_Facebook_SetterTokenCachingStrategy::clear()
{
	LOGV("void com_facebook_android_Facebook_SetterTokenCachingStrategy::clear() enter");

	const char *methodName = "clear";
	const char *methodSignature = "()V";
	const char *className = "com/facebook/android/Facebook$SetterTokenCachingStrategy";

	LOGV("com_facebook_android_Facebook_SetterTokenCachingStrategy className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_android_Facebook_SetterTokenCachingStrategy cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_android_Facebook_SetterTokenCachingStrategy jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	LOGV("void com_facebook_android_Facebook_SetterTokenCachingStrategy::clear() exit");

}
AndroidCXX::android_os_Bundle com_facebook_android_Facebook_SetterTokenCachingStrategy::load()
{
	LOGV("AndroidCXX::android_os_Bundle com_facebook_android_Facebook_SetterTokenCachingStrategy::load() enter");

	const char *methodName = "load";
	const char *methodSignature = "()Landroid/os/Bundle;";
	const char *className = "com/facebook/android/Facebook$SetterTokenCachingStrategy";

	LOGV("com_facebook_android_Facebook_SetterTokenCachingStrategy className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_android_Facebook_SetterTokenCachingStrategy cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_android_Facebook_SetterTokenCachingStrategy jni address %d", javaObject);


	jobject jni_result = (jobject) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni_java_lang_Object_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("android.os.Bundle");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_os_Bundle(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_os_Bundle result((AndroidCXX::android_os_Bundle) *((AndroidCXX::android_os_Bundle *) cxx_value));
	delete ((AndroidCXX::android_os_Bundle *) cxx_value);
		
	LOGV("AndroidCXX::android_os_Bundle com_facebook_android_Facebook_SetterTokenCachingStrategy::load() exit");

	return result;
}
void com_facebook_android_Facebook_SetterTokenCachingStrategy::save(AndroidCXX::android_os_Bundle const& arg0)
{
	LOGV("void com_facebook_android_Facebook_SetterTokenCachingStrategy::save(AndroidCXX::android_os_Bundle const& arg0) enter");

	const char *methodName = "save";
	const char *methodSignature = "(Landroid/os/Bundle;)V";
	const char *className = "com/facebook/android/Facebook$SetterTokenCachingStrategy";

	LOGV("com_facebook_android_Facebook_SetterTokenCachingStrategy className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_android_Facebook_SetterTokenCachingStrategy cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_android_Facebook_SetterTokenCachingStrategy jni address %d", javaObject);

	jobject jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("android.os.Bundle");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_os_Bundle(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void com_facebook_android_Facebook_SetterTokenCachingStrategy::save(AndroidCXX::android_os_Bundle const& arg0) exit");

}

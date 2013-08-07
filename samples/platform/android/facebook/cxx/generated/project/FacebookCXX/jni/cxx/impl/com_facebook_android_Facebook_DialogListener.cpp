/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
 		 











// Generated Code 

#include <com_facebook_android_Facebook_DialogListener.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <CXXConverter.hpp>
#include <FacebookCXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "com_facebook_android_Facebook_DialogListener"
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
// 
// 
// 
// 
// 
// 

static long static_obj;
static long static_address = (long) &static_obj;

com_facebook_android_Facebook_DialogListener::com_facebook_android_Facebook_DialogListener(const com_facebook_android_Facebook_DialogListener& cc)
{
	LOGV("com_facebook_android_Facebook_DialogListener::com_facebook_android_Facebook_DialogListener(const com_facebook_android_Facebook_DialogListener& cc) enter");

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

	LOGV("com_facebook_android_Facebook_DialogListener::com_facebook_android_Facebook_DialogListener(const com_facebook_android_Facebook_DialogListener& cc) exit");
}
com_facebook_android_Facebook_DialogListener::com_facebook_android_Facebook_DialogListener(Proxy proxy)
{
	LOGV("com_facebook_android_Facebook_DialogListener::com_facebook_android_Facebook_DialogListener(Proxy proxy) enter");

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

	LOGV("com_facebook_android_Facebook_DialogListener::com_facebook_android_Facebook_DialogListener(Proxy proxy) exit");
}
Proxy com_facebook_android_Facebook_DialogListener::proxy() const
{	
	LOGV("com_facebook_android_Facebook_DialogListener::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_android_Facebook_DialogListener cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_android_Facebook_DialogListener jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("com_facebook_android_Facebook_DialogListener::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
com_facebook_android_Facebook_DialogListener::~com_facebook_android_Facebook_DialogListener()
{
	LOGV("com_facebook_android_Facebook_DialogListener::~com_facebook_android_Facebook_DialogListener() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("com_facebook_android_Facebook_DialogListener::~com_facebook_android_Facebook_DialogListener() exit");
}
// Functions
void com_facebook_android_Facebook_DialogListener::onComplete(AndroidCXX::android_os_Bundle const& arg0)
{
	LOGV("void com_facebook_android_Facebook_DialogListener::onComplete(AndroidCXX::android_os_Bundle const& arg0) enter");

	const char *methodName = "onComplete";
	const char *methodSignature = "(Landroid/os/Bundle;)V";
	const char *className = "com/facebook/android/Facebook$DialogListener";

	LOGV("com_facebook_android_Facebook_DialogListener className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_android_Facebook_DialogListener cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_android_Facebook_DialogListener jni address %d", javaObject);

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
		
	LOGV("void com_facebook_android_Facebook_DialogListener::onComplete(AndroidCXX::android_os_Bundle const& arg0) exit");

}
void com_facebook_android_Facebook_DialogListener::onCancel()
{
	LOGV("void com_facebook_android_Facebook_DialogListener::onCancel() enter");

	const char *methodName = "onCancel";
	const char *methodSignature = "()V";
	const char *className = "com/facebook/android/Facebook$DialogListener";

	LOGV("com_facebook_android_Facebook_DialogListener className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_android_Facebook_DialogListener cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_android_Facebook_DialogListener jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	LOGV("void com_facebook_android_Facebook_DialogListener::onCancel() exit");

}
void com_facebook_android_Facebook_DialogListener::onFacebookError(FacebookCXX::com_facebook_android_FacebookError const& arg0)
{
	LOGV("void com_facebook_android_Facebook_DialogListener::onFacebookError(FacebookCXX::com_facebook_android_FacebookError const& arg0) enter");

	const char *methodName = "onFacebookError";
	const char *methodSignature = "(Lcom/facebook/android/FacebookError;)V";
	const char *className = "com/facebook/android/Facebook$DialogListener";

	LOGV("com_facebook_android_Facebook_DialogListener className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_android_Facebook_DialogListener cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_android_Facebook_DialogListener jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("com.facebook.android.FacebookError");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_com_facebook_android_FacebookError(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void com_facebook_android_Facebook_DialogListener::onFacebookError(FacebookCXX::com_facebook_android_FacebookError const& arg0) exit");

}
void com_facebook_android_Facebook_DialogListener::onError(FacebookCXX::com_facebook_android_DialogError const& arg0)
{
	LOGV("void com_facebook_android_Facebook_DialogListener::onError(FacebookCXX::com_facebook_android_DialogError const& arg0) enter");

	const char *methodName = "onError";
	const char *methodSignature = "(Lcom/facebook/android/DialogError;)V";
	const char *className = "com/facebook/android/Facebook$DialogListener";

	LOGV("com_facebook_android_Facebook_DialogListener className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_android_Facebook_DialogListener cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_android_Facebook_DialogListener jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("com.facebook.android.DialogError");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_com_facebook_android_DialogError(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void com_facebook_android_Facebook_DialogListener::onError(FacebookCXX::com_facebook_android_DialogError const& arg0) exit");

}

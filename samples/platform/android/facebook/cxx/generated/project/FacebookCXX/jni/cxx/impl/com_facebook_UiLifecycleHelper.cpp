/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
 		 


 		 
 		 












// Generated Code 

#include <com_facebook_UiLifecycleHelper.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <CXXConverter.hpp>
#include <FacebookCXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "com_facebook_UiLifecycleHelper"
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
// 
// 
// 
// 
// 
// 

static long static_obj;
static long static_address = (long) &static_obj;

com_facebook_UiLifecycleHelper::com_facebook_UiLifecycleHelper(const com_facebook_UiLifecycleHelper& cc)
{
	LOGV("com_facebook_UiLifecycleHelper::com_facebook_UiLifecycleHelper(const com_facebook_UiLifecycleHelper& cc) enter");

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

	LOGV("com_facebook_UiLifecycleHelper::com_facebook_UiLifecycleHelper(const com_facebook_UiLifecycleHelper& cc) exit");
}
com_facebook_UiLifecycleHelper::com_facebook_UiLifecycleHelper(Proxy proxy)
{
	LOGV("com_facebook_UiLifecycleHelper::com_facebook_UiLifecycleHelper(Proxy proxy) enter");

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

	LOGV("com_facebook_UiLifecycleHelper::com_facebook_UiLifecycleHelper(Proxy proxy) exit");
}
Proxy com_facebook_UiLifecycleHelper::proxy() const
{	
	LOGV("com_facebook_UiLifecycleHelper::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_UiLifecycleHelper cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_UiLifecycleHelper jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("com_facebook_UiLifecycleHelper::proxy() exit");	

	return proxy;
}
com_facebook_UiLifecycleHelper::com_facebook_UiLifecycleHelper(AndroidCXX::android_app_Activity const& arg0,FacebookCXX::com_facebook_Session_StatusCallback const& arg1)
{
	LOGV("com_facebook_UiLifecycleHelper::com_facebook_UiLifecycleHelper(AndroidCXX::android_app_Activity const& arg0,FacebookCXX::com_facebook_Session_StatusCallback const& arg1) enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "(Landroid/app/Activity;Lcom/facebook/Session$StatusCallback;)V";
	const char *className = "com/facebook/UiLifecycleHelper";

	LOGV("com_facebook_UiLifecycleHelper className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_UiLifecycleHelper cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_UiLifecycleHelper jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{

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
				cxx_type_hierarchy.type_name = std::string("android.app.Activity");
			}
			std::stack<long> converter_stack;
			converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
			convert_android_app_Activity(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

			// Convert to JNI
			jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
		}
		jobject jarg1;
		{
			long cxx_value = (long) & arg1;
			long java_value = 0;

			CXXTypeHierarchy cxx_type_hierarchy;
			std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
			
			cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
			{
				CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
				cxx_type_hierarchy_stack.pop();
				cxx_type_hierarchy.type_name = std::string("com.facebook.Session$StatusCallback");
			}
			std::stack<long> converter_stack;
			converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
			convert_com_facebook_Session_StatusCallback(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

			// Convert to JNI
			jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
		}
			
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, methodName, methodSignature),jarg0,jarg1);
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("com_facebook_UiLifecycleHelper::com_facebook_UiLifecycleHelper(AndroidCXX::android_app_Activity const& arg0,FacebookCXX::com_facebook_Session_StatusCallback const& arg1) exit");	
}
// Default Instance Destructor
com_facebook_UiLifecycleHelper::~com_facebook_UiLifecycleHelper()
{
	LOGV("com_facebook_UiLifecycleHelper::~com_facebook_UiLifecycleHelper() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("com_facebook_UiLifecycleHelper::~com_facebook_UiLifecycleHelper() exit");
}
// Functions
void com_facebook_UiLifecycleHelper::onCreate(AndroidCXX::android_os_Bundle const& arg0)
{
	LOGV("void com_facebook_UiLifecycleHelper::onCreate(AndroidCXX::android_os_Bundle const& arg0) enter");

	const char *methodName = "onCreate";
	const char *methodSignature = "(Landroid/os/Bundle;)V";
	const char *className = "com/facebook/UiLifecycleHelper";

	LOGV("com_facebook_UiLifecycleHelper className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_UiLifecycleHelper cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_UiLifecycleHelper jni address %d", javaObject);

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
		
	LOGV("void com_facebook_UiLifecycleHelper::onCreate(AndroidCXX::android_os_Bundle const& arg0) exit");

}
void com_facebook_UiLifecycleHelper::onResume()
{
	LOGV("void com_facebook_UiLifecycleHelper::onResume() enter");

	const char *methodName = "onResume";
	const char *methodSignature = "()V";
	const char *className = "com/facebook/UiLifecycleHelper";

	LOGV("com_facebook_UiLifecycleHelper className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_UiLifecycleHelper cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_UiLifecycleHelper jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	LOGV("void com_facebook_UiLifecycleHelper::onResume() exit");

}
void com_facebook_UiLifecycleHelper::onSaveInstanceState(AndroidCXX::android_os_Bundle const& arg0)
{
	LOGV("void com_facebook_UiLifecycleHelper::onSaveInstanceState(AndroidCXX::android_os_Bundle const& arg0) enter");

	const char *methodName = "onSaveInstanceState";
	const char *methodSignature = "(Landroid/os/Bundle;)V";
	const char *className = "com/facebook/UiLifecycleHelper";

	LOGV("com_facebook_UiLifecycleHelper className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_UiLifecycleHelper cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_UiLifecycleHelper jni address %d", javaObject);

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
		
	LOGV("void com_facebook_UiLifecycleHelper::onSaveInstanceState(AndroidCXX::android_os_Bundle const& arg0) exit");

}
void com_facebook_UiLifecycleHelper::onPause()
{
	LOGV("void com_facebook_UiLifecycleHelper::onPause() enter");

	const char *methodName = "onPause";
	const char *methodSignature = "()V";
	const char *className = "com/facebook/UiLifecycleHelper";

	LOGV("com_facebook_UiLifecycleHelper className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_UiLifecycleHelper cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_UiLifecycleHelper jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	LOGV("void com_facebook_UiLifecycleHelper::onPause() exit");

}
void com_facebook_UiLifecycleHelper::onDestroy()
{
	LOGV("void com_facebook_UiLifecycleHelper::onDestroy() enter");

	const char *methodName = "onDestroy";
	const char *methodSignature = "()V";
	const char *className = "com/facebook/UiLifecycleHelper";

	LOGV("com_facebook_UiLifecycleHelper className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_UiLifecycleHelper cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_UiLifecycleHelper jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	LOGV("void com_facebook_UiLifecycleHelper::onDestroy() exit");

}
void com_facebook_UiLifecycleHelper::onActivityResult(int const& arg0,int const& arg1,AndroidCXX::android_content_Intent const& arg2)
{
	LOGV("void com_facebook_UiLifecycleHelper::onActivityResult(int const& arg0,int const& arg1,AndroidCXX::android_content_Intent const& arg2) enter");

	const char *methodName = "onActivityResult";
	const char *methodSignature = "(IILandroid/content/Intent;)V";
	const char *className = "com/facebook/UiLifecycleHelper";

	LOGV("com_facebook_UiLifecycleHelper className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_UiLifecycleHelper cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_UiLifecycleHelper jni address %d", javaObject);

	jint jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("int");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_int(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_int_to_jni(java_value);
	}
	jint jarg1;
	{
		long cxx_value = (long) & arg1;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("int");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_int(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_int_to_jni(java_value);
	}
	jobject jarg2;
	{
		long cxx_value = (long) & arg2;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("android.content.Intent");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_content_Intent(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg2 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1,jarg2);
		
	LOGV("void com_facebook_UiLifecycleHelper::onActivityResult(int const& arg0,int const& arg1,AndroidCXX::android_content_Intent const& arg2) exit");

}

/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 








// Generated Code 

#include <android_content_SharedPreferences_OnSharedPreferenceChangeListener.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>
// TODO: FIXME: add include package
// FIXME: remove after testing

#define LOG_TAG "android_content_SharedPreferences_OnSharedPreferenceChangeListener"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace AndroidCXX;

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

android_content_SharedPreferences_OnSharedPreferenceChangeListener::android_content_SharedPreferences_OnSharedPreferenceChangeListener(const android_content_SharedPreferences_OnSharedPreferenceChangeListener& cc)
{
	LOGV("android_content_SharedPreferences_OnSharedPreferenceChangeListener::android_content_SharedPreferences_OnSharedPreferenceChangeListener(const android_content_SharedPreferences_OnSharedPreferenceChangeListener& cc) enter");

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

	LOGV("android_content_SharedPreferences_OnSharedPreferenceChangeListener::android_content_SharedPreferences_OnSharedPreferenceChangeListener(const android_content_SharedPreferences_OnSharedPreferenceChangeListener& cc) exit");
}
android_content_SharedPreferences_OnSharedPreferenceChangeListener::android_content_SharedPreferences_OnSharedPreferenceChangeListener(Proxy proxy)
{
	LOGV("android_content_SharedPreferences_OnSharedPreferenceChangeListener::android_content_SharedPreferences_OnSharedPreferenceChangeListener(Proxy proxy) enter");

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

	LOGV("android_content_SharedPreferences_OnSharedPreferenceChangeListener::android_content_SharedPreferences_OnSharedPreferenceChangeListener(Proxy proxy) exit");
}
Proxy android_content_SharedPreferences_OnSharedPreferenceChangeListener::proxy() const
{	
	LOGV("android_content_SharedPreferences_OnSharedPreferenceChangeListener::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_content_SharedPreferences_OnSharedPreferenceChangeListener cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_SharedPreferences_OnSharedPreferenceChangeListener jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("android_content_SharedPreferences_OnSharedPreferenceChangeListener::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
android_content_SharedPreferences_OnSharedPreferenceChangeListener::~android_content_SharedPreferences_OnSharedPreferenceChangeListener()
{
	LOGV("android_content_SharedPreferences_OnSharedPreferenceChangeListener::~android_content_SharedPreferences_OnSharedPreferenceChangeListener() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("android_content_SharedPreferences_OnSharedPreferenceChangeListener::~android_content_SharedPreferences_OnSharedPreferenceChangeListener() exit");
}
// Functions
void android_content_SharedPreferences_OnSharedPreferenceChangeListener::onSharedPreferenceChanged(AndroidCXX::android_content_SharedPreferences const& arg0,AndroidCXX::java_lang_String const& arg1)
{
	LOGV("void android_content_SharedPreferences_OnSharedPreferenceChangeListener::onSharedPreferenceChanged(AndroidCXX::android_content_SharedPreferences const& arg0,AndroidCXX::java_lang_String const& arg1) enter");

	const char *methodName = "onSharedPreferenceChanged";
	const char *methodSignature = "(Landroid/content/SharedPreferences;Ljava/lang/String;)V";
	const char *className = "android/content/SharedPreferences$OnSharedPreferenceChangeListener";

	LOGV("android_content_SharedPreferences_OnSharedPreferenceChangeListener className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_content_SharedPreferences_OnSharedPreferenceChangeListener cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_SharedPreferences_OnSharedPreferenceChangeListener jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.content.SharedPreferences");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_content_SharedPreferences(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}
	jstring jarg1;
	{
		long cxx_value = (long) & arg1;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.lang.String");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_lang_String(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_string_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1);
		
	LOGV("void android_content_SharedPreferences_OnSharedPreferenceChangeListener::onSharedPreferenceChanged(AndroidCXX::android_content_SharedPreferences const& arg0,AndroidCXX::java_lang_String const& arg1) exit");

}

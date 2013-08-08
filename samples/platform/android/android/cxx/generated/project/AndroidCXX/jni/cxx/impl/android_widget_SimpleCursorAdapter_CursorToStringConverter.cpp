/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	








// Generated Code 

#include <android_widget_SimpleCursorAdapter_CursorToStringConverter.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "android_widget_SimpleCursorAdapter_CursorToStringConverter"
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

android_widget_SimpleCursorAdapter_CursorToStringConverter::android_widget_SimpleCursorAdapter_CursorToStringConverter(const android_widget_SimpleCursorAdapter_CursorToStringConverter& cc)
{
	LOGV("android_widget_SimpleCursorAdapter_CursorToStringConverter::android_widget_SimpleCursorAdapter_CursorToStringConverter(const android_widget_SimpleCursorAdapter_CursorToStringConverter& cc) enter");

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

	LOGV("android_widget_SimpleCursorAdapter_CursorToStringConverter::android_widget_SimpleCursorAdapter_CursorToStringConverter(const android_widget_SimpleCursorAdapter_CursorToStringConverter& cc) exit");
}
android_widget_SimpleCursorAdapter_CursorToStringConverter::android_widget_SimpleCursorAdapter_CursorToStringConverter(Proxy proxy)
{
	LOGV("android_widget_SimpleCursorAdapter_CursorToStringConverter::android_widget_SimpleCursorAdapter_CursorToStringConverter(Proxy proxy) enter");

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

	LOGV("android_widget_SimpleCursorAdapter_CursorToStringConverter::android_widget_SimpleCursorAdapter_CursorToStringConverter(Proxy proxy) exit");
}
Proxy android_widget_SimpleCursorAdapter_CursorToStringConverter::proxy() const
{	
	LOGV("android_widget_SimpleCursorAdapter_CursorToStringConverter::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_SimpleCursorAdapter_CursorToStringConverter cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_SimpleCursorAdapter_CursorToStringConverter jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("android_widget_SimpleCursorAdapter_CursorToStringConverter::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
android_widget_SimpleCursorAdapter_CursorToStringConverter::~android_widget_SimpleCursorAdapter_CursorToStringConverter()
{
	LOGV("android_widget_SimpleCursorAdapter_CursorToStringConverter::~android_widget_SimpleCursorAdapter_CursorToStringConverter() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("android_widget_SimpleCursorAdapter_CursorToStringConverter::~android_widget_SimpleCursorAdapter_CursorToStringConverter() exit");
}
// Functions
AndroidCXX::java_lang_CharSequence android_widget_SimpleCursorAdapter_CursorToStringConverter::convertToString(AndroidCXX::android_database_Cursor const& arg0)
{
	LOGV("AndroidCXX::java_lang_CharSequence android_widget_SimpleCursorAdapter_CursorToStringConverter::convertToString(AndroidCXX::android_database_Cursor const& arg0) enter");

	const char *methodName = "convertToString";
	const char *methodSignature = "(Landroid/database/Cursor;)Ljava/lang/CharSequence;";
	const char *className = "android/widget/SimpleCursorAdapter$CursorToStringConverter";

	LOGV("android_widget_SimpleCursorAdapter_CursorToStringConverter className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_SimpleCursorAdapter_CursorToStringConverter cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_SimpleCursorAdapter_CursorToStringConverter jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.database.Cursor");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_database_Cursor(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jobject jni_result = (jobject) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature,jarg0);
	long cxx_value = (long) 0;
	long java_value = convert_jni_java_lang_Object_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.lang.CharSequence");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_lang_CharSequence(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::java_lang_CharSequence result((AndroidCXX::java_lang_CharSequence) *((AndroidCXX::java_lang_CharSequence *) cxx_value));
	delete ((AndroidCXX::java_lang_CharSequence *) cxx_value);
		
	LOGV("AndroidCXX::java_lang_CharSequence android_widget_SimpleCursorAdapter_CursorToStringConverter::convertToString(AndroidCXX::android_database_Cursor const& arg0) exit");

	return result;
}

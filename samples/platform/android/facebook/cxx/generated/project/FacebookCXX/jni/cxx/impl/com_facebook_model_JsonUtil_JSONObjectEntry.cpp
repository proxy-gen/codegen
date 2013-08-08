/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
	
 		 
	










// Generated Code 

#include <com_facebook_model_JsonUtil_JSONObjectEntry.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <CXXConverter.hpp>
#include <FacebookCXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "com_facebook_model_JsonUtil_JSONObjectEntry"
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

com_facebook_model_JsonUtil_JSONObjectEntry::com_facebook_model_JsonUtil_JSONObjectEntry(const com_facebook_model_JsonUtil_JSONObjectEntry& cc)
{
	LOGV("com_facebook_model_JsonUtil_JSONObjectEntry::com_facebook_model_JsonUtil_JSONObjectEntry(const com_facebook_model_JsonUtil_JSONObjectEntry& cc) enter");

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

	LOGV("com_facebook_model_JsonUtil_JSONObjectEntry::com_facebook_model_JsonUtil_JSONObjectEntry(const com_facebook_model_JsonUtil_JSONObjectEntry& cc) exit");
}
com_facebook_model_JsonUtil_JSONObjectEntry::com_facebook_model_JsonUtil_JSONObjectEntry(Proxy proxy)
{
	LOGV("com_facebook_model_JsonUtil_JSONObjectEntry::com_facebook_model_JsonUtil_JSONObjectEntry(Proxy proxy) enter");

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

	LOGV("com_facebook_model_JsonUtil_JSONObjectEntry::com_facebook_model_JsonUtil_JSONObjectEntry(Proxy proxy) exit");
}
Proxy com_facebook_model_JsonUtil_JSONObjectEntry::proxy() const
{	
	LOGV("com_facebook_model_JsonUtil_JSONObjectEntry::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_JsonUtil_JSONObjectEntry cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_JsonUtil_JSONObjectEntry jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("com_facebook_model_JsonUtil_JSONObjectEntry::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
com_facebook_model_JsonUtil_JSONObjectEntry::~com_facebook_model_JsonUtil_JSONObjectEntry()
{
	LOGV("com_facebook_model_JsonUtil_JSONObjectEntry::~com_facebook_model_JsonUtil_JSONObjectEntry() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("com_facebook_model_JsonUtil_JSONObjectEntry::~com_facebook_model_JsonUtil_JSONObjectEntry() exit");
}
// Functions
AndroidCXX::java_lang_Object com_facebook_model_JsonUtil_JSONObjectEntry::getValue()
{
	LOGV("AndroidCXX::java_lang_Object com_facebook_model_JsonUtil_JSONObjectEntry::getValue() enter");

	const char *methodName = "getValue";
	const char *methodSignature = "()Ljava/lang/Object;";
	const char *className = "com/facebook/model/JsonUtil$JSONObjectEntry";

	LOGV("com_facebook_model_JsonUtil_JSONObjectEntry className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_JsonUtil_JSONObjectEntry cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_JsonUtil_JSONObjectEntry jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("java.lang.Object");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_lang_Object(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::java_lang_Object result((AndroidCXX::java_lang_Object) *((AndroidCXX::java_lang_Object *) cxx_value));
	delete ((AndroidCXX::java_lang_Object *) cxx_value);
		
	LOGV("AndroidCXX::java_lang_Object com_facebook_model_JsonUtil_JSONObjectEntry::getValue() exit");

	return result;
}
AndroidCXX::java_lang_String com_facebook_model_JsonUtil_JSONObjectEntry::getKey()
{
	LOGV("AndroidCXX::java_lang_String com_facebook_model_JsonUtil_JSONObjectEntry::getKey() enter");

	const char *methodName = "getKey";
	const char *methodSignature = "()Ljava/lang/String;";
	const char *className = "com/facebook/model/JsonUtil$JSONObjectEntry";

	LOGV("com_facebook_model_JsonUtil_JSONObjectEntry className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_JsonUtil_JSONObjectEntry cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_JsonUtil_JSONObjectEntry jni address %d", javaObject);


	jstring jni_result = (jstring) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni_string_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.lang.String");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_lang_String(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::java_lang_String result((AndroidCXX::java_lang_String) *((AndroidCXX::java_lang_String *) cxx_value));
	delete ((AndroidCXX::java_lang_String *) cxx_value);
		
	LOGV("AndroidCXX::java_lang_String com_facebook_model_JsonUtil_JSONObjectEntry::getKey() exit");

	return result;
}
AndroidCXX::java_lang_Object com_facebook_model_JsonUtil_JSONObjectEntry::setValue(AndroidCXX::java_lang_Object const& arg0)
{
	LOGV("AndroidCXX::java_lang_Object com_facebook_model_JsonUtil_JSONObjectEntry::setValue(AndroidCXX::java_lang_Object const& arg0) enter");

	const char *methodName = "setValue";
	const char *methodSignature = "(Ljava/lang/Object;)Ljava/lang/Object;";
	const char *className = "com/facebook/model/JsonUtil$JSONObjectEntry";

	LOGV("com_facebook_model_JsonUtil_JSONObjectEntry className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_JsonUtil_JSONObjectEntry cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_JsonUtil_JSONObjectEntry jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("java.lang.Object");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_lang_Object(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
			cxx_type_hierarchy.type_name = std::string("java.lang.Object");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_lang_Object(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::java_lang_Object result((AndroidCXX::java_lang_Object) *((AndroidCXX::java_lang_Object *) cxx_value));
	delete ((AndroidCXX::java_lang_Object *) cxx_value);
		
	LOGV("AndroidCXX::java_lang_Object com_facebook_model_JsonUtil_JSONObjectEntry::setValue(AndroidCXX::java_lang_Object const& arg0) exit");

	return result;
}

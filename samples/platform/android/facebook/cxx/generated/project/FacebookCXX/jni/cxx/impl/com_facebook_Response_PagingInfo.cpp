/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
	









// Generated Code 

#include <com_facebook_Response_PagingInfo.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <FacebookCXXConverter.hpp>

#define LOG_TAG "com_facebook_Response_PagingInfo"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace FacebookCXX;

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


// Default Instance Constructors
com_facebook_Response_PagingInfo::com_facebook_Response_PagingInfo(const com_facebook_Response_PagingInfo& cc)
{
	LOGV("com_facebook_Response_PagingInfo::com_facebook_Response_PagingInfo(const com_facebook_Response_PagingInfo& cc) enter");

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

	LOGV("com_facebook_Response_PagingInfo::com_facebook_Response_PagingInfo(const com_facebook_Response_PagingInfo& cc) exit");
}
com_facebook_Response_PagingInfo::com_facebook_Response_PagingInfo(void * proxy)
{
	LOGV("com_facebook_Response_PagingInfo::com_facebook_Response_PagingInfo(void * proxy) enter");

	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	LOGV("registerProxyComponent address %d", address);
	jobject proxiedComponent = ctx->findProxyComponent(address);
	LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
	if (proxiedComponent == 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		proxiedComponent = jni->localToGlobalRef((jobject) proxy);
		ctx->registerProxyComponent(address, proxiedComponent);
	}

	LOGV("com_facebook_Response_PagingInfo::com_facebook_Response_PagingInfo(void * proxy) exit");
}
com_facebook_Response_PagingInfo::com_facebook_Response_PagingInfo()
{
	LOGV("com_facebook_Response_PagingInfo::com_facebook_Response_PagingInfo() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "com/facebook/Response$PagingInfo";

	LOGV("com_facebook_Response_PagingInfo className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_Response_PagingInfo cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_Response_PagingInfo jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, "<init>", methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("com_facebook_Response_PagingInfo::com_facebook_Response_PagingInfo() exit");	
}
// Public Constructors
// Default Instance Destructor
com_facebook_Response_PagingInfo::~com_facebook_Response_PagingInfo()
{
	LOGV("com_facebook_Response_PagingInfo::~com_facebook_Response_PagingInfo() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("com_facebook_Response_PagingInfo::~com_facebook_Response_PagingInfo() exit");
}
// Functions
FacebookCXX::java_lang_String com_facebook_Response_PagingInfo::getNext()
{
	LOGV("FacebookCXX::java_lang_String com_facebook_Response_PagingInfo::getNext() enter");

	const char *methodName = "getNext";
	const char *methodSignature = "()Ljava/lang/String;";
	const char *className = "com/facebook/Response$PagingInfo";

	LOGV("com_facebook_Response_PagingInfo className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_Response_PagingInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_Response_PagingInfo jni address %d", javaObject);


	FacebookCXX::java_lang_String result;
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
	result = (FacebookCXX::java_lang_String) (FacebookCXX::java_lang_String((FacebookCXX::java_lang_String *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("FacebookCXX::java_lang_String com_facebook_Response_PagingInfo::getNext() exit");

	return result;
}
FacebookCXX::java_lang_String com_facebook_Response_PagingInfo::getPrevious()
{
	LOGV("FacebookCXX::java_lang_String com_facebook_Response_PagingInfo::getPrevious() enter");

	const char *methodName = "getPrevious";
	const char *methodSignature = "()Ljava/lang/String;";
	const char *className = "com/facebook/Response$PagingInfo";

	LOGV("com_facebook_Response_PagingInfo className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_Response_PagingInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_Response_PagingInfo jni address %d", javaObject);


	FacebookCXX::java_lang_String result;
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
	result = (FacebookCXX::java_lang_String) (FacebookCXX::java_lang_String((FacebookCXX::java_lang_String *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("FacebookCXX::java_lang_String com_facebook_Response_PagingInfo::getPrevious() exit");

	return result;
}

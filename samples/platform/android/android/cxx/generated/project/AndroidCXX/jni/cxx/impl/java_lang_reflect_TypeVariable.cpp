/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
	










// Generated Code 

#include <java_lang_reflect_TypeVariable.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "java_lang_reflect_TypeVariable"
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

java_lang_reflect_TypeVariable::java_lang_reflect_TypeVariable(const java_lang_reflect_TypeVariable& cc)
{
	LOGV("java_lang_reflect_TypeVariable::java_lang_reflect_TypeVariable(const java_lang_reflect_TypeVariable& cc) enter");

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

	LOGV("java_lang_reflect_TypeVariable::java_lang_reflect_TypeVariable(const java_lang_reflect_TypeVariable& cc) exit");
}
java_lang_reflect_TypeVariable::java_lang_reflect_TypeVariable(Proxy proxy)
{
	LOGV("java_lang_reflect_TypeVariable::java_lang_reflect_TypeVariable(Proxy proxy) enter");

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

	LOGV("java_lang_reflect_TypeVariable::java_lang_reflect_TypeVariable(Proxy proxy) exit");
}
Proxy java_lang_reflect_TypeVariable::proxy() const
{	
	LOGV("java_lang_reflect_TypeVariable::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_lang_reflect_TypeVariable cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("java_lang_reflect_TypeVariable jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("java_lang_reflect_TypeVariable::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
java_lang_reflect_TypeVariable::~java_lang_reflect_TypeVariable()
{
	LOGV("java_lang_reflect_TypeVariable::~java_lang_reflect_TypeVariable() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("java_lang_reflect_TypeVariable::~java_lang_reflect_TypeVariable() exit");
}
// Functions
AndroidCXX::java_lang_String java_lang_reflect_TypeVariable::getName()
{
	LOGV("AndroidCXX::java_lang_String java_lang_reflect_TypeVariable::getName() enter");

	const char *methodName = "getName";
	const char *methodSignature = "()Ljava/lang/String;";
	const char *className = "java/lang/reflect/TypeVariable";

	LOGV("java_lang_reflect_TypeVariable className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_lang_reflect_TypeVariable cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_lang_reflect_TypeVariable jni address %d", javaObject);


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
		
	LOGV("AndroidCXX::java_lang_String java_lang_reflect_TypeVariable::getName() exit");

	return result;
}
std::vector<AndroidCXX::java_lang_reflect_Type > java_lang_reflect_TypeVariable::getBounds()
{
	LOGV("std::vector<AndroidCXX::java_lang_reflect_Type > java_lang_reflect_TypeVariable::getBounds() enter");

	const char *methodName = "getBounds";
	const char *methodSignature = "()[Ljava/lang/reflect/Type;";
	const char *className = "java/lang/reflect/TypeVariable";

	LOGV("java_lang_reflect_TypeVariable className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_lang_reflect_TypeVariable cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_lang_reflect_TypeVariable jni address %d", javaObject);


	jobjectArray jni_result = (jobjectArray) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni__object_array_type_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("_object_array_type");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.lang.reflect.Type");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_java_lang_reflect_Type);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert__object_array_type(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	std::vector<AndroidCXX::java_lang_reflect_Type > result = (std::vector<AndroidCXX::java_lang_reflect_Type >) *((std::vector<AndroidCXX::java_lang_reflect_Type > *) cxx_value);
	delete ((std::vector<AndroidCXX::java_lang_reflect_Type > *) cxx_value);
		
	LOGV("std::vector<AndroidCXX::java_lang_reflect_Type > java_lang_reflect_TypeVariable::getBounds() exit");

	return result;
}
AndroidCXX::java_lang_reflect_GenericDeclaration java_lang_reflect_TypeVariable::getGenericDeclaration()
{
	LOGV("AndroidCXX::java_lang_reflect_GenericDeclaration java_lang_reflect_TypeVariable::getGenericDeclaration() enter");

	const char *methodName = "getGenericDeclaration";
	const char *methodSignature = "()Ljava/lang/reflect/GenericDeclaration;";
	const char *className = "java/lang/reflect/TypeVariable";

	LOGV("java_lang_reflect_TypeVariable className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_lang_reflect_TypeVariable cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_lang_reflect_TypeVariable jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("java.lang.reflect.GenericDeclaration");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_lang_reflect_GenericDeclaration(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::java_lang_reflect_GenericDeclaration result((AndroidCXX::java_lang_reflect_GenericDeclaration) *((AndroidCXX::java_lang_reflect_GenericDeclaration *) cxx_value));
	delete ((AndroidCXX::java_lang_reflect_GenericDeclaration *) cxx_value);
		
	LOGV("AndroidCXX::java_lang_reflect_GenericDeclaration java_lang_reflect_TypeVariable::getGenericDeclaration() exit");

	return result;
}

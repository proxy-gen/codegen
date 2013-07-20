/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	



// Generated Code 

#include <java_net_DatagramSocketImplFactory.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>

#define LOG_TAG "java_net_DatagramSocketImplFactory"
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

template void convert_proxy<java_net_DatagramSocketImpl>(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

// Functions
java_net_DatagramSocketImpl *  java_net_DatagramSocketImplFactory::createDatagramSocketImpl()
{
	const char *methodName = "createDatagramSocketImpl";
	const char *methodSignature = "()Ljava/net/DatagramSocketImpl;";
	const char *className = "java_net_DatagramSocketImplFactory";

	LOGV("java_net_DatagramSocketImplFactory className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_net_DatagramSocketImplFactory cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_net_DatagramSocketImplFactory jni address %d", javaObject);


	java_net_DatagramSocketImpl *  result;
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
			cxx_type_hierarchy.type_name = std::string("java.net.DatagramSocketImpl");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_proxy<java_net_DatagramSocketImpl>(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (java_net_DatagramSocketImpl * ) (*((java_net_DatagramSocketImpl *  *) cxx_value));
		
	jni->popLocalFrame();

	return result;
}

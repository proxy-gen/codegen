/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	








// Generated Code 

#include <java_net_ContentHandlerFactory.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <JDKCXXConverter.hpp>
// TODO: FIXME: add include package
// FIXME: remove after testing

#define LOG_TAG "java_net_ContentHandlerFactory"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace JDKCXX;

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

java_net_ContentHandlerFactory::java_net_ContentHandlerFactory(const java_net_ContentHandlerFactory& cc)
{
	LOGV("java_net_ContentHandlerFactory::java_net_ContentHandlerFactory(const java_net_ContentHandlerFactory& cc) enter");

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

	LOGV("java_net_ContentHandlerFactory::java_net_ContentHandlerFactory(const java_net_ContentHandlerFactory& cc) exit");
}
java_net_ContentHandlerFactory::java_net_ContentHandlerFactory(Proxy proxy)
{
	LOGV("java_net_ContentHandlerFactory::java_net_ContentHandlerFactory(Proxy proxy) enter");

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

	LOGV("java_net_ContentHandlerFactory::java_net_ContentHandlerFactory(Proxy proxy) exit");
}
Proxy java_net_ContentHandlerFactory::proxy() const
{	
	LOGV("java_net_ContentHandlerFactory::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_net_ContentHandlerFactory cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("java_net_ContentHandlerFactory jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("java_net_ContentHandlerFactory::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
java_net_ContentHandlerFactory::~java_net_ContentHandlerFactory()
{
	LOGV("java_net_ContentHandlerFactory::~java_net_ContentHandlerFactory() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("java_net_ContentHandlerFactory::~java_net_ContentHandlerFactory() exit");
}
// Functions
JDKCXX::java_net_ContentHandler java_net_ContentHandlerFactory::createContentHandler(JDKCXX::java_lang_String const& arg0)
{
	LOGV("JDKCXX::java_net_ContentHandler java_net_ContentHandlerFactory::createContentHandler(JDKCXX::java_lang_String const& arg0) enter");

	const char *methodName = "createContentHandler";
	const char *methodSignature = "(Ljava/lang/String;)Ljava/net/ContentHandler;";
	const char *className = "java/net/ContentHandlerFactory";

	LOGV("java_net_ContentHandlerFactory className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_net_ContentHandlerFactory cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_net_ContentHandlerFactory jni address %d", javaObject);

	jstring jarg0;
	{
		long cxx_value = (long) & arg0;
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
		jarg0 = convert_jni_string_to_jni(java_value);
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
			cxx_type_hierarchy.type_name = std::string("java.net.ContentHandler");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_net_ContentHandler(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	JDKCXX::java_net_ContentHandler result((JDKCXX::java_net_ContentHandler) *((JDKCXX::java_net_ContentHandler *) cxx_value));
	delete ((JDKCXX::java_net_ContentHandler *) cxx_value);
		
	LOGV("JDKCXX::java_net_ContentHandler java_net_ContentHandlerFactory::createContentHandler(JDKCXX::java_lang_String const& arg0) exit");

	return result;
}
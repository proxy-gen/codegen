/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	








// Generated Code 

#include <java_net_URLStreamHandlerFactory.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <JDKCXXConverter.hpp>
// TODO: FIXME: add include package
// FIXME: remove after testing

#define LOG_TAG "java_net_URLStreamHandlerFactory"
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


// Default Instance Constructors
java_net_URLStreamHandlerFactory::java_net_URLStreamHandlerFactory(const java_net_URLStreamHandlerFactory& cc)
{
	LOGV("java_net_URLStreamHandlerFactory::java_net_URLStreamHandlerFactory(const java_net_URLStreamHandlerFactory& cc) enter");

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

	LOGV("java_net_URLStreamHandlerFactory::java_net_URLStreamHandlerFactory(const java_net_URLStreamHandlerFactory& cc) exit");
}
java_net_URLStreamHandlerFactory::java_net_URLStreamHandlerFactory(void * proxy)
{
	LOGV("java_net_URLStreamHandlerFactory::java_net_URLStreamHandlerFactory(void * proxy) enter");

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

	LOGV("java_net_URLStreamHandlerFactory::java_net_URLStreamHandlerFactory(void * proxy) exit");
}
// TODO: remove
// 
// 
// java_net_URLStreamHandlerFactory::java_net_URLStreamHandlerFactory()
// {
// 	LOGV("java_net_URLStreamHandlerFactory::java_net_URLStreamHandlerFactory() enter");	

// 	const char *methodName = "<init>";
// 	const char *methodSignature = "()V";
// 	const char *className = "java/net/URLStreamHandlerFactory";

// 	LOGV("java_net_URLStreamHandlerFactory className %d methodName %s methodSignature %s", className, methodName, methodSignature);

// 	CXXContext *ctx = CXXContext::sharedInstance();
// 	JNIContext *jni = JNIContext::sharedInstance();

// 	jni->pushLocalFrame();

// 	long cxxAddress = (long) this;
// 	LOGV("java_net_URLStreamHandlerFactory cxx address %d", cxxAddress);
// 	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
// 	LOGV("java_net_URLStreamHandlerFactory jni address %d", proxiedComponent);

// 	if (proxiedComponent == 0)
// 	{
// 		jclass clazz = jni->getClassRef(className);

// 		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, "<init>", methodSignature));
// 		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

// 		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
// 	}

// 	jni->popLocalFrame();

// 	LOGV("java_net_URLStreamHandlerFactory::java_net_URLStreamHandlerFactory() exit");	
// }
// 
// 
// Public Constructors
// Default Instance Destructor
java_net_URLStreamHandlerFactory::~java_net_URLStreamHandlerFactory()
{
	LOGV("java_net_URLStreamHandlerFactory::~java_net_URLStreamHandlerFactory() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("java_net_URLStreamHandlerFactory::~java_net_URLStreamHandlerFactory() exit");
}
// Functions
JDKCXX::java_net_URLStreamHandler java_net_URLStreamHandlerFactory::createURLStreamHandler(JDKCXX::java_lang_String& arg0)
{
	LOGV("JDKCXX::java_net_URLStreamHandler java_net_URLStreamHandlerFactory::createURLStreamHandler(JDKCXX::java_lang_String& arg0) enter");

	const char *methodName = "createURLStreamHandler";
	const char *methodSignature = "(Ljava/lang/String;)Ljava/net/URLStreamHandler;";
	const char *className = "java/net/URLStreamHandlerFactory";

	LOGV("java_net_URLStreamHandlerFactory className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_net_URLStreamHandlerFactory cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_net_URLStreamHandlerFactory jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("java.net.URLStreamHandler");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_net_URLStreamHandler(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	JDKCXX::java_net_URLStreamHandler result((JDKCXX::java_net_URLStreamHandler) *((JDKCXX::java_net_URLStreamHandler *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("JDKCXX::java_net_URLStreamHandler java_net_URLStreamHandlerFactory::createURLStreamHandler(JDKCXX::java_lang_String& arg0) exit");

	return result;
}

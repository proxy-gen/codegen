/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 








// Generated Code 

#include <java_lang_Thread_UncaughtExceptionHandler.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>
// TODO: FIXME: add include package
// FIXME: remove after testing

#define LOG_TAG "java_lang_Thread_UncaughtExceptionHandler"
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

java_lang_Thread_UncaughtExceptionHandler::java_lang_Thread_UncaughtExceptionHandler(const java_lang_Thread_UncaughtExceptionHandler& cc)
{
	LOGV("java_lang_Thread_UncaughtExceptionHandler::java_lang_Thread_UncaughtExceptionHandler(const java_lang_Thread_UncaughtExceptionHandler& cc) enter");

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

	LOGV("java_lang_Thread_UncaughtExceptionHandler::java_lang_Thread_UncaughtExceptionHandler(const java_lang_Thread_UncaughtExceptionHandler& cc) exit");
}
java_lang_Thread_UncaughtExceptionHandler::java_lang_Thread_UncaughtExceptionHandler(Proxy proxy)
{
	LOGV("java_lang_Thread_UncaughtExceptionHandler::java_lang_Thread_UncaughtExceptionHandler(Proxy proxy) enter");

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

	LOGV("java_lang_Thread_UncaughtExceptionHandler::java_lang_Thread_UncaughtExceptionHandler(Proxy proxy) exit");
}
Proxy java_lang_Thread_UncaughtExceptionHandler::proxy() const
{	
	LOGV("java_lang_Thread_UncaughtExceptionHandler::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_lang_Thread_UncaughtExceptionHandler cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("java_lang_Thread_UncaughtExceptionHandler jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("java_lang_Thread_UncaughtExceptionHandler::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
java_lang_Thread_UncaughtExceptionHandler::~java_lang_Thread_UncaughtExceptionHandler()
{
	LOGV("java_lang_Thread_UncaughtExceptionHandler::~java_lang_Thread_UncaughtExceptionHandler() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("java_lang_Thread_UncaughtExceptionHandler::~java_lang_Thread_UncaughtExceptionHandler() exit");
}
// Functions
void java_lang_Thread_UncaughtExceptionHandler::uncaughtException(AndroidCXX::java_lang_Thread const& arg0,AndroidCXX::java_lang_Throwable const& arg1)
{
	LOGV("void java_lang_Thread_UncaughtExceptionHandler::uncaughtException(AndroidCXX::java_lang_Thread const& arg0,AndroidCXX::java_lang_Throwable const& arg1) enter");

	const char *methodName = "uncaughtException";
	const char *methodSignature = "(Ljava/lang/Thread;Ljava/lang/Throwable;)V";
	const char *className = "java/lang/Thread$UncaughtExceptionHandler";

	LOGV("java_lang_Thread_UncaughtExceptionHandler className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_lang_Thread_UncaughtExceptionHandler cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_lang_Thread_UncaughtExceptionHandler jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("java.lang.Thread");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_lang_Thread(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
			cxx_type_hierarchy.type_name = std::string("java.lang.Throwable");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_lang_Throwable(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1);
		
	LOGV("void java_lang_Thread_UncaughtExceptionHandler::uncaughtException(AndroidCXX::java_lang_Thread const& arg0,AndroidCXX::java_lang_Throwable const& arg1) exit");

}
/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	








// Generated Code 

#include <java_net_SocketImplFactory.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "java_net_SocketImplFactory"
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

static long static_obj;
static long static_address = (long) &static_obj;

java_net_SocketImplFactory::java_net_SocketImplFactory(const java_net_SocketImplFactory& cc)
{
	LOGV("java_net_SocketImplFactory::java_net_SocketImplFactory(const java_net_SocketImplFactory& cc) enter");

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

	LOGV("java_net_SocketImplFactory::java_net_SocketImplFactory(const java_net_SocketImplFactory& cc) exit");
}
java_net_SocketImplFactory::java_net_SocketImplFactory(Proxy proxy)
{
	LOGV("java_net_SocketImplFactory::java_net_SocketImplFactory(Proxy proxy) enter");

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

	LOGV("java_net_SocketImplFactory::java_net_SocketImplFactory(Proxy proxy) exit");
}
Proxy java_net_SocketImplFactory::proxy() const
{	
	LOGV("java_net_SocketImplFactory::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_net_SocketImplFactory cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("java_net_SocketImplFactory jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("java_net_SocketImplFactory::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
java_net_SocketImplFactory::~java_net_SocketImplFactory()
{
	LOGV("java_net_SocketImplFactory::~java_net_SocketImplFactory() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("java_net_SocketImplFactory::~java_net_SocketImplFactory() exit");
}
// Functions
AndroidCXX::java_net_SocketImpl java_net_SocketImplFactory::createSocketImpl()
{
	LOGV("AndroidCXX::java_net_SocketImpl java_net_SocketImplFactory::createSocketImpl() enter");

	const char *methodName = "createSocketImpl";
	const char *methodSignature = "()Ljava/net/SocketImpl;";
	const char *className = "java/net/SocketImplFactory";

	LOGV("java_net_SocketImplFactory className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_net_SocketImplFactory cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_net_SocketImplFactory jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("java.net.SocketImpl");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_net_SocketImpl(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::java_net_SocketImpl result((AndroidCXX::java_net_SocketImpl) *((AndroidCXX::java_net_SocketImpl *) cxx_value));
	delete ((AndroidCXX::java_net_SocketImpl *) cxx_value);
		
	LOGV("AndroidCXX::java_net_SocketImpl java_net_SocketImplFactory::createSocketImpl() exit");

	return result;
}

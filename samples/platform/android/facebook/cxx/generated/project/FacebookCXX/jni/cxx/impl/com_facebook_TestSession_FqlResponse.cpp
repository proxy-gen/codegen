/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	








// Generated Code 

#include <com_facebook_TestSession_FqlResponse.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <CXXConverter.hpp>
#include <FacebookCXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "com_facebook_TestSession_FqlResponse"
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

static long static_obj;
static long static_address = (long) &static_obj;

com_facebook_TestSession_FqlResponse::com_facebook_TestSession_FqlResponse(const com_facebook_TestSession_FqlResponse& cc)
{
	LOGV("com_facebook_TestSession_FqlResponse::com_facebook_TestSession_FqlResponse(const com_facebook_TestSession_FqlResponse& cc) enter");

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

	LOGV("com_facebook_TestSession_FqlResponse::com_facebook_TestSession_FqlResponse(const com_facebook_TestSession_FqlResponse& cc) exit");
}
com_facebook_TestSession_FqlResponse::com_facebook_TestSession_FqlResponse(Proxy proxy)
{
	LOGV("com_facebook_TestSession_FqlResponse::com_facebook_TestSession_FqlResponse(Proxy proxy) enter");

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

	LOGV("com_facebook_TestSession_FqlResponse::com_facebook_TestSession_FqlResponse(Proxy proxy) exit");
}
Proxy com_facebook_TestSession_FqlResponse::proxy() const
{	
	LOGV("com_facebook_TestSession_FqlResponse::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_TestSession_FqlResponse cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_TestSession_FqlResponse jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("com_facebook_TestSession_FqlResponse::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
com_facebook_TestSession_FqlResponse::~com_facebook_TestSession_FqlResponse()
{
	LOGV("com_facebook_TestSession_FqlResponse::~com_facebook_TestSession_FqlResponse() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("com_facebook_TestSession_FqlResponse::~com_facebook_TestSession_FqlResponse() exit");
}
// Functions
FacebookCXX::com_facebook_model_GraphObjectList com_facebook_TestSession_FqlResponse::getData()
{
	LOGV("FacebookCXX::com_facebook_model_GraphObjectList com_facebook_TestSession_FqlResponse::getData() enter");

	const char *methodName = "getData";
	const char *methodSignature = "()Lcom/facebook/model/GraphObjectList;";
	const char *className = "com/facebook/TestSession$FqlResponse";

	LOGV("com_facebook_TestSession_FqlResponse className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_TestSession_FqlResponse cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_TestSession_FqlResponse jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("com.facebook.model.GraphObjectList");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("com.facebook.TestSession$FqlResult");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_com_facebook_TestSession_FqlResult);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_com_facebook_model_GraphObjectList(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	FacebookCXX::com_facebook_model_GraphObjectList result((FacebookCXX::com_facebook_model_GraphObjectList) *((FacebookCXX::com_facebook_model_GraphObjectList *) cxx_value));
	delete ((FacebookCXX::com_facebook_model_GraphObjectList *) cxx_value);
		
	LOGV("FacebookCXX::com_facebook_model_GraphObjectList com_facebook_TestSession_FqlResponse::getData() exit");

	return result;
}

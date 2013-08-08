/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	








// Generated Code 

#include <com_facebook_widget_GraphObjectAdapter_ItemPictureData.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <CXXConverter.hpp>
#include <FacebookCXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "com_facebook_widget_GraphObjectAdapter_ItemPictureData"
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

static long static_obj;
static long static_address = (long) &static_obj;

com_facebook_widget_GraphObjectAdapter_ItemPictureData::com_facebook_widget_GraphObjectAdapter_ItemPictureData(const com_facebook_widget_GraphObjectAdapter_ItemPictureData& cc)
{
	LOGV("com_facebook_widget_GraphObjectAdapter_ItemPictureData::com_facebook_widget_GraphObjectAdapter_ItemPictureData(const com_facebook_widget_GraphObjectAdapter_ItemPictureData& cc) enter");

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

	LOGV("com_facebook_widget_GraphObjectAdapter_ItemPictureData::com_facebook_widget_GraphObjectAdapter_ItemPictureData(const com_facebook_widget_GraphObjectAdapter_ItemPictureData& cc) exit");
}
com_facebook_widget_GraphObjectAdapter_ItemPictureData::com_facebook_widget_GraphObjectAdapter_ItemPictureData(Proxy proxy)
{
	LOGV("com_facebook_widget_GraphObjectAdapter_ItemPictureData::com_facebook_widget_GraphObjectAdapter_ItemPictureData(Proxy proxy) enter");

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

	LOGV("com_facebook_widget_GraphObjectAdapter_ItemPictureData::com_facebook_widget_GraphObjectAdapter_ItemPictureData(Proxy proxy) exit");
}
Proxy com_facebook_widget_GraphObjectAdapter_ItemPictureData::proxy() const
{	
	LOGV("com_facebook_widget_GraphObjectAdapter_ItemPictureData::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_GraphObjectAdapter_ItemPictureData cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_GraphObjectAdapter_ItemPictureData jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("com_facebook_widget_GraphObjectAdapter_ItemPictureData::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
com_facebook_widget_GraphObjectAdapter_ItemPictureData::~com_facebook_widget_GraphObjectAdapter_ItemPictureData()
{
	LOGV("com_facebook_widget_GraphObjectAdapter_ItemPictureData::~com_facebook_widget_GraphObjectAdapter_ItemPictureData() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("com_facebook_widget_GraphObjectAdapter_ItemPictureData::~com_facebook_widget_GraphObjectAdapter_ItemPictureData() exit");
}
// Functions
AndroidCXX::java_lang_String com_facebook_widget_GraphObjectAdapter_ItemPictureData::getUrl()
{
	LOGV("AndroidCXX::java_lang_String com_facebook_widget_GraphObjectAdapter_ItemPictureData::getUrl() enter");

	const char *methodName = "getUrl";
	const char *methodSignature = "()Ljava/lang/String;";
	const char *className = "com/facebook/widget/GraphObjectAdapter$ItemPictureData";

	LOGV("com_facebook_widget_GraphObjectAdapter_ItemPictureData className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_GraphObjectAdapter_ItemPictureData cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_GraphObjectAdapter_ItemPictureData jni address %d", javaObject);


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
		
	LOGV("AndroidCXX::java_lang_String com_facebook_widget_GraphObjectAdapter_ItemPictureData::getUrl() exit");

	return result;
}

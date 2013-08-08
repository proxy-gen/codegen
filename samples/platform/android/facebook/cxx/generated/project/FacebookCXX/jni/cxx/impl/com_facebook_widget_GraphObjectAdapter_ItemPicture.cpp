/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	








// Generated Code 

#include <com_facebook_widget_GraphObjectAdapter_ItemPicture.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <CXXConverter.hpp>
#include <FacebookCXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "com_facebook_widget_GraphObjectAdapter_ItemPicture"
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

com_facebook_widget_GraphObjectAdapter_ItemPicture::com_facebook_widget_GraphObjectAdapter_ItemPicture(const com_facebook_widget_GraphObjectAdapter_ItemPicture& cc)
{
	LOGV("com_facebook_widget_GraphObjectAdapter_ItemPicture::com_facebook_widget_GraphObjectAdapter_ItemPicture(const com_facebook_widget_GraphObjectAdapter_ItemPicture& cc) enter");

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

	LOGV("com_facebook_widget_GraphObjectAdapter_ItemPicture::com_facebook_widget_GraphObjectAdapter_ItemPicture(const com_facebook_widget_GraphObjectAdapter_ItemPicture& cc) exit");
}
com_facebook_widget_GraphObjectAdapter_ItemPicture::com_facebook_widget_GraphObjectAdapter_ItemPicture(Proxy proxy)
{
	LOGV("com_facebook_widget_GraphObjectAdapter_ItemPicture::com_facebook_widget_GraphObjectAdapter_ItemPicture(Proxy proxy) enter");

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

	LOGV("com_facebook_widget_GraphObjectAdapter_ItemPicture::com_facebook_widget_GraphObjectAdapter_ItemPicture(Proxy proxy) exit");
}
Proxy com_facebook_widget_GraphObjectAdapter_ItemPicture::proxy() const
{	
	LOGV("com_facebook_widget_GraphObjectAdapter_ItemPicture::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_GraphObjectAdapter_ItemPicture cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_GraphObjectAdapter_ItemPicture jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("com_facebook_widget_GraphObjectAdapter_ItemPicture::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
com_facebook_widget_GraphObjectAdapter_ItemPicture::~com_facebook_widget_GraphObjectAdapter_ItemPicture()
{
	LOGV("com_facebook_widget_GraphObjectAdapter_ItemPicture::~com_facebook_widget_GraphObjectAdapter_ItemPicture() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("com_facebook_widget_GraphObjectAdapter_ItemPicture::~com_facebook_widget_GraphObjectAdapter_ItemPicture() exit");
}
// Functions
FacebookCXX::com_facebook_widget_GraphObjectAdapter_ItemPictureData com_facebook_widget_GraphObjectAdapter_ItemPicture::getData()
{
	LOGV("FacebookCXX::com_facebook_widget_GraphObjectAdapter_ItemPictureData com_facebook_widget_GraphObjectAdapter_ItemPicture::getData() enter");

	const char *methodName = "getData";
	const char *methodSignature = "()Lcom/facebook/widget/GraphObjectAdapter$ItemPictureData;";
	const char *className = "com/facebook/widget/GraphObjectAdapter$ItemPicture";

	LOGV("com_facebook_widget_GraphObjectAdapter_ItemPicture className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_GraphObjectAdapter_ItemPicture cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_GraphObjectAdapter_ItemPicture jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("com.facebook.widget.GraphObjectAdapter$ItemPictureData");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_com_facebook_widget_GraphObjectAdapter_ItemPictureData(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	FacebookCXX::com_facebook_widget_GraphObjectAdapter_ItemPictureData result((FacebookCXX::com_facebook_widget_GraphObjectAdapter_ItemPictureData) *((FacebookCXX::com_facebook_widget_GraphObjectAdapter_ItemPictureData *) cxx_value));
	delete ((FacebookCXX::com_facebook_widget_GraphObjectAdapter_ItemPictureData *) cxx_value);
		
	LOGV("FacebookCXX::com_facebook_widget_GraphObjectAdapter_ItemPictureData com_facebook_widget_GraphObjectAdapter_ItemPicture::getData() exit");

	return result;
}

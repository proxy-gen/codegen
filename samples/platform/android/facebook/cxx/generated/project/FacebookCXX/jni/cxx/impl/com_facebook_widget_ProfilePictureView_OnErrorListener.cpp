/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 








// Generated Code 

#include <com_facebook_widget_ProfilePictureView_OnErrorListener.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <CXXConverter.hpp>
#include <FacebookCXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "com_facebook_widget_ProfilePictureView_OnErrorListener"
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

com_facebook_widget_ProfilePictureView_OnErrorListener::com_facebook_widget_ProfilePictureView_OnErrorListener(const com_facebook_widget_ProfilePictureView_OnErrorListener& cc)
{
	LOGV("com_facebook_widget_ProfilePictureView_OnErrorListener::com_facebook_widget_ProfilePictureView_OnErrorListener(const com_facebook_widget_ProfilePictureView_OnErrorListener& cc) enter");

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

	LOGV("com_facebook_widget_ProfilePictureView_OnErrorListener::com_facebook_widget_ProfilePictureView_OnErrorListener(const com_facebook_widget_ProfilePictureView_OnErrorListener& cc) exit");
}
com_facebook_widget_ProfilePictureView_OnErrorListener::com_facebook_widget_ProfilePictureView_OnErrorListener(Proxy proxy)
{
	LOGV("com_facebook_widget_ProfilePictureView_OnErrorListener::com_facebook_widget_ProfilePictureView_OnErrorListener(Proxy proxy) enter");

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

	LOGV("com_facebook_widget_ProfilePictureView_OnErrorListener::com_facebook_widget_ProfilePictureView_OnErrorListener(Proxy proxy) exit");
}
Proxy com_facebook_widget_ProfilePictureView_OnErrorListener::proxy() const
{	
	LOGV("com_facebook_widget_ProfilePictureView_OnErrorListener::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_ProfilePictureView_OnErrorListener cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_ProfilePictureView_OnErrorListener jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("com_facebook_widget_ProfilePictureView_OnErrorListener::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
com_facebook_widget_ProfilePictureView_OnErrorListener::~com_facebook_widget_ProfilePictureView_OnErrorListener()
{
	LOGV("com_facebook_widget_ProfilePictureView_OnErrorListener::~com_facebook_widget_ProfilePictureView_OnErrorListener() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("com_facebook_widget_ProfilePictureView_OnErrorListener::~com_facebook_widget_ProfilePictureView_OnErrorListener() exit");
}
// Functions
void com_facebook_widget_ProfilePictureView_OnErrorListener::onError(FacebookCXX::com_facebook_FacebookException const& arg0)
{
	LOGV("void com_facebook_widget_ProfilePictureView_OnErrorListener::onError(FacebookCXX::com_facebook_FacebookException const& arg0) enter");

	const char *methodName = "onError";
	const char *methodSignature = "(Lcom/facebook/FacebookException;)V";
	const char *className = "com/facebook/widget/ProfilePictureView$OnErrorListener";

	LOGV("com_facebook_widget_ProfilePictureView_OnErrorListener className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_ProfilePictureView_OnErrorListener cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_ProfilePictureView_OnErrorListener jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("com.facebook.FacebookException");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_com_facebook_FacebookException(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void com_facebook_widget_ProfilePictureView_OnErrorListener::onError(FacebookCXX::com_facebook_FacebookException const& arg0) exit");

}

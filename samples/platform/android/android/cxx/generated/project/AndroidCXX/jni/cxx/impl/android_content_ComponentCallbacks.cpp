/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 









// Generated Code 

#include <android_content_ComponentCallbacks.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "android_content_ComponentCallbacks"
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

android_content_ComponentCallbacks::android_content_ComponentCallbacks(const android_content_ComponentCallbacks& cc)
{
	LOGV("android_content_ComponentCallbacks::android_content_ComponentCallbacks(const android_content_ComponentCallbacks& cc) enter");

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

	LOGV("android_content_ComponentCallbacks::android_content_ComponentCallbacks(const android_content_ComponentCallbacks& cc) exit");
}
android_content_ComponentCallbacks::android_content_ComponentCallbacks(Proxy proxy)
{
	LOGV("android_content_ComponentCallbacks::android_content_ComponentCallbacks(Proxy proxy) enter");

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

	LOGV("android_content_ComponentCallbacks::android_content_ComponentCallbacks(Proxy proxy) exit");
}
Proxy android_content_ComponentCallbacks::proxy() const
{	
	LOGV("android_content_ComponentCallbacks::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_content_ComponentCallbacks cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_ComponentCallbacks jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("android_content_ComponentCallbacks::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
android_content_ComponentCallbacks::~android_content_ComponentCallbacks()
{
	LOGV("android_content_ComponentCallbacks::~android_content_ComponentCallbacks() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("android_content_ComponentCallbacks::~android_content_ComponentCallbacks() exit");
}
// Functions
void android_content_ComponentCallbacks::onConfigurationChanged(AndroidCXX::android_content_res_Configuration const& arg0)
{
	LOGV("void android_content_ComponentCallbacks::onConfigurationChanged(AndroidCXX::android_content_res_Configuration const& arg0) enter");

	const char *methodName = "onConfigurationChanged";
	const char *methodSignature = "(Landroid/content/res/Configuration;)V";
	const char *className = "android/content/ComponentCallbacks";

	LOGV("android_content_ComponentCallbacks className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_content_ComponentCallbacks cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_ComponentCallbacks jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.content.res.Configuration");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_content_res_Configuration(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_content_ComponentCallbacks::onConfigurationChanged(AndroidCXX::android_content_res_Configuration const& arg0) exit");

}
void android_content_ComponentCallbacks::onLowMemory()
{
	LOGV("void android_content_ComponentCallbacks::onLowMemory() enter");

	const char *methodName = "onLowMemory";
	const char *methodSignature = "()V";
	const char *className = "android/content/ComponentCallbacks";

	LOGV("android_content_ComponentCallbacks className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_content_ComponentCallbacks cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_ComponentCallbacks jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	LOGV("void android_content_ComponentCallbacks::onLowMemory() exit");

}

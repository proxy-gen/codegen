/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	








// Generated Code 

#include <android_widget_ViewSwitcher_ViewFactory.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "android_widget_ViewSwitcher_ViewFactory"
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

android_widget_ViewSwitcher_ViewFactory::android_widget_ViewSwitcher_ViewFactory(const android_widget_ViewSwitcher_ViewFactory& cc)
{
	LOGV("android_widget_ViewSwitcher_ViewFactory::android_widget_ViewSwitcher_ViewFactory(const android_widget_ViewSwitcher_ViewFactory& cc) enter");

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

	LOGV("android_widget_ViewSwitcher_ViewFactory::android_widget_ViewSwitcher_ViewFactory(const android_widget_ViewSwitcher_ViewFactory& cc) exit");
}
android_widget_ViewSwitcher_ViewFactory::android_widget_ViewSwitcher_ViewFactory(Proxy proxy)
{
	LOGV("android_widget_ViewSwitcher_ViewFactory::android_widget_ViewSwitcher_ViewFactory(Proxy proxy) enter");

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

	LOGV("android_widget_ViewSwitcher_ViewFactory::android_widget_ViewSwitcher_ViewFactory(Proxy proxy) exit");
}
Proxy android_widget_ViewSwitcher_ViewFactory::proxy() const
{	
	LOGV("android_widget_ViewSwitcher_ViewFactory::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_ViewSwitcher_ViewFactory cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_ViewSwitcher_ViewFactory jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("android_widget_ViewSwitcher_ViewFactory::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
android_widget_ViewSwitcher_ViewFactory::~android_widget_ViewSwitcher_ViewFactory()
{
	LOGV("android_widget_ViewSwitcher_ViewFactory::~android_widget_ViewSwitcher_ViewFactory() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("android_widget_ViewSwitcher_ViewFactory::~android_widget_ViewSwitcher_ViewFactory() exit");
}
// Functions
AndroidCXX::android_view_View android_widget_ViewSwitcher_ViewFactory::makeView()
{
	LOGV("AndroidCXX::android_view_View android_widget_ViewSwitcher_ViewFactory::makeView() enter");

	const char *methodName = "makeView";
	const char *methodSignature = "()Landroid/view/View;";
	const char *className = "android/widget/ViewSwitcher$ViewFactory";

	LOGV("android_widget_ViewSwitcher_ViewFactory className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_ViewSwitcher_ViewFactory cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_ViewSwitcher_ViewFactory jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("android.view.View");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_view_View(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_view_View result((AndroidCXX::android_view_View) *((AndroidCXX::android_view_View *) cxx_value));
	delete ((AndroidCXX::android_view_View *) cxx_value);
		
	LOGV("AndroidCXX::android_view_View android_widget_ViewSwitcher_ViewFactory::makeView() exit");

	return result;
}

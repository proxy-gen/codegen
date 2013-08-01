/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//




 		 
 		 






// Generated Code 

#include <com_facebook_widget_PickerFragment_PickerFragmentAdapter.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <FacebookCXXConverter.hpp>
// TODO: FIXME: add include package
// FIXME: remove after testing
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "com_facebook_widget_PickerFragment_PickerFragmentAdapter"
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

com_facebook_widget_PickerFragment_PickerFragmentAdapter::com_facebook_widget_PickerFragment_PickerFragmentAdapter(const com_facebook_widget_PickerFragment_PickerFragmentAdapter& cc)
{
	LOGV("com_facebook_widget_PickerFragment_PickerFragmentAdapter::com_facebook_widget_PickerFragment_PickerFragmentAdapter(const com_facebook_widget_PickerFragment_PickerFragmentAdapter& cc) enter");

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

	LOGV("com_facebook_widget_PickerFragment_PickerFragmentAdapter::com_facebook_widget_PickerFragment_PickerFragmentAdapter(const com_facebook_widget_PickerFragment_PickerFragmentAdapter& cc) exit");
}
com_facebook_widget_PickerFragment_PickerFragmentAdapter::com_facebook_widget_PickerFragment_PickerFragmentAdapter(Proxy proxy)
{
	LOGV("com_facebook_widget_PickerFragment_PickerFragmentAdapter::com_facebook_widget_PickerFragment_PickerFragmentAdapter(Proxy proxy) enter");

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

	LOGV("com_facebook_widget_PickerFragment_PickerFragmentAdapter::com_facebook_widget_PickerFragment_PickerFragmentAdapter(Proxy proxy) exit");
}
Proxy com_facebook_widget_PickerFragment_PickerFragmentAdapter::proxy() const
{	
	LOGV("com_facebook_widget_PickerFragment_PickerFragmentAdapter::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_PickerFragment_PickerFragmentAdapter cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_PickerFragment_PickerFragmentAdapter jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("com_facebook_widget_PickerFragment_PickerFragmentAdapter::proxy() exit");	

	return proxy;
}
com_facebook_widget_PickerFragment_PickerFragmentAdapter::com_facebook_widget_PickerFragment_PickerFragmentAdapter(FacebookCXX::com_facebook_widget_PickerFragment const& arg0,AndroidCXX::android_content_Context const& arg1)
{
	LOGV("com_facebook_widget_PickerFragment_PickerFragmentAdapter::com_facebook_widget_PickerFragment_PickerFragmentAdapter(FacebookCXX::com_facebook_widget_PickerFragment const& arg0,AndroidCXX::android_content_Context const& arg1) enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "(Lcom/facebook/widget/PickerFragment;Landroid/content/Context;)V";
	const char *className = "com/facebook/widget/PickerFragment$PickerFragmentAdapter";

	LOGV("com_facebook_widget_PickerFragment_PickerFragmentAdapter className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_PickerFragment_PickerFragmentAdapter cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_PickerFragment_PickerFragmentAdapter jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{

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
				cxx_type_hierarchy.type_name = std::string("com.facebook.widget.PickerFragment");
			}
			std::stack<long> converter_stack;
			converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
			convert_com_facebook_widget_PickerFragment(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
				cxx_type_hierarchy.type_name = std::string("android.content.Context");
			}
			std::stack<long> converter_stack;
			converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
			convert_android_content_Context(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

			// Convert to JNI
			jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
		}
			
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, methodName, methodSignature),jarg0,jarg1);
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("com_facebook_widget_PickerFragment_PickerFragmentAdapter::com_facebook_widget_PickerFragment_PickerFragmentAdapter(FacebookCXX::com_facebook_widget_PickerFragment const& arg0,AndroidCXX::android_content_Context const& arg1) exit");	
}
// Default Instance Destructor
com_facebook_widget_PickerFragment_PickerFragmentAdapter::~com_facebook_widget_PickerFragment_PickerFragmentAdapter()
{
	LOGV("com_facebook_widget_PickerFragment_PickerFragmentAdapter::~com_facebook_widget_PickerFragment_PickerFragmentAdapter() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("com_facebook_widget_PickerFragment_PickerFragmentAdapter::~com_facebook_widget_PickerFragment_PickerFragmentAdapter() exit");
}
// Functions

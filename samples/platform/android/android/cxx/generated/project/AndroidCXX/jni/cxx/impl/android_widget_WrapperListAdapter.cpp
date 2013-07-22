/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	








// Generated Code 

#include <android_widget_WrapperListAdapter.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "android_widget_WrapperListAdapter"
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


// Default Instance Constructors
android_widget_WrapperListAdapter::android_widget_WrapperListAdapter(const android_widget_WrapperListAdapter& cc)
{
	LOGV("android_widget_WrapperListAdapter::android_widget_WrapperListAdapter(const android_widget_WrapperListAdapter& cc) enter");

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

	LOGV("android_widget_WrapperListAdapter::android_widget_WrapperListAdapter(const android_widget_WrapperListAdapter& cc) exit");
}
android_widget_WrapperListAdapter::android_widget_WrapperListAdapter(void * proxy)
{
	LOGV("android_widget_WrapperListAdapter::android_widget_WrapperListAdapter(void * proxy) enter");

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

	LOGV("android_widget_WrapperListAdapter::android_widget_WrapperListAdapter(void * proxy) exit");
}
android_widget_WrapperListAdapter::android_widget_WrapperListAdapter()
{
	LOGV("android_widget_WrapperListAdapter::android_widget_WrapperListAdapter() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "android/widget/WrapperListAdapter";

	LOGV("android_widget_WrapperListAdapter className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_WrapperListAdapter cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_WrapperListAdapter jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, "<init>", methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("android_widget_WrapperListAdapter::android_widget_WrapperListAdapter() exit");	
}
// Public Constructors
// Default Instance Destructor
android_widget_WrapperListAdapter::~android_widget_WrapperListAdapter()
{
	LOGV("android_widget_WrapperListAdapter::~android_widget_WrapperListAdapter() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("android_widget_WrapperListAdapter::~android_widget_WrapperListAdapter() exit");
}
// Functions
AndroidCXX::android_widget_ListAdapter android_widget_WrapperListAdapter::getWrappedAdapter()
{
	LOGV("AndroidCXX::android_widget_ListAdapter android_widget_WrapperListAdapter::getWrappedAdapter() enter");

	const char *methodName = "getWrappedAdapter";
	const char *methodSignature = "()Landroid/widget/ListAdapter;";
	const char *className = "android/widget/WrapperListAdapter";

	LOGV("android_widget_WrapperListAdapter className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_WrapperListAdapter cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_WrapperListAdapter jni address %d", javaObject);


	AndroidCXX::android_widget_ListAdapter result;
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
			cxx_type_hierarchy.type_name = std::string("android.widget.ListAdapter");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_widget_ListAdapter(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_widget_ListAdapter) (AndroidCXX::android_widget_ListAdapter((AndroidCXX::android_widget_ListAdapter *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_widget_ListAdapter android_widget_WrapperListAdapter::getWrappedAdapter() exit");

	return result;
}

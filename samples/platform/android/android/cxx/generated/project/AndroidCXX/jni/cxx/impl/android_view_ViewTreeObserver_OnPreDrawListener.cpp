/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//











// Generated Code 

#include <android_view_ViewTreeObserver_OnPreDrawListener.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>
// TODO: FIXME: add include package
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "android_view_ViewTreeObserver_OnPreDrawListener"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace AndroidCXX;

// 
// 

static long static_obj;
static long static_address = (long) &static_obj;


// Default Instance Constructors
android_view_ViewTreeObserver_OnPreDrawListener::android_view_ViewTreeObserver_OnPreDrawListener(const android_view_ViewTreeObserver_OnPreDrawListener& cc)
{
	LOGV("android_view_ViewTreeObserver_OnPreDrawListener::android_view_ViewTreeObserver_OnPreDrawListener(const android_view_ViewTreeObserver_OnPreDrawListener& cc) enter");

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

	LOGV("android_view_ViewTreeObserver_OnPreDrawListener::android_view_ViewTreeObserver_OnPreDrawListener(const android_view_ViewTreeObserver_OnPreDrawListener& cc) exit");
}
android_view_ViewTreeObserver_OnPreDrawListener::android_view_ViewTreeObserver_OnPreDrawListener(void * proxy)
{
	LOGV("android_view_ViewTreeObserver_OnPreDrawListener::android_view_ViewTreeObserver_OnPreDrawListener(void * proxy) enter");

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

	LOGV("android_view_ViewTreeObserver_OnPreDrawListener::android_view_ViewTreeObserver_OnPreDrawListener(void * proxy) exit");
}
android_view_ViewTreeObserver_OnPreDrawListener::android_view_ViewTreeObserver_OnPreDrawListener()
{
	LOGV("android_view_ViewTreeObserver_OnPreDrawListener::android_view_ViewTreeObserver_OnPreDrawListener() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "android/view/ViewTreeObserver$OnPreDrawListener";

	LOGV("android_view_ViewTreeObserver_OnPreDrawListener className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewTreeObserver_OnPreDrawListener cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewTreeObserver_OnPreDrawListener jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, "<init>", methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("android_view_ViewTreeObserver_OnPreDrawListener::android_view_ViewTreeObserver_OnPreDrawListener() exit");	
}
// Public Constructors
// Default Instance Destructor
android_view_ViewTreeObserver_OnPreDrawListener::~android_view_ViewTreeObserver_OnPreDrawListener()
{
	LOGV("android_view_ViewTreeObserver_OnPreDrawListener::~android_view_ViewTreeObserver_OnPreDrawListener() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("android_view_ViewTreeObserver_OnPreDrawListener::~android_view_ViewTreeObserver_OnPreDrawListener() exit");
}
// Functions
bool android_view_ViewTreeObserver_OnPreDrawListener::onPreDraw()
{
	LOGV("bool android_view_ViewTreeObserver_OnPreDrawListener::onPreDraw() enter");

	const char *methodName = "onPreDraw";
	const char *methodSignature = "()Z";
	const char *className = "android/view/ViewTreeObserver$OnPreDrawListener";

	LOGV("android_view_ViewTreeObserver_OnPreDrawListener className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewTreeObserver_OnPreDrawListener cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewTreeObserver_OnPreDrawListener jni address %d", javaObject);


	bool result;
	jboolean jni_result = (jboolean) jni->invokeBooleanMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni_boolean_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("boolean");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_boolean(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (bool) (cxx_value);
		
	jni->popLocalFrame();

	LOGV("bool android_view_ViewTreeObserver_OnPreDrawListener::onPreDraw() exit");

	return result;
}

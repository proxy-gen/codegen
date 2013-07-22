/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 








// Generated Code 

#include <com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <FacebookCXXConverter.hpp>

#define LOG_TAG "com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver"
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

static long static_obj;
static long static_address = (long) &static_obj;


// Default Instance Constructors
com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver::com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver(const com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver& cc)
{
	LOGV("com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver::com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver(const com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver& cc) enter");

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

	LOGV("com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver::com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver(const com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver& cc) exit");
}
com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver::com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver(void * proxy)
{
	LOGV("com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver::com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver(void * proxy) enter");

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

	LOGV("com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver::com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver(void * proxy) exit");
}
com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver::com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver()
{
	LOGV("com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver::com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "com/facebook/UiLifecycleHelper$ActiveSessionBroadcastReceiver";

	LOGV("com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, "<init>", methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver::com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver() exit");	
}
// Public Constructors
// Default Instance Destructor
com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver::~com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver()
{
	LOGV("com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver::~com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver::~com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver() exit");
}
// Functions
void com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver::onReceive(FacebookCXX::android_content_Context& arg0,FacebookCXX::android_content_Intent& arg1)
{
	LOGV("void com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver::onReceive(FacebookCXX::android_content_Context& arg0,FacebookCXX::android_content_Intent& arg1) enter");

	const char *methodName = "onReceive";
	const char *methodSignature = "(Landroid/content/Context;Landroid/content/Intent;)V";
	const char *className = "com/facebook/UiLifecycleHelper$ActiveSessionBroadcastReceiver";

	LOGV("com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.content.Context");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_content_Context(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
			cxx_type_hierarchy.type_name = std::string("android.content.Intent");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_content_Intent(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1);
		
	jni->popLocalFrame();

	LOGV("void com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver::onReceive(FacebookCXX::android_content_Context& arg0,FacebookCXX::android_content_Intent& arg1) exit");

}

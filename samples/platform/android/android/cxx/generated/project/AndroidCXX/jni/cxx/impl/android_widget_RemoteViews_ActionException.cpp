/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//





 		 
 		 







// Generated Code 

#include <android_widget_RemoteViews_ActionException.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "android_widget_RemoteViews_ActionException"
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
// 
// 
// 

static long static_obj;
static long static_address = (long) &static_obj;


// Default Instance Constructors
android_widget_RemoteViews_ActionException::android_widget_RemoteViews_ActionException(const android_widget_RemoteViews_ActionException& cc)
{
	LOGV("android_widget_RemoteViews_ActionException::android_widget_RemoteViews_ActionException(const android_widget_RemoteViews_ActionException& cc) enter");

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

	LOGV("android_widget_RemoteViews_ActionException::android_widget_RemoteViews_ActionException(const android_widget_RemoteViews_ActionException& cc) exit");
}
android_widget_RemoteViews_ActionException::android_widget_RemoteViews_ActionException(void * proxy)
{
	LOGV("android_widget_RemoteViews_ActionException::android_widget_RemoteViews_ActionException(void * proxy) enter");

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

	LOGV("android_widget_RemoteViews_ActionException::android_widget_RemoteViews_ActionException(void * proxy) exit");
}
android_widget_RemoteViews_ActionException::android_widget_RemoteViews_ActionException()
{
	LOGV("android_widget_RemoteViews_ActionException::android_widget_RemoteViews_ActionException() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "android/widget/RemoteViews$ActionException";

	LOGV("android_widget_RemoteViews_ActionException className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_RemoteViews_ActionException cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_RemoteViews_ActionException jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, "<init>", methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("android_widget_RemoteViews_ActionException::android_widget_RemoteViews_ActionException() exit");	
}
// Public Constructors
android_widget_RemoteViews_ActionException::android_widget_RemoteViews_ActionException(AndroidCXX::java_lang_Exception& arg0)
{
	LOGV("android_widget_RemoteViews_ActionException::android_widget_RemoteViews_ActionException(AndroidCXX::java_lang_Exception& arg0) enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "(Ljava/lang/Exception;)V";
	const char *className = "android/widget/RemoteViews$ActionException";

	LOGV("android_widget_RemoteViews_ActionException className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_RemoteViews_ActionException cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_RemoteViews_ActionException jni address %d", proxiedComponent);

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
				cxx_type_hierarchy.type_name = std::string("java.lang.Exception");
			}
			std::stack<long> converter_stack;
			converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
			convert_java_lang_Exception(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

			// Convert to JNI
			jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
		}
			
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, methodName, methodSignature),jarg0);
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("android_widget_RemoteViews_ActionException::android_widget_RemoteViews_ActionException(AndroidCXX::java_lang_Exception& arg0) exit");	
}
android_widget_RemoteViews_ActionException::android_widget_RemoteViews_ActionException(AndroidCXX::java_lang_String& arg0)
{
	LOGV("android_widget_RemoteViews_ActionException::android_widget_RemoteViews_ActionException(AndroidCXX::java_lang_String& arg0) enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "(Ljava/lang/String;)V";
	const char *className = "android/widget/RemoteViews$ActionException";

	LOGV("android_widget_RemoteViews_ActionException className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_RemoteViews_ActionException cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_RemoteViews_ActionException jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{

		jstring jarg0;
		{
			long cxx_value = (long) & arg0;
			long java_value = 0;

			CXXTypeHierarchy cxx_type_hierarchy;
			std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
			
			cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
			{
				CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
				cxx_type_hierarchy_stack.pop();
				cxx_type_hierarchy.type_name = std::string("java.lang.String");
			}
			std::stack<long> converter_stack;
			converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
			convert_java_lang_String(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

			// Convert to JNI
			jarg0 = convert_jni_string_to_jni(java_value);
		}
			
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, methodName, methodSignature),jarg0);
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("android_widget_RemoteViews_ActionException::android_widget_RemoteViews_ActionException(AndroidCXX::java_lang_String& arg0) exit");	
}
// Default Instance Destructor
android_widget_RemoteViews_ActionException::~android_widget_RemoteViews_ActionException()
{
	LOGV("android_widget_RemoteViews_ActionException::~android_widget_RemoteViews_ActionException() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("android_widget_RemoteViews_ActionException::~android_widget_RemoteViews_ActionException() exit");
}
// Functions

/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
 		 
	










// Generated Code 

#include <android_text_Spannable_Factory.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "android_text_Spannable_Factory"
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
// 
// 
// 

static long static_obj;
static long static_address = (long) &static_obj;


// Default Instance Constructors
android_text_Spannable_Factory::android_text_Spannable_Factory(const android_text_Spannable_Factory& cc)
{
	LOGV("android_text_Spannable_Factory::android_text_Spannable_Factory(const android_text_Spannable_Factory& cc) enter");

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

	LOGV("android_text_Spannable_Factory::android_text_Spannable_Factory(const android_text_Spannable_Factory& cc) exit");
}
android_text_Spannable_Factory::android_text_Spannable_Factory(void * proxy)
{
	LOGV("android_text_Spannable_Factory::android_text_Spannable_Factory(void * proxy) enter");

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

	LOGV("android_text_Spannable_Factory::android_text_Spannable_Factory(void * proxy) exit");
}
// Public Constructors
android_text_Spannable_Factory::android_text_Spannable_Factory()
{
	LOGV("android_text_Spannable_Factory::android_text_Spannable_Factory() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "android/text/Spannable$Factory";

	LOGV("android_text_Spannable_Factory className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_text_Spannable_Factory cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("android_text_Spannable_Factory jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{

			
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, methodName, methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("android_text_Spannable_Factory::android_text_Spannable_Factory() exit");	
}
// Default Instance Destructor
android_text_Spannable_Factory::~android_text_Spannable_Factory()
{
	LOGV("android_text_Spannable_Factory::~android_text_Spannable_Factory() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("android_text_Spannable_Factory::~android_text_Spannable_Factory() exit");
}
// Functions
AndroidCXX::android_text_Spannable_Factory android_text_Spannable_Factory::getInstance()
{
	LOGV("AndroidCXX::android_text_Spannable_Factory android_text_Spannable_Factory::getInstance() enter");

	const char *methodName = "getInstance";
	const char *methodSignature = "()Landroid/text/Spannable$Factory;";
	const char *className = "android/text/Spannable$Factory";

	LOGV("android_text_Spannable_Factory className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) static_address; // _static function
	LOGV("android_text_Spannable_Factory cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_text_Spannable_Factory jni address %d", javaObject);


	AndroidCXX::android_text_Spannable_Factory result;
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
			cxx_type_hierarchy.type_name = std::string("android.text.Spannable$Factory");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_text_Spannable_Factory(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_text_Spannable_Factory) (AndroidCXX::android_text_Spannable_Factory((AndroidCXX::android_text_Spannable_Factory *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_text_Spannable_Factory android_text_Spannable_Factory::getInstance() exit");

	return result;
}
AndroidCXX::android_text_Spannable android_text_Spannable_Factory::newSpannable(AndroidCXX::java_lang_CharSequence& arg0)
{
	LOGV("AndroidCXX::android_text_Spannable android_text_Spannable_Factory::newSpannable(AndroidCXX::java_lang_CharSequence& arg0) enter");

	const char *methodName = "newSpannable";
	const char *methodSignature = "(Ljava/lang/CharSequence;)Landroid/text/Spannable;";
	const char *className = "android/text/Spannable$Factory";

	LOGV("android_text_Spannable_Factory className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_text_Spannable_Factory cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_text_Spannable_Factory jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("java.lang.CharSequence");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_lang_CharSequence(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	AndroidCXX::android_text_Spannable result;
	jobject jni_result = (jobject) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature,jarg0);
	long cxx_value = (long) 0;
	long java_value = convert_jni_java_lang_Object_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("android.text.Spannable");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_text_Spannable(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_text_Spannable) (AndroidCXX::android_text_Spannable((AndroidCXX::android_text_Spannable *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_text_Spannable android_text_Spannable_Factory::newSpannable(AndroidCXX::java_lang_CharSequence& arg0) exit");

	return result;
}

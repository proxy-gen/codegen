/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 












// Generated Code 

#include <android_os_CancellationSignal.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "android_os_CancellationSignal"
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
android_os_CancellationSignal::android_os_CancellationSignal(const android_os_CancellationSignal& cc)
{
	LOGV("android_os_CancellationSignal::android_os_CancellationSignal(const android_os_CancellationSignal& cc) enter");

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

	LOGV("android_os_CancellationSignal::android_os_CancellationSignal(const android_os_CancellationSignal& cc) exit");
}
android_os_CancellationSignal::android_os_CancellationSignal(void * proxy)
{
	LOGV("android_os_CancellationSignal::android_os_CancellationSignal(void * proxy) enter");

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

	LOGV("android_os_CancellationSignal::android_os_CancellationSignal(void * proxy) exit");
}
// Public Constructors
android_os_CancellationSignal::android_os_CancellationSignal()
{
	LOGV("android_os_CancellationSignal::android_os_CancellationSignal() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "android/os/CancellationSignal";

	LOGV("android_os_CancellationSignal className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_os_CancellationSignal cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("android_os_CancellationSignal jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{

			
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, methodName, methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("android_os_CancellationSignal::android_os_CancellationSignal() exit");	
}
// Default Instance Destructor
android_os_CancellationSignal::~android_os_CancellationSignal()
{
	LOGV("android_os_CancellationSignal::~android_os_CancellationSignal() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("android_os_CancellationSignal::~android_os_CancellationSignal() exit");
}
// Functions
void android_os_CancellationSignal::cancel()
{
	LOGV("void android_os_CancellationSignal::cancel() enter");

	const char *methodName = "cancel";
	const char *methodSignature = "()V";
	const char *className = "android/os/CancellationSignal";

	LOGV("android_os_CancellationSignal className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_os_CancellationSignal cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_os_CancellationSignal jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	jni->popLocalFrame();

	LOGV("void android_os_CancellationSignal::cancel() exit");

}
bool android_os_CancellationSignal::isCanceled()
{
	LOGV("bool android_os_CancellationSignal::isCanceled() enter");

	const char *methodName = "isCanceled";
	const char *methodSignature = "()Z";
	const char *className = "android/os/CancellationSignal";

	LOGV("android_os_CancellationSignal className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_os_CancellationSignal cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_os_CancellationSignal jni address %d", javaObject);


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

	LOGV("bool android_os_CancellationSignal::isCanceled() exit");

	return result;
}
void android_os_CancellationSignal::throwIfCanceled()
{
	LOGV("void android_os_CancellationSignal::throwIfCanceled() enter");

	const char *methodName = "throwIfCanceled";
	const char *methodSignature = "()V";
	const char *className = "android/os/CancellationSignal";

	LOGV("android_os_CancellationSignal className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_os_CancellationSignal cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_os_CancellationSignal jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	jni->popLocalFrame();

	LOGV("void android_os_CancellationSignal::throwIfCanceled() exit");

}
void android_os_CancellationSignal::setOnCancelListener(AndroidCXX::android_os_CancellationSignal_OnCancelListener& arg0)
{
	LOGV("void android_os_CancellationSignal::setOnCancelListener(AndroidCXX::android_os_CancellationSignal_OnCancelListener& arg0) enter");

	const char *methodName = "setOnCancelListener";
	const char *methodSignature = "(Landroid/os/CancellationSignal$OnCancelListener;)V";
	const char *className = "android/os/CancellationSignal";

	LOGV("android_os_CancellationSignal className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_os_CancellationSignal cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_os_CancellationSignal jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.os.CancellationSignal$OnCancelListener");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_os_CancellationSignal_OnCancelListener(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void android_os_CancellationSignal::setOnCancelListener(AndroidCXX::android_os_CancellationSignal_OnCancelListener& arg0) exit");

}

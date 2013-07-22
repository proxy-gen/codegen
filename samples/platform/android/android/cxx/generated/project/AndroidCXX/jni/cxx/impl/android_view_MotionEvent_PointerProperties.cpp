/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 


 		 











// Generated Code 

#include <android_view_MotionEvent_PointerProperties.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "android_view_MotionEvent_PointerProperties"
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
android_view_MotionEvent_PointerProperties::android_view_MotionEvent_PointerProperties(const android_view_MotionEvent_PointerProperties& cc)
{
	LOGV("android_view_MotionEvent_PointerProperties::android_view_MotionEvent_PointerProperties(const android_view_MotionEvent_PointerProperties& cc) enter");

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

	LOGV("android_view_MotionEvent_PointerProperties::android_view_MotionEvent_PointerProperties(const android_view_MotionEvent_PointerProperties& cc) exit");
}
android_view_MotionEvent_PointerProperties::android_view_MotionEvent_PointerProperties(void * proxy)
{
	LOGV("android_view_MotionEvent_PointerProperties::android_view_MotionEvent_PointerProperties(void * proxy) enter");

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

	LOGV("android_view_MotionEvent_PointerProperties::android_view_MotionEvent_PointerProperties(void * proxy) exit");
}
// Public Constructors
android_view_MotionEvent_PointerProperties::android_view_MotionEvent_PointerProperties()
{
	LOGV("android_view_MotionEvent_PointerProperties::android_view_MotionEvent_PointerProperties() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "android/view/MotionEvent$PointerProperties";

	LOGV("android_view_MotionEvent_PointerProperties className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_view_MotionEvent_PointerProperties cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_MotionEvent_PointerProperties jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{

			
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, methodName, methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("android_view_MotionEvent_PointerProperties::android_view_MotionEvent_PointerProperties() exit");	
}
android_view_MotionEvent_PointerProperties::android_view_MotionEvent_PointerProperties(AndroidCXX::android_view_MotionEvent_PointerProperties& arg0)
{
	LOGV("android_view_MotionEvent_PointerProperties::android_view_MotionEvent_PointerProperties(AndroidCXX::android_view_MotionEvent_PointerProperties& arg0) enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "(Landroid/view/MotionEvent$PointerProperties;)V";
	const char *className = "android/view/MotionEvent$PointerProperties";

	LOGV("android_view_MotionEvent_PointerProperties className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_view_MotionEvent_PointerProperties cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_MotionEvent_PointerProperties jni address %d", proxiedComponent);

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
				cxx_type_hierarchy.type_name = std::string("android.view.MotionEvent$PointerProperties");
			}
			std::stack<long> converter_stack;
			converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
			convert_android_view_MotionEvent_PointerProperties(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

			// Convert to JNI
			jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
		}
			
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, methodName, methodSignature),jarg0);
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("android_view_MotionEvent_PointerProperties::android_view_MotionEvent_PointerProperties(AndroidCXX::android_view_MotionEvent_PointerProperties& arg0) exit");	
}
// Default Instance Destructor
android_view_MotionEvent_PointerProperties::~android_view_MotionEvent_PointerProperties()
{
	LOGV("android_view_MotionEvent_PointerProperties::~android_view_MotionEvent_PointerProperties() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("android_view_MotionEvent_PointerProperties::~android_view_MotionEvent_PointerProperties() exit");
}
// Functions
bool android_view_MotionEvent_PointerProperties::equals(AndroidCXX::java_lang_Object& arg0)
{
	LOGV("bool android_view_MotionEvent_PointerProperties::equals(AndroidCXX::java_lang_Object& arg0) enter");

	const char *methodName = "equals";
	const char *methodSignature = "(Ljava/lang/Object;)Z";
	const char *className = "android/view/MotionEvent$PointerProperties";

	LOGV("android_view_MotionEvent_PointerProperties className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_view_MotionEvent_PointerProperties cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_MotionEvent_PointerProperties jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("java.lang.Object");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_lang_Object(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	bool result;
	jboolean jni_result = (jboolean) jni->invokeBooleanMethod(javaObject,className,methodName,methodSignature,jarg0);
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

	LOGV("bool android_view_MotionEvent_PointerProperties::equals(AndroidCXX::java_lang_Object& arg0) exit");

	return result;
}
int android_view_MotionEvent_PointerProperties::hashCode()
{
	LOGV("int android_view_MotionEvent_PointerProperties::hashCode() enter");

	const char *methodName = "hashCode";
	const char *methodSignature = "()I";
	const char *className = "android/view/MotionEvent$PointerProperties";

	LOGV("android_view_MotionEvent_PointerProperties className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_view_MotionEvent_PointerProperties cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_MotionEvent_PointerProperties jni address %d", javaObject);


	int result;
	jint jni_result = (jint) jni->invokeIntMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni_int_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("int");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_int(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (int) (cxx_value);
		
	jni->popLocalFrame();

	LOGV("int android_view_MotionEvent_PointerProperties::hashCode() exit");

	return result;
}
void android_view_MotionEvent_PointerProperties::clear()
{
	LOGV("void android_view_MotionEvent_PointerProperties::clear() enter");

	const char *methodName = "clear";
	const char *methodSignature = "()V";
	const char *className = "android/view/MotionEvent$PointerProperties";

	LOGV("android_view_MotionEvent_PointerProperties className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_view_MotionEvent_PointerProperties cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_MotionEvent_PointerProperties jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	jni->popLocalFrame();

	LOGV("void android_view_MotionEvent_PointerProperties::clear() exit");

}
void android_view_MotionEvent_PointerProperties::copyFrom(AndroidCXX::android_view_MotionEvent_PointerProperties& arg0)
{
	LOGV("void android_view_MotionEvent_PointerProperties::copyFrom(AndroidCXX::android_view_MotionEvent_PointerProperties& arg0) enter");

	const char *methodName = "copyFrom";
	const char *methodSignature = "(Landroid/view/MotionEvent$PointerProperties;)V";
	const char *className = "android/view/MotionEvent$PointerProperties";

	LOGV("android_view_MotionEvent_PointerProperties className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_view_MotionEvent_PointerProperties cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_MotionEvent_PointerProperties jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.MotionEvent$PointerProperties");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_view_MotionEvent_PointerProperties(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void android_view_MotionEvent_PointerProperties::copyFrom(AndroidCXX::android_view_MotionEvent_PointerProperties& arg0) exit");

}

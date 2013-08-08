/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
 		 
 		 
	











// Generated Code 

#include <android_view_accessibility_AccessibilityNodeProvider.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "android_view_accessibility_AccessibilityNodeProvider"
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
// 
// 
// 

static long static_obj;
static long static_address = (long) &static_obj;

android_view_accessibility_AccessibilityNodeProvider::android_view_accessibility_AccessibilityNodeProvider(const android_view_accessibility_AccessibilityNodeProvider& cc)
{
	LOGV("android_view_accessibility_AccessibilityNodeProvider::android_view_accessibility_AccessibilityNodeProvider(const android_view_accessibility_AccessibilityNodeProvider& cc) enter");

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

	LOGV("android_view_accessibility_AccessibilityNodeProvider::android_view_accessibility_AccessibilityNodeProvider(const android_view_accessibility_AccessibilityNodeProvider& cc) exit");
}
android_view_accessibility_AccessibilityNodeProvider::android_view_accessibility_AccessibilityNodeProvider(Proxy proxy)
{
	LOGV("android_view_accessibility_AccessibilityNodeProvider::android_view_accessibility_AccessibilityNodeProvider(Proxy proxy) enter");

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

	LOGV("android_view_accessibility_AccessibilityNodeProvider::android_view_accessibility_AccessibilityNodeProvider(Proxy proxy) exit");
}
Proxy android_view_accessibility_AccessibilityNodeProvider::proxy() const
{	
	LOGV("android_view_accessibility_AccessibilityNodeProvider::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeProvider cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeProvider jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("android_view_accessibility_AccessibilityNodeProvider::proxy() exit");	

	return proxy;
}
android_view_accessibility_AccessibilityNodeProvider::android_view_accessibility_AccessibilityNodeProvider()
{
	LOGV("android_view_accessibility_AccessibilityNodeProvider::android_view_accessibility_AccessibilityNodeProvider() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "android/view/accessibility/AccessibilityNodeProvider";

	LOGV("android_view_accessibility_AccessibilityNodeProvider className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeProvider cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeProvider jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{

			
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, methodName, methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("android_view_accessibility_AccessibilityNodeProvider::android_view_accessibility_AccessibilityNodeProvider() exit");	
}
// Default Instance Destructor
android_view_accessibility_AccessibilityNodeProvider::~android_view_accessibility_AccessibilityNodeProvider()
{
	LOGV("android_view_accessibility_AccessibilityNodeProvider::~android_view_accessibility_AccessibilityNodeProvider() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("android_view_accessibility_AccessibilityNodeProvider::~android_view_accessibility_AccessibilityNodeProvider() exit");
}
// Functions
AndroidCXX::android_view_accessibility_AccessibilityNodeInfo android_view_accessibility_AccessibilityNodeProvider::createAccessibilityNodeInfo(int const& arg0)
{
	LOGV("AndroidCXX::android_view_accessibility_AccessibilityNodeInfo android_view_accessibility_AccessibilityNodeProvider::createAccessibilityNodeInfo(int const& arg0) enter");

	const char *methodName = "createAccessibilityNodeInfo";
	const char *methodSignature = "(I)Landroid/view/accessibility/AccessibilityNodeInfo;";
	const char *className = "android/view/accessibility/AccessibilityNodeProvider";

	LOGV("android_view_accessibility_AccessibilityNodeProvider className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeProvider cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeProvider jni address %d", javaObject);

	jint jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("int");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_int(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_int_to_jni(java_value);
	}

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
			cxx_type_hierarchy.type_name = std::string("android.view.accessibility.AccessibilityNodeInfo");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_view_accessibility_AccessibilityNodeInfo(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_view_accessibility_AccessibilityNodeInfo result((AndroidCXX::android_view_accessibility_AccessibilityNodeInfo) *((AndroidCXX::android_view_accessibility_AccessibilityNodeInfo *) cxx_value));
	delete ((AndroidCXX::android_view_accessibility_AccessibilityNodeInfo *) cxx_value);
		
	LOGV("AndroidCXX::android_view_accessibility_AccessibilityNodeInfo android_view_accessibility_AccessibilityNodeProvider::createAccessibilityNodeInfo(int const& arg0) exit");

	return result;
}
bool android_view_accessibility_AccessibilityNodeProvider::performAction(int const& arg0,int const& arg1,AndroidCXX::android_os_Bundle const& arg2)
{
	LOGV("bool android_view_accessibility_AccessibilityNodeProvider::performAction(int const& arg0,int const& arg1,AndroidCXX::android_os_Bundle const& arg2) enter");

	const char *methodName = "performAction";
	const char *methodSignature = "(IILandroid/os/Bundle;)Z";
	const char *className = "android/view/accessibility/AccessibilityNodeProvider";

	LOGV("android_view_accessibility_AccessibilityNodeProvider className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeProvider cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeProvider jni address %d", javaObject);

	jint jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("int");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_int(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_int_to_jni(java_value);
	}
	jint jarg1;
	{
		long cxx_value = (long) & arg1;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("int");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_int(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_int_to_jni(java_value);
	}
	jobject jarg2;
	{
		long cxx_value = (long) & arg2;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("android.os.Bundle");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_os_Bundle(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg2 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jboolean jni_result = (jboolean) jni->invokeBooleanMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1,jarg2);
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

	bool result = (bool) *((bool *) cxx_value);
	// 
		
	LOGV("bool android_view_accessibility_AccessibilityNodeProvider::performAction(int const& arg0,int const& arg1,AndroidCXX::android_os_Bundle const& arg2) exit");

	return result;
}
AndroidCXX::java_util_List android_view_accessibility_AccessibilityNodeProvider::findAccessibilityNodeInfosByText(AndroidCXX::java_lang_String const& arg0,int const& arg1)
{
	LOGV("AndroidCXX::java_util_List android_view_accessibility_AccessibilityNodeProvider::findAccessibilityNodeInfosByText(AndroidCXX::java_lang_String const& arg0,int const& arg1) enter");

	const char *methodName = "findAccessibilityNodeInfosByText";
	const char *methodSignature = "(Ljava/lang/String;I)Ljava/util/List;";
	const char *className = "android/view/accessibility/AccessibilityNodeProvider";

	LOGV("android_view_accessibility_AccessibilityNodeProvider className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeProvider cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeProvider jni address %d", javaObject);

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
	jint jarg1;
	{
		long cxx_value = (long) & arg1;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("int");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_int(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_int_to_jni(java_value);
	}

	jobject jni_result = (jobject) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1);
	long cxx_value = (long) 0;
	long java_value = convert_jni_java_lang_Object_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.util.List");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("android.view.accessibility.AccessibilityNodeInfo");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_android_view_accessibility_AccessibilityNodeInfo);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_util_List(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::java_util_List result((AndroidCXX::java_util_List) *((AndroidCXX::java_util_List *) cxx_value));
	delete ((AndroidCXX::java_util_List *) cxx_value);
		
	LOGV("AndroidCXX::java_util_List android_view_accessibility_AccessibilityNodeProvider::findAccessibilityNodeInfosByText(AndroidCXX::java_lang_String const& arg0,int const& arg1) exit");

	return result;
}

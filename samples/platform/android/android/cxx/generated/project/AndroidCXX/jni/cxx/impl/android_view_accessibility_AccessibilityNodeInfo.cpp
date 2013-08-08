/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	
	
	
 		 
 		 
	
 		 
 		 
 		 
	
 		 
	
 		 
	
	
	
 		 
	
	
	
 		 
	
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 
	
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
	























































































// Generated Code 

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "android_view_accessibility_AccessibilityNodeInfo"
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
// 
// 
// 
// 

static long static_obj;
static long static_address = (long) &static_obj;

android_view_accessibility_AccessibilityNodeInfo::android_view_accessibility_AccessibilityNodeInfo(const android_view_accessibility_AccessibilityNodeInfo& cc)
{
	LOGV("android_view_accessibility_AccessibilityNodeInfo::android_view_accessibility_AccessibilityNodeInfo(const android_view_accessibility_AccessibilityNodeInfo& cc) enter");

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

	LOGV("android_view_accessibility_AccessibilityNodeInfo::android_view_accessibility_AccessibilityNodeInfo(const android_view_accessibility_AccessibilityNodeInfo& cc) exit");
}
android_view_accessibility_AccessibilityNodeInfo::android_view_accessibility_AccessibilityNodeInfo(Proxy proxy)
{
	LOGV("android_view_accessibility_AccessibilityNodeInfo::android_view_accessibility_AccessibilityNodeInfo(Proxy proxy) enter");

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

	LOGV("android_view_accessibility_AccessibilityNodeInfo::android_view_accessibility_AccessibilityNodeInfo(Proxy proxy) exit");
}
Proxy android_view_accessibility_AccessibilityNodeInfo::proxy() const
{	
	LOGV("android_view_accessibility_AccessibilityNodeInfo::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("android_view_accessibility_AccessibilityNodeInfo::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
android_view_accessibility_AccessibilityNodeInfo::~android_view_accessibility_AccessibilityNodeInfo()
{
	LOGV("android_view_accessibility_AccessibilityNodeInfo::~android_view_accessibility_AccessibilityNodeInfo() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("android_view_accessibility_AccessibilityNodeInfo::~android_view_accessibility_AccessibilityNodeInfo() exit");
}
// Functions
bool android_view_accessibility_AccessibilityNodeInfo::equals(AndroidCXX::java_lang_Object const& arg0)
{
	LOGV("bool android_view_accessibility_AccessibilityNodeInfo::equals(AndroidCXX::java_lang_Object const& arg0) enter");

	const char *methodName = "equals";
	const char *methodSignature = "(Ljava/lang/Object;)Z";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

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

	bool result = (bool) *((bool *) cxx_value);
	// 
		
	LOGV("bool android_view_accessibility_AccessibilityNodeInfo::equals(AndroidCXX::java_lang_Object const& arg0) exit");

	return result;
}
AndroidCXX::java_lang_String android_view_accessibility_AccessibilityNodeInfo::toString()
{
	LOGV("AndroidCXX::java_lang_String android_view_accessibility_AccessibilityNodeInfo::toString() enter");

	const char *methodName = "toString";
	const char *methodSignature = "()Ljava/lang/String;";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);


	jstring jni_result = (jstring) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni_string_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.lang.String");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_lang_String(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::java_lang_String result((AndroidCXX::java_lang_String) *((AndroidCXX::java_lang_String *) cxx_value));
	delete ((AndroidCXX::java_lang_String *) cxx_value);
		
	LOGV("AndroidCXX::java_lang_String android_view_accessibility_AccessibilityNodeInfo::toString() exit");

	return result;
}
int android_view_accessibility_AccessibilityNodeInfo::hashCode()
{
	LOGV("int android_view_accessibility_AccessibilityNodeInfo::hashCode() enter");

	const char *methodName = "hashCode";
	const char *methodSignature = "()I";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);


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

	int result = (int) *((int *) cxx_value);
	// 
		
	LOGV("int android_view_accessibility_AccessibilityNodeInfo::hashCode() exit");

	return result;
}
AndroidCXX::android_view_accessibility_AccessibilityNodeInfo android_view_accessibility_AccessibilityNodeInfo::getParent()
{
	LOGV("AndroidCXX::android_view_accessibility_AccessibilityNodeInfo android_view_accessibility_AccessibilityNodeInfo::getParent() enter");

	const char *methodName = "getParent";
	const char *methodSignature = "()Landroid/view/accessibility/AccessibilityNodeInfo;";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("android.view.accessibility.AccessibilityNodeInfo");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_view_accessibility_AccessibilityNodeInfo(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_view_accessibility_AccessibilityNodeInfo result((AndroidCXX::android_view_accessibility_AccessibilityNodeInfo) *((AndroidCXX::android_view_accessibility_AccessibilityNodeInfo *) cxx_value));
	delete ((AndroidCXX::android_view_accessibility_AccessibilityNodeInfo *) cxx_value);
		
	LOGV("AndroidCXX::android_view_accessibility_AccessibilityNodeInfo android_view_accessibility_AccessibilityNodeInfo::getParent() exit");

	return result;
}
int android_view_accessibility_AccessibilityNodeInfo::getActions()
{
	LOGV("int android_view_accessibility_AccessibilityNodeInfo::getActions() enter");

	const char *methodName = "getActions";
	const char *methodSignature = "()I";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);


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

	int result = (int) *((int *) cxx_value);
	// 
		
	LOGV("int android_view_accessibility_AccessibilityNodeInfo::getActions() exit");

	return result;
}
AndroidCXX::java_lang_CharSequence android_view_accessibility_AccessibilityNodeInfo::getClassName()
{
	LOGV("AndroidCXX::java_lang_CharSequence android_view_accessibility_AccessibilityNodeInfo::getClassName() enter");

	const char *methodName = "getClassName";
	const char *methodSignature = "()Ljava/lang/CharSequence;";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("java.lang.CharSequence");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_lang_CharSequence(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::java_lang_CharSequence result((AndroidCXX::java_lang_CharSequence) *((AndroidCXX::java_lang_CharSequence *) cxx_value));
	delete ((AndroidCXX::java_lang_CharSequence *) cxx_value);
		
	LOGV("AndroidCXX::java_lang_CharSequence android_view_accessibility_AccessibilityNodeInfo::getClassName() exit");

	return result;
}
void android_view_accessibility_AccessibilityNodeInfo::setParent(AndroidCXX::android_view_View const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setParent(AndroidCXX::android_view_View const& arg0) enter");

	const char *methodName = "setParent";
	const char *methodSignature = "(Landroid/view/View;)V";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.View");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_view_View(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setParent(AndroidCXX::android_view_View const& arg0) exit");

}
void android_view_accessibility_AccessibilityNodeInfo::setParent(AndroidCXX::android_view_View const& arg0,int const& arg1)
{
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setParent(AndroidCXX::android_view_View const& arg0,int const& arg1) enter");

	const char *methodName = "setParent";
	const char *methodSignature = "(Landroid/view/View;I)V";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.View");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_view_View(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
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

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1);
		
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setParent(AndroidCXX::android_view_View const& arg0,int const& arg1) exit");

}
AndroidCXX::java_lang_CharSequence android_view_accessibility_AccessibilityNodeInfo::getPackageName()
{
	LOGV("AndroidCXX::java_lang_CharSequence android_view_accessibility_AccessibilityNodeInfo::getPackageName() enter");

	const char *methodName = "getPackageName";
	const char *methodSignature = "()Ljava/lang/CharSequence;";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("java.lang.CharSequence");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_lang_CharSequence(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::java_lang_CharSequence result((AndroidCXX::java_lang_CharSequence) *((AndroidCXX::java_lang_CharSequence *) cxx_value));
	delete ((AndroidCXX::java_lang_CharSequence *) cxx_value);
		
	LOGV("AndroidCXX::java_lang_CharSequence android_view_accessibility_AccessibilityNodeInfo::getPackageName() exit");

	return result;
}
void android_view_accessibility_AccessibilityNodeInfo::setText(AndroidCXX::java_lang_CharSequence const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setText(AndroidCXX::java_lang_CharSequence const& arg0) enter");

	const char *methodName = "setText";
	const char *methodSignature = "(Ljava/lang/CharSequence;)V";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

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

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setText(AndroidCXX::java_lang_CharSequence const& arg0) exit");

}
bool android_view_accessibility_AccessibilityNodeInfo::refresh()
{
	LOGV("bool android_view_accessibility_AccessibilityNodeInfo::refresh() enter");

	const char *methodName = "refresh";
	const char *methodSignature = "()Z";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);


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

	bool result = (bool) *((bool *) cxx_value);
	// 
		
	LOGV("bool android_view_accessibility_AccessibilityNodeInfo::refresh() exit");

	return result;
}
int android_view_accessibility_AccessibilityNodeInfo::describeContents()
{
	LOGV("int android_view_accessibility_AccessibilityNodeInfo::describeContents() enter");

	const char *methodName = "describeContents";
	const char *methodSignature = "()I";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);


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

	int result = (int) *((int *) cxx_value);
	// 
		
	LOGV("int android_view_accessibility_AccessibilityNodeInfo::describeContents() exit");

	return result;
}
void android_view_accessibility_AccessibilityNodeInfo::writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1)
{
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) enter");

	const char *methodName = "writeToParcel";
	const char *methodSignature = "(Landroid/os/Parcel;I)V";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.os.Parcel");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_os_Parcel(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
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

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1);
		
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) exit");

}
AndroidCXX::android_view_accessibility_AccessibilityNodeInfo android_view_accessibility_AccessibilityNodeInfo::obtain(AndroidCXX::android_view_View const& arg0,int const& arg1)
{
	LOGV("AndroidCXX::android_view_accessibility_AccessibilityNodeInfo android_view_accessibility_AccessibilityNodeInfo::obtain(AndroidCXX::android_view_View const& arg0,int const& arg1) enter");

	const char *methodName = "obtain";
	const char *methodSignature = "(Landroid/view/View;I)Landroid/view/accessibility/AccessibilityNodeInfo;";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) static_address; // _static function
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.View");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_view_View(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
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

	jobject jni_result = (jobject) jni->invokeStaticObjectMethod(className,methodName,methodSignature,jarg0,jarg1);
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
		
	LOGV("AndroidCXX::android_view_accessibility_AccessibilityNodeInfo android_view_accessibility_AccessibilityNodeInfo::obtain(AndroidCXX::android_view_View const& arg0,int const& arg1) exit");

	return result;
}
AndroidCXX::android_view_accessibility_AccessibilityNodeInfo android_view_accessibility_AccessibilityNodeInfo::obtain(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0)
{
	LOGV("AndroidCXX::android_view_accessibility_AccessibilityNodeInfo android_view_accessibility_AccessibilityNodeInfo::obtain(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) enter");

	const char *methodName = "obtain";
	const char *methodSignature = "(Landroid/view/accessibility/AccessibilityNodeInfo;)Landroid/view/accessibility/AccessibilityNodeInfo;";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) static_address; // _static function
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.accessibility.AccessibilityNodeInfo");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_view_accessibility_AccessibilityNodeInfo(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jobject jni_result = (jobject) jni->invokeStaticObjectMethod(className,methodName,methodSignature,jarg0);
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
		
	LOGV("AndroidCXX::android_view_accessibility_AccessibilityNodeInfo android_view_accessibility_AccessibilityNodeInfo::obtain(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) exit");

	return result;
}
AndroidCXX::android_view_accessibility_AccessibilityNodeInfo android_view_accessibility_AccessibilityNodeInfo::obtain(AndroidCXX::android_view_View const& arg0)
{
	LOGV("AndroidCXX::android_view_accessibility_AccessibilityNodeInfo android_view_accessibility_AccessibilityNodeInfo::obtain(AndroidCXX::android_view_View const& arg0) enter");

	const char *methodName = "obtain";
	const char *methodSignature = "(Landroid/view/View;)Landroid/view/accessibility/AccessibilityNodeInfo;";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) static_address; // _static function
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.View");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_view_View(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jobject jni_result = (jobject) jni->invokeStaticObjectMethod(className,methodName,methodSignature,jarg0);
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
		
	LOGV("AndroidCXX::android_view_accessibility_AccessibilityNodeInfo android_view_accessibility_AccessibilityNodeInfo::obtain(AndroidCXX::android_view_View const& arg0) exit");

	return result;
}
AndroidCXX::android_view_accessibility_AccessibilityNodeInfo android_view_accessibility_AccessibilityNodeInfo::obtain()
{
	LOGV("AndroidCXX::android_view_accessibility_AccessibilityNodeInfo android_view_accessibility_AccessibilityNodeInfo::obtain() enter");

	const char *methodName = "obtain";
	const char *methodSignature = "()Landroid/view/accessibility/AccessibilityNodeInfo;";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) static_address; // _static function
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);


	jobject jni_result = (jobject) jni->invokeStaticObjectMethod(className,methodName,methodSignature);
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
		
	LOGV("AndroidCXX::android_view_accessibility_AccessibilityNodeInfo android_view_accessibility_AccessibilityNodeInfo::obtain() exit");

	return result;
}
void android_view_accessibility_AccessibilityNodeInfo::recycle()
{
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::recycle() enter");

	const char *methodName = "recycle";
	const char *methodSignature = "()V";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::recycle() exit");

}
AndroidCXX::java_lang_CharSequence android_view_accessibility_AccessibilityNodeInfo::getText()
{
	LOGV("AndroidCXX::java_lang_CharSequence android_view_accessibility_AccessibilityNodeInfo::getText() enter");

	const char *methodName = "getText";
	const char *methodSignature = "()Ljava/lang/CharSequence;";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("java.lang.CharSequence");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_lang_CharSequence(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::java_lang_CharSequence result((AndroidCXX::java_lang_CharSequence) *((AndroidCXX::java_lang_CharSequence *) cxx_value));
	delete ((AndroidCXX::java_lang_CharSequence *) cxx_value);
		
	LOGV("AndroidCXX::java_lang_CharSequence android_view_accessibility_AccessibilityNodeInfo::getText() exit");

	return result;
}
bool android_view_accessibility_AccessibilityNodeInfo::isVisibleToUser()
{
	LOGV("bool android_view_accessibility_AccessibilityNodeInfo::isVisibleToUser() enter");

	const char *methodName = "isVisibleToUser";
	const char *methodSignature = "()Z";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);


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

	bool result = (bool) *((bool *) cxx_value);
	// 
		
	LOGV("bool android_view_accessibility_AccessibilityNodeInfo::isVisibleToUser() exit");

	return result;
}
bool android_view_accessibility_AccessibilityNodeInfo::isFocusable()
{
	LOGV("bool android_view_accessibility_AccessibilityNodeInfo::isFocusable() enter");

	const char *methodName = "isFocusable";
	const char *methodSignature = "()Z";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);


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

	bool result = (bool) *((bool *) cxx_value);
	// 
		
	LOGV("bool android_view_accessibility_AccessibilityNodeInfo::isFocusable() exit");

	return result;
}
bool android_view_accessibility_AccessibilityNodeInfo::isEnabled()
{
	LOGV("bool android_view_accessibility_AccessibilityNodeInfo::isEnabled() enter");

	const char *methodName = "isEnabled";
	const char *methodSignature = "()Z";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);


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

	bool result = (bool) *((bool *) cxx_value);
	// 
		
	LOGV("bool android_view_accessibility_AccessibilityNodeInfo::isEnabled() exit");

	return result;
}
bool android_view_accessibility_AccessibilityNodeInfo::isClickable()
{
	LOGV("bool android_view_accessibility_AccessibilityNodeInfo::isClickable() enter");

	const char *methodName = "isClickable";
	const char *methodSignature = "()Z";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);


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

	bool result = (bool) *((bool *) cxx_value);
	// 
		
	LOGV("bool android_view_accessibility_AccessibilityNodeInfo::isClickable() exit");

	return result;
}
bool android_view_accessibility_AccessibilityNodeInfo::isLongClickable()
{
	LOGV("bool android_view_accessibility_AccessibilityNodeInfo::isLongClickable() enter");

	const char *methodName = "isLongClickable";
	const char *methodSignature = "()Z";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);


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

	bool result = (bool) *((bool *) cxx_value);
	// 
		
	LOGV("bool android_view_accessibility_AccessibilityNodeInfo::isLongClickable() exit");

	return result;
}
bool android_view_accessibility_AccessibilityNodeInfo::isFocused()
{
	LOGV("bool android_view_accessibility_AccessibilityNodeInfo::isFocused() enter");

	const char *methodName = "isFocused";
	const char *methodSignature = "()Z";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);


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

	bool result = (bool) *((bool *) cxx_value);
	// 
		
	LOGV("bool android_view_accessibility_AccessibilityNodeInfo::isFocused() exit");

	return result;
}
bool android_view_accessibility_AccessibilityNodeInfo::isSelected()
{
	LOGV("bool android_view_accessibility_AccessibilityNodeInfo::isSelected() enter");

	const char *methodName = "isSelected";
	const char *methodSignature = "()Z";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);


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

	bool result = (bool) *((bool *) cxx_value);
	// 
		
	LOGV("bool android_view_accessibility_AccessibilityNodeInfo::isSelected() exit");

	return result;
}
int android_view_accessibility_AccessibilityNodeInfo::getChildCount()
{
	LOGV("int android_view_accessibility_AccessibilityNodeInfo::getChildCount() enter");

	const char *methodName = "getChildCount";
	const char *methodSignature = "()I";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);


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

	int result = (int) *((int *) cxx_value);
	// 
		
	LOGV("int android_view_accessibility_AccessibilityNodeInfo::getChildCount() exit");

	return result;
}
void android_view_accessibility_AccessibilityNodeInfo::setClassName(AndroidCXX::java_lang_CharSequence const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setClassName(AndroidCXX::java_lang_CharSequence const& arg0) enter");

	const char *methodName = "setClassName";
	const char *methodSignature = "(Ljava/lang/CharSequence;)V";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

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

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setClassName(AndroidCXX::java_lang_CharSequence const& arg0) exit");

}
AndroidCXX::android_view_accessibility_AccessibilityNodeInfo android_view_accessibility_AccessibilityNodeInfo::focusSearch(int const& arg0)
{
	LOGV("AndroidCXX::android_view_accessibility_AccessibilityNodeInfo android_view_accessibility_AccessibilityNodeInfo::focusSearch(int const& arg0) enter");

	const char *methodName = "focusSearch";
	const char *methodSignature = "(I)Landroid/view/accessibility/AccessibilityNodeInfo;";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

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
		
	LOGV("AndroidCXX::android_view_accessibility_AccessibilityNodeInfo android_view_accessibility_AccessibilityNodeInfo::focusSearch(int const& arg0) exit");

	return result;
}
AndroidCXX::android_view_accessibility_AccessibilityNodeInfo android_view_accessibility_AccessibilityNodeInfo::findFocus(int const& arg0)
{
	LOGV("AndroidCXX::android_view_accessibility_AccessibilityNodeInfo android_view_accessibility_AccessibilityNodeInfo::findFocus(int const& arg0) enter");

	const char *methodName = "findFocus";
	const char *methodSignature = "(I)Landroid/view/accessibility/AccessibilityNodeInfo;";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

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
		
	LOGV("AndroidCXX::android_view_accessibility_AccessibilityNodeInfo android_view_accessibility_AccessibilityNodeInfo::findFocus(int const& arg0) exit");

	return result;
}
AndroidCXX::java_lang_CharSequence android_view_accessibility_AccessibilityNodeInfo::getContentDescription()
{
	LOGV("AndroidCXX::java_lang_CharSequence android_view_accessibility_AccessibilityNodeInfo::getContentDescription() enter");

	const char *methodName = "getContentDescription";
	const char *methodSignature = "()Ljava/lang/CharSequence;";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("java.lang.CharSequence");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_lang_CharSequence(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::java_lang_CharSequence result((AndroidCXX::java_lang_CharSequence) *((AndroidCXX::java_lang_CharSequence *) cxx_value));
	delete ((AndroidCXX::java_lang_CharSequence *) cxx_value);
		
	LOGV("AndroidCXX::java_lang_CharSequence android_view_accessibility_AccessibilityNodeInfo::getContentDescription() exit");

	return result;
}
void android_view_accessibility_AccessibilityNodeInfo::setContentDescription(AndroidCXX::java_lang_CharSequence const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setContentDescription(AndroidCXX::java_lang_CharSequence const& arg0) enter");

	const char *methodName = "setContentDescription";
	const char *methodSignature = "(Ljava/lang/CharSequence;)V";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

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

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setContentDescription(AndroidCXX::java_lang_CharSequence const& arg0) exit");

}
AndroidCXX::android_view_accessibility_AccessibilityNodeInfo android_view_accessibility_AccessibilityNodeInfo::getLabelFor()
{
	LOGV("AndroidCXX::android_view_accessibility_AccessibilityNodeInfo android_view_accessibility_AccessibilityNodeInfo::getLabelFor() enter");

	const char *methodName = "getLabelFor";
	const char *methodSignature = "()Landroid/view/accessibility/AccessibilityNodeInfo;";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("android.view.accessibility.AccessibilityNodeInfo");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_view_accessibility_AccessibilityNodeInfo(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_view_accessibility_AccessibilityNodeInfo result((AndroidCXX::android_view_accessibility_AccessibilityNodeInfo) *((AndroidCXX::android_view_accessibility_AccessibilityNodeInfo *) cxx_value));
	delete ((AndroidCXX::android_view_accessibility_AccessibilityNodeInfo *) cxx_value);
		
	LOGV("AndroidCXX::android_view_accessibility_AccessibilityNodeInfo android_view_accessibility_AccessibilityNodeInfo::getLabelFor() exit");

	return result;
}
void android_view_accessibility_AccessibilityNodeInfo::setLabelFor(AndroidCXX::android_view_View const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setLabelFor(AndroidCXX::android_view_View const& arg0) enter");

	const char *methodName = "setLabelFor";
	const char *methodSignature = "(Landroid/view/View;)V";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.View");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_view_View(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setLabelFor(AndroidCXX::android_view_View const& arg0) exit");

}
void android_view_accessibility_AccessibilityNodeInfo::setLabelFor(AndroidCXX::android_view_View const& arg0,int const& arg1)
{
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setLabelFor(AndroidCXX::android_view_View const& arg0,int const& arg1) enter");

	const char *methodName = "setLabelFor";
	const char *methodSignature = "(Landroid/view/View;I)V";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.View");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_view_View(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
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

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1);
		
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setLabelFor(AndroidCXX::android_view_View const& arg0,int const& arg1) exit");

}
void android_view_accessibility_AccessibilityNodeInfo::setEnabled(bool const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setEnabled(bool const& arg0) enter");

	const char *methodName = "setEnabled";
	const char *methodSignature = "(Z)V";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

	jboolean jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("boolean");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_boolean(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_boolean_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setEnabled(bool const& arg0) exit");

}
void android_view_accessibility_AccessibilityNodeInfo::setFocusable(bool const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setFocusable(bool const& arg0) enter");

	const char *methodName = "setFocusable";
	const char *methodSignature = "(Z)V";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

	jboolean jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("boolean");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_boolean(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_boolean_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setFocusable(bool const& arg0) exit");

}
void android_view_accessibility_AccessibilityNodeInfo::setClickable(bool const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setClickable(bool const& arg0) enter");

	const char *methodName = "setClickable";
	const char *methodSignature = "(Z)V";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

	jboolean jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("boolean");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_boolean(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_boolean_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setClickable(bool const& arg0) exit");

}
void android_view_accessibility_AccessibilityNodeInfo::setLongClickable(bool const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setLongClickable(bool const& arg0) enter");

	const char *methodName = "setLongClickable";
	const char *methodSignature = "(Z)V";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

	jboolean jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("boolean");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_boolean(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_boolean_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setLongClickable(bool const& arg0) exit");

}
int android_view_accessibility_AccessibilityNodeInfo::getWindowId()
{
	LOGV("int android_view_accessibility_AccessibilityNodeInfo::getWindowId() enter");

	const char *methodName = "getWindowId";
	const char *methodSignature = "()I";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);


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

	int result = (int) *((int *) cxx_value);
	// 
		
	LOGV("int android_view_accessibility_AccessibilityNodeInfo::getWindowId() exit");

	return result;
}
void android_view_accessibility_AccessibilityNodeInfo::setSelected(bool const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setSelected(bool const& arg0) enter");

	const char *methodName = "setSelected";
	const char *methodSignature = "(Z)V";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

	jboolean jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("boolean");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_boolean(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_boolean_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setSelected(bool const& arg0) exit");

}
void android_view_accessibility_AccessibilityNodeInfo::setCheckable(bool const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setCheckable(bool const& arg0) enter");

	const char *methodName = "setCheckable";
	const char *methodSignature = "(Z)V";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

	jboolean jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("boolean");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_boolean(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_boolean_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setCheckable(bool const& arg0) exit");

}
bool android_view_accessibility_AccessibilityNodeInfo::isCheckable()
{
	LOGV("bool android_view_accessibility_AccessibilityNodeInfo::isCheckable() enter");

	const char *methodName = "isCheckable";
	const char *methodSignature = "()Z";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);


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

	bool result = (bool) *((bool *) cxx_value);
	// 
		
	LOGV("bool android_view_accessibility_AccessibilityNodeInfo::isCheckable() exit");

	return result;
}
void android_view_accessibility_AccessibilityNodeInfo::setChecked(bool const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setChecked(bool const& arg0) enter");

	const char *methodName = "setChecked";
	const char *methodSignature = "(Z)V";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

	jboolean jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("boolean");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_boolean(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_boolean_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setChecked(bool const& arg0) exit");

}
bool android_view_accessibility_AccessibilityNodeInfo::isChecked()
{
	LOGV("bool android_view_accessibility_AccessibilityNodeInfo::isChecked() enter");

	const char *methodName = "isChecked";
	const char *methodSignature = "()Z";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);


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

	bool result = (bool) *((bool *) cxx_value);
	// 
		
	LOGV("bool android_view_accessibility_AccessibilityNodeInfo::isChecked() exit");

	return result;
}
void android_view_accessibility_AccessibilityNodeInfo::addAction(int const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::addAction(int const& arg0) enter");

	const char *methodName = "addAction";
	const char *methodSignature = "(I)V";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

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

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::addAction(int const& arg0) exit");

}
void android_view_accessibility_AccessibilityNodeInfo::setSource(AndroidCXX::android_view_View const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setSource(AndroidCXX::android_view_View const& arg0) enter");

	const char *methodName = "setSource";
	const char *methodSignature = "(Landroid/view/View;)V";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.View");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_view_View(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setSource(AndroidCXX::android_view_View const& arg0) exit");

}
void android_view_accessibility_AccessibilityNodeInfo::setSource(AndroidCXX::android_view_View const& arg0,int const& arg1)
{
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setSource(AndroidCXX::android_view_View const& arg0,int const& arg1) enter");

	const char *methodName = "setSource";
	const char *methodSignature = "(Landroid/view/View;I)V";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.View");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_view_View(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
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

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1);
		
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setSource(AndroidCXX::android_view_View const& arg0,int const& arg1) exit");

}
void android_view_accessibility_AccessibilityNodeInfo::setPackageName(AndroidCXX::java_lang_CharSequence const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setPackageName(AndroidCXX::java_lang_CharSequence const& arg0) enter");

	const char *methodName = "setPackageName";
	const char *methodSignature = "(Ljava/lang/CharSequence;)V";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

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

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setPackageName(AndroidCXX::java_lang_CharSequence const& arg0) exit");

}
bool android_view_accessibility_AccessibilityNodeInfo::isPassword()
{
	LOGV("bool android_view_accessibility_AccessibilityNodeInfo::isPassword() enter");

	const char *methodName = "isPassword";
	const char *methodSignature = "()Z";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);


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

	bool result = (bool) *((bool *) cxx_value);
	// 
		
	LOGV("bool android_view_accessibility_AccessibilityNodeInfo::isPassword() exit");

	return result;
}
void android_view_accessibility_AccessibilityNodeInfo::setPassword(bool const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setPassword(bool const& arg0) enter");

	const char *methodName = "setPassword";
	const char *methodSignature = "(Z)V";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

	jboolean jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("boolean");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_boolean(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_boolean_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setPassword(bool const& arg0) exit");

}
bool android_view_accessibility_AccessibilityNodeInfo::isScrollable()
{
	LOGV("bool android_view_accessibility_AccessibilityNodeInfo::isScrollable() enter");

	const char *methodName = "isScrollable";
	const char *methodSignature = "()Z";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);


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

	bool result = (bool) *((bool *) cxx_value);
	// 
		
	LOGV("bool android_view_accessibility_AccessibilityNodeInfo::isScrollable() exit");

	return result;
}
void android_view_accessibility_AccessibilityNodeInfo::setScrollable(bool const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setScrollable(bool const& arg0) enter");

	const char *methodName = "setScrollable";
	const char *methodSignature = "(Z)V";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

	jboolean jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("boolean");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_boolean(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_boolean_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setScrollable(bool const& arg0) exit");

}
AndroidCXX::android_view_accessibility_AccessibilityNodeInfo android_view_accessibility_AccessibilityNodeInfo::getChild(int const& arg0)
{
	LOGV("AndroidCXX::android_view_accessibility_AccessibilityNodeInfo android_view_accessibility_AccessibilityNodeInfo::getChild(int const& arg0) enter");

	const char *methodName = "getChild";
	const char *methodSignature = "(I)Landroid/view/accessibility/AccessibilityNodeInfo;";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

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
		
	LOGV("AndroidCXX::android_view_accessibility_AccessibilityNodeInfo android_view_accessibility_AccessibilityNodeInfo::getChild(int const& arg0) exit");

	return result;
}
void android_view_accessibility_AccessibilityNodeInfo::addChild(AndroidCXX::android_view_View const& arg0,int const& arg1)
{
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::addChild(AndroidCXX::android_view_View const& arg0,int const& arg1) enter");

	const char *methodName = "addChild";
	const char *methodSignature = "(Landroid/view/View;I)V";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.View");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_view_View(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
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

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1);
		
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::addChild(AndroidCXX::android_view_View const& arg0,int const& arg1) exit");

}
void android_view_accessibility_AccessibilityNodeInfo::addChild(AndroidCXX::android_view_View const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::addChild(AndroidCXX::android_view_View const& arg0) enter");

	const char *methodName = "addChild";
	const char *methodSignature = "(Landroid/view/View;)V";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.View");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_view_View(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::addChild(AndroidCXX::android_view_View const& arg0) exit");

}
void android_view_accessibility_AccessibilityNodeInfo::setMovementGranularities(int const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setMovementGranularities(int const& arg0) enter");

	const char *methodName = "setMovementGranularities";
	const char *methodSignature = "(I)V";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

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

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setMovementGranularities(int const& arg0) exit");

}
int android_view_accessibility_AccessibilityNodeInfo::getMovementGranularities()
{
	LOGV("int android_view_accessibility_AccessibilityNodeInfo::getMovementGranularities() enter");

	const char *methodName = "getMovementGranularities";
	const char *methodSignature = "()I";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);


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

	int result = (int) *((int *) cxx_value);
	// 
		
	LOGV("int android_view_accessibility_AccessibilityNodeInfo::getMovementGranularities() exit");

	return result;
}
bool android_view_accessibility_AccessibilityNodeInfo::performAction(int const& arg0)
{
	LOGV("bool android_view_accessibility_AccessibilityNodeInfo::performAction(int const& arg0) enter");

	const char *methodName = "performAction";
	const char *methodSignature = "(I)Z";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

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

	bool result = (bool) *((bool *) cxx_value);
	// 
		
	LOGV("bool android_view_accessibility_AccessibilityNodeInfo::performAction(int const& arg0) exit");

	return result;
}
bool android_view_accessibility_AccessibilityNodeInfo::performAction(int const& arg0,AndroidCXX::android_os_Bundle const& arg1)
{
	LOGV("bool android_view_accessibility_AccessibilityNodeInfo::performAction(int const& arg0,AndroidCXX::android_os_Bundle const& arg1) enter");

	const char *methodName = "performAction";
	const char *methodSignature = "(ILandroid/os/Bundle;)Z";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.os.Bundle");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_os_Bundle(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jboolean jni_result = (jboolean) jni->invokeBooleanMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1);
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
		
	LOGV("bool android_view_accessibility_AccessibilityNodeInfo::performAction(int const& arg0,AndroidCXX::android_os_Bundle const& arg1) exit");

	return result;
}
AndroidCXX::java_util_List android_view_accessibility_AccessibilityNodeInfo::findAccessibilityNodeInfosByText(AndroidCXX::java_lang_String const& arg0)
{
	LOGV("AndroidCXX::java_util_List android_view_accessibility_AccessibilityNodeInfo::findAccessibilityNodeInfosByText(AndroidCXX::java_lang_String const& arg0) enter");

	const char *methodName = "findAccessibilityNodeInfosByText";
	const char *methodSignature = "(Ljava/lang/String;)Ljava/util/List;";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

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
		
	LOGV("AndroidCXX::java_util_List android_view_accessibility_AccessibilityNodeInfo::findAccessibilityNodeInfosByText(AndroidCXX::java_lang_String const& arg0) exit");

	return result;
}
AndroidCXX::java_util_List android_view_accessibility_AccessibilityNodeInfo::findAccessibilityNodeInfosByViewId(AndroidCXX::java_lang_String const& arg0)
{
	LOGV("AndroidCXX::java_util_List android_view_accessibility_AccessibilityNodeInfo::findAccessibilityNodeInfosByViewId(AndroidCXX::java_lang_String const& arg0) enter");

	const char *methodName = "findAccessibilityNodeInfosByViewId";
	const char *methodSignature = "(Ljava/lang/String;)Ljava/util/List;";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

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
		
	LOGV("AndroidCXX::java_util_List android_view_accessibility_AccessibilityNodeInfo::findAccessibilityNodeInfosByViewId(AndroidCXX::java_lang_String const& arg0) exit");

	return result;
}
void android_view_accessibility_AccessibilityNodeInfo::getBoundsInParent(AndroidCXX::android_graphics_Rect const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::getBoundsInParent(AndroidCXX::android_graphics_Rect const& arg0) enter");

	const char *methodName = "getBoundsInParent";
	const char *methodSignature = "(Landroid/graphics/Rect;)V";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.graphics.Rect");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_graphics_Rect(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::getBoundsInParent(AndroidCXX::android_graphics_Rect const& arg0) exit");

}
void android_view_accessibility_AccessibilityNodeInfo::setBoundsInParent(AndroidCXX::android_graphics_Rect const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setBoundsInParent(AndroidCXX::android_graphics_Rect const& arg0) enter");

	const char *methodName = "setBoundsInParent";
	const char *methodSignature = "(Landroid/graphics/Rect;)V";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.graphics.Rect");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_graphics_Rect(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setBoundsInParent(AndroidCXX::android_graphics_Rect const& arg0) exit");

}
void android_view_accessibility_AccessibilityNodeInfo::getBoundsInScreen(AndroidCXX::android_graphics_Rect const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::getBoundsInScreen(AndroidCXX::android_graphics_Rect const& arg0) enter");

	const char *methodName = "getBoundsInScreen";
	const char *methodSignature = "(Landroid/graphics/Rect;)V";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.graphics.Rect");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_graphics_Rect(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::getBoundsInScreen(AndroidCXX::android_graphics_Rect const& arg0) exit");

}
void android_view_accessibility_AccessibilityNodeInfo::setBoundsInScreen(AndroidCXX::android_graphics_Rect const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setBoundsInScreen(AndroidCXX::android_graphics_Rect const& arg0) enter");

	const char *methodName = "setBoundsInScreen";
	const char *methodSignature = "(Landroid/graphics/Rect;)V";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.graphics.Rect");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_graphics_Rect(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setBoundsInScreen(AndroidCXX::android_graphics_Rect const& arg0) exit");

}
void android_view_accessibility_AccessibilityNodeInfo::setFocused(bool const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setFocused(bool const& arg0) enter");

	const char *methodName = "setFocused";
	const char *methodSignature = "(Z)V";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

	jboolean jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("boolean");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_boolean(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_boolean_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setFocused(bool const& arg0) exit");

}
void android_view_accessibility_AccessibilityNodeInfo::setVisibleToUser(bool const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setVisibleToUser(bool const& arg0) enter");

	const char *methodName = "setVisibleToUser";
	const char *methodSignature = "(Z)V";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

	jboolean jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("boolean");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_boolean(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_boolean_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setVisibleToUser(bool const& arg0) exit");

}
bool android_view_accessibility_AccessibilityNodeInfo::isAccessibilityFocused()
{
	LOGV("bool android_view_accessibility_AccessibilityNodeInfo::isAccessibilityFocused() enter");

	const char *methodName = "isAccessibilityFocused";
	const char *methodSignature = "()Z";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);


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

	bool result = (bool) *((bool *) cxx_value);
	// 
		
	LOGV("bool android_view_accessibility_AccessibilityNodeInfo::isAccessibilityFocused() exit");

	return result;
}
void android_view_accessibility_AccessibilityNodeInfo::setAccessibilityFocused(bool const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setAccessibilityFocused(bool const& arg0) enter");

	const char *methodName = "setAccessibilityFocused";
	const char *methodSignature = "(Z)V";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

	jboolean jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("boolean");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_boolean(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_boolean_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setAccessibilityFocused(bool const& arg0) exit");

}
bool android_view_accessibility_AccessibilityNodeInfo::isEditable()
{
	LOGV("bool android_view_accessibility_AccessibilityNodeInfo::isEditable() enter");

	const char *methodName = "isEditable";
	const char *methodSignature = "()Z";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);


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

	bool result = (bool) *((bool *) cxx_value);
	// 
		
	LOGV("bool android_view_accessibility_AccessibilityNodeInfo::isEditable() exit");

	return result;
}
void android_view_accessibility_AccessibilityNodeInfo::setEditable(bool const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setEditable(bool const& arg0) enter");

	const char *methodName = "setEditable";
	const char *methodSignature = "(Z)V";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

	jboolean jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("boolean");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_boolean(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_boolean_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setEditable(bool const& arg0) exit");

}
void android_view_accessibility_AccessibilityNodeInfo::setLabeledBy(AndroidCXX::android_view_View const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setLabeledBy(AndroidCXX::android_view_View const& arg0) enter");

	const char *methodName = "setLabeledBy";
	const char *methodSignature = "(Landroid/view/View;)V";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.View");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_view_View(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setLabeledBy(AndroidCXX::android_view_View const& arg0) exit");

}
void android_view_accessibility_AccessibilityNodeInfo::setLabeledBy(AndroidCXX::android_view_View const& arg0,int const& arg1)
{
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setLabeledBy(AndroidCXX::android_view_View const& arg0,int const& arg1) enter");

	const char *methodName = "setLabeledBy";
	const char *methodSignature = "(Landroid/view/View;I)V";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.View");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_view_View(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
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

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1);
		
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setLabeledBy(AndroidCXX::android_view_View const& arg0,int const& arg1) exit");

}
AndroidCXX::android_view_accessibility_AccessibilityNodeInfo android_view_accessibility_AccessibilityNodeInfo::getLabeledBy()
{
	LOGV("AndroidCXX::android_view_accessibility_AccessibilityNodeInfo android_view_accessibility_AccessibilityNodeInfo::getLabeledBy() enter");

	const char *methodName = "getLabeledBy";
	const char *methodSignature = "()Landroid/view/accessibility/AccessibilityNodeInfo;";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("android.view.accessibility.AccessibilityNodeInfo");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_view_accessibility_AccessibilityNodeInfo(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_view_accessibility_AccessibilityNodeInfo result((AndroidCXX::android_view_accessibility_AccessibilityNodeInfo) *((AndroidCXX::android_view_accessibility_AccessibilityNodeInfo *) cxx_value));
	delete ((AndroidCXX::android_view_accessibility_AccessibilityNodeInfo *) cxx_value);
		
	LOGV("AndroidCXX::android_view_accessibility_AccessibilityNodeInfo android_view_accessibility_AccessibilityNodeInfo::getLabeledBy() exit");

	return result;
}
void android_view_accessibility_AccessibilityNodeInfo::setViewIdResourceName(AndroidCXX::java_lang_String const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setViewIdResourceName(AndroidCXX::java_lang_String const& arg0) enter");

	const char *methodName = "setViewIdResourceName";
	const char *methodSignature = "(Ljava/lang/String;)V";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

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

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setViewIdResourceName(AndroidCXX::java_lang_String const& arg0) exit");

}
AndroidCXX::java_lang_String android_view_accessibility_AccessibilityNodeInfo::getViewIdResourceName()
{
	LOGV("AndroidCXX::java_lang_String android_view_accessibility_AccessibilityNodeInfo::getViewIdResourceName() enter");

	const char *methodName = "getViewIdResourceName";
	const char *methodSignature = "()Ljava/lang/String;";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);


	jstring jni_result = (jstring) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni_string_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.lang.String");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_lang_String(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::java_lang_String result((AndroidCXX::java_lang_String) *((AndroidCXX::java_lang_String *) cxx_value));
	delete ((AndroidCXX::java_lang_String *) cxx_value);
		
	LOGV("AndroidCXX::java_lang_String android_view_accessibility_AccessibilityNodeInfo::getViewIdResourceName() exit");

	return result;
}
int android_view_accessibility_AccessibilityNodeInfo::getTextSelectionStart()
{
	LOGV("int android_view_accessibility_AccessibilityNodeInfo::getTextSelectionStart() enter");

	const char *methodName = "getTextSelectionStart";
	const char *methodSignature = "()I";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);


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

	int result = (int) *((int *) cxx_value);
	// 
		
	LOGV("int android_view_accessibility_AccessibilityNodeInfo::getTextSelectionStart() exit");

	return result;
}
int android_view_accessibility_AccessibilityNodeInfo::getTextSelectionEnd()
{
	LOGV("int android_view_accessibility_AccessibilityNodeInfo::getTextSelectionEnd() enter");

	const char *methodName = "getTextSelectionEnd";
	const char *methodSignature = "()I";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);


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

	int result = (int) *((int *) cxx_value);
	// 
		
	LOGV("int android_view_accessibility_AccessibilityNodeInfo::getTextSelectionEnd() exit");

	return result;
}
void android_view_accessibility_AccessibilityNodeInfo::setTextSelection(int const& arg0,int const& arg1)
{
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setTextSelection(int const& arg0,int const& arg1) enter");

	const char *methodName = "setTextSelection";
	const char *methodSignature = "(II)V";
	const char *className = "android/view/accessibility/AccessibilityNodeInfo";

	LOGV("android_view_accessibility_AccessibilityNodeInfo className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityNodeInfo cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityNodeInfo jni address %d", javaObject);

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

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1);
		
	LOGV("void android_view_accessibility_AccessibilityNodeInfo::setTextSelection(int const& arg0,int const& arg1) exit");

}

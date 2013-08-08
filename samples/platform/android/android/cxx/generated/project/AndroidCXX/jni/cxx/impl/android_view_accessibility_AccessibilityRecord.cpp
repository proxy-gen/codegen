/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
	
	
 		 
	
	
 		 
	
 		 
	
 		 
 		 
	
 		 
	
 		 






















































// Generated Code 

#include <android_view_accessibility_AccessibilityRecord.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "android_view_accessibility_AccessibilityRecord"
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

static long static_obj;
static long static_address = (long) &static_obj;

android_view_accessibility_AccessibilityRecord::android_view_accessibility_AccessibilityRecord(const android_view_accessibility_AccessibilityRecord& cc)
{
	LOGV("android_view_accessibility_AccessibilityRecord::android_view_accessibility_AccessibilityRecord(const android_view_accessibility_AccessibilityRecord& cc) enter");

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

	LOGV("android_view_accessibility_AccessibilityRecord::android_view_accessibility_AccessibilityRecord(const android_view_accessibility_AccessibilityRecord& cc) exit");
}
android_view_accessibility_AccessibilityRecord::android_view_accessibility_AccessibilityRecord(Proxy proxy)
{
	LOGV("android_view_accessibility_AccessibilityRecord::android_view_accessibility_AccessibilityRecord(Proxy proxy) enter");

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

	LOGV("android_view_accessibility_AccessibilityRecord::android_view_accessibility_AccessibilityRecord(Proxy proxy) exit");
}
Proxy android_view_accessibility_AccessibilityRecord::proxy() const
{	
	LOGV("android_view_accessibility_AccessibilityRecord::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("android_view_accessibility_AccessibilityRecord::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
android_view_accessibility_AccessibilityRecord::~android_view_accessibility_AccessibilityRecord()
{
	LOGV("android_view_accessibility_AccessibilityRecord::~android_view_accessibility_AccessibilityRecord() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("android_view_accessibility_AccessibilityRecord::~android_view_accessibility_AccessibilityRecord() exit");
}
// Functions
AndroidCXX::java_lang_String android_view_accessibility_AccessibilityRecord::toString()
{
	LOGV("AndroidCXX::java_lang_String android_view_accessibility_AccessibilityRecord::toString() enter");

	const char *methodName = "toString";
	const char *methodSignature = "()Ljava/lang/String;";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);


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
		
	LOGV("AndroidCXX::java_lang_String android_view_accessibility_AccessibilityRecord::toString() exit");

	return result;
}
AndroidCXX::java_lang_CharSequence android_view_accessibility_AccessibilityRecord::getClassName()
{
	LOGV("AndroidCXX::java_lang_CharSequence android_view_accessibility_AccessibilityRecord::getClassName() enter");

	const char *methodName = "getClassName";
	const char *methodSignature = "()Ljava/lang/CharSequence;";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);


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
		
	LOGV("AndroidCXX::java_lang_CharSequence android_view_accessibility_AccessibilityRecord::getClassName() exit");

	return result;
}
AndroidCXX::android_view_accessibility_AccessibilityRecord android_view_accessibility_AccessibilityRecord::obtain()
{
	LOGV("AndroidCXX::android_view_accessibility_AccessibilityRecord android_view_accessibility_AccessibilityRecord::obtain() enter");

	const char *methodName = "obtain";
	const char *methodSignature = "()Landroid/view/accessibility/AccessibilityRecord;";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) static_address; // _static function
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("android.view.accessibility.AccessibilityRecord");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_view_accessibility_AccessibilityRecord(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_view_accessibility_AccessibilityRecord result((AndroidCXX::android_view_accessibility_AccessibilityRecord) *((AndroidCXX::android_view_accessibility_AccessibilityRecord *) cxx_value));
	delete ((AndroidCXX::android_view_accessibility_AccessibilityRecord *) cxx_value);
		
	LOGV("AndroidCXX::android_view_accessibility_AccessibilityRecord android_view_accessibility_AccessibilityRecord::obtain() exit");

	return result;
}
AndroidCXX::android_view_accessibility_AccessibilityRecord android_view_accessibility_AccessibilityRecord::obtain(AndroidCXX::android_view_accessibility_AccessibilityRecord const& arg0)
{
	LOGV("AndroidCXX::android_view_accessibility_AccessibilityRecord android_view_accessibility_AccessibilityRecord::obtain(AndroidCXX::android_view_accessibility_AccessibilityRecord const& arg0) enter");

	const char *methodName = "obtain";
	const char *methodSignature = "(Landroid/view/accessibility/AccessibilityRecord;)Landroid/view/accessibility/AccessibilityRecord;";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) static_address; // _static function
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.accessibility.AccessibilityRecord");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_view_accessibility_AccessibilityRecord(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
			cxx_type_hierarchy.type_name = std::string("android.view.accessibility.AccessibilityRecord");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_view_accessibility_AccessibilityRecord(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_view_accessibility_AccessibilityRecord result((AndroidCXX::android_view_accessibility_AccessibilityRecord) *((AndroidCXX::android_view_accessibility_AccessibilityRecord *) cxx_value));
	delete ((AndroidCXX::android_view_accessibility_AccessibilityRecord *) cxx_value);
		
	LOGV("AndroidCXX::android_view_accessibility_AccessibilityRecord android_view_accessibility_AccessibilityRecord::obtain(AndroidCXX::android_view_accessibility_AccessibilityRecord const& arg0) exit");

	return result;
}
void android_view_accessibility_AccessibilityRecord::recycle()
{
	LOGV("void android_view_accessibility_AccessibilityRecord::recycle() enter");

	const char *methodName = "recycle";
	const char *methodSignature = "()V";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	LOGV("void android_view_accessibility_AccessibilityRecord::recycle() exit");

}
AndroidCXX::java_util_List android_view_accessibility_AccessibilityRecord::getText()
{
	LOGV("AndroidCXX::java_util_List android_view_accessibility_AccessibilityRecord::getText() enter");

	const char *methodName = "getText";
	const char *methodSignature = "()Ljava/util/List;";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("java.lang.CharSequence");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_java_lang_CharSequence);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_util_List(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::java_util_List result((AndroidCXX::java_util_List) *((AndroidCXX::java_util_List *) cxx_value));
	delete ((AndroidCXX::java_util_List *) cxx_value);
		
	LOGV("AndroidCXX::java_util_List android_view_accessibility_AccessibilityRecord::getText() exit");

	return result;
}
bool android_view_accessibility_AccessibilityRecord::isEnabled()
{
	LOGV("bool android_view_accessibility_AccessibilityRecord::isEnabled() enter");

	const char *methodName = "isEnabled";
	const char *methodSignature = "()Z";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);


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
		
	LOGV("bool android_view_accessibility_AccessibilityRecord::isEnabled() exit");

	return result;
}
void android_view_accessibility_AccessibilityRecord::setClassName(AndroidCXX::java_lang_CharSequence const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityRecord::setClassName(AndroidCXX::java_lang_CharSequence const& arg0) enter");

	const char *methodName = "setClassName";
	const char *methodSignature = "(Ljava/lang/CharSequence;)V";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);

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
		
	LOGV("void android_view_accessibility_AccessibilityRecord::setClassName(AndroidCXX::java_lang_CharSequence const& arg0) exit");

}
AndroidCXX::java_lang_CharSequence android_view_accessibility_AccessibilityRecord::getContentDescription()
{
	LOGV("AndroidCXX::java_lang_CharSequence android_view_accessibility_AccessibilityRecord::getContentDescription() enter");

	const char *methodName = "getContentDescription";
	const char *methodSignature = "()Ljava/lang/CharSequence;";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);


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
		
	LOGV("AndroidCXX::java_lang_CharSequence android_view_accessibility_AccessibilityRecord::getContentDescription() exit");

	return result;
}
void android_view_accessibility_AccessibilityRecord::setContentDescription(AndroidCXX::java_lang_CharSequence const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityRecord::setContentDescription(AndroidCXX::java_lang_CharSequence const& arg0) enter");

	const char *methodName = "setContentDescription";
	const char *methodSignature = "(Ljava/lang/CharSequence;)V";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);

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
		
	LOGV("void android_view_accessibility_AccessibilityRecord::setContentDescription(AndroidCXX::java_lang_CharSequence const& arg0) exit");

}
void android_view_accessibility_AccessibilityRecord::setEnabled(bool const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityRecord::setEnabled(bool const& arg0) enter");

	const char *methodName = "setEnabled";
	const char *methodSignature = "(Z)V";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);

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
		
	LOGV("void android_view_accessibility_AccessibilityRecord::setEnabled(bool const& arg0) exit");

}
void android_view_accessibility_AccessibilityRecord::setScrollX(int const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityRecord::setScrollX(int const& arg0) enter");

	const char *methodName = "setScrollX";
	const char *methodSignature = "(I)V";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);

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
		
	LOGV("void android_view_accessibility_AccessibilityRecord::setScrollX(int const& arg0) exit");

}
void android_view_accessibility_AccessibilityRecord::setScrollY(int const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityRecord::setScrollY(int const& arg0) enter");

	const char *methodName = "setScrollY";
	const char *methodSignature = "(I)V";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);

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
		
	LOGV("void android_view_accessibility_AccessibilityRecord::setScrollY(int const& arg0) exit");

}
int android_view_accessibility_AccessibilityRecord::getScrollX()
{
	LOGV("int android_view_accessibility_AccessibilityRecord::getScrollX() enter");

	const char *methodName = "getScrollX";
	const char *methodSignature = "()I";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);


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
		
	LOGV("int android_view_accessibility_AccessibilityRecord::getScrollX() exit");

	return result;
}
int android_view_accessibility_AccessibilityRecord::getScrollY()
{
	LOGV("int android_view_accessibility_AccessibilityRecord::getScrollY() enter");

	const char *methodName = "getScrollY";
	const char *methodSignature = "()I";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);


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
		
	LOGV("int android_view_accessibility_AccessibilityRecord::getScrollY() exit");

	return result;
}
int android_view_accessibility_AccessibilityRecord::getWindowId()
{
	LOGV("int android_view_accessibility_AccessibilityRecord::getWindowId() enter");

	const char *methodName = "getWindowId";
	const char *methodSignature = "()I";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);


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
		
	LOGV("int android_view_accessibility_AccessibilityRecord::getWindowId() exit");

	return result;
}
void android_view_accessibility_AccessibilityRecord::setChecked(bool const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityRecord::setChecked(bool const& arg0) enter");

	const char *methodName = "setChecked";
	const char *methodSignature = "(Z)V";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);

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
		
	LOGV("void android_view_accessibility_AccessibilityRecord::setChecked(bool const& arg0) exit");

}
bool android_view_accessibility_AccessibilityRecord::isChecked()
{
	LOGV("bool android_view_accessibility_AccessibilityRecord::isChecked() enter");

	const char *methodName = "isChecked";
	const char *methodSignature = "()Z";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);


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
		
	LOGV("bool android_view_accessibility_AccessibilityRecord::isChecked() exit");

	return result;
}
int android_view_accessibility_AccessibilityRecord::getItemCount()
{
	LOGV("int android_view_accessibility_AccessibilityRecord::getItemCount() enter");

	const char *methodName = "getItemCount";
	const char *methodSignature = "()I";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);


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
		
	LOGV("int android_view_accessibility_AccessibilityRecord::getItemCount() exit");

	return result;
}
AndroidCXX::android_view_accessibility_AccessibilityNodeInfo android_view_accessibility_AccessibilityRecord::getSource()
{
	LOGV("AndroidCXX::android_view_accessibility_AccessibilityNodeInfo android_view_accessibility_AccessibilityRecord::getSource() enter");

	const char *methodName = "getSource";
	const char *methodSignature = "()Landroid/view/accessibility/AccessibilityNodeInfo;";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);


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
		
	LOGV("AndroidCXX::android_view_accessibility_AccessibilityNodeInfo android_view_accessibility_AccessibilityRecord::getSource() exit");

	return result;
}
void android_view_accessibility_AccessibilityRecord::setSource(AndroidCXX::android_view_View const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityRecord::setSource(AndroidCXX::android_view_View const& arg0) enter");

	const char *methodName = "setSource";
	const char *methodSignature = "(Landroid/view/View;)V";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);

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
		
	LOGV("void android_view_accessibility_AccessibilityRecord::setSource(AndroidCXX::android_view_View const& arg0) exit");

}
void android_view_accessibility_AccessibilityRecord::setSource(AndroidCXX::android_view_View const& arg0,int const& arg1)
{
	LOGV("void android_view_accessibility_AccessibilityRecord::setSource(AndroidCXX::android_view_View const& arg0,int const& arg1) enter");

	const char *methodName = "setSource";
	const char *methodSignature = "(Landroid/view/View;I)V";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);

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
		
	LOGV("void android_view_accessibility_AccessibilityRecord::setSource(AndroidCXX::android_view_View const& arg0,int const& arg1) exit");

}
bool android_view_accessibility_AccessibilityRecord::isPassword()
{
	LOGV("bool android_view_accessibility_AccessibilityRecord::isPassword() enter");

	const char *methodName = "isPassword";
	const char *methodSignature = "()Z";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);


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
		
	LOGV("bool android_view_accessibility_AccessibilityRecord::isPassword() exit");

	return result;
}
void android_view_accessibility_AccessibilityRecord::setPassword(bool const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityRecord::setPassword(bool const& arg0) enter");

	const char *methodName = "setPassword";
	const char *methodSignature = "(Z)V";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);

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
		
	LOGV("void android_view_accessibility_AccessibilityRecord::setPassword(bool const& arg0) exit");

}
bool android_view_accessibility_AccessibilityRecord::isFullScreen()
{
	LOGV("bool android_view_accessibility_AccessibilityRecord::isFullScreen() enter");

	const char *methodName = "isFullScreen";
	const char *methodSignature = "()Z";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);


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
		
	LOGV("bool android_view_accessibility_AccessibilityRecord::isFullScreen() exit");

	return result;
}
void android_view_accessibility_AccessibilityRecord::setFullScreen(bool const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityRecord::setFullScreen(bool const& arg0) enter");

	const char *methodName = "setFullScreen";
	const char *methodSignature = "(Z)V";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);

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
		
	LOGV("void android_view_accessibility_AccessibilityRecord::setFullScreen(bool const& arg0) exit");

}
bool android_view_accessibility_AccessibilityRecord::isScrollable()
{
	LOGV("bool android_view_accessibility_AccessibilityRecord::isScrollable() enter");

	const char *methodName = "isScrollable";
	const char *methodSignature = "()Z";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);


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
		
	LOGV("bool android_view_accessibility_AccessibilityRecord::isScrollable() exit");

	return result;
}
void android_view_accessibility_AccessibilityRecord::setScrollable(bool const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityRecord::setScrollable(bool const& arg0) enter");

	const char *methodName = "setScrollable";
	const char *methodSignature = "(Z)V";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);

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
		
	LOGV("void android_view_accessibility_AccessibilityRecord::setScrollable(bool const& arg0) exit");

}
void android_view_accessibility_AccessibilityRecord::setItemCount(int const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityRecord::setItemCount(int const& arg0) enter");

	const char *methodName = "setItemCount";
	const char *methodSignature = "(I)V";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);

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
		
	LOGV("void android_view_accessibility_AccessibilityRecord::setItemCount(int const& arg0) exit");

}
int android_view_accessibility_AccessibilityRecord::getCurrentItemIndex()
{
	LOGV("int android_view_accessibility_AccessibilityRecord::getCurrentItemIndex() enter");

	const char *methodName = "getCurrentItemIndex";
	const char *methodSignature = "()I";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);


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
		
	LOGV("int android_view_accessibility_AccessibilityRecord::getCurrentItemIndex() exit");

	return result;
}
void android_view_accessibility_AccessibilityRecord::setCurrentItemIndex(int const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityRecord::setCurrentItemIndex(int const& arg0) enter");

	const char *methodName = "setCurrentItemIndex";
	const char *methodSignature = "(I)V";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);

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
		
	LOGV("void android_view_accessibility_AccessibilityRecord::setCurrentItemIndex(int const& arg0) exit");

}
int android_view_accessibility_AccessibilityRecord::getFromIndex()
{
	LOGV("int android_view_accessibility_AccessibilityRecord::getFromIndex() enter");

	const char *methodName = "getFromIndex";
	const char *methodSignature = "()I";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);


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
		
	LOGV("int android_view_accessibility_AccessibilityRecord::getFromIndex() exit");

	return result;
}
void android_view_accessibility_AccessibilityRecord::setFromIndex(int const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityRecord::setFromIndex(int const& arg0) enter");

	const char *methodName = "setFromIndex";
	const char *methodSignature = "(I)V";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);

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
		
	LOGV("void android_view_accessibility_AccessibilityRecord::setFromIndex(int const& arg0) exit");

}
int android_view_accessibility_AccessibilityRecord::getToIndex()
{
	LOGV("int android_view_accessibility_AccessibilityRecord::getToIndex() enter");

	const char *methodName = "getToIndex";
	const char *methodSignature = "()I";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);


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
		
	LOGV("int android_view_accessibility_AccessibilityRecord::getToIndex() exit");

	return result;
}
void android_view_accessibility_AccessibilityRecord::setToIndex(int const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityRecord::setToIndex(int const& arg0) enter");

	const char *methodName = "setToIndex";
	const char *methodSignature = "(I)V";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);

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
		
	LOGV("void android_view_accessibility_AccessibilityRecord::setToIndex(int const& arg0) exit");

}
int android_view_accessibility_AccessibilityRecord::getMaxScrollX()
{
	LOGV("int android_view_accessibility_AccessibilityRecord::getMaxScrollX() enter");

	const char *methodName = "getMaxScrollX";
	const char *methodSignature = "()I";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);


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
		
	LOGV("int android_view_accessibility_AccessibilityRecord::getMaxScrollX() exit");

	return result;
}
void android_view_accessibility_AccessibilityRecord::setMaxScrollX(int const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityRecord::setMaxScrollX(int const& arg0) enter");

	const char *methodName = "setMaxScrollX";
	const char *methodSignature = "(I)V";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);

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
		
	LOGV("void android_view_accessibility_AccessibilityRecord::setMaxScrollX(int const& arg0) exit");

}
int android_view_accessibility_AccessibilityRecord::getMaxScrollY()
{
	LOGV("int android_view_accessibility_AccessibilityRecord::getMaxScrollY() enter");

	const char *methodName = "getMaxScrollY";
	const char *methodSignature = "()I";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);


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
		
	LOGV("int android_view_accessibility_AccessibilityRecord::getMaxScrollY() exit");

	return result;
}
void android_view_accessibility_AccessibilityRecord::setMaxScrollY(int const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityRecord::setMaxScrollY(int const& arg0) enter");

	const char *methodName = "setMaxScrollY";
	const char *methodSignature = "(I)V";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);

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
		
	LOGV("void android_view_accessibility_AccessibilityRecord::setMaxScrollY(int const& arg0) exit");

}
int android_view_accessibility_AccessibilityRecord::getAddedCount()
{
	LOGV("int android_view_accessibility_AccessibilityRecord::getAddedCount() enter");

	const char *methodName = "getAddedCount";
	const char *methodSignature = "()I";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);


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
		
	LOGV("int android_view_accessibility_AccessibilityRecord::getAddedCount() exit");

	return result;
}
void android_view_accessibility_AccessibilityRecord::setAddedCount(int const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityRecord::setAddedCount(int const& arg0) enter");

	const char *methodName = "setAddedCount";
	const char *methodSignature = "(I)V";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);

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
		
	LOGV("void android_view_accessibility_AccessibilityRecord::setAddedCount(int const& arg0) exit");

}
int android_view_accessibility_AccessibilityRecord::getRemovedCount()
{
	LOGV("int android_view_accessibility_AccessibilityRecord::getRemovedCount() enter");

	const char *methodName = "getRemovedCount";
	const char *methodSignature = "()I";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);


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
		
	LOGV("int android_view_accessibility_AccessibilityRecord::getRemovedCount() exit");

	return result;
}
void android_view_accessibility_AccessibilityRecord::setRemovedCount(int const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityRecord::setRemovedCount(int const& arg0) enter");

	const char *methodName = "setRemovedCount";
	const char *methodSignature = "(I)V";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);

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
		
	LOGV("void android_view_accessibility_AccessibilityRecord::setRemovedCount(int const& arg0) exit");

}
AndroidCXX::java_lang_CharSequence android_view_accessibility_AccessibilityRecord::getBeforeText()
{
	LOGV("AndroidCXX::java_lang_CharSequence android_view_accessibility_AccessibilityRecord::getBeforeText() enter");

	const char *methodName = "getBeforeText";
	const char *methodSignature = "()Ljava/lang/CharSequence;";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);


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
		
	LOGV("AndroidCXX::java_lang_CharSequence android_view_accessibility_AccessibilityRecord::getBeforeText() exit");

	return result;
}
void android_view_accessibility_AccessibilityRecord::setBeforeText(AndroidCXX::java_lang_CharSequence const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityRecord::setBeforeText(AndroidCXX::java_lang_CharSequence const& arg0) enter");

	const char *methodName = "setBeforeText";
	const char *methodSignature = "(Ljava/lang/CharSequence;)V";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);

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
		
	LOGV("void android_view_accessibility_AccessibilityRecord::setBeforeText(AndroidCXX::java_lang_CharSequence const& arg0) exit");

}
AndroidCXX::android_os_Parcelable android_view_accessibility_AccessibilityRecord::getParcelableData()
{
	LOGV("AndroidCXX::android_os_Parcelable android_view_accessibility_AccessibilityRecord::getParcelableData() enter");

	const char *methodName = "getParcelableData";
	const char *methodSignature = "()Landroid/os/Parcelable;";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("android.os.Parcelable");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_os_Parcelable(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_os_Parcelable result((AndroidCXX::android_os_Parcelable) *((AndroidCXX::android_os_Parcelable *) cxx_value));
	delete ((AndroidCXX::android_os_Parcelable *) cxx_value);
		
	LOGV("AndroidCXX::android_os_Parcelable android_view_accessibility_AccessibilityRecord::getParcelableData() exit");

	return result;
}
void android_view_accessibility_AccessibilityRecord::setParcelableData(AndroidCXX::android_os_Parcelable const& arg0)
{
	LOGV("void android_view_accessibility_AccessibilityRecord::setParcelableData(AndroidCXX::android_os_Parcelable const& arg0) enter");

	const char *methodName = "setParcelableData";
	const char *methodSignature = "(Landroid/os/Parcelable;)V";
	const char *className = "android/view/accessibility/AccessibilityRecord";

	LOGV("android_view_accessibility_AccessibilityRecord className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_accessibility_AccessibilityRecord cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_accessibility_AccessibilityRecord jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.os.Parcelable");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_os_Parcelable(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_view_accessibility_AccessibilityRecord::setParcelableData(AndroidCXX::android_os_Parcelable const& arg0) exit");

}

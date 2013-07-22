/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
	
	













// Generated Code 

#include <android_support_v4_app_FragmentManager_BackStackEntry.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "android_support_v4_app_FragmentManager_BackStackEntry"
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
android_support_v4_app_FragmentManager_BackStackEntry::android_support_v4_app_FragmentManager_BackStackEntry(const android_support_v4_app_FragmentManager_BackStackEntry& cc)
{
	LOGV("android_support_v4_app_FragmentManager_BackStackEntry::android_support_v4_app_FragmentManager_BackStackEntry(const android_support_v4_app_FragmentManager_BackStackEntry& cc) enter");

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

	LOGV("android_support_v4_app_FragmentManager_BackStackEntry::android_support_v4_app_FragmentManager_BackStackEntry(const android_support_v4_app_FragmentManager_BackStackEntry& cc) exit");
}
android_support_v4_app_FragmentManager_BackStackEntry::android_support_v4_app_FragmentManager_BackStackEntry(void * proxy)
{
	LOGV("android_support_v4_app_FragmentManager_BackStackEntry::android_support_v4_app_FragmentManager_BackStackEntry(void * proxy) enter");

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

	LOGV("android_support_v4_app_FragmentManager_BackStackEntry::android_support_v4_app_FragmentManager_BackStackEntry(void * proxy) exit");
}
android_support_v4_app_FragmentManager_BackStackEntry::android_support_v4_app_FragmentManager_BackStackEntry()
{
	LOGV("android_support_v4_app_FragmentManager_BackStackEntry::android_support_v4_app_FragmentManager_BackStackEntry() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "android/support/v4/app/FragmentManager$BackStackEntry";

	LOGV("android_support_v4_app_FragmentManager_BackStackEntry className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_support_v4_app_FragmentManager_BackStackEntry cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("android_support_v4_app_FragmentManager_BackStackEntry jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, "<init>", methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("android_support_v4_app_FragmentManager_BackStackEntry::android_support_v4_app_FragmentManager_BackStackEntry() exit");	
}
// Public Constructors
// Default Instance Destructor
android_support_v4_app_FragmentManager_BackStackEntry::~android_support_v4_app_FragmentManager_BackStackEntry()
{
	LOGV("android_support_v4_app_FragmentManager_BackStackEntry::~android_support_v4_app_FragmentManager_BackStackEntry() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("android_support_v4_app_FragmentManager_BackStackEntry::~android_support_v4_app_FragmentManager_BackStackEntry() exit");
}
// Functions
AndroidCXX::java_lang_String android_support_v4_app_FragmentManager_BackStackEntry::getName()
{
	LOGV("AndroidCXX::java_lang_String android_support_v4_app_FragmentManager_BackStackEntry::getName() enter");

	const char *methodName = "getName";
	const char *methodSignature = "()Ljava/lang/String;";
	const char *className = "android/support/v4/app/FragmentManager$BackStackEntry";

	LOGV("android_support_v4_app_FragmentManager_BackStackEntry className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_support_v4_app_FragmentManager_BackStackEntry cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_support_v4_app_FragmentManager_BackStackEntry jni address %d", javaObject);


	AndroidCXX::java_lang_String result;
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
	result = (AndroidCXX::java_lang_String) (AndroidCXX::java_lang_String((AndroidCXX::java_lang_String *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::java_lang_String android_support_v4_app_FragmentManager_BackStackEntry::getName() exit");

	return result;
}
int android_support_v4_app_FragmentManager_BackStackEntry::getId()
{
	LOGV("int android_support_v4_app_FragmentManager_BackStackEntry::getId() enter");

	const char *methodName = "getId";
	const char *methodSignature = "()I";
	const char *className = "android/support/v4/app/FragmentManager$BackStackEntry";

	LOGV("android_support_v4_app_FragmentManager_BackStackEntry className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_support_v4_app_FragmentManager_BackStackEntry cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_support_v4_app_FragmentManager_BackStackEntry jni address %d", javaObject);


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

	LOGV("int android_support_v4_app_FragmentManager_BackStackEntry::getId() exit");

	return result;
}
int android_support_v4_app_FragmentManager_BackStackEntry::getBreadCrumbTitleRes()
{
	LOGV("int android_support_v4_app_FragmentManager_BackStackEntry::getBreadCrumbTitleRes() enter");

	const char *methodName = "getBreadCrumbTitleRes";
	const char *methodSignature = "()I";
	const char *className = "android/support/v4/app/FragmentManager$BackStackEntry";

	LOGV("android_support_v4_app_FragmentManager_BackStackEntry className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_support_v4_app_FragmentManager_BackStackEntry cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_support_v4_app_FragmentManager_BackStackEntry jni address %d", javaObject);


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

	LOGV("int android_support_v4_app_FragmentManager_BackStackEntry::getBreadCrumbTitleRes() exit");

	return result;
}
int android_support_v4_app_FragmentManager_BackStackEntry::getBreadCrumbShortTitleRes()
{
	LOGV("int android_support_v4_app_FragmentManager_BackStackEntry::getBreadCrumbShortTitleRes() enter");

	const char *methodName = "getBreadCrumbShortTitleRes";
	const char *methodSignature = "()I";
	const char *className = "android/support/v4/app/FragmentManager$BackStackEntry";

	LOGV("android_support_v4_app_FragmentManager_BackStackEntry className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_support_v4_app_FragmentManager_BackStackEntry cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_support_v4_app_FragmentManager_BackStackEntry jni address %d", javaObject);


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

	LOGV("int android_support_v4_app_FragmentManager_BackStackEntry::getBreadCrumbShortTitleRes() exit");

	return result;
}
AndroidCXX::java_lang_CharSequence android_support_v4_app_FragmentManager_BackStackEntry::getBreadCrumbTitle()
{
	LOGV("AndroidCXX::java_lang_CharSequence android_support_v4_app_FragmentManager_BackStackEntry::getBreadCrumbTitle() enter");

	const char *methodName = "getBreadCrumbTitle";
	const char *methodSignature = "()Ljava/lang/CharSequence;";
	const char *className = "android/support/v4/app/FragmentManager$BackStackEntry";

	LOGV("android_support_v4_app_FragmentManager_BackStackEntry className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_support_v4_app_FragmentManager_BackStackEntry cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_support_v4_app_FragmentManager_BackStackEntry jni address %d", javaObject);


	AndroidCXX::java_lang_CharSequence result;
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
	result = (AndroidCXX::java_lang_CharSequence) (AndroidCXX::java_lang_CharSequence((AndroidCXX::java_lang_CharSequence *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::java_lang_CharSequence android_support_v4_app_FragmentManager_BackStackEntry::getBreadCrumbTitle() exit");

	return result;
}
AndroidCXX::java_lang_CharSequence android_support_v4_app_FragmentManager_BackStackEntry::getBreadCrumbShortTitle()
{
	LOGV("AndroidCXX::java_lang_CharSequence android_support_v4_app_FragmentManager_BackStackEntry::getBreadCrumbShortTitle() enter");

	const char *methodName = "getBreadCrumbShortTitle";
	const char *methodSignature = "()Ljava/lang/CharSequence;";
	const char *className = "android/support/v4/app/FragmentManager$BackStackEntry";

	LOGV("android_support_v4_app_FragmentManager_BackStackEntry className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_support_v4_app_FragmentManager_BackStackEntry cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_support_v4_app_FragmentManager_BackStackEntry jni address %d", javaObject);


	AndroidCXX::java_lang_CharSequence result;
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
	result = (AndroidCXX::java_lang_CharSequence) (AndroidCXX::java_lang_CharSequence((AndroidCXX::java_lang_CharSequence *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::java_lang_CharSequence android_support_v4_app_FragmentManager_BackStackEntry::getBreadCrumbShortTitle() exit");

	return result;
}

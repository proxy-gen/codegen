/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
 		 
 		 
	
 		 
 		 
	
 		 
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
	
	
	
	
 		 
	
	
 		 
	
	
 		 
	
	
































// Generated Code 

#include <android_support_v4_app_FragmentTransaction.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>
// TODO: FIXME: add include package
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "android_support_v4_app_FragmentTransaction"
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

static long static_obj;
static long static_address = (long) &static_obj;


// Default Instance Constructors
android_support_v4_app_FragmentTransaction::android_support_v4_app_FragmentTransaction(const android_support_v4_app_FragmentTransaction& cc)
{
	LOGV("android_support_v4_app_FragmentTransaction::android_support_v4_app_FragmentTransaction(const android_support_v4_app_FragmentTransaction& cc) enter");

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

	LOGV("android_support_v4_app_FragmentTransaction::android_support_v4_app_FragmentTransaction(const android_support_v4_app_FragmentTransaction& cc) exit");
}
android_support_v4_app_FragmentTransaction::android_support_v4_app_FragmentTransaction(void * proxy)
{
	LOGV("android_support_v4_app_FragmentTransaction::android_support_v4_app_FragmentTransaction(void * proxy) enter");

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

	LOGV("android_support_v4_app_FragmentTransaction::android_support_v4_app_FragmentTransaction(void * proxy) exit");
}
// Public Constructors
android_support_v4_app_FragmentTransaction::android_support_v4_app_FragmentTransaction()
{
	LOGV("android_support_v4_app_FragmentTransaction::android_support_v4_app_FragmentTransaction() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "android/support/v4/app/FragmentTransaction";

	LOGV("android_support_v4_app_FragmentTransaction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_support_v4_app_FragmentTransaction cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("android_support_v4_app_FragmentTransaction jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{

			
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, methodName, methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("android_support_v4_app_FragmentTransaction::android_support_v4_app_FragmentTransaction() exit");	
}
// Default Instance Destructor
android_support_v4_app_FragmentTransaction::~android_support_v4_app_FragmentTransaction()
{
	LOGV("android_support_v4_app_FragmentTransaction::~android_support_v4_app_FragmentTransaction() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("android_support_v4_app_FragmentTransaction::~android_support_v4_app_FragmentTransaction() exit");
}
// Functions
AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::add(int& arg0,AndroidCXX::android_support_v4_app_Fragment& arg1)
{
	LOGV("AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::add(int& arg0,AndroidCXX::android_support_v4_app_Fragment& arg1) enter");

	const char *methodName = "add";
	const char *methodSignature = "(ILandroid/support/v4/app/Fragment;)Landroid/support/v4/app/FragmentTransaction;";
	const char *className = "android/support/v4/app/FragmentTransaction";

	LOGV("android_support_v4_app_FragmentTransaction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_support_v4_app_FragmentTransaction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_support_v4_app_FragmentTransaction jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.support.v4.app.Fragment");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_support_v4_app_Fragment(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	AndroidCXX::android_support_v4_app_FragmentTransaction result;
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
			cxx_type_hierarchy.type_name = std::string("android.support.v4.app.FragmentTransaction");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_support_v4_app_FragmentTransaction(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_support_v4_app_FragmentTransaction) (AndroidCXX::android_support_v4_app_FragmentTransaction((AndroidCXX::android_support_v4_app_FragmentTransaction *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::add(int& arg0,AndroidCXX::android_support_v4_app_Fragment& arg1) exit");

	return result;
}
AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::add(int& arg0,AndroidCXX::android_support_v4_app_Fragment& arg1,AndroidCXX::java_lang_String& arg2)
{
	LOGV("AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::add(int& arg0,AndroidCXX::android_support_v4_app_Fragment& arg1,AndroidCXX::java_lang_String& arg2) enter");

	const char *methodName = "add";
	const char *methodSignature = "(ILandroid/support/v4/app/Fragment;Ljava/lang/String;)Landroid/support/v4/app/FragmentTransaction;";
	const char *className = "android/support/v4/app/FragmentTransaction";

	LOGV("android_support_v4_app_FragmentTransaction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_support_v4_app_FragmentTransaction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_support_v4_app_FragmentTransaction jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.support.v4.app.Fragment");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_support_v4_app_Fragment(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
	}
	jstring jarg2;
	{
		long cxx_value = (long) & arg2;
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
		jarg2 = convert_jni_string_to_jni(java_value);
	}

	AndroidCXX::android_support_v4_app_FragmentTransaction result;
	jobject jni_result = (jobject) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1,jarg2);
	long cxx_value = (long) 0;
	long java_value = convert_jni_java_lang_Object_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("android.support.v4.app.FragmentTransaction");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_support_v4_app_FragmentTransaction(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_support_v4_app_FragmentTransaction) (AndroidCXX::android_support_v4_app_FragmentTransaction((AndroidCXX::android_support_v4_app_FragmentTransaction *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::add(int& arg0,AndroidCXX::android_support_v4_app_Fragment& arg1,AndroidCXX::java_lang_String& arg2) exit");

	return result;
}
AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::add(AndroidCXX::android_support_v4_app_Fragment& arg0,AndroidCXX::java_lang_String& arg1)
{
	LOGV("AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::add(AndroidCXX::android_support_v4_app_Fragment& arg0,AndroidCXX::java_lang_String& arg1) enter");

	const char *methodName = "add";
	const char *methodSignature = "(Landroid/support/v4/app/Fragment;Ljava/lang/String;)Landroid/support/v4/app/FragmentTransaction;";
	const char *className = "android/support/v4/app/FragmentTransaction";

	LOGV("android_support_v4_app_FragmentTransaction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_support_v4_app_FragmentTransaction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_support_v4_app_FragmentTransaction jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.support.v4.app.Fragment");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_support_v4_app_Fragment(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}
	jstring jarg1;
	{
		long cxx_value = (long) & arg1;
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
		jarg1 = convert_jni_string_to_jni(java_value);
	}

	AndroidCXX::android_support_v4_app_FragmentTransaction result;
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
			cxx_type_hierarchy.type_name = std::string("android.support.v4.app.FragmentTransaction");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_support_v4_app_FragmentTransaction(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_support_v4_app_FragmentTransaction) (AndroidCXX::android_support_v4_app_FragmentTransaction((AndroidCXX::android_support_v4_app_FragmentTransaction *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::add(AndroidCXX::android_support_v4_app_Fragment& arg0,AndroidCXX::java_lang_String& arg1) exit");

	return result;
}
bool android_support_v4_app_FragmentTransaction::isEmpty()
{
	LOGV("bool android_support_v4_app_FragmentTransaction::isEmpty() enter");

	const char *methodName = "isEmpty";
	const char *methodSignature = "()Z";
	const char *className = "android/support/v4/app/FragmentTransaction";

	LOGV("android_support_v4_app_FragmentTransaction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_support_v4_app_FragmentTransaction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_support_v4_app_FragmentTransaction jni address %d", javaObject);


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

	LOGV("bool android_support_v4_app_FragmentTransaction::isEmpty() exit");

	return result;
}
AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::replace(int& arg0,AndroidCXX::android_support_v4_app_Fragment& arg1,AndroidCXX::java_lang_String& arg2)
{
	LOGV("AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::replace(int& arg0,AndroidCXX::android_support_v4_app_Fragment& arg1,AndroidCXX::java_lang_String& arg2) enter");

	const char *methodName = "replace";
	const char *methodSignature = "(ILandroid/support/v4/app/Fragment;Ljava/lang/String;)Landroid/support/v4/app/FragmentTransaction;";
	const char *className = "android/support/v4/app/FragmentTransaction";

	LOGV("android_support_v4_app_FragmentTransaction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_support_v4_app_FragmentTransaction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_support_v4_app_FragmentTransaction jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.support.v4.app.Fragment");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_support_v4_app_Fragment(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
	}
	jstring jarg2;
	{
		long cxx_value = (long) & arg2;
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
		jarg2 = convert_jni_string_to_jni(java_value);
	}

	AndroidCXX::android_support_v4_app_FragmentTransaction result;
	jobject jni_result = (jobject) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1,jarg2);
	long cxx_value = (long) 0;
	long java_value = convert_jni_java_lang_Object_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("android.support.v4.app.FragmentTransaction");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_support_v4_app_FragmentTransaction(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_support_v4_app_FragmentTransaction) (AndroidCXX::android_support_v4_app_FragmentTransaction((AndroidCXX::android_support_v4_app_FragmentTransaction *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::replace(int& arg0,AndroidCXX::android_support_v4_app_Fragment& arg1,AndroidCXX::java_lang_String& arg2) exit");

	return result;
}
AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::replace(int& arg0,AndroidCXX::android_support_v4_app_Fragment& arg1)
{
	LOGV("AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::replace(int& arg0,AndroidCXX::android_support_v4_app_Fragment& arg1) enter");

	const char *methodName = "replace";
	const char *methodSignature = "(ILandroid/support/v4/app/Fragment;)Landroid/support/v4/app/FragmentTransaction;";
	const char *className = "android/support/v4/app/FragmentTransaction";

	LOGV("android_support_v4_app_FragmentTransaction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_support_v4_app_FragmentTransaction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_support_v4_app_FragmentTransaction jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.support.v4.app.Fragment");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_support_v4_app_Fragment(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	AndroidCXX::android_support_v4_app_FragmentTransaction result;
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
			cxx_type_hierarchy.type_name = std::string("android.support.v4.app.FragmentTransaction");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_support_v4_app_FragmentTransaction(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_support_v4_app_FragmentTransaction) (AndroidCXX::android_support_v4_app_FragmentTransaction((AndroidCXX::android_support_v4_app_FragmentTransaction *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::replace(int& arg0,AndroidCXX::android_support_v4_app_Fragment& arg1) exit");

	return result;
}
AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::remove(AndroidCXX::android_support_v4_app_Fragment& arg0)
{
	LOGV("AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::remove(AndroidCXX::android_support_v4_app_Fragment& arg0) enter");

	const char *methodName = "remove";
	const char *methodSignature = "(Landroid/support/v4/app/Fragment;)Landroid/support/v4/app/FragmentTransaction;";
	const char *className = "android/support/v4/app/FragmentTransaction";

	LOGV("android_support_v4_app_FragmentTransaction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_support_v4_app_FragmentTransaction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_support_v4_app_FragmentTransaction jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.support.v4.app.Fragment");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_support_v4_app_Fragment(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	AndroidCXX::android_support_v4_app_FragmentTransaction result;
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
			cxx_type_hierarchy.type_name = std::string("android.support.v4.app.FragmentTransaction");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_support_v4_app_FragmentTransaction(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_support_v4_app_FragmentTransaction) (AndroidCXX::android_support_v4_app_FragmentTransaction((AndroidCXX::android_support_v4_app_FragmentTransaction *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::remove(AndroidCXX::android_support_v4_app_Fragment& arg0) exit");

	return result;
}
AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::attach(AndroidCXX::android_support_v4_app_Fragment& arg0)
{
	LOGV("AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::attach(AndroidCXX::android_support_v4_app_Fragment& arg0) enter");

	const char *methodName = "attach";
	const char *methodSignature = "(Landroid/support/v4/app/Fragment;)Landroid/support/v4/app/FragmentTransaction;";
	const char *className = "android/support/v4/app/FragmentTransaction";

	LOGV("android_support_v4_app_FragmentTransaction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_support_v4_app_FragmentTransaction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_support_v4_app_FragmentTransaction jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.support.v4.app.Fragment");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_support_v4_app_Fragment(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	AndroidCXX::android_support_v4_app_FragmentTransaction result;
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
			cxx_type_hierarchy.type_name = std::string("android.support.v4.app.FragmentTransaction");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_support_v4_app_FragmentTransaction(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_support_v4_app_FragmentTransaction) (AndroidCXX::android_support_v4_app_FragmentTransaction((AndroidCXX::android_support_v4_app_FragmentTransaction *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::attach(AndroidCXX::android_support_v4_app_Fragment& arg0) exit");

	return result;
}
AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::show(AndroidCXX::android_support_v4_app_Fragment& arg0)
{
	LOGV("AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::show(AndroidCXX::android_support_v4_app_Fragment& arg0) enter");

	const char *methodName = "show";
	const char *methodSignature = "(Landroid/support/v4/app/Fragment;)Landroid/support/v4/app/FragmentTransaction;";
	const char *className = "android/support/v4/app/FragmentTransaction";

	LOGV("android_support_v4_app_FragmentTransaction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_support_v4_app_FragmentTransaction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_support_v4_app_FragmentTransaction jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.support.v4.app.Fragment");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_support_v4_app_Fragment(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	AndroidCXX::android_support_v4_app_FragmentTransaction result;
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
			cxx_type_hierarchy.type_name = std::string("android.support.v4.app.FragmentTransaction");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_support_v4_app_FragmentTransaction(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_support_v4_app_FragmentTransaction) (AndroidCXX::android_support_v4_app_FragmentTransaction((AndroidCXX::android_support_v4_app_FragmentTransaction *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::show(AndroidCXX::android_support_v4_app_Fragment& arg0) exit");

	return result;
}
int android_support_v4_app_FragmentTransaction::commit()
{
	LOGV("int android_support_v4_app_FragmentTransaction::commit() enter");

	const char *methodName = "commit";
	const char *methodSignature = "()I";
	const char *className = "android/support/v4/app/FragmentTransaction";

	LOGV("android_support_v4_app_FragmentTransaction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_support_v4_app_FragmentTransaction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_support_v4_app_FragmentTransaction jni address %d", javaObject);


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

	LOGV("int android_support_v4_app_FragmentTransaction::commit() exit");

	return result;
}
AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::hide(AndroidCXX::android_support_v4_app_Fragment& arg0)
{
	LOGV("AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::hide(AndroidCXX::android_support_v4_app_Fragment& arg0) enter");

	const char *methodName = "hide";
	const char *methodSignature = "(Landroid/support/v4/app/Fragment;)Landroid/support/v4/app/FragmentTransaction;";
	const char *className = "android/support/v4/app/FragmentTransaction";

	LOGV("android_support_v4_app_FragmentTransaction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_support_v4_app_FragmentTransaction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_support_v4_app_FragmentTransaction jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.support.v4.app.Fragment");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_support_v4_app_Fragment(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	AndroidCXX::android_support_v4_app_FragmentTransaction result;
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
			cxx_type_hierarchy.type_name = std::string("android.support.v4.app.FragmentTransaction");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_support_v4_app_FragmentTransaction(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_support_v4_app_FragmentTransaction) (AndroidCXX::android_support_v4_app_FragmentTransaction((AndroidCXX::android_support_v4_app_FragmentTransaction *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::hide(AndroidCXX::android_support_v4_app_Fragment& arg0) exit");

	return result;
}
AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::detach(AndroidCXX::android_support_v4_app_Fragment& arg0)
{
	LOGV("AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::detach(AndroidCXX::android_support_v4_app_Fragment& arg0) enter");

	const char *methodName = "detach";
	const char *methodSignature = "(Landroid/support/v4/app/Fragment;)Landroid/support/v4/app/FragmentTransaction;";
	const char *className = "android/support/v4/app/FragmentTransaction";

	LOGV("android_support_v4_app_FragmentTransaction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_support_v4_app_FragmentTransaction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_support_v4_app_FragmentTransaction jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.support.v4.app.Fragment");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_support_v4_app_Fragment(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	AndroidCXX::android_support_v4_app_FragmentTransaction result;
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
			cxx_type_hierarchy.type_name = std::string("android.support.v4.app.FragmentTransaction");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_support_v4_app_FragmentTransaction(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_support_v4_app_FragmentTransaction) (AndroidCXX::android_support_v4_app_FragmentTransaction((AndroidCXX::android_support_v4_app_FragmentTransaction *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::detach(AndroidCXX::android_support_v4_app_Fragment& arg0) exit");

	return result;
}
AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::setCustomAnimations(int& arg0,int& arg1)
{
	LOGV("AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::setCustomAnimations(int& arg0,int& arg1) enter");

	const char *methodName = "setCustomAnimations";
	const char *methodSignature = "(II)Landroid/support/v4/app/FragmentTransaction;";
	const char *className = "android/support/v4/app/FragmentTransaction";

	LOGV("android_support_v4_app_FragmentTransaction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_support_v4_app_FragmentTransaction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_support_v4_app_FragmentTransaction jni address %d", javaObject);

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

	AndroidCXX::android_support_v4_app_FragmentTransaction result;
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
			cxx_type_hierarchy.type_name = std::string("android.support.v4.app.FragmentTransaction");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_support_v4_app_FragmentTransaction(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_support_v4_app_FragmentTransaction) (AndroidCXX::android_support_v4_app_FragmentTransaction((AndroidCXX::android_support_v4_app_FragmentTransaction *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::setCustomAnimations(int& arg0,int& arg1) exit");

	return result;
}
AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::setCustomAnimations(int& arg0,int& arg1,int& arg2,int& arg3)
{
	LOGV("AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::setCustomAnimations(int& arg0,int& arg1,int& arg2,int& arg3) enter");

	const char *methodName = "setCustomAnimations";
	const char *methodSignature = "(IIII)Landroid/support/v4/app/FragmentTransaction;";
	const char *className = "android/support/v4/app/FragmentTransaction";

	LOGV("android_support_v4_app_FragmentTransaction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_support_v4_app_FragmentTransaction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_support_v4_app_FragmentTransaction jni address %d", javaObject);

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
	jint jarg2;
	{
		long cxx_value = (long) & arg2;
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
		jarg2 = convert_jni_int_to_jni(java_value);
	}
	jint jarg3;
	{
		long cxx_value = (long) & arg3;
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
		jarg3 = convert_jni_int_to_jni(java_value);
	}

	AndroidCXX::android_support_v4_app_FragmentTransaction result;
	jobject jni_result = (jobject) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1,jarg2,jarg3);
	long cxx_value = (long) 0;
	long java_value = convert_jni_java_lang_Object_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("android.support.v4.app.FragmentTransaction");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_support_v4_app_FragmentTransaction(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_support_v4_app_FragmentTransaction) (AndroidCXX::android_support_v4_app_FragmentTransaction((AndroidCXX::android_support_v4_app_FragmentTransaction *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::setCustomAnimations(int& arg0,int& arg1,int& arg2,int& arg3) exit");

	return result;
}
AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::setTransition(int& arg0)
{
	LOGV("AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::setTransition(int& arg0) enter");

	const char *methodName = "setTransition";
	const char *methodSignature = "(I)Landroid/support/v4/app/FragmentTransaction;";
	const char *className = "android/support/v4/app/FragmentTransaction";

	LOGV("android_support_v4_app_FragmentTransaction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_support_v4_app_FragmentTransaction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_support_v4_app_FragmentTransaction jni address %d", javaObject);

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

	AndroidCXX::android_support_v4_app_FragmentTransaction result;
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
			cxx_type_hierarchy.type_name = std::string("android.support.v4.app.FragmentTransaction");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_support_v4_app_FragmentTransaction(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_support_v4_app_FragmentTransaction) (AndroidCXX::android_support_v4_app_FragmentTransaction((AndroidCXX::android_support_v4_app_FragmentTransaction *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::setTransition(int& arg0) exit");

	return result;
}
AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::setTransitionStyle(int& arg0)
{
	LOGV("AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::setTransitionStyle(int& arg0) enter");

	const char *methodName = "setTransitionStyle";
	const char *methodSignature = "(I)Landroid/support/v4/app/FragmentTransaction;";
	const char *className = "android/support/v4/app/FragmentTransaction";

	LOGV("android_support_v4_app_FragmentTransaction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_support_v4_app_FragmentTransaction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_support_v4_app_FragmentTransaction jni address %d", javaObject);

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

	AndroidCXX::android_support_v4_app_FragmentTransaction result;
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
			cxx_type_hierarchy.type_name = std::string("android.support.v4.app.FragmentTransaction");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_support_v4_app_FragmentTransaction(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_support_v4_app_FragmentTransaction) (AndroidCXX::android_support_v4_app_FragmentTransaction((AndroidCXX::android_support_v4_app_FragmentTransaction *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::setTransitionStyle(int& arg0) exit");

	return result;
}
AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::addToBackStack(AndroidCXX::java_lang_String& arg0)
{
	LOGV("AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::addToBackStack(AndroidCXX::java_lang_String& arg0) enter");

	const char *methodName = "addToBackStack";
	const char *methodSignature = "(Ljava/lang/String;)Landroid/support/v4/app/FragmentTransaction;";
	const char *className = "android/support/v4/app/FragmentTransaction";

	LOGV("android_support_v4_app_FragmentTransaction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_support_v4_app_FragmentTransaction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_support_v4_app_FragmentTransaction jni address %d", javaObject);

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

	AndroidCXX::android_support_v4_app_FragmentTransaction result;
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
			cxx_type_hierarchy.type_name = std::string("android.support.v4.app.FragmentTransaction");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_support_v4_app_FragmentTransaction(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_support_v4_app_FragmentTransaction) (AndroidCXX::android_support_v4_app_FragmentTransaction((AndroidCXX::android_support_v4_app_FragmentTransaction *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::addToBackStack(AndroidCXX::java_lang_String& arg0) exit");

	return result;
}
bool android_support_v4_app_FragmentTransaction::isAddToBackStackAllowed()
{
	LOGV("bool android_support_v4_app_FragmentTransaction::isAddToBackStackAllowed() enter");

	const char *methodName = "isAddToBackStackAllowed";
	const char *methodSignature = "()Z";
	const char *className = "android/support/v4/app/FragmentTransaction";

	LOGV("android_support_v4_app_FragmentTransaction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_support_v4_app_FragmentTransaction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_support_v4_app_FragmentTransaction jni address %d", javaObject);


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

	LOGV("bool android_support_v4_app_FragmentTransaction::isAddToBackStackAllowed() exit");

	return result;
}
AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::disallowAddToBackStack()
{
	LOGV("AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::disallowAddToBackStack() enter");

	const char *methodName = "disallowAddToBackStack";
	const char *methodSignature = "()Landroid/support/v4/app/FragmentTransaction;";
	const char *className = "android/support/v4/app/FragmentTransaction";

	LOGV("android_support_v4_app_FragmentTransaction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_support_v4_app_FragmentTransaction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_support_v4_app_FragmentTransaction jni address %d", javaObject);


	AndroidCXX::android_support_v4_app_FragmentTransaction result;
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
			cxx_type_hierarchy.type_name = std::string("android.support.v4.app.FragmentTransaction");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_support_v4_app_FragmentTransaction(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_support_v4_app_FragmentTransaction) (AndroidCXX::android_support_v4_app_FragmentTransaction((AndroidCXX::android_support_v4_app_FragmentTransaction *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::disallowAddToBackStack() exit");

	return result;
}
AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::setBreadCrumbTitle(AndroidCXX::java_lang_CharSequence& arg0)
{
	LOGV("AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::setBreadCrumbTitle(AndroidCXX::java_lang_CharSequence& arg0) enter");

	const char *methodName = "setBreadCrumbTitle";
	const char *methodSignature = "(Ljava/lang/CharSequence;)Landroid/support/v4/app/FragmentTransaction;";
	const char *className = "android/support/v4/app/FragmentTransaction";

	LOGV("android_support_v4_app_FragmentTransaction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_support_v4_app_FragmentTransaction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_support_v4_app_FragmentTransaction jni address %d", javaObject);

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

	AndroidCXX::android_support_v4_app_FragmentTransaction result;
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
			cxx_type_hierarchy.type_name = std::string("android.support.v4.app.FragmentTransaction");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_support_v4_app_FragmentTransaction(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_support_v4_app_FragmentTransaction) (AndroidCXX::android_support_v4_app_FragmentTransaction((AndroidCXX::android_support_v4_app_FragmentTransaction *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::setBreadCrumbTitle(AndroidCXX::java_lang_CharSequence& arg0) exit");

	return result;
}
AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::setBreadCrumbTitle(int& arg0)
{
	LOGV("AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::setBreadCrumbTitle(int& arg0) enter");

	const char *methodName = "setBreadCrumbTitle";
	const char *methodSignature = "(I)Landroid/support/v4/app/FragmentTransaction;";
	const char *className = "android/support/v4/app/FragmentTransaction";

	LOGV("android_support_v4_app_FragmentTransaction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_support_v4_app_FragmentTransaction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_support_v4_app_FragmentTransaction jni address %d", javaObject);

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

	AndroidCXX::android_support_v4_app_FragmentTransaction result;
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
			cxx_type_hierarchy.type_name = std::string("android.support.v4.app.FragmentTransaction");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_support_v4_app_FragmentTransaction(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_support_v4_app_FragmentTransaction) (AndroidCXX::android_support_v4_app_FragmentTransaction((AndroidCXX::android_support_v4_app_FragmentTransaction *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::setBreadCrumbTitle(int& arg0) exit");

	return result;
}
AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::setBreadCrumbShortTitle(AndroidCXX::java_lang_CharSequence& arg0)
{
	LOGV("AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::setBreadCrumbShortTitle(AndroidCXX::java_lang_CharSequence& arg0) enter");

	const char *methodName = "setBreadCrumbShortTitle";
	const char *methodSignature = "(Ljava/lang/CharSequence;)Landroid/support/v4/app/FragmentTransaction;";
	const char *className = "android/support/v4/app/FragmentTransaction";

	LOGV("android_support_v4_app_FragmentTransaction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_support_v4_app_FragmentTransaction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_support_v4_app_FragmentTransaction jni address %d", javaObject);

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

	AndroidCXX::android_support_v4_app_FragmentTransaction result;
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
			cxx_type_hierarchy.type_name = std::string("android.support.v4.app.FragmentTransaction");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_support_v4_app_FragmentTransaction(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_support_v4_app_FragmentTransaction) (AndroidCXX::android_support_v4_app_FragmentTransaction((AndroidCXX::android_support_v4_app_FragmentTransaction *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::setBreadCrumbShortTitle(AndroidCXX::java_lang_CharSequence& arg0) exit");

	return result;
}
AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::setBreadCrumbShortTitle(int& arg0)
{
	LOGV("AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::setBreadCrumbShortTitle(int& arg0) enter");

	const char *methodName = "setBreadCrumbShortTitle";
	const char *methodSignature = "(I)Landroid/support/v4/app/FragmentTransaction;";
	const char *className = "android/support/v4/app/FragmentTransaction";

	LOGV("android_support_v4_app_FragmentTransaction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_support_v4_app_FragmentTransaction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_support_v4_app_FragmentTransaction jni address %d", javaObject);

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

	AndroidCXX::android_support_v4_app_FragmentTransaction result;
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
			cxx_type_hierarchy.type_name = std::string("android.support.v4.app.FragmentTransaction");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_support_v4_app_FragmentTransaction(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_support_v4_app_FragmentTransaction) (AndroidCXX::android_support_v4_app_FragmentTransaction((AndroidCXX::android_support_v4_app_FragmentTransaction *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_support_v4_app_FragmentTransaction android_support_v4_app_FragmentTransaction::setBreadCrumbShortTitle(int& arg0) exit");

	return result;
}
int android_support_v4_app_FragmentTransaction::commitAllowingStateLoss()
{
	LOGV("int android_support_v4_app_FragmentTransaction::commitAllowingStateLoss() enter");

	const char *methodName = "commitAllowingStateLoss";
	const char *methodSignature = "()I";
	const char *className = "android/support/v4/app/FragmentTransaction";

	LOGV("android_support_v4_app_FragmentTransaction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_support_v4_app_FragmentTransaction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_support_v4_app_FragmentTransaction jni address %d", javaObject);


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

	LOGV("int android_support_v4_app_FragmentTransaction::commitAllowingStateLoss() exit");

	return result;
}

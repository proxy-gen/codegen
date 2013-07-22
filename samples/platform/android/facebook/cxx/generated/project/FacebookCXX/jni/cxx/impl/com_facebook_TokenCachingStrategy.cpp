/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
 		 
	
 		 
 		 
	
 		 
	
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 


























// Generated Code 

#include <com_facebook_TokenCachingStrategy.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <FacebookCXXConverter.hpp>

#define LOG_TAG "com_facebook_TokenCachingStrategy"
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
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// using namespace COM_FACEBOOK_ACCESSTOKENSOURCE;
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
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
com_facebook_TokenCachingStrategy::com_facebook_TokenCachingStrategy(const com_facebook_TokenCachingStrategy& cc)
{
	LOGV("com_facebook_TokenCachingStrategy::com_facebook_TokenCachingStrategy(const com_facebook_TokenCachingStrategy& cc) enter");

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

	LOGV("com_facebook_TokenCachingStrategy::com_facebook_TokenCachingStrategy(const com_facebook_TokenCachingStrategy& cc) exit");
}
com_facebook_TokenCachingStrategy::com_facebook_TokenCachingStrategy(void * proxy)
{
	LOGV("com_facebook_TokenCachingStrategy::com_facebook_TokenCachingStrategy(void * proxy) enter");

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

	LOGV("com_facebook_TokenCachingStrategy::com_facebook_TokenCachingStrategy(void * proxy) exit");
}
// Public Constructors
com_facebook_TokenCachingStrategy::com_facebook_TokenCachingStrategy()
{
	LOGV("com_facebook_TokenCachingStrategy::com_facebook_TokenCachingStrategy() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "com/facebook/TokenCachingStrategy";

	LOGV("com_facebook_TokenCachingStrategy className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_TokenCachingStrategy cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_TokenCachingStrategy jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{

			
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, methodName, methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("com_facebook_TokenCachingStrategy::com_facebook_TokenCachingStrategy() exit");	
}
// Default Instance Destructor
com_facebook_TokenCachingStrategy::~com_facebook_TokenCachingStrategy()
{
	LOGV("com_facebook_TokenCachingStrategy::~com_facebook_TokenCachingStrategy() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("com_facebook_TokenCachingStrategy::~com_facebook_TokenCachingStrategy() exit");
}
// Functions
void com_facebook_TokenCachingStrategy::clear()
{
	LOGV("void com_facebook_TokenCachingStrategy::clear() enter");

	const char *methodName = "clear";
	const char *methodSignature = "()V";
	const char *className = "com/facebook/TokenCachingStrategy";

	LOGV("com_facebook_TokenCachingStrategy className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_TokenCachingStrategy cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_TokenCachingStrategy jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	jni->popLocalFrame();

	LOGV("void com_facebook_TokenCachingStrategy::clear() exit");

}
FacebookCXX::android_os_Bundle com_facebook_TokenCachingStrategy::load()
{
	LOGV("FacebookCXX::android_os_Bundle com_facebook_TokenCachingStrategy::load() enter");

	const char *methodName = "load";
	const char *methodSignature = "()Landroid/os/Bundle;";
	const char *className = "com/facebook/TokenCachingStrategy";

	LOGV("com_facebook_TokenCachingStrategy className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_TokenCachingStrategy cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_TokenCachingStrategy jni address %d", javaObject);


	FacebookCXX::android_os_Bundle result;
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
			cxx_type_hierarchy.type_name = std::string("android.os.Bundle");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_os_Bundle(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (FacebookCXX::android_os_Bundle) (FacebookCXX::android_os_Bundle((FacebookCXX::android_os_Bundle *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("FacebookCXX::android_os_Bundle com_facebook_TokenCachingStrategy::load() exit");

	return result;
}
FacebookCXX::java_util_List com_facebook_TokenCachingStrategy::getPermissions(FacebookCXX::android_os_Bundle& arg0)
{
	LOGV("FacebookCXX::java_util_List com_facebook_TokenCachingStrategy::getPermissions(FacebookCXX::android_os_Bundle& arg0) enter");

	const char *methodName = "getPermissions";
	const char *methodSignature = "(Landroid/os/Bundle;)Ljava/util/List;";
	const char *className = "com/facebook/TokenCachingStrategy";

	LOGV("com_facebook_TokenCachingStrategy className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) static_address; // _static function
	LOGV("com_facebook_TokenCachingStrategy cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_TokenCachingStrategy jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.os.Bundle");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_os_Bundle(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	FacebookCXX::java_util_List result;
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
			cxx_type_hierarchy.type_name = std::string("java.lang.String");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_java_lang_String);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_util_List(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (FacebookCXX::java_util_List) (FacebookCXX::java_util_List((FacebookCXX::java_util_List *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("FacebookCXX::java_util_List com_facebook_TokenCachingStrategy::getPermissions(FacebookCXX::android_os_Bundle& arg0) exit");

	return result;
}
void com_facebook_TokenCachingStrategy::save(FacebookCXX::android_os_Bundle& arg0)
{
	LOGV("void com_facebook_TokenCachingStrategy::save(FacebookCXX::android_os_Bundle& arg0) enter");

	const char *methodName = "save";
	const char *methodSignature = "(Landroid/os/Bundle;)V";
	const char *className = "com/facebook/TokenCachingStrategy";

	LOGV("com_facebook_TokenCachingStrategy className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_TokenCachingStrategy cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_TokenCachingStrategy jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.os.Bundle");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_os_Bundle(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void com_facebook_TokenCachingStrategy::save(FacebookCXX::android_os_Bundle& arg0) exit");

}
FacebookCXX::java_lang_String com_facebook_TokenCachingStrategy::getToken(FacebookCXX::android_os_Bundle& arg0)
{
	LOGV("FacebookCXX::java_lang_String com_facebook_TokenCachingStrategy::getToken(FacebookCXX::android_os_Bundle& arg0) enter");

	const char *methodName = "getToken";
	const char *methodSignature = "(Landroid/os/Bundle;)Ljava/lang/String;";
	const char *className = "com/facebook/TokenCachingStrategy";

	LOGV("com_facebook_TokenCachingStrategy className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) static_address; // _static function
	LOGV("com_facebook_TokenCachingStrategy cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_TokenCachingStrategy jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.os.Bundle");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_os_Bundle(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	FacebookCXX::java_lang_String result;
	jstring jni_result = (jstring) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature,jarg0);
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
	result = (FacebookCXX::java_lang_String) (FacebookCXX::java_lang_String((FacebookCXX::java_lang_String *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("FacebookCXX::java_lang_String com_facebook_TokenCachingStrategy::getToken(FacebookCXX::android_os_Bundle& arg0) exit");

	return result;
}
COM_FACEBOOK_ACCESSTOKENSOURCE::com_facebook_AccessTokenSource com_facebook_TokenCachingStrategy::getSource(FacebookCXX::android_os_Bundle& arg0)
{
	LOGV("COM_FACEBOOK_ACCESSTOKENSOURCE::com_facebook_AccessTokenSource com_facebook_TokenCachingStrategy::getSource(FacebookCXX::android_os_Bundle& arg0) enter");

	const char *methodName = "getSource";
	const char *methodSignature = "(Landroid/os/Bundle;)Lcom/facebook/AccessTokenSource;";
	const char *className = "com/facebook/TokenCachingStrategy";

	LOGV("com_facebook_TokenCachingStrategy className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) static_address; // _static function
	LOGV("com_facebook_TokenCachingStrategy cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_TokenCachingStrategy jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.os.Bundle");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_os_Bundle(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	COM_FACEBOOK_ACCESSTOKENSOURCE::com_facebook_AccessTokenSource result;
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
			cxx_type_hierarchy.type_name = std::string("com.facebook.AccessTokenSource");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_com_facebook_AccessTokenSource(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (COM_FACEBOOK_ACCESSTOKENSOURCE::com_facebook_AccessTokenSource) (cxx_value);
		
	jni->popLocalFrame();

	LOGV("COM_FACEBOOK_ACCESSTOKENSOURCE::com_facebook_AccessTokenSource com_facebook_TokenCachingStrategy::getSource(FacebookCXX::android_os_Bundle& arg0) exit");

	return result;
}
bool com_facebook_TokenCachingStrategy::hasTokenInformation(FacebookCXX::android_os_Bundle& arg0)
{
	LOGV("bool com_facebook_TokenCachingStrategy::hasTokenInformation(FacebookCXX::android_os_Bundle& arg0) enter");

	const char *methodName = "hasTokenInformation";
	const char *methodSignature = "(Landroid/os/Bundle;)Z";
	const char *className = "com/facebook/TokenCachingStrategy";

	LOGV("com_facebook_TokenCachingStrategy className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) static_address; // _static function
	LOGV("com_facebook_TokenCachingStrategy cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_TokenCachingStrategy jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.os.Bundle");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_os_Bundle(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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

	LOGV("bool com_facebook_TokenCachingStrategy::hasTokenInformation(FacebookCXX::android_os_Bundle& arg0) exit");

	return result;
}
FacebookCXX::java_util_Date com_facebook_TokenCachingStrategy::getExpirationDate(FacebookCXX::android_os_Bundle& arg0)
{
	LOGV("FacebookCXX::java_util_Date com_facebook_TokenCachingStrategy::getExpirationDate(FacebookCXX::android_os_Bundle& arg0) enter");

	const char *methodName = "getExpirationDate";
	const char *methodSignature = "(Landroid/os/Bundle;)Ljava/util/Date;";
	const char *className = "com/facebook/TokenCachingStrategy";

	LOGV("com_facebook_TokenCachingStrategy className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) static_address; // _static function
	LOGV("com_facebook_TokenCachingStrategy cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_TokenCachingStrategy jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.os.Bundle");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_os_Bundle(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	FacebookCXX::java_util_Date result;
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
			cxx_type_hierarchy.type_name = std::string("java.util.Date");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_util_Date(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (FacebookCXX::java_util_Date) (FacebookCXX::java_util_Date((FacebookCXX::java_util_Date *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("FacebookCXX::java_util_Date com_facebook_TokenCachingStrategy::getExpirationDate(FacebookCXX::android_os_Bundle& arg0) exit");

	return result;
}
void com_facebook_TokenCachingStrategy::putToken(FacebookCXX::android_os_Bundle& arg0,FacebookCXX::java_lang_String& arg1)
{
	LOGV("void com_facebook_TokenCachingStrategy::putToken(FacebookCXX::android_os_Bundle& arg0,FacebookCXX::java_lang_String& arg1) enter");

	const char *methodName = "putToken";
	const char *methodSignature = "(Landroid/os/Bundle;Ljava/lang/String;)V";
	const char *className = "com/facebook/TokenCachingStrategy";

	LOGV("com_facebook_TokenCachingStrategy className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) static_address; // _static function
	LOGV("com_facebook_TokenCachingStrategy cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_TokenCachingStrategy jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.os.Bundle");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_os_Bundle(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1);
		
	jni->popLocalFrame();

	LOGV("void com_facebook_TokenCachingStrategy::putToken(FacebookCXX::android_os_Bundle& arg0,FacebookCXX::java_lang_String& arg1) exit");

}
void com_facebook_TokenCachingStrategy::putExpirationDate(FacebookCXX::android_os_Bundle& arg0,FacebookCXX::java_util_Date& arg1)
{
	LOGV("void com_facebook_TokenCachingStrategy::putExpirationDate(FacebookCXX::android_os_Bundle& arg0,FacebookCXX::java_util_Date& arg1) enter");

	const char *methodName = "putExpirationDate";
	const char *methodSignature = "(Landroid/os/Bundle;Ljava/util/Date;)V";
	const char *className = "com/facebook/TokenCachingStrategy";

	LOGV("com_facebook_TokenCachingStrategy className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) static_address; // _static function
	LOGV("com_facebook_TokenCachingStrategy cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_TokenCachingStrategy jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.os.Bundle");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_os_Bundle(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
			cxx_type_hierarchy.type_name = std::string("java.util.Date");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_util_Date(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1);
		
	jni->popLocalFrame();

	LOGV("void com_facebook_TokenCachingStrategy::putExpirationDate(FacebookCXX::android_os_Bundle& arg0,FacebookCXX::java_util_Date& arg1) exit");

}
long com_facebook_TokenCachingStrategy::getExpirationMilliseconds(FacebookCXX::android_os_Bundle& arg0)
{
	LOGV("long com_facebook_TokenCachingStrategy::getExpirationMilliseconds(FacebookCXX::android_os_Bundle& arg0) enter");

	const char *methodName = "getExpirationMilliseconds";
	const char *methodSignature = "(Landroid/os/Bundle;)J";
	const char *className = "com/facebook/TokenCachingStrategy";

	LOGV("com_facebook_TokenCachingStrategy className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) static_address; // _static function
	LOGV("com_facebook_TokenCachingStrategy cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_TokenCachingStrategy jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.os.Bundle");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_os_Bundle(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	long result;
	jlong jni_result = (jlong) jni->invokeLongMethod(javaObject,className,methodName,methodSignature,jarg0);
	long cxx_value = (long) 0;
	long java_value = convert_jni_long_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("long");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_long(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (long) (cxx_value);
		
	jni->popLocalFrame();

	LOGV("long com_facebook_TokenCachingStrategy::getExpirationMilliseconds(FacebookCXX::android_os_Bundle& arg0) exit");

	return result;
}
void com_facebook_TokenCachingStrategy::putExpirationMilliseconds(FacebookCXX::android_os_Bundle& arg0,long& arg1)
{
	LOGV("void com_facebook_TokenCachingStrategy::putExpirationMilliseconds(FacebookCXX::android_os_Bundle& arg0,long& arg1) enter");

	const char *methodName = "putExpirationMilliseconds";
	const char *methodSignature = "(Landroid/os/Bundle;J)V";
	const char *className = "com/facebook/TokenCachingStrategy";

	LOGV("com_facebook_TokenCachingStrategy className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) static_address; // _static function
	LOGV("com_facebook_TokenCachingStrategy cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_TokenCachingStrategy jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.os.Bundle");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_os_Bundle(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}
	jlong jarg1;
	{
		long cxx_value = (long) & arg1;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("long");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_long(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_long_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1);
		
	jni->popLocalFrame();

	LOGV("void com_facebook_TokenCachingStrategy::putExpirationMilliseconds(FacebookCXX::android_os_Bundle& arg0,long& arg1) exit");

}
void com_facebook_TokenCachingStrategy::putPermissions(FacebookCXX::android_os_Bundle& arg0,FacebookCXX::java_util_List& arg1)
{
	LOGV("void com_facebook_TokenCachingStrategy::putPermissions(FacebookCXX::android_os_Bundle& arg0,FacebookCXX::java_util_List& arg1) enter");

	const char *methodName = "putPermissions";
	const char *methodSignature = "(Landroid/os/Bundle;Ljava/util/List;)V";
	const char *className = "com/facebook/TokenCachingStrategy";

	LOGV("com_facebook_TokenCachingStrategy className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) static_address; // _static function
	LOGV("com_facebook_TokenCachingStrategy cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_TokenCachingStrategy jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.os.Bundle");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_os_Bundle(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
			cxx_type_hierarchy.type_name = std::string("java.lang.String");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_java_lang_String);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_util_List(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1);
		
	jni->popLocalFrame();

	LOGV("void com_facebook_TokenCachingStrategy::putPermissions(FacebookCXX::android_os_Bundle& arg0,FacebookCXX::java_util_List& arg1) exit");

}
void com_facebook_TokenCachingStrategy::putSource(FacebookCXX::android_os_Bundle& arg0,COM_FACEBOOK_ACCESSTOKENSOURCE::com_facebook_AccessTokenSource& arg1)
{
	LOGV("void com_facebook_TokenCachingStrategy::putSource(FacebookCXX::android_os_Bundle& arg0,COM_FACEBOOK_ACCESSTOKENSOURCE::com_facebook_AccessTokenSource& arg1) enter");

	const char *methodName = "putSource";
	const char *methodSignature = "(Landroid/os/Bundle;Lcom/facebook/AccessTokenSource;)V";
	const char *className = "com/facebook/TokenCachingStrategy";

	LOGV("com_facebook_TokenCachingStrategy className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) static_address; // _static function
	LOGV("com_facebook_TokenCachingStrategy cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_TokenCachingStrategy jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.os.Bundle");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_os_Bundle(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
			cxx_type_hierarchy.type_name = std::string("com.facebook.AccessTokenSource");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_com_facebook_AccessTokenSource(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1);
		
	jni->popLocalFrame();

	LOGV("void com_facebook_TokenCachingStrategy::putSource(FacebookCXX::android_os_Bundle& arg0,COM_FACEBOOK_ACCESSTOKENSOURCE::com_facebook_AccessTokenSource& arg1) exit");

}
FacebookCXX::java_util_Date com_facebook_TokenCachingStrategy::getLastRefreshDate(FacebookCXX::android_os_Bundle& arg0)
{
	LOGV("FacebookCXX::java_util_Date com_facebook_TokenCachingStrategy::getLastRefreshDate(FacebookCXX::android_os_Bundle& arg0) enter");

	const char *methodName = "getLastRefreshDate";
	const char *methodSignature = "(Landroid/os/Bundle;)Ljava/util/Date;";
	const char *className = "com/facebook/TokenCachingStrategy";

	LOGV("com_facebook_TokenCachingStrategy className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) static_address; // _static function
	LOGV("com_facebook_TokenCachingStrategy cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_TokenCachingStrategy jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.os.Bundle");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_os_Bundle(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	FacebookCXX::java_util_Date result;
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
			cxx_type_hierarchy.type_name = std::string("java.util.Date");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_util_Date(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (FacebookCXX::java_util_Date) (FacebookCXX::java_util_Date((FacebookCXX::java_util_Date *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("FacebookCXX::java_util_Date com_facebook_TokenCachingStrategy::getLastRefreshDate(FacebookCXX::android_os_Bundle& arg0) exit");

	return result;
}
void com_facebook_TokenCachingStrategy::putLastRefreshDate(FacebookCXX::android_os_Bundle& arg0,FacebookCXX::java_util_Date& arg1)
{
	LOGV("void com_facebook_TokenCachingStrategy::putLastRefreshDate(FacebookCXX::android_os_Bundle& arg0,FacebookCXX::java_util_Date& arg1) enter");

	const char *methodName = "putLastRefreshDate";
	const char *methodSignature = "(Landroid/os/Bundle;Ljava/util/Date;)V";
	const char *className = "com/facebook/TokenCachingStrategy";

	LOGV("com_facebook_TokenCachingStrategy className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) static_address; // _static function
	LOGV("com_facebook_TokenCachingStrategy cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_TokenCachingStrategy jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.os.Bundle");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_os_Bundle(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
			cxx_type_hierarchy.type_name = std::string("java.util.Date");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_util_Date(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1);
		
	jni->popLocalFrame();

	LOGV("void com_facebook_TokenCachingStrategy::putLastRefreshDate(FacebookCXX::android_os_Bundle& arg0,FacebookCXX::java_util_Date& arg1) exit");

}
long com_facebook_TokenCachingStrategy::getLastRefreshMilliseconds(FacebookCXX::android_os_Bundle& arg0)
{
	LOGV("long com_facebook_TokenCachingStrategy::getLastRefreshMilliseconds(FacebookCXX::android_os_Bundle& arg0) enter");

	const char *methodName = "getLastRefreshMilliseconds";
	const char *methodSignature = "(Landroid/os/Bundle;)J";
	const char *className = "com/facebook/TokenCachingStrategy";

	LOGV("com_facebook_TokenCachingStrategy className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) static_address; // _static function
	LOGV("com_facebook_TokenCachingStrategy cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_TokenCachingStrategy jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.os.Bundle");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_os_Bundle(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	long result;
	jlong jni_result = (jlong) jni->invokeLongMethod(javaObject,className,methodName,methodSignature,jarg0);
	long cxx_value = (long) 0;
	long java_value = convert_jni_long_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("long");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_long(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (long) (cxx_value);
		
	jni->popLocalFrame();

	LOGV("long com_facebook_TokenCachingStrategy::getLastRefreshMilliseconds(FacebookCXX::android_os_Bundle& arg0) exit");

	return result;
}
void com_facebook_TokenCachingStrategy::putLastRefreshMilliseconds(FacebookCXX::android_os_Bundle& arg0,long& arg1)
{
	LOGV("void com_facebook_TokenCachingStrategy::putLastRefreshMilliseconds(FacebookCXX::android_os_Bundle& arg0,long& arg1) enter");

	const char *methodName = "putLastRefreshMilliseconds";
	const char *methodSignature = "(Landroid/os/Bundle;J)V";
	const char *className = "com/facebook/TokenCachingStrategy";

	LOGV("com_facebook_TokenCachingStrategy className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) static_address; // _static function
	LOGV("com_facebook_TokenCachingStrategy cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_TokenCachingStrategy jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.os.Bundle");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_os_Bundle(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}
	jlong jarg1;
	{
		long cxx_value = (long) & arg1;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("long");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_long(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_long_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1);
		
	jni->popLocalFrame();

	LOGV("void com_facebook_TokenCachingStrategy::putLastRefreshMilliseconds(FacebookCXX::android_os_Bundle& arg0,long& arg1) exit");

}

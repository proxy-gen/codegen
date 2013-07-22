/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
	
	
	
	
	
 		 
 		 
 		 
 		 
 		 
	
 		 
	















// Generated Code 

#include <com_facebook_AccessToken.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <FacebookCXXConverter.hpp>

#define LOG_TAG "com_facebook_AccessToken"
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

static long static_obj;
static long static_address = (long) &static_obj;


// Default Instance Constructors
com_facebook_AccessToken::com_facebook_AccessToken(const com_facebook_AccessToken& cc)
{
	LOGV("com_facebook_AccessToken::com_facebook_AccessToken(const com_facebook_AccessToken& cc) enter");

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

	LOGV("com_facebook_AccessToken::com_facebook_AccessToken(const com_facebook_AccessToken& cc) exit");
}
com_facebook_AccessToken::com_facebook_AccessToken(void * proxy)
{
	LOGV("com_facebook_AccessToken::com_facebook_AccessToken(void * proxy) enter");

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

	LOGV("com_facebook_AccessToken::com_facebook_AccessToken(void * proxy) exit");
}
com_facebook_AccessToken::com_facebook_AccessToken()
{
	LOGV("com_facebook_AccessToken::com_facebook_AccessToken() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "com/facebook/AccessToken";

	LOGV("com_facebook_AccessToken className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_AccessToken cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_AccessToken jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, "<init>", methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("com_facebook_AccessToken::com_facebook_AccessToken() exit");	
}
// Public Constructors
// Default Instance Destructor
com_facebook_AccessToken::~com_facebook_AccessToken()
{
	LOGV("com_facebook_AccessToken::~com_facebook_AccessToken() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("com_facebook_AccessToken::~com_facebook_AccessToken() exit");
}
// Functions
FacebookCXX::java_lang_String com_facebook_AccessToken::toString()
{
	LOGV("FacebookCXX::java_lang_String com_facebook_AccessToken::toString() enter");

	const char *methodName = "toString";
	const char *methodSignature = "()Ljava/lang/String;";
	const char *className = "com/facebook/AccessToken";

	LOGV("com_facebook_AccessToken className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_AccessToken cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_AccessToken jni address %d", javaObject);


	FacebookCXX::java_lang_String result;
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
	result = (FacebookCXX::java_lang_String) (FacebookCXX::java_lang_String((FacebookCXX::java_lang_String *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("FacebookCXX::java_lang_String com_facebook_AccessToken::toString() exit");

	return result;
}
FacebookCXX::java_util_List com_facebook_AccessToken::getPermissions()
{
	LOGV("FacebookCXX::java_util_List com_facebook_AccessToken::getPermissions() enter");

	const char *methodName = "getPermissions";
	const char *methodSignature = "()Ljava/util/List;";
	const char *className = "com/facebook/AccessToken";

	LOGV("com_facebook_AccessToken className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_AccessToken cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_AccessToken jni address %d", javaObject);


	FacebookCXX::java_util_List result;
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

	LOGV("FacebookCXX::java_util_List com_facebook_AccessToken::getPermissions() exit");

	return result;
}
FacebookCXX::java_lang_String com_facebook_AccessToken::getToken()
{
	LOGV("FacebookCXX::java_lang_String com_facebook_AccessToken::getToken() enter");

	const char *methodName = "getToken";
	const char *methodSignature = "()Ljava/lang/String;";
	const char *className = "com/facebook/AccessToken";

	LOGV("com_facebook_AccessToken className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_AccessToken cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_AccessToken jni address %d", javaObject);


	FacebookCXX::java_lang_String result;
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
	result = (FacebookCXX::java_lang_String) (FacebookCXX::java_lang_String((FacebookCXX::java_lang_String *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("FacebookCXX::java_lang_String com_facebook_AccessToken::getToken() exit");

	return result;
}
FacebookCXX::java_util_Date com_facebook_AccessToken::getExpires()
{
	LOGV("FacebookCXX::java_util_Date com_facebook_AccessToken::getExpires() enter");

	const char *methodName = "getExpires";
	const char *methodSignature = "()Ljava/util/Date;";
	const char *className = "com/facebook/AccessToken";

	LOGV("com_facebook_AccessToken className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_AccessToken cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_AccessToken jni address %d", javaObject);


	FacebookCXX::java_util_Date result;
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
			cxx_type_hierarchy.type_name = std::string("java.util.Date");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_util_Date(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (FacebookCXX::java_util_Date) (FacebookCXX::java_util_Date((FacebookCXX::java_util_Date *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("FacebookCXX::java_util_Date com_facebook_AccessToken::getExpires() exit");

	return result;
}
COM_FACEBOOK_ACCESSTOKENSOURCE::com_facebook_AccessTokenSource com_facebook_AccessToken::getSource()
{
	LOGV("COM_FACEBOOK_ACCESSTOKENSOURCE::com_facebook_AccessTokenSource com_facebook_AccessToken::getSource() enter");

	const char *methodName = "getSource";
	const char *methodSignature = "()Lcom/facebook/AccessTokenSource;";
	const char *className = "com/facebook/AccessToken";

	LOGV("com_facebook_AccessToken className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_AccessToken cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_AccessToken jni address %d", javaObject);


	COM_FACEBOOK_ACCESSTOKENSOURCE::com_facebook_AccessTokenSource result;
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
			cxx_type_hierarchy.type_name = std::string("com.facebook.AccessTokenSource");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_com_facebook_AccessTokenSource(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (COM_FACEBOOK_ACCESSTOKENSOURCE::com_facebook_AccessTokenSource) (cxx_value);
		
	jni->popLocalFrame();

	LOGV("COM_FACEBOOK_ACCESSTOKENSOURCE::com_facebook_AccessTokenSource com_facebook_AccessToken::getSource() exit");

	return result;
}
FacebookCXX::java_util_Date com_facebook_AccessToken::getLastRefresh()
{
	LOGV("FacebookCXX::java_util_Date com_facebook_AccessToken::getLastRefresh() enter");

	const char *methodName = "getLastRefresh";
	const char *methodSignature = "()Ljava/util/Date;";
	const char *className = "com/facebook/AccessToken";

	LOGV("com_facebook_AccessToken className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_AccessToken cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_AccessToken jni address %d", javaObject);


	FacebookCXX::java_util_Date result;
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
			cxx_type_hierarchy.type_name = std::string("java.util.Date");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_util_Date(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (FacebookCXX::java_util_Date) (FacebookCXX::java_util_Date((FacebookCXX::java_util_Date *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("FacebookCXX::java_util_Date com_facebook_AccessToken::getLastRefresh() exit");

	return result;
}
FacebookCXX::com_facebook_AccessToken com_facebook_AccessToken::createFromExistingAccessToken(FacebookCXX::java_lang_String& arg0,FacebookCXX::java_util_Date& arg1,FacebookCXX::java_util_Date& arg2,COM_FACEBOOK_ACCESSTOKENSOURCE::com_facebook_AccessTokenSource& arg3,FacebookCXX::java_util_List& arg4)
{
	LOGV("FacebookCXX::com_facebook_AccessToken com_facebook_AccessToken::createFromExistingAccessToken(FacebookCXX::java_lang_String& arg0,FacebookCXX::java_util_Date& arg1,FacebookCXX::java_util_Date& arg2,COM_FACEBOOK_ACCESSTOKENSOURCE::com_facebook_AccessTokenSource& arg3,FacebookCXX::java_util_List& arg4) enter");

	const char *methodName = "createFromExistingAccessToken";
	const char *methodSignature = "(Ljava/lang/String;Ljava/util/Date;Ljava/util/Date;Lcom/facebook/AccessTokenSource;Ljava/util/List;)Lcom/facebook/AccessToken;";
	const char *className = "com/facebook/AccessToken";

	LOGV("com_facebook_AccessToken className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) static_address; // _static function
	LOGV("com_facebook_AccessToken cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_AccessToken jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("java.util.Date");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_util_Date(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg2 = convert_jni_java_lang_Object_to_jni(java_value);
	}
	jobject jarg3;
	{
		long cxx_value = (long) & arg3;
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
		jarg3 = convert_jni_java_lang_Object_to_jni(java_value);
	}
	jobject jarg4;
	{
		long cxx_value = (long) & arg4;
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
		jarg4 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	FacebookCXX::com_facebook_AccessToken result;
	jobject jni_result = (jobject) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1,jarg2,jarg3,jarg4);
	long cxx_value = (long) 0;
	long java_value = convert_jni_java_lang_Object_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("com.facebook.AccessToken");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_com_facebook_AccessToken(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (FacebookCXX::com_facebook_AccessToken) (FacebookCXX::com_facebook_AccessToken((FacebookCXX::com_facebook_AccessToken *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("FacebookCXX::com_facebook_AccessToken com_facebook_AccessToken::createFromExistingAccessToken(FacebookCXX::java_lang_String& arg0,FacebookCXX::java_util_Date& arg1,FacebookCXX::java_util_Date& arg2,COM_FACEBOOK_ACCESSTOKENSOURCE::com_facebook_AccessTokenSource& arg3,FacebookCXX::java_util_List& arg4) exit");

	return result;
}
FacebookCXX::com_facebook_AccessToken com_facebook_AccessToken::createFromNativeLinkingIntent(FacebookCXX::android_content_Intent& arg0)
{
	LOGV("FacebookCXX::com_facebook_AccessToken com_facebook_AccessToken::createFromNativeLinkingIntent(FacebookCXX::android_content_Intent& arg0) enter");

	const char *methodName = "createFromNativeLinkingIntent";
	const char *methodSignature = "(Landroid/content/Intent;)Lcom/facebook/AccessToken;";
	const char *className = "com/facebook/AccessToken";

	LOGV("com_facebook_AccessToken className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) static_address; // _static function
	LOGV("com_facebook_AccessToken cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_AccessToken jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.content.Intent");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_content_Intent(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	FacebookCXX::com_facebook_AccessToken result;
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
			cxx_type_hierarchy.type_name = std::string("com.facebook.AccessToken");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_com_facebook_AccessToken(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (FacebookCXX::com_facebook_AccessToken) (FacebookCXX::com_facebook_AccessToken((FacebookCXX::com_facebook_AccessToken *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("FacebookCXX::com_facebook_AccessToken com_facebook_AccessToken::createFromNativeLinkingIntent(FacebookCXX::android_content_Intent& arg0) exit");

	return result;
}

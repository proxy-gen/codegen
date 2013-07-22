/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
	
	
	
	
	
	
	
	


 		 
 		 




















// Generated Code 

#include <com_facebook_FacebookRequestError.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <FacebookCXXConverter.hpp>

#define LOG_TAG "com_facebook_FacebookRequestError"
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
// using namespace COM_FACEBOOK_FACEBOOKREQUESTERROR_CATEGORY;
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
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
com_facebook_FacebookRequestError::com_facebook_FacebookRequestError(const com_facebook_FacebookRequestError& cc)
{
	LOGV("com_facebook_FacebookRequestError::com_facebook_FacebookRequestError(const com_facebook_FacebookRequestError& cc) enter");

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

	LOGV("com_facebook_FacebookRequestError::com_facebook_FacebookRequestError(const com_facebook_FacebookRequestError& cc) exit");
}
com_facebook_FacebookRequestError::com_facebook_FacebookRequestError(void * proxy)
{
	LOGV("com_facebook_FacebookRequestError::com_facebook_FacebookRequestError(void * proxy) enter");

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

	LOGV("com_facebook_FacebookRequestError::com_facebook_FacebookRequestError(void * proxy) exit");
}
com_facebook_FacebookRequestError::com_facebook_FacebookRequestError()
{
	LOGV("com_facebook_FacebookRequestError::com_facebook_FacebookRequestError() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "com/facebook/FacebookRequestError";

	LOGV("com_facebook_FacebookRequestError className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_FacebookRequestError cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_FacebookRequestError jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, "<init>", methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("com_facebook_FacebookRequestError::com_facebook_FacebookRequestError() exit");	
}
// Public Constructors
com_facebook_FacebookRequestError::com_facebook_FacebookRequestError(int& arg0,FacebookCXX::java_lang_String& arg1,FacebookCXX::java_lang_String& arg2)
{
	LOGV("com_facebook_FacebookRequestError::com_facebook_FacebookRequestError(int& arg0,FacebookCXX::java_lang_String& arg1,FacebookCXX::java_lang_String& arg2) enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "(ILjava/lang/String;Ljava/lang/String;)V";
	const char *className = "com/facebook/FacebookRequestError";

	LOGV("com_facebook_FacebookRequestError className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_FacebookRequestError cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_FacebookRequestError jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{

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
			
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, methodName, methodSignature),jarg0,jarg1,jarg2);
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("com_facebook_FacebookRequestError::com_facebook_FacebookRequestError(int& arg0,FacebookCXX::java_lang_String& arg1,FacebookCXX::java_lang_String& arg2) exit");	
}
// Default Instance Destructor
com_facebook_FacebookRequestError::~com_facebook_FacebookRequestError()
{
	LOGV("com_facebook_FacebookRequestError::~com_facebook_FacebookRequestError() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("com_facebook_FacebookRequestError::~com_facebook_FacebookRequestError() exit");
}
// Functions
FacebookCXX::java_lang_String com_facebook_FacebookRequestError::toString()
{
	LOGV("FacebookCXX::java_lang_String com_facebook_FacebookRequestError::toString() enter");

	const char *methodName = "toString";
	const char *methodSignature = "()Ljava/lang/String;";
	const char *className = "com/facebook/FacebookRequestError";

	LOGV("com_facebook_FacebookRequestError className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_FacebookRequestError cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_FacebookRequestError jni address %d", javaObject);


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

	LOGV("FacebookCXX::java_lang_String com_facebook_FacebookRequestError::toString() exit");

	return result;
}
FacebookCXX::com_facebook_FacebookException com_facebook_FacebookRequestError::getException()
{
	LOGV("FacebookCXX::com_facebook_FacebookException com_facebook_FacebookRequestError::getException() enter");

	const char *methodName = "getException";
	const char *methodSignature = "()Lcom/facebook/FacebookException;";
	const char *className = "com/facebook/FacebookRequestError";

	LOGV("com_facebook_FacebookRequestError className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_FacebookRequestError cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_FacebookRequestError jni address %d", javaObject);


	FacebookCXX::com_facebook_FacebookException result;
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
			cxx_type_hierarchy.type_name = std::string("com.facebook.FacebookException");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_com_facebook_FacebookException(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (FacebookCXX::com_facebook_FacebookException) (FacebookCXX::com_facebook_FacebookException((FacebookCXX::com_facebook_FacebookException *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("FacebookCXX::com_facebook_FacebookException com_facebook_FacebookRequestError::getException() exit");

	return result;
}
FacebookCXX::java_net_HttpURLConnection com_facebook_FacebookRequestError::getConnection()
{
	LOGV("FacebookCXX::java_net_HttpURLConnection com_facebook_FacebookRequestError::getConnection() enter");

	const char *methodName = "getConnection";
	const char *methodSignature = "()Ljava/net/HttpURLConnection;";
	const char *className = "com/facebook/FacebookRequestError";

	LOGV("com_facebook_FacebookRequestError className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_FacebookRequestError cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_FacebookRequestError jni address %d", javaObject);


	FacebookCXX::java_net_HttpURLConnection result;
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
			cxx_type_hierarchy.type_name = std::string("java.net.HttpURLConnection");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_net_HttpURLConnection(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (FacebookCXX::java_net_HttpURLConnection) (FacebookCXX::java_net_HttpURLConnection((FacebookCXX::java_net_HttpURLConnection *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("FacebookCXX::java_net_HttpURLConnection com_facebook_FacebookRequestError::getConnection() exit");

	return result;
}
int com_facebook_FacebookRequestError::getErrorCode()
{
	LOGV("int com_facebook_FacebookRequestError::getErrorCode() enter");

	const char *methodName = "getErrorCode";
	const char *methodSignature = "()I";
	const char *className = "com/facebook/FacebookRequestError";

	LOGV("com_facebook_FacebookRequestError className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_FacebookRequestError cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_FacebookRequestError jni address %d", javaObject);


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

	LOGV("int com_facebook_FacebookRequestError::getErrorCode() exit");

	return result;
}
bool com_facebook_FacebookRequestError::shouldNotifyUser()
{
	LOGV("bool com_facebook_FacebookRequestError::shouldNotifyUser() enter");

	const char *methodName = "shouldNotifyUser";
	const char *methodSignature = "()Z";
	const char *className = "com/facebook/FacebookRequestError";

	LOGV("com_facebook_FacebookRequestError className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_FacebookRequestError cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_FacebookRequestError jni address %d", javaObject);


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

	LOGV("bool com_facebook_FacebookRequestError::shouldNotifyUser() exit");

	return result;
}
int com_facebook_FacebookRequestError::getUserActionMessageId()
{
	LOGV("int com_facebook_FacebookRequestError::getUserActionMessageId() enter");

	const char *methodName = "getUserActionMessageId";
	const char *methodSignature = "()I";
	const char *className = "com/facebook/FacebookRequestError";

	LOGV("com_facebook_FacebookRequestError className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_FacebookRequestError cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_FacebookRequestError jni address %d", javaObject);


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

	LOGV("int com_facebook_FacebookRequestError::getUserActionMessageId() exit");

	return result;
}
COM_FACEBOOK_FACEBOOKREQUESTERROR_CATEGORY::com_facebook_FacebookRequestError_Category com_facebook_FacebookRequestError::getCategory()
{
	LOGV("COM_FACEBOOK_FACEBOOKREQUESTERROR_CATEGORY::com_facebook_FacebookRequestError_Category com_facebook_FacebookRequestError::getCategory() enter");

	const char *methodName = "getCategory";
	const char *methodSignature = "()Lcom/facebook/FacebookRequestError$Category;";
	const char *className = "com/facebook/FacebookRequestError";

	LOGV("com_facebook_FacebookRequestError className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_FacebookRequestError cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_FacebookRequestError jni address %d", javaObject);


	COM_FACEBOOK_FACEBOOKREQUESTERROR_CATEGORY::com_facebook_FacebookRequestError_Category result;
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
			cxx_type_hierarchy.type_name = std::string("com.facebook.FacebookRequestError$Category");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_com_facebook_FacebookRequestError_Category(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (COM_FACEBOOK_FACEBOOKREQUESTERROR_CATEGORY::com_facebook_FacebookRequestError_Category) (cxx_value);
		
	jni->popLocalFrame();

	LOGV("COM_FACEBOOK_FACEBOOKREQUESTERROR_CATEGORY::com_facebook_FacebookRequestError_Category com_facebook_FacebookRequestError::getCategory() exit");

	return result;
}
int com_facebook_FacebookRequestError::getRequestStatusCode()
{
	LOGV("int com_facebook_FacebookRequestError::getRequestStatusCode() enter");

	const char *methodName = "getRequestStatusCode";
	const char *methodSignature = "()I";
	const char *className = "com/facebook/FacebookRequestError";

	LOGV("com_facebook_FacebookRequestError className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_FacebookRequestError cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_FacebookRequestError jni address %d", javaObject);


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

	LOGV("int com_facebook_FacebookRequestError::getRequestStatusCode() exit");

	return result;
}
int com_facebook_FacebookRequestError::getSubErrorCode()
{
	LOGV("int com_facebook_FacebookRequestError::getSubErrorCode() enter");

	const char *methodName = "getSubErrorCode";
	const char *methodSignature = "()I";
	const char *className = "com/facebook/FacebookRequestError";

	LOGV("com_facebook_FacebookRequestError className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_FacebookRequestError cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_FacebookRequestError jni address %d", javaObject);


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

	LOGV("int com_facebook_FacebookRequestError::getSubErrorCode() exit");

	return result;
}
FacebookCXX::java_lang_String com_facebook_FacebookRequestError::getErrorType()
{
	LOGV("FacebookCXX::java_lang_String com_facebook_FacebookRequestError::getErrorType() enter");

	const char *methodName = "getErrorType";
	const char *methodSignature = "()Ljava/lang/String;";
	const char *className = "com/facebook/FacebookRequestError";

	LOGV("com_facebook_FacebookRequestError className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_FacebookRequestError cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_FacebookRequestError jni address %d", javaObject);


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

	LOGV("FacebookCXX::java_lang_String com_facebook_FacebookRequestError::getErrorType() exit");

	return result;
}
FacebookCXX::java_lang_String com_facebook_FacebookRequestError::getErrorMessage()
{
	LOGV("FacebookCXX::java_lang_String com_facebook_FacebookRequestError::getErrorMessage() enter");

	const char *methodName = "getErrorMessage";
	const char *methodSignature = "()Ljava/lang/String;";
	const char *className = "com/facebook/FacebookRequestError";

	LOGV("com_facebook_FacebookRequestError className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_FacebookRequestError cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_FacebookRequestError jni address %d", javaObject);


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

	LOGV("FacebookCXX::java_lang_String com_facebook_FacebookRequestError::getErrorMessage() exit");

	return result;
}
FacebookCXX::org_json_JSONObject com_facebook_FacebookRequestError::getRequestResultBody()
{
	LOGV("FacebookCXX::org_json_JSONObject com_facebook_FacebookRequestError::getRequestResultBody() enter");

	const char *methodName = "getRequestResultBody";
	const char *methodSignature = "()Lorg/json/JSONObject;";
	const char *className = "com/facebook/FacebookRequestError";

	LOGV("com_facebook_FacebookRequestError className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_FacebookRequestError cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_FacebookRequestError jni address %d", javaObject);


	FacebookCXX::org_json_JSONObject result;
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
			cxx_type_hierarchy.type_name = std::string("org.json.JSONObject");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_org_json_JSONObject(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (FacebookCXX::org_json_JSONObject) (FacebookCXX::org_json_JSONObject((FacebookCXX::org_json_JSONObject *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("FacebookCXX::org_json_JSONObject com_facebook_FacebookRequestError::getRequestResultBody() exit");

	return result;
}
FacebookCXX::org_json_JSONObject com_facebook_FacebookRequestError::getRequestResult()
{
	LOGV("FacebookCXX::org_json_JSONObject com_facebook_FacebookRequestError::getRequestResult() enter");

	const char *methodName = "getRequestResult";
	const char *methodSignature = "()Lorg/json/JSONObject;";
	const char *className = "com/facebook/FacebookRequestError";

	LOGV("com_facebook_FacebookRequestError className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_FacebookRequestError cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_FacebookRequestError jni address %d", javaObject);


	FacebookCXX::org_json_JSONObject result;
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
			cxx_type_hierarchy.type_name = std::string("org.json.JSONObject");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_org_json_JSONObject(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (FacebookCXX::org_json_JSONObject) (FacebookCXX::org_json_JSONObject((FacebookCXX::org_json_JSONObject *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("FacebookCXX::org_json_JSONObject com_facebook_FacebookRequestError::getRequestResult() exit");

	return result;
}
FacebookCXX::java_lang_Object com_facebook_FacebookRequestError::getBatchRequestResult()
{
	LOGV("FacebookCXX::java_lang_Object com_facebook_FacebookRequestError::getBatchRequestResult() enter");

	const char *methodName = "getBatchRequestResult";
	const char *methodSignature = "()Ljava/lang/Object;";
	const char *className = "com/facebook/FacebookRequestError";

	LOGV("com_facebook_FacebookRequestError className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_FacebookRequestError cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_FacebookRequestError jni address %d", javaObject);


	FacebookCXX::java_lang_Object result;
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
			cxx_type_hierarchy.type_name = std::string("java.lang.Object");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_lang_Object(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (FacebookCXX::java_lang_Object) (FacebookCXX::java_lang_Object((FacebookCXX::java_lang_Object *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("FacebookCXX::java_lang_Object com_facebook_FacebookRequestError::getBatchRequestResult() exit");

	return result;
}

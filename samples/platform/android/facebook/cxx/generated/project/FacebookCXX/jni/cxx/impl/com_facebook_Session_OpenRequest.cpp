/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
 		 
	
	
 		 
	
 		 
	


 		 
 		 












// Generated Code 

#include <com_facebook_Session_OpenRequest.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <FacebookCXXConverter.hpp>

#define LOG_TAG "com_facebook_Session_OpenRequest"
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
// using namespace COM_FACEBOOK_SESSIONLOGINBEHAVIOR;
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// using namespace COM_FACEBOOK_SESSIONDEFAULTAUDIENCE;
// 
// 
// 
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
com_facebook_Session_OpenRequest::com_facebook_Session_OpenRequest(const com_facebook_Session_OpenRequest& cc)
{
	LOGV("com_facebook_Session_OpenRequest::com_facebook_Session_OpenRequest(const com_facebook_Session_OpenRequest& cc) enter");

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

	LOGV("com_facebook_Session_OpenRequest::com_facebook_Session_OpenRequest(const com_facebook_Session_OpenRequest& cc) exit");
}
com_facebook_Session_OpenRequest::com_facebook_Session_OpenRequest(void * proxy)
{
	LOGV("com_facebook_Session_OpenRequest::com_facebook_Session_OpenRequest(void * proxy) enter");

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

	LOGV("com_facebook_Session_OpenRequest::com_facebook_Session_OpenRequest(void * proxy) exit");
}
com_facebook_Session_OpenRequest::com_facebook_Session_OpenRequest()
{
	LOGV("com_facebook_Session_OpenRequest::com_facebook_Session_OpenRequest() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "com/facebook/Session$OpenRequest";

	LOGV("com_facebook_Session_OpenRequest className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_Session_OpenRequest cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_Session_OpenRequest jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, "<init>", methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("com_facebook_Session_OpenRequest::com_facebook_Session_OpenRequest() exit");	
}
// Public Constructors
com_facebook_Session_OpenRequest::com_facebook_Session_OpenRequest(FacebookCXX::android_app_Activity& arg0)
{
	LOGV("com_facebook_Session_OpenRequest::com_facebook_Session_OpenRequest(FacebookCXX::android_app_Activity& arg0) enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "(Landroid/app/Activity;)V";
	const char *className = "com/facebook/Session$OpenRequest";

	LOGV("com_facebook_Session_OpenRequest className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_Session_OpenRequest cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_Session_OpenRequest jni address %d", proxiedComponent);

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
				cxx_type_hierarchy.type_name = std::string("android.app.Activity");
			}
			std::stack<long> converter_stack;
			converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
			convert_android_app_Activity(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

			// Convert to JNI
			jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
		}
			
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, methodName, methodSignature),jarg0);
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("com_facebook_Session_OpenRequest::com_facebook_Session_OpenRequest(FacebookCXX::android_app_Activity& arg0) exit");	
}
com_facebook_Session_OpenRequest::com_facebook_Session_OpenRequest(FacebookCXX::android_support_v4_app_Fragment& arg0)
{
	LOGV("com_facebook_Session_OpenRequest::com_facebook_Session_OpenRequest(FacebookCXX::android_support_v4_app_Fragment& arg0) enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "(Landroid/support/v4/app/Fragment;)V";
	const char *className = "com/facebook/Session$OpenRequest";

	LOGV("com_facebook_Session_OpenRequest className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_Session_OpenRequest cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_Session_OpenRequest jni address %d", proxiedComponent);

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
				cxx_type_hierarchy.type_name = std::string("android.support.v4.app.Fragment");
			}
			std::stack<long> converter_stack;
			converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
			convert_android_support_v4_app_Fragment(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

			// Convert to JNI
			jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
		}
			
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, methodName, methodSignature),jarg0);
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("com_facebook_Session_OpenRequest::com_facebook_Session_OpenRequest(FacebookCXX::android_support_v4_app_Fragment& arg0) exit");	
}
// Default Instance Destructor
com_facebook_Session_OpenRequest::~com_facebook_Session_OpenRequest()
{
	LOGV("com_facebook_Session_OpenRequest::~com_facebook_Session_OpenRequest() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("com_facebook_Session_OpenRequest::~com_facebook_Session_OpenRequest() exit");
}
// Functions
FacebookCXX::com_facebook_Session_OpenRequest com_facebook_Session_OpenRequest::setCallback(FacebookCXX::com_facebook_Session_StatusCallback& arg0)
{
	LOGV("FacebookCXX::com_facebook_Session_OpenRequest com_facebook_Session_OpenRequest::setCallback(FacebookCXX::com_facebook_Session_StatusCallback& arg0) enter");

	const char *methodName = "setCallback";
	const char *methodSignature = "(Lcom/facebook/Session$StatusCallback;)Lcom/facebook/Session$OpenRequest;";
	const char *className = "com/facebook/Session$OpenRequest";

	LOGV("com_facebook_Session_OpenRequest className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_Session_OpenRequest cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_Session_OpenRequest jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("com.facebook.Session$StatusCallback");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_com_facebook_Session_StatusCallback(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	FacebookCXX::com_facebook_Session_OpenRequest result;
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
			cxx_type_hierarchy.type_name = std::string("com.facebook.Session$OpenRequest");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_com_facebook_Session_OpenRequest(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (FacebookCXX::com_facebook_Session_OpenRequest) (FacebookCXX::com_facebook_Session_OpenRequest((FacebookCXX::com_facebook_Session_OpenRequest *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("FacebookCXX::com_facebook_Session_OpenRequest com_facebook_Session_OpenRequest::setCallback(FacebookCXX::com_facebook_Session_StatusCallback& arg0) exit");

	return result;
}
FacebookCXX::com_facebook_Session_OpenRequest com_facebook_Session_OpenRequest::setLoginBehavior(COM_FACEBOOK_SESSIONLOGINBEHAVIOR::com_facebook_SessionLoginBehavior& arg0)
{
	LOGV("FacebookCXX::com_facebook_Session_OpenRequest com_facebook_Session_OpenRequest::setLoginBehavior(COM_FACEBOOK_SESSIONLOGINBEHAVIOR::com_facebook_SessionLoginBehavior& arg0) enter");

	const char *methodName = "setLoginBehavior";
	const char *methodSignature = "(Lcom/facebook/SessionLoginBehavior;)Lcom/facebook/Session$OpenRequest;";
	const char *className = "com/facebook/Session$OpenRequest";

	LOGV("com_facebook_Session_OpenRequest className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_Session_OpenRequest cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_Session_OpenRequest jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("com.facebook.SessionLoginBehavior");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_com_facebook_SessionLoginBehavior(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	FacebookCXX::com_facebook_Session_OpenRequest result;
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
			cxx_type_hierarchy.type_name = std::string("com.facebook.Session$OpenRequest");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_com_facebook_Session_OpenRequest(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (FacebookCXX::com_facebook_Session_OpenRequest) (FacebookCXX::com_facebook_Session_OpenRequest((FacebookCXX::com_facebook_Session_OpenRequest *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("FacebookCXX::com_facebook_Session_OpenRequest com_facebook_Session_OpenRequest::setLoginBehavior(COM_FACEBOOK_SESSIONLOGINBEHAVIOR::com_facebook_SessionLoginBehavior& arg0) exit");

	return result;
}
FacebookCXX::com_facebook_Session_OpenRequest com_facebook_Session_OpenRequest::setRequestCode(int& arg0)
{
	LOGV("FacebookCXX::com_facebook_Session_OpenRequest com_facebook_Session_OpenRequest::setRequestCode(int& arg0) enter");

	const char *methodName = "setRequestCode";
	const char *methodSignature = "(I)Lcom/facebook/Session$OpenRequest;";
	const char *className = "com/facebook/Session$OpenRequest";

	LOGV("com_facebook_Session_OpenRequest className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_Session_OpenRequest cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_Session_OpenRequest jni address %d", javaObject);

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

	FacebookCXX::com_facebook_Session_OpenRequest result;
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
			cxx_type_hierarchy.type_name = std::string("com.facebook.Session$OpenRequest");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_com_facebook_Session_OpenRequest(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (FacebookCXX::com_facebook_Session_OpenRequest) (FacebookCXX::com_facebook_Session_OpenRequest((FacebookCXX::com_facebook_Session_OpenRequest *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("FacebookCXX::com_facebook_Session_OpenRequest com_facebook_Session_OpenRequest::setRequestCode(int& arg0) exit");

	return result;
}
FacebookCXX::com_facebook_Session_OpenRequest com_facebook_Session_OpenRequest::setPermissions(FacebookCXX::java_util_List& arg0)
{
	LOGV("FacebookCXX::com_facebook_Session_OpenRequest com_facebook_Session_OpenRequest::setPermissions(FacebookCXX::java_util_List& arg0) enter");

	const char *methodName = "setPermissions";
	const char *methodSignature = "(Ljava/util/List;)Lcom/facebook/Session$OpenRequest;";
	const char *className = "com/facebook/Session$OpenRequest";

	LOGV("com_facebook_Session_OpenRequest className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_Session_OpenRequest cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_Session_OpenRequest jni address %d", javaObject);

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
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	FacebookCXX::com_facebook_Session_OpenRequest result;
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
			cxx_type_hierarchy.type_name = std::string("com.facebook.Session$OpenRequest");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_com_facebook_Session_OpenRequest(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (FacebookCXX::com_facebook_Session_OpenRequest) (FacebookCXX::com_facebook_Session_OpenRequest((FacebookCXX::com_facebook_Session_OpenRequest *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("FacebookCXX::com_facebook_Session_OpenRequest com_facebook_Session_OpenRequest::setPermissions(FacebookCXX::java_util_List& arg0) exit");

	return result;
}
FacebookCXX::com_facebook_Session_OpenRequest com_facebook_Session_OpenRequest::setDefaultAudience(COM_FACEBOOK_SESSIONDEFAULTAUDIENCE::com_facebook_SessionDefaultAudience& arg0)
{
	LOGV("FacebookCXX::com_facebook_Session_OpenRequest com_facebook_Session_OpenRequest::setDefaultAudience(COM_FACEBOOK_SESSIONDEFAULTAUDIENCE::com_facebook_SessionDefaultAudience& arg0) enter");

	const char *methodName = "setDefaultAudience";
	const char *methodSignature = "(Lcom/facebook/SessionDefaultAudience;)Lcom/facebook/Session$OpenRequest;";
	const char *className = "com/facebook/Session$OpenRequest";

	LOGV("com_facebook_Session_OpenRequest className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_Session_OpenRequest cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_Session_OpenRequest jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("com.facebook.SessionDefaultAudience");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_com_facebook_SessionDefaultAudience(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	FacebookCXX::com_facebook_Session_OpenRequest result;
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
			cxx_type_hierarchy.type_name = std::string("com.facebook.Session$OpenRequest");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_com_facebook_Session_OpenRequest(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (FacebookCXX::com_facebook_Session_OpenRequest) (FacebookCXX::com_facebook_Session_OpenRequest((FacebookCXX::com_facebook_Session_OpenRequest *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("FacebookCXX::com_facebook_Session_OpenRequest com_facebook_Session_OpenRequest::setDefaultAudience(COM_FACEBOOK_SESSIONDEFAULTAUDIENCE::com_facebook_SessionDefaultAudience& arg0) exit");

	return result;
}

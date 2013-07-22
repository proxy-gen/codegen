/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
	
	
	
 		 
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
 		 
	
 		 





































// Generated Code 

#include <com_facebook_model_OpenGraphAction.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <FacebookCXXConverter.hpp>

#define LOG_TAG "com_facebook_model_OpenGraphAction"
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
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
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
com_facebook_model_OpenGraphAction::com_facebook_model_OpenGraphAction(const com_facebook_model_OpenGraphAction& cc)
{
	LOGV("com_facebook_model_OpenGraphAction::com_facebook_model_OpenGraphAction(const com_facebook_model_OpenGraphAction& cc) enter");

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

	LOGV("com_facebook_model_OpenGraphAction::com_facebook_model_OpenGraphAction(const com_facebook_model_OpenGraphAction& cc) exit");
}
com_facebook_model_OpenGraphAction::com_facebook_model_OpenGraphAction(void * proxy)
{
	LOGV("com_facebook_model_OpenGraphAction::com_facebook_model_OpenGraphAction(void * proxy) enter");

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

	LOGV("com_facebook_model_OpenGraphAction::com_facebook_model_OpenGraphAction(void * proxy) exit");
}
com_facebook_model_OpenGraphAction::com_facebook_model_OpenGraphAction()
{
	LOGV("com_facebook_model_OpenGraphAction::com_facebook_model_OpenGraphAction() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, "<init>", methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("com_facebook_model_OpenGraphAction::com_facebook_model_OpenGraphAction() exit");	
}
// Public Constructors
// Default Instance Destructor
com_facebook_model_OpenGraphAction::~com_facebook_model_OpenGraphAction()
{
	LOGV("com_facebook_model_OpenGraphAction::~com_facebook_model_OpenGraphAction() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("com_facebook_model_OpenGraphAction::~com_facebook_model_OpenGraphAction() exit");
}
// Functions
FacebookCXX::java_lang_String com_facebook_model_OpenGraphAction::getMessage()
{
	LOGV("FacebookCXX::java_lang_String com_facebook_model_OpenGraphAction::getMessage() enter");

	const char *methodName = "getMessage";
	const char *methodSignature = "()Ljava/lang/String;";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);


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

	LOGV("FacebookCXX::java_lang_String com_facebook_model_OpenGraphAction::getMessage() exit");

	return result;
}
FacebookCXX::java_lang_String com_facebook_model_OpenGraphAction::getId()
{
	LOGV("FacebookCXX::java_lang_String com_facebook_model_OpenGraphAction::getId() enter");

	const char *methodName = "getId";
	const char *methodSignature = "()Ljava/lang/String;";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);


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

	LOGV("FacebookCXX::java_lang_String com_facebook_model_OpenGraphAction::getId() exit");

	return result;
}
FacebookCXX::java_lang_String com_facebook_model_OpenGraphAction::getRef()
{
	LOGV("FacebookCXX::java_lang_String com_facebook_model_OpenGraphAction::getRef() enter");

	const char *methodName = "getRef";
	const char *methodSignature = "()Ljava/lang/String;";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);


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

	LOGV("FacebookCXX::java_lang_String com_facebook_model_OpenGraphAction::getRef() exit");

	return result;
}
FacebookCXX::com_facebook_model_GraphObject com_facebook_model_OpenGraphAction::getApplication()
{
	LOGV("FacebookCXX::com_facebook_model_GraphObject com_facebook_model_OpenGraphAction::getApplication() enter");

	const char *methodName = "getApplication";
	const char *methodSignature = "()Lcom/facebook/model/GraphObject;";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);


	FacebookCXX::com_facebook_model_GraphObject result;
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
			cxx_type_hierarchy.type_name = std::string("com.facebook.model.GraphObject");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_com_facebook_model_GraphObject(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (FacebookCXX::com_facebook_model_GraphObject) (FacebookCXX::com_facebook_model_GraphObject((FacebookCXX::com_facebook_model_GraphObject *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("FacebookCXX::com_facebook_model_GraphObject com_facebook_model_OpenGraphAction::getApplication() exit");

	return result;
}
void com_facebook_model_OpenGraphAction::setId(FacebookCXX::java_lang_String& arg0)
{
	LOGV("void com_facebook_model_OpenGraphAction::setId(FacebookCXX::java_lang_String& arg0) enter");

	const char *methodName = "setId";
	const char *methodSignature = "(Ljava/lang/String;)V";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);

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
		
	jni->popLocalFrame();

	LOGV("void com_facebook_model_OpenGraphAction::setId(FacebookCXX::java_lang_String& arg0) exit");

}
void com_facebook_model_OpenGraphAction::setMessage(FacebookCXX::java_lang_String& arg0)
{
	LOGV("void com_facebook_model_OpenGraphAction::setMessage(FacebookCXX::java_lang_String& arg0) enter");

	const char *methodName = "setMessage";
	const char *methodSignature = "(Ljava/lang/String;)V";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);

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
		
	jni->popLocalFrame();

	LOGV("void com_facebook_model_OpenGraphAction::setMessage(FacebookCXX::java_lang_String& arg0) exit");

}
FacebookCXX::java_util_Date com_facebook_model_OpenGraphAction::getStartTime()
{
	LOGV("FacebookCXX::java_util_Date com_facebook_model_OpenGraphAction::getStartTime() enter");

	const char *methodName = "getStartTime";
	const char *methodSignature = "()Ljava/util/Date;";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);


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

	LOGV("FacebookCXX::java_util_Date com_facebook_model_OpenGraphAction::getStartTime() exit");

	return result;
}
void com_facebook_model_OpenGraphAction::setStartTime(FacebookCXX::java_util_Date& arg0)
{
	LOGV("void com_facebook_model_OpenGraphAction::setStartTime(FacebookCXX::java_util_Date& arg0) enter");

	const char *methodName = "setStartTime";
	const char *methodSignature = "(Ljava/util/Date;)V";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("java.util.Date");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_util_Date(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void com_facebook_model_OpenGraphAction::setStartTime(FacebookCXX::java_util_Date& arg0) exit");

}
FacebookCXX::java_util_Date com_facebook_model_OpenGraphAction::getEndTime()
{
	LOGV("FacebookCXX::java_util_Date com_facebook_model_OpenGraphAction::getEndTime() enter");

	const char *methodName = "getEndTime";
	const char *methodSignature = "()Ljava/util/Date;";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);


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

	LOGV("FacebookCXX::java_util_Date com_facebook_model_OpenGraphAction::getEndTime() exit");

	return result;
}
void com_facebook_model_OpenGraphAction::setEndTime(FacebookCXX::java_util_Date& arg0)
{
	LOGV("void com_facebook_model_OpenGraphAction::setEndTime(FacebookCXX::java_util_Date& arg0) enter");

	const char *methodName = "setEndTime";
	const char *methodSignature = "(Ljava/util/Date;)V";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("java.util.Date");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_util_Date(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void com_facebook_model_OpenGraphAction::setEndTime(FacebookCXX::java_util_Date& arg0) exit");

}
FacebookCXX::java_util_Date com_facebook_model_OpenGraphAction::getPublishTime()
{
	LOGV("FacebookCXX::java_util_Date com_facebook_model_OpenGraphAction::getPublishTime() enter");

	const char *methodName = "getPublishTime";
	const char *methodSignature = "()Ljava/util/Date;";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);


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

	LOGV("FacebookCXX::java_util_Date com_facebook_model_OpenGraphAction::getPublishTime() exit");

	return result;
}
void com_facebook_model_OpenGraphAction::setPublishTime(FacebookCXX::java_util_Date& arg0)
{
	LOGV("void com_facebook_model_OpenGraphAction::setPublishTime(FacebookCXX::java_util_Date& arg0) enter");

	const char *methodName = "setPublishTime";
	const char *methodSignature = "(Ljava/util/Date;)V";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("java.util.Date");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_util_Date(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void com_facebook_model_OpenGraphAction::setPublishTime(FacebookCXX::java_util_Date& arg0) exit");

}
FacebookCXX::java_util_Date com_facebook_model_OpenGraphAction::getCreatedTime()
{
	LOGV("FacebookCXX::java_util_Date com_facebook_model_OpenGraphAction::getCreatedTime() enter");

	const char *methodName = "getCreatedTime";
	const char *methodSignature = "()Ljava/util/Date;";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);


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

	LOGV("FacebookCXX::java_util_Date com_facebook_model_OpenGraphAction::getCreatedTime() exit");

	return result;
}
void com_facebook_model_OpenGraphAction::setCreatedTime(FacebookCXX::java_util_Date& arg0)
{
	LOGV("void com_facebook_model_OpenGraphAction::setCreatedTime(FacebookCXX::java_util_Date& arg0) enter");

	const char *methodName = "setCreatedTime";
	const char *methodSignature = "(Ljava/util/Date;)V";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("java.util.Date");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_util_Date(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void com_facebook_model_OpenGraphAction::setCreatedTime(FacebookCXX::java_util_Date& arg0) exit");

}
FacebookCXX::java_util_Date com_facebook_model_OpenGraphAction::getExpiresTime()
{
	LOGV("FacebookCXX::java_util_Date com_facebook_model_OpenGraphAction::getExpiresTime() enter");

	const char *methodName = "getExpiresTime";
	const char *methodSignature = "()Ljava/util/Date;";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);


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

	LOGV("FacebookCXX::java_util_Date com_facebook_model_OpenGraphAction::getExpiresTime() exit");

	return result;
}
void com_facebook_model_OpenGraphAction::setExpiresTime(FacebookCXX::java_util_Date& arg0)
{
	LOGV("void com_facebook_model_OpenGraphAction::setExpiresTime(FacebookCXX::java_util_Date& arg0) enter");

	const char *methodName = "setExpiresTime";
	const char *methodSignature = "(Ljava/util/Date;)V";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("java.util.Date");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_util_Date(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void com_facebook_model_OpenGraphAction::setExpiresTime(FacebookCXX::java_util_Date& arg0) exit");

}
void com_facebook_model_OpenGraphAction::setRef(FacebookCXX::java_lang_String& arg0)
{
	LOGV("void com_facebook_model_OpenGraphAction::setRef(FacebookCXX::java_lang_String& arg0) enter");

	const char *methodName = "setRef";
	const char *methodSignature = "(Ljava/lang/String;)V";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);

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
		
	jni->popLocalFrame();

	LOGV("void com_facebook_model_OpenGraphAction::setRef(FacebookCXX::java_lang_String& arg0) exit");

}
FacebookCXX::com_facebook_model_GraphPlace com_facebook_model_OpenGraphAction::getPlace()
{
	LOGV("FacebookCXX::com_facebook_model_GraphPlace com_facebook_model_OpenGraphAction::getPlace() enter");

	const char *methodName = "getPlace";
	const char *methodSignature = "()Lcom/facebook/model/GraphPlace;";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);


	FacebookCXX::com_facebook_model_GraphPlace result;
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
			cxx_type_hierarchy.type_name = std::string("com.facebook.model.GraphPlace");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_com_facebook_model_GraphPlace(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (FacebookCXX::com_facebook_model_GraphPlace) (FacebookCXX::com_facebook_model_GraphPlace((FacebookCXX::com_facebook_model_GraphPlace *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("FacebookCXX::com_facebook_model_GraphPlace com_facebook_model_OpenGraphAction::getPlace() exit");

	return result;
}
void com_facebook_model_OpenGraphAction::setPlace(FacebookCXX::com_facebook_model_GraphPlace& arg0)
{
	LOGV("void com_facebook_model_OpenGraphAction::setPlace(FacebookCXX::com_facebook_model_GraphPlace& arg0) enter");

	const char *methodName = "setPlace";
	const char *methodSignature = "(Lcom/facebook/model/GraphPlace;)V";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("com.facebook.model.GraphPlace");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_com_facebook_model_GraphPlace(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void com_facebook_model_OpenGraphAction::setPlace(FacebookCXX::com_facebook_model_GraphPlace& arg0) exit");

}
FacebookCXX::java_util_List com_facebook_model_OpenGraphAction::getTags()
{
	LOGV("FacebookCXX::java_util_List com_facebook_model_OpenGraphAction::getTags() enter");

	const char *methodName = "getTags";
	const char *methodSignature = "()Ljava/util/List;";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("com.facebook.model.GraphObject");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_com_facebook_model_GraphObject);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_util_List(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (FacebookCXX::java_util_List) (FacebookCXX::java_util_List((FacebookCXX::java_util_List *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("FacebookCXX::java_util_List com_facebook_model_OpenGraphAction::getTags() exit");

	return result;
}
void com_facebook_model_OpenGraphAction::setTags(FacebookCXX::java_util_List& arg0)
{
	LOGV("void com_facebook_model_OpenGraphAction::setTags(FacebookCXX::java_util_List& arg0) enter");

	const char *methodName = "setTags";
	const char *methodSignature = "(Ljava/util/List;)V";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("com.facebook.model.GraphObject");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_com_facebook_model_GraphObject);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_util_List(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void com_facebook_model_OpenGraphAction::setTags(FacebookCXX::java_util_List& arg0) exit");

}
FacebookCXX::java_util_List com_facebook_model_OpenGraphAction::getImage()
{
	LOGV("FacebookCXX::java_util_List com_facebook_model_OpenGraphAction::getImage() enter");

	const char *methodName = "getImage";
	const char *methodSignature = "()Ljava/util/List;";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("org.json.JSONObject");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_org_json_JSONObject);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_util_List(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (FacebookCXX::java_util_List) (FacebookCXX::java_util_List((FacebookCXX::java_util_List *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("FacebookCXX::java_util_List com_facebook_model_OpenGraphAction::getImage() exit");

	return result;
}
void com_facebook_model_OpenGraphAction::setImage(FacebookCXX::java_util_List& arg0)
{
	LOGV("void com_facebook_model_OpenGraphAction::setImage(FacebookCXX::java_util_List& arg0) enter");

	const char *methodName = "setImage";
	const char *methodSignature = "(Ljava/util/List;)V";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("org.json.JSONObject");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_org_json_JSONObject);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_util_List(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void com_facebook_model_OpenGraphAction::setImage(FacebookCXX::java_util_List& arg0) exit");

}
FacebookCXX::com_facebook_model_GraphUser com_facebook_model_OpenGraphAction::getFrom()
{
	LOGV("FacebookCXX::com_facebook_model_GraphUser com_facebook_model_OpenGraphAction::getFrom() enter");

	const char *methodName = "getFrom";
	const char *methodSignature = "()Lcom/facebook/model/GraphUser;";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);


	FacebookCXX::com_facebook_model_GraphUser result;
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
			cxx_type_hierarchy.type_name = std::string("com.facebook.model.GraphUser");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_com_facebook_model_GraphUser(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (FacebookCXX::com_facebook_model_GraphUser) (FacebookCXX::com_facebook_model_GraphUser((FacebookCXX::com_facebook_model_GraphUser *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("FacebookCXX::com_facebook_model_GraphUser com_facebook_model_OpenGraphAction::getFrom() exit");

	return result;
}
void com_facebook_model_OpenGraphAction::setFrom(FacebookCXX::com_facebook_model_GraphUser& arg0)
{
	LOGV("void com_facebook_model_OpenGraphAction::setFrom(FacebookCXX::com_facebook_model_GraphUser& arg0) enter");

	const char *methodName = "setFrom";
	const char *methodSignature = "(Lcom/facebook/model/GraphUser;)V";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("com.facebook.model.GraphUser");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_com_facebook_model_GraphUser(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void com_facebook_model_OpenGraphAction::setFrom(FacebookCXX::com_facebook_model_GraphUser& arg0) exit");

}
FacebookCXX::org_json_JSONObject com_facebook_model_OpenGraphAction::getLikes()
{
	LOGV("FacebookCXX::org_json_JSONObject com_facebook_model_OpenGraphAction::getLikes() enter");

	const char *methodName = "getLikes";
	const char *methodSignature = "()Lorg/json/JSONObject;";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);


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

	LOGV("FacebookCXX::org_json_JSONObject com_facebook_model_OpenGraphAction::getLikes() exit");

	return result;
}
void com_facebook_model_OpenGraphAction::setLikes(FacebookCXX::org_json_JSONObject& arg0)
{
	LOGV("void com_facebook_model_OpenGraphAction::setLikes(FacebookCXX::org_json_JSONObject& arg0) enter");

	const char *methodName = "setLikes";
	const char *methodSignature = "(Lorg/json/JSONObject;)V";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("org.json.JSONObject");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_org_json_JSONObject(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void com_facebook_model_OpenGraphAction::setLikes(FacebookCXX::org_json_JSONObject& arg0) exit");

}
void com_facebook_model_OpenGraphAction::setApplication(FacebookCXX::com_facebook_model_GraphObject& arg0)
{
	LOGV("void com_facebook_model_OpenGraphAction::setApplication(FacebookCXX::com_facebook_model_GraphObject& arg0) enter");

	const char *methodName = "setApplication";
	const char *methodSignature = "(Lcom/facebook/model/GraphObject;)V";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("com.facebook.model.GraphObject");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_com_facebook_model_GraphObject(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void com_facebook_model_OpenGraphAction::setApplication(FacebookCXX::com_facebook_model_GraphObject& arg0) exit");

}
FacebookCXX::org_json_JSONObject com_facebook_model_OpenGraphAction::getComments()
{
	LOGV("FacebookCXX::org_json_JSONObject com_facebook_model_OpenGraphAction::getComments() enter");

	const char *methodName = "getComments";
	const char *methodSignature = "()Lorg/json/JSONObject;";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);


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

	LOGV("FacebookCXX::org_json_JSONObject com_facebook_model_OpenGraphAction::getComments() exit");

	return result;
}
void com_facebook_model_OpenGraphAction::setComments(FacebookCXX::org_json_JSONObject& arg0)
{
	LOGV("void com_facebook_model_OpenGraphAction::setComments(FacebookCXX::org_json_JSONObject& arg0) enter");

	const char *methodName = "setComments";
	const char *methodSignature = "(Lorg/json/JSONObject;)V";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("org.json.JSONObject");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_org_json_JSONObject(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void com_facebook_model_OpenGraphAction::setComments(FacebookCXX::org_json_JSONObject& arg0) exit");

}

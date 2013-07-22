/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
 		 

























// Generated Code 

#include <com_facebook_model_GraphUser.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <FacebookCXXConverter.hpp>

#define LOG_TAG "com_facebook_model_GraphUser"
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

static long static_obj;
static long static_address = (long) &static_obj;


// Default Instance Constructors
com_facebook_model_GraphUser::com_facebook_model_GraphUser(const com_facebook_model_GraphUser& cc)
{
	LOGV("com_facebook_model_GraphUser::com_facebook_model_GraphUser(const com_facebook_model_GraphUser& cc) enter");

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

	LOGV("com_facebook_model_GraphUser::com_facebook_model_GraphUser(const com_facebook_model_GraphUser& cc) exit");
}
com_facebook_model_GraphUser::com_facebook_model_GraphUser(void * proxy)
{
	LOGV("com_facebook_model_GraphUser::com_facebook_model_GraphUser(void * proxy) enter");

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

	LOGV("com_facebook_model_GraphUser::com_facebook_model_GraphUser(void * proxy) exit");
}
com_facebook_model_GraphUser::com_facebook_model_GraphUser()
{
	LOGV("com_facebook_model_GraphUser::com_facebook_model_GraphUser() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "com/facebook/model/GraphUser";

	LOGV("com_facebook_model_GraphUser className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_GraphUser cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_GraphUser jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, "<init>", methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("com_facebook_model_GraphUser::com_facebook_model_GraphUser() exit");	
}
// Public Constructors
// Default Instance Destructor
com_facebook_model_GraphUser::~com_facebook_model_GraphUser()
{
	LOGV("com_facebook_model_GraphUser::~com_facebook_model_GraphUser() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("com_facebook_model_GraphUser::~com_facebook_model_GraphUser() exit");
}
// Functions
FacebookCXX::java_lang_String com_facebook_model_GraphUser::getName()
{
	LOGV("FacebookCXX::java_lang_String com_facebook_model_GraphUser::getName() enter");

	const char *methodName = "getName";
	const char *methodSignature = "()Ljava/lang/String;";
	const char *className = "com/facebook/model/GraphUser";

	LOGV("com_facebook_model_GraphUser className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_GraphUser cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_GraphUser jni address %d", javaObject);


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

	LOGV("FacebookCXX::java_lang_String com_facebook_model_GraphUser::getName() exit");

	return result;
}
FacebookCXX::com_facebook_model_GraphLocation com_facebook_model_GraphUser::getLocation()
{
	LOGV("FacebookCXX::com_facebook_model_GraphLocation com_facebook_model_GraphUser::getLocation() enter");

	const char *methodName = "getLocation";
	const char *methodSignature = "()Lcom/facebook/model/GraphLocation;";
	const char *className = "com/facebook/model/GraphUser";

	LOGV("com_facebook_model_GraphUser className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_GraphUser cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_GraphUser jni address %d", javaObject);


	FacebookCXX::com_facebook_model_GraphLocation result;
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
			cxx_type_hierarchy.type_name = std::string("com.facebook.model.GraphLocation");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_com_facebook_model_GraphLocation(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (FacebookCXX::com_facebook_model_GraphLocation) (FacebookCXX::com_facebook_model_GraphLocation((FacebookCXX::com_facebook_model_GraphLocation *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("FacebookCXX::com_facebook_model_GraphLocation com_facebook_model_GraphUser::getLocation() exit");

	return result;
}
void com_facebook_model_GraphUser::setName(FacebookCXX::java_lang_String& arg0)
{
	LOGV("void com_facebook_model_GraphUser::setName(FacebookCXX::java_lang_String& arg0) enter");

	const char *methodName = "setName";
	const char *methodSignature = "(Ljava/lang/String;)V";
	const char *className = "com/facebook/model/GraphUser";

	LOGV("com_facebook_model_GraphUser className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_GraphUser cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_GraphUser jni address %d", javaObject);

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

	LOGV("void com_facebook_model_GraphUser::setName(FacebookCXX::java_lang_String& arg0) exit");

}
FacebookCXX::java_lang_String com_facebook_model_GraphUser::getId()
{
	LOGV("FacebookCXX::java_lang_String com_facebook_model_GraphUser::getId() enter");

	const char *methodName = "getId";
	const char *methodSignature = "()Ljava/lang/String;";
	const char *className = "com/facebook/model/GraphUser";

	LOGV("com_facebook_model_GraphUser className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_GraphUser cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_GraphUser jni address %d", javaObject);


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

	LOGV("FacebookCXX::java_lang_String com_facebook_model_GraphUser::getId() exit");

	return result;
}
void com_facebook_model_GraphUser::setId(FacebookCXX::java_lang_String& arg0)
{
	LOGV("void com_facebook_model_GraphUser::setId(FacebookCXX::java_lang_String& arg0) enter");

	const char *methodName = "setId";
	const char *methodSignature = "(Ljava/lang/String;)V";
	const char *className = "com/facebook/model/GraphUser";

	LOGV("com_facebook_model_GraphUser className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_GraphUser cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_GraphUser jni address %d", javaObject);

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

	LOGV("void com_facebook_model_GraphUser::setId(FacebookCXX::java_lang_String& arg0) exit");

}
FacebookCXX::java_lang_String com_facebook_model_GraphUser::getFirstName()
{
	LOGV("FacebookCXX::java_lang_String com_facebook_model_GraphUser::getFirstName() enter");

	const char *methodName = "getFirstName";
	const char *methodSignature = "()Ljava/lang/String;";
	const char *className = "com/facebook/model/GraphUser";

	LOGV("com_facebook_model_GraphUser className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_GraphUser cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_GraphUser jni address %d", javaObject);


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

	LOGV("FacebookCXX::java_lang_String com_facebook_model_GraphUser::getFirstName() exit");

	return result;
}
void com_facebook_model_GraphUser::setFirstName(FacebookCXX::java_lang_String& arg0)
{
	LOGV("void com_facebook_model_GraphUser::setFirstName(FacebookCXX::java_lang_String& arg0) enter");

	const char *methodName = "setFirstName";
	const char *methodSignature = "(Ljava/lang/String;)V";
	const char *className = "com/facebook/model/GraphUser";

	LOGV("com_facebook_model_GraphUser className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_GraphUser cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_GraphUser jni address %d", javaObject);

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

	LOGV("void com_facebook_model_GraphUser::setFirstName(FacebookCXX::java_lang_String& arg0) exit");

}
FacebookCXX::java_lang_String com_facebook_model_GraphUser::getMiddleName()
{
	LOGV("FacebookCXX::java_lang_String com_facebook_model_GraphUser::getMiddleName() enter");

	const char *methodName = "getMiddleName";
	const char *methodSignature = "()Ljava/lang/String;";
	const char *className = "com/facebook/model/GraphUser";

	LOGV("com_facebook_model_GraphUser className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_GraphUser cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_GraphUser jni address %d", javaObject);


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

	LOGV("FacebookCXX::java_lang_String com_facebook_model_GraphUser::getMiddleName() exit");

	return result;
}
void com_facebook_model_GraphUser::setMiddleName(FacebookCXX::java_lang_String& arg0)
{
	LOGV("void com_facebook_model_GraphUser::setMiddleName(FacebookCXX::java_lang_String& arg0) enter");

	const char *methodName = "setMiddleName";
	const char *methodSignature = "(Ljava/lang/String;)V";
	const char *className = "com/facebook/model/GraphUser";

	LOGV("com_facebook_model_GraphUser className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_GraphUser cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_GraphUser jni address %d", javaObject);

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

	LOGV("void com_facebook_model_GraphUser::setMiddleName(FacebookCXX::java_lang_String& arg0) exit");

}
FacebookCXX::java_lang_String com_facebook_model_GraphUser::getLastName()
{
	LOGV("FacebookCXX::java_lang_String com_facebook_model_GraphUser::getLastName() enter");

	const char *methodName = "getLastName";
	const char *methodSignature = "()Ljava/lang/String;";
	const char *className = "com/facebook/model/GraphUser";

	LOGV("com_facebook_model_GraphUser className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_GraphUser cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_GraphUser jni address %d", javaObject);


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

	LOGV("FacebookCXX::java_lang_String com_facebook_model_GraphUser::getLastName() exit");

	return result;
}
void com_facebook_model_GraphUser::setLastName(FacebookCXX::java_lang_String& arg0)
{
	LOGV("void com_facebook_model_GraphUser::setLastName(FacebookCXX::java_lang_String& arg0) enter");

	const char *methodName = "setLastName";
	const char *methodSignature = "(Ljava/lang/String;)V";
	const char *className = "com/facebook/model/GraphUser";

	LOGV("com_facebook_model_GraphUser className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_GraphUser cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_GraphUser jni address %d", javaObject);

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

	LOGV("void com_facebook_model_GraphUser::setLastName(FacebookCXX::java_lang_String& arg0) exit");

}
FacebookCXX::java_lang_String com_facebook_model_GraphUser::getLink()
{
	LOGV("FacebookCXX::java_lang_String com_facebook_model_GraphUser::getLink() enter");

	const char *methodName = "getLink";
	const char *methodSignature = "()Ljava/lang/String;";
	const char *className = "com/facebook/model/GraphUser";

	LOGV("com_facebook_model_GraphUser className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_GraphUser cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_GraphUser jni address %d", javaObject);


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

	LOGV("FacebookCXX::java_lang_String com_facebook_model_GraphUser::getLink() exit");

	return result;
}
void com_facebook_model_GraphUser::setLink(FacebookCXX::java_lang_String& arg0)
{
	LOGV("void com_facebook_model_GraphUser::setLink(FacebookCXX::java_lang_String& arg0) enter");

	const char *methodName = "setLink";
	const char *methodSignature = "(Ljava/lang/String;)V";
	const char *className = "com/facebook/model/GraphUser";

	LOGV("com_facebook_model_GraphUser className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_GraphUser cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_GraphUser jni address %d", javaObject);

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

	LOGV("void com_facebook_model_GraphUser::setLink(FacebookCXX::java_lang_String& arg0) exit");

}
FacebookCXX::java_lang_String com_facebook_model_GraphUser::getUsername()
{
	LOGV("FacebookCXX::java_lang_String com_facebook_model_GraphUser::getUsername() enter");

	const char *methodName = "getUsername";
	const char *methodSignature = "()Ljava/lang/String;";
	const char *className = "com/facebook/model/GraphUser";

	LOGV("com_facebook_model_GraphUser className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_GraphUser cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_GraphUser jni address %d", javaObject);


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

	LOGV("FacebookCXX::java_lang_String com_facebook_model_GraphUser::getUsername() exit");

	return result;
}
void com_facebook_model_GraphUser::setUsername(FacebookCXX::java_lang_String& arg0)
{
	LOGV("void com_facebook_model_GraphUser::setUsername(FacebookCXX::java_lang_String& arg0) enter");

	const char *methodName = "setUsername";
	const char *methodSignature = "(Ljava/lang/String;)V";
	const char *className = "com/facebook/model/GraphUser";

	LOGV("com_facebook_model_GraphUser className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_GraphUser cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_GraphUser jni address %d", javaObject);

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

	LOGV("void com_facebook_model_GraphUser::setUsername(FacebookCXX::java_lang_String& arg0) exit");

}
FacebookCXX::java_lang_String com_facebook_model_GraphUser::getBirthday()
{
	LOGV("FacebookCXX::java_lang_String com_facebook_model_GraphUser::getBirthday() enter");

	const char *methodName = "getBirthday";
	const char *methodSignature = "()Ljava/lang/String;";
	const char *className = "com/facebook/model/GraphUser";

	LOGV("com_facebook_model_GraphUser className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_GraphUser cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_GraphUser jni address %d", javaObject);


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

	LOGV("FacebookCXX::java_lang_String com_facebook_model_GraphUser::getBirthday() exit");

	return result;
}
void com_facebook_model_GraphUser::setBirthday(FacebookCXX::java_lang_String& arg0)
{
	LOGV("void com_facebook_model_GraphUser::setBirthday(FacebookCXX::java_lang_String& arg0) enter");

	const char *methodName = "setBirthday";
	const char *methodSignature = "(Ljava/lang/String;)V";
	const char *className = "com/facebook/model/GraphUser";

	LOGV("com_facebook_model_GraphUser className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_GraphUser cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_GraphUser jni address %d", javaObject);

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

	LOGV("void com_facebook_model_GraphUser::setBirthday(FacebookCXX::java_lang_String& arg0) exit");

}
void com_facebook_model_GraphUser::setLocation(FacebookCXX::com_facebook_model_GraphLocation& arg0)
{
	LOGV("void com_facebook_model_GraphUser::setLocation(FacebookCXX::com_facebook_model_GraphLocation& arg0) enter");

	const char *methodName = "setLocation";
	const char *methodSignature = "(Lcom/facebook/model/GraphLocation;)V";
	const char *className = "com/facebook/model/GraphUser";

	LOGV("com_facebook_model_GraphUser className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_GraphUser cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_GraphUser jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("com.facebook.model.GraphLocation");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_com_facebook_model_GraphLocation(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void com_facebook_model_GraphUser::setLocation(FacebookCXX::com_facebook_model_GraphLocation& arg0) exit");

}

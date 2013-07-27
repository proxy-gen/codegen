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
// TODO: FIXME: add include package
// FIXME: remove after testing
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "com_facebook_model_OpenGraphAction"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace FacebookCXX;

// 
// 
// 
// 
// 
// 
// using namespace AndroidCXX;
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
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
com_facebook_model_OpenGraphAction::com_facebook_model_OpenGraphAction(Proxy proxy)
{
	LOGV("com_facebook_model_OpenGraphAction::com_facebook_model_OpenGraphAction(Proxy proxy) enter");

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

	LOGV("com_facebook_model_OpenGraphAction::com_facebook_model_OpenGraphAction(Proxy proxy) exit");
}
Proxy com_facebook_model_OpenGraphAction::proxy() const
{	
	LOGV("com_facebook_model_OpenGraphAction::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("com_facebook_model_OpenGraphAction::proxy() exit");	

	return proxy;
}
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
AndroidCXX::java_lang_String com_facebook_model_OpenGraphAction::getMessage()
{
	LOGV("AndroidCXX::java_lang_String com_facebook_model_OpenGraphAction::getMessage() enter");

	const char *methodName = "getMessage";
	const char *methodSignature = "()Ljava/lang/String;";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);


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
		
	LOGV("AndroidCXX::java_lang_String com_facebook_model_OpenGraphAction::getMessage() exit");

	return result;
}
AndroidCXX::java_lang_String com_facebook_model_OpenGraphAction::getId()
{
	LOGV("AndroidCXX::java_lang_String com_facebook_model_OpenGraphAction::getId() enter");

	const char *methodName = "getId";
	const char *methodSignature = "()Ljava/lang/String;";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);


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
		
	LOGV("AndroidCXX::java_lang_String com_facebook_model_OpenGraphAction::getId() exit");

	return result;
}
AndroidCXX::java_lang_String com_facebook_model_OpenGraphAction::getRef()
{
	LOGV("AndroidCXX::java_lang_String com_facebook_model_OpenGraphAction::getRef() enter");

	const char *methodName = "getRef";
	const char *methodSignature = "()Ljava/lang/String;";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);


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
		
	LOGV("AndroidCXX::java_lang_String com_facebook_model_OpenGraphAction::getRef() exit");

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

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);


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

	FacebookCXX::com_facebook_model_GraphObject result((FacebookCXX::com_facebook_model_GraphObject) *((FacebookCXX::com_facebook_model_GraphObject *) cxx_value));
	delete ((FacebookCXX::com_facebook_model_GraphObject *) cxx_value);
		
	LOGV("FacebookCXX::com_facebook_model_GraphObject com_facebook_model_OpenGraphAction::getApplication() exit");

	return result;
}
void com_facebook_model_OpenGraphAction::setId(AndroidCXX::java_lang_String const& arg0)
{
	LOGV("void com_facebook_model_OpenGraphAction::setId(AndroidCXX::java_lang_String const& arg0) enter");

	const char *methodName = "setId";
	const char *methodSignature = "(Ljava/lang/String;)V";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

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
		
	LOGV("void com_facebook_model_OpenGraphAction::setId(AndroidCXX::java_lang_String const& arg0) exit");

}
void com_facebook_model_OpenGraphAction::setMessage(AndroidCXX::java_lang_String const& arg0)
{
	LOGV("void com_facebook_model_OpenGraphAction::setMessage(AndroidCXX::java_lang_String const& arg0) enter");

	const char *methodName = "setMessage";
	const char *methodSignature = "(Ljava/lang/String;)V";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

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
		
	LOGV("void com_facebook_model_OpenGraphAction::setMessage(AndroidCXX::java_lang_String const& arg0) exit");

}
AndroidCXX::java_util_Date com_facebook_model_OpenGraphAction::getStartTime()
{
	LOGV("AndroidCXX::java_util_Date com_facebook_model_OpenGraphAction::getStartTime() enter");

	const char *methodName = "getStartTime";
	const char *methodSignature = "()Ljava/util/Date;";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);


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

	AndroidCXX::java_util_Date result((AndroidCXX::java_util_Date) *((AndroidCXX::java_util_Date *) cxx_value));
	delete ((AndroidCXX::java_util_Date *) cxx_value);
		
	LOGV("AndroidCXX::java_util_Date com_facebook_model_OpenGraphAction::getStartTime() exit");

	return result;
}
void com_facebook_model_OpenGraphAction::setStartTime(AndroidCXX::java_util_Date const& arg0)
{
	LOGV("void com_facebook_model_OpenGraphAction::setStartTime(AndroidCXX::java_util_Date const& arg0) enter");

	const char *methodName = "setStartTime";
	const char *methodSignature = "(Ljava/util/Date;)V";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

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
		
	LOGV("void com_facebook_model_OpenGraphAction::setStartTime(AndroidCXX::java_util_Date const& arg0) exit");

}
AndroidCXX::java_util_Date com_facebook_model_OpenGraphAction::getEndTime()
{
	LOGV("AndroidCXX::java_util_Date com_facebook_model_OpenGraphAction::getEndTime() enter");

	const char *methodName = "getEndTime";
	const char *methodSignature = "()Ljava/util/Date;";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);


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

	AndroidCXX::java_util_Date result((AndroidCXX::java_util_Date) *((AndroidCXX::java_util_Date *) cxx_value));
	delete ((AndroidCXX::java_util_Date *) cxx_value);
		
	LOGV("AndroidCXX::java_util_Date com_facebook_model_OpenGraphAction::getEndTime() exit");

	return result;
}
void com_facebook_model_OpenGraphAction::setEndTime(AndroidCXX::java_util_Date const& arg0)
{
	LOGV("void com_facebook_model_OpenGraphAction::setEndTime(AndroidCXX::java_util_Date const& arg0) enter");

	const char *methodName = "setEndTime";
	const char *methodSignature = "(Ljava/util/Date;)V";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

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
		
	LOGV("void com_facebook_model_OpenGraphAction::setEndTime(AndroidCXX::java_util_Date const& arg0) exit");

}
AndroidCXX::java_util_Date com_facebook_model_OpenGraphAction::getPublishTime()
{
	LOGV("AndroidCXX::java_util_Date com_facebook_model_OpenGraphAction::getPublishTime() enter");

	const char *methodName = "getPublishTime";
	const char *methodSignature = "()Ljava/util/Date;";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);


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

	AndroidCXX::java_util_Date result((AndroidCXX::java_util_Date) *((AndroidCXX::java_util_Date *) cxx_value));
	delete ((AndroidCXX::java_util_Date *) cxx_value);
		
	LOGV("AndroidCXX::java_util_Date com_facebook_model_OpenGraphAction::getPublishTime() exit");

	return result;
}
void com_facebook_model_OpenGraphAction::setPublishTime(AndroidCXX::java_util_Date const& arg0)
{
	LOGV("void com_facebook_model_OpenGraphAction::setPublishTime(AndroidCXX::java_util_Date const& arg0) enter");

	const char *methodName = "setPublishTime";
	const char *methodSignature = "(Ljava/util/Date;)V";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

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
		
	LOGV("void com_facebook_model_OpenGraphAction::setPublishTime(AndroidCXX::java_util_Date const& arg0) exit");

}
AndroidCXX::java_util_Date com_facebook_model_OpenGraphAction::getCreatedTime()
{
	LOGV("AndroidCXX::java_util_Date com_facebook_model_OpenGraphAction::getCreatedTime() enter");

	const char *methodName = "getCreatedTime";
	const char *methodSignature = "()Ljava/util/Date;";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);


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

	AndroidCXX::java_util_Date result((AndroidCXX::java_util_Date) *((AndroidCXX::java_util_Date *) cxx_value));
	delete ((AndroidCXX::java_util_Date *) cxx_value);
		
	LOGV("AndroidCXX::java_util_Date com_facebook_model_OpenGraphAction::getCreatedTime() exit");

	return result;
}
void com_facebook_model_OpenGraphAction::setCreatedTime(AndroidCXX::java_util_Date const& arg0)
{
	LOGV("void com_facebook_model_OpenGraphAction::setCreatedTime(AndroidCXX::java_util_Date const& arg0) enter");

	const char *methodName = "setCreatedTime";
	const char *methodSignature = "(Ljava/util/Date;)V";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

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
		
	LOGV("void com_facebook_model_OpenGraphAction::setCreatedTime(AndroidCXX::java_util_Date const& arg0) exit");

}
AndroidCXX::java_util_Date com_facebook_model_OpenGraphAction::getExpiresTime()
{
	LOGV("AndroidCXX::java_util_Date com_facebook_model_OpenGraphAction::getExpiresTime() enter");

	const char *methodName = "getExpiresTime";
	const char *methodSignature = "()Ljava/util/Date;";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);


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

	AndroidCXX::java_util_Date result((AndroidCXX::java_util_Date) *((AndroidCXX::java_util_Date *) cxx_value));
	delete ((AndroidCXX::java_util_Date *) cxx_value);
		
	LOGV("AndroidCXX::java_util_Date com_facebook_model_OpenGraphAction::getExpiresTime() exit");

	return result;
}
void com_facebook_model_OpenGraphAction::setExpiresTime(AndroidCXX::java_util_Date const& arg0)
{
	LOGV("void com_facebook_model_OpenGraphAction::setExpiresTime(AndroidCXX::java_util_Date const& arg0) enter");

	const char *methodName = "setExpiresTime";
	const char *methodSignature = "(Ljava/util/Date;)V";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

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
		
	LOGV("void com_facebook_model_OpenGraphAction::setExpiresTime(AndroidCXX::java_util_Date const& arg0) exit");

}
void com_facebook_model_OpenGraphAction::setRef(AndroidCXX::java_lang_String const& arg0)
{
	LOGV("void com_facebook_model_OpenGraphAction::setRef(AndroidCXX::java_lang_String const& arg0) enter");

	const char *methodName = "setRef";
	const char *methodSignature = "(Ljava/lang/String;)V";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

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
		
	LOGV("void com_facebook_model_OpenGraphAction::setRef(AndroidCXX::java_lang_String const& arg0) exit");

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

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);


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

	FacebookCXX::com_facebook_model_GraphPlace result((FacebookCXX::com_facebook_model_GraphPlace) *((FacebookCXX::com_facebook_model_GraphPlace *) cxx_value));
	delete ((FacebookCXX::com_facebook_model_GraphPlace *) cxx_value);
		
	LOGV("FacebookCXX::com_facebook_model_GraphPlace com_facebook_model_OpenGraphAction::getPlace() exit");

	return result;
}
void com_facebook_model_OpenGraphAction::setPlace(FacebookCXX::com_facebook_model_GraphPlace const& arg0)
{
	LOGV("void com_facebook_model_OpenGraphAction::setPlace(FacebookCXX::com_facebook_model_GraphPlace const& arg0) enter");

	const char *methodName = "setPlace";
	const char *methodSignature = "(Lcom/facebook/model/GraphPlace;)V";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

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
		
	LOGV("void com_facebook_model_OpenGraphAction::setPlace(FacebookCXX::com_facebook_model_GraphPlace const& arg0) exit");

}
AndroidCXX::java_util_List com_facebook_model_OpenGraphAction::getTags()
{
	LOGV("AndroidCXX::java_util_List com_facebook_model_OpenGraphAction::getTags() enter");

	const char *methodName = "getTags";
	const char *methodSignature = "()Ljava/util/List;";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);


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

	AndroidCXX::java_util_List result((AndroidCXX::java_util_List) *((AndroidCXX::java_util_List *) cxx_value));
	delete ((AndroidCXX::java_util_List *) cxx_value);
		
	LOGV("AndroidCXX::java_util_List com_facebook_model_OpenGraphAction::getTags() exit");

	return result;
}
void com_facebook_model_OpenGraphAction::setTags(AndroidCXX::java_util_List const& arg0)
{
	LOGV("void com_facebook_model_OpenGraphAction::setTags(AndroidCXX::java_util_List const& arg0) enter");

	const char *methodName = "setTags";
	const char *methodSignature = "(Ljava/util/List;)V";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

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
		
	LOGV("void com_facebook_model_OpenGraphAction::setTags(AndroidCXX::java_util_List const& arg0) exit");

}
AndroidCXX::java_util_List com_facebook_model_OpenGraphAction::getImage()
{
	LOGV("AndroidCXX::java_util_List com_facebook_model_OpenGraphAction::getImage() enter");

	const char *methodName = "getImage";
	const char *methodSignature = "()Ljava/util/List;";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);


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

	AndroidCXX::java_util_List result((AndroidCXX::java_util_List) *((AndroidCXX::java_util_List *) cxx_value));
	delete ((AndroidCXX::java_util_List *) cxx_value);
		
	LOGV("AndroidCXX::java_util_List com_facebook_model_OpenGraphAction::getImage() exit");

	return result;
}
void com_facebook_model_OpenGraphAction::setImage(AndroidCXX::java_util_List const& arg0)
{
	LOGV("void com_facebook_model_OpenGraphAction::setImage(AndroidCXX::java_util_List const& arg0) enter");

	const char *methodName = "setImage";
	const char *methodSignature = "(Ljava/util/List;)V";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

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
		
	LOGV("void com_facebook_model_OpenGraphAction::setImage(AndroidCXX::java_util_List const& arg0) exit");

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

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);


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

	FacebookCXX::com_facebook_model_GraphUser result((FacebookCXX::com_facebook_model_GraphUser) *((FacebookCXX::com_facebook_model_GraphUser *) cxx_value));
	delete ((FacebookCXX::com_facebook_model_GraphUser *) cxx_value);
		
	LOGV("FacebookCXX::com_facebook_model_GraphUser com_facebook_model_OpenGraphAction::getFrom() exit");

	return result;
}
void com_facebook_model_OpenGraphAction::setFrom(FacebookCXX::com_facebook_model_GraphUser const& arg0)
{
	LOGV("void com_facebook_model_OpenGraphAction::setFrom(FacebookCXX::com_facebook_model_GraphUser const& arg0) enter");

	const char *methodName = "setFrom";
	const char *methodSignature = "(Lcom/facebook/model/GraphUser;)V";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

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
		
	LOGV("void com_facebook_model_OpenGraphAction::setFrom(FacebookCXX::com_facebook_model_GraphUser const& arg0) exit");

}
AndroidCXX::org_json_JSONObject com_facebook_model_OpenGraphAction::getLikes()
{
	LOGV("AndroidCXX::org_json_JSONObject com_facebook_model_OpenGraphAction::getLikes() enter");

	const char *methodName = "getLikes";
	const char *methodSignature = "()Lorg/json/JSONObject;";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);


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

	AndroidCXX::org_json_JSONObject result((AndroidCXX::org_json_JSONObject) *((AndroidCXX::org_json_JSONObject *) cxx_value));
	delete ((AndroidCXX::org_json_JSONObject *) cxx_value);
		
	LOGV("AndroidCXX::org_json_JSONObject com_facebook_model_OpenGraphAction::getLikes() exit");

	return result;
}
void com_facebook_model_OpenGraphAction::setLikes(AndroidCXX::org_json_JSONObject const& arg0)
{
	LOGV("void com_facebook_model_OpenGraphAction::setLikes(AndroidCXX::org_json_JSONObject const& arg0) enter");

	const char *methodName = "setLikes";
	const char *methodSignature = "(Lorg/json/JSONObject;)V";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

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
		
	LOGV("void com_facebook_model_OpenGraphAction::setLikes(AndroidCXX::org_json_JSONObject const& arg0) exit");

}
void com_facebook_model_OpenGraphAction::setApplication(FacebookCXX::com_facebook_model_GraphObject const& arg0)
{
	LOGV("void com_facebook_model_OpenGraphAction::setApplication(FacebookCXX::com_facebook_model_GraphObject const& arg0) enter");

	const char *methodName = "setApplication";
	const char *methodSignature = "(Lcom/facebook/model/GraphObject;)V";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

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
		
	LOGV("void com_facebook_model_OpenGraphAction::setApplication(FacebookCXX::com_facebook_model_GraphObject const& arg0) exit");

}
AndroidCXX::org_json_JSONObject com_facebook_model_OpenGraphAction::getComments()
{
	LOGV("AndroidCXX::org_json_JSONObject com_facebook_model_OpenGraphAction::getComments() enter");

	const char *methodName = "getComments";
	const char *methodSignature = "()Lorg/json/JSONObject;";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_OpenGraphAction cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_OpenGraphAction jni address %d", javaObject);


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

	AndroidCXX::org_json_JSONObject result((AndroidCXX::org_json_JSONObject) *((AndroidCXX::org_json_JSONObject *) cxx_value));
	delete ((AndroidCXX::org_json_JSONObject *) cxx_value);
		
	LOGV("AndroidCXX::org_json_JSONObject com_facebook_model_OpenGraphAction::getComments() exit");

	return result;
}
void com_facebook_model_OpenGraphAction::setComments(AndroidCXX::org_json_JSONObject const& arg0)
{
	LOGV("void com_facebook_model_OpenGraphAction::setComments(AndroidCXX::org_json_JSONObject const& arg0) enter");

	const char *methodName = "setComments";
	const char *methodSignature = "(Lorg/json/JSONObject;)V";
	const char *className = "com/facebook/model/OpenGraphAction";

	LOGV("com_facebook_model_OpenGraphAction className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

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
		
	LOGV("void com_facebook_model_OpenGraphAction::setComments(AndroidCXX::org_json_JSONObject const& arg0) exit");

}

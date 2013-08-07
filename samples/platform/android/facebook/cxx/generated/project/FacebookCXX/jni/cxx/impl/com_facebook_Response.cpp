/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
 		 
	
	
	
	
 		 
	
	
	
 		 
	

















// Generated Code 

#include <com_facebook_Response.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <CXXConverter.hpp>
#include <FacebookCXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "com_facebook_Response"
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
// using namespace com_facebook_Response_PagingDirection;
// 
// 
// 
// 
// 
// 

static long static_obj;
static long static_address = (long) &static_obj;

com_facebook_Response::com_facebook_Response(const com_facebook_Response& cc)
{
	LOGV("com_facebook_Response::com_facebook_Response(const com_facebook_Response& cc) enter");

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

	LOGV("com_facebook_Response::com_facebook_Response(const com_facebook_Response& cc) exit");
}
com_facebook_Response::com_facebook_Response(Proxy proxy)
{
	LOGV("com_facebook_Response::com_facebook_Response(Proxy proxy) enter");

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

	LOGV("com_facebook_Response::com_facebook_Response(Proxy proxy) exit");
}
Proxy com_facebook_Response::proxy() const
{	
	LOGV("com_facebook_Response::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_Response cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_Response jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("com_facebook_Response::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
com_facebook_Response::~com_facebook_Response()
{
	LOGV("com_facebook_Response::~com_facebook_Response() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("com_facebook_Response::~com_facebook_Response() exit");
}
// Functions
AndroidCXX::java_lang_String com_facebook_Response::toString()
{
	LOGV("AndroidCXX::java_lang_String com_facebook_Response::toString() enter");

	const char *methodName = "toString";
	const char *methodSignature = "()Ljava/lang/String;";
	const char *className = "com/facebook/Response";

	LOGV("com_facebook_Response className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_Response cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_Response jni address %d", javaObject);


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
		
	LOGV("AndroidCXX::java_lang_String com_facebook_Response::toString() exit");

	return result;
}
FacebookCXX::com_facebook_model_GraphObject com_facebook_Response::getGraphObjectAs(AndroidCXX::java_lang_Class const& arg0)
{
	LOGV("FacebookCXX::com_facebook_model_GraphObject com_facebook_Response::getGraphObjectAs(AndroidCXX::java_lang_Class const& arg0) enter");

	const char *methodName = "getGraphObjectAs";
	const char *methodSignature = "(Ljava/lang/Class;)Lcom/facebook/model/GraphObject;";
	const char *className = "com/facebook/Response";

	LOGV("com_facebook_Response className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_Response cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_Response jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("java.lang.Class");
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
		convert_java_lang_Class(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

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
			cxx_type_hierarchy.type_name = std::string("com.facebook.model.GraphObject");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_com_facebook_model_GraphObject(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	FacebookCXX::com_facebook_model_GraphObject result((FacebookCXX::com_facebook_model_GraphObject) *((FacebookCXX::com_facebook_model_GraphObject *) cxx_value));
	delete ((FacebookCXX::com_facebook_model_GraphObject *) cxx_value);
		
	LOGV("FacebookCXX::com_facebook_model_GraphObject com_facebook_Response::getGraphObjectAs(AndroidCXX::java_lang_Class const& arg0) exit");

	return result;
}
FacebookCXX::com_facebook_FacebookRequestError com_facebook_Response::getError()
{
	LOGV("FacebookCXX::com_facebook_FacebookRequestError com_facebook_Response::getError() enter");

	const char *methodName = "getError";
	const char *methodSignature = "()Lcom/facebook/FacebookRequestError;";
	const char *className = "com/facebook/Response";

	LOGV("com_facebook_Response className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_Response cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_Response jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("com.facebook.FacebookRequestError");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_com_facebook_FacebookRequestError(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	FacebookCXX::com_facebook_FacebookRequestError result((FacebookCXX::com_facebook_FacebookRequestError) *((FacebookCXX::com_facebook_FacebookRequestError *) cxx_value));
	delete ((FacebookCXX::com_facebook_FacebookRequestError *) cxx_value);
		
	LOGV("FacebookCXX::com_facebook_FacebookRequestError com_facebook_Response::getError() exit");

	return result;
}
FacebookCXX::com_facebook_model_GraphObject com_facebook_Response::getGraphObject()
{
	LOGV("FacebookCXX::com_facebook_model_GraphObject com_facebook_Response::getGraphObject() enter");

	const char *methodName = "getGraphObject";
	const char *methodSignature = "()Lcom/facebook/model/GraphObject;";
	const char *className = "com/facebook/Response";

	LOGV("com_facebook_Response className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_Response cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_Response jni address %d", javaObject);


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
		
	LOGV("FacebookCXX::com_facebook_model_GraphObject com_facebook_Response::getGraphObject() exit");

	return result;
}
FacebookCXX::com_facebook_model_GraphObjectList com_facebook_Response::getGraphObjectList()
{
	LOGV("FacebookCXX::com_facebook_model_GraphObjectList com_facebook_Response::getGraphObjectList() enter");

	const char *methodName = "getGraphObjectList";
	const char *methodSignature = "()Lcom/facebook/model/GraphObjectList;";
	const char *className = "com/facebook/Response";

	LOGV("com_facebook_Response className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_Response cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_Response jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("com.facebook.model.GraphObjectList");
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
		convert_com_facebook_model_GraphObjectList(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	FacebookCXX::com_facebook_model_GraphObjectList result((FacebookCXX::com_facebook_model_GraphObjectList) *((FacebookCXX::com_facebook_model_GraphObjectList *) cxx_value));
	delete ((FacebookCXX::com_facebook_model_GraphObjectList *) cxx_value);
		
	LOGV("FacebookCXX::com_facebook_model_GraphObjectList com_facebook_Response::getGraphObjectList() exit");

	return result;
}
FacebookCXX::com_facebook_model_GraphObjectList com_facebook_Response::getGraphObjectListAs(AndroidCXX::java_lang_Class const& arg0)
{
	LOGV("FacebookCXX::com_facebook_model_GraphObjectList com_facebook_Response::getGraphObjectListAs(AndroidCXX::java_lang_Class const& arg0) enter");

	const char *methodName = "getGraphObjectListAs";
	const char *methodSignature = "(Ljava/lang/Class;)Lcom/facebook/model/GraphObjectList;";
	const char *className = "com/facebook/Response";

	LOGV("com_facebook_Response className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_Response cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_Response jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("java.lang.Class");
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
		convert_java_lang_Class(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

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
			cxx_type_hierarchy.type_name = std::string("com.facebook.model.GraphObjectList");
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
		convert_com_facebook_model_GraphObjectList(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	FacebookCXX::com_facebook_model_GraphObjectList result((FacebookCXX::com_facebook_model_GraphObjectList) *((FacebookCXX::com_facebook_model_GraphObjectList *) cxx_value));
	delete ((FacebookCXX::com_facebook_model_GraphObjectList *) cxx_value);
		
	LOGV("FacebookCXX::com_facebook_model_GraphObjectList com_facebook_Response::getGraphObjectListAs(AndroidCXX::java_lang_Class const& arg0) exit");

	return result;
}
AndroidCXX::java_net_HttpURLConnection com_facebook_Response::getConnection()
{
	LOGV("AndroidCXX::java_net_HttpURLConnection com_facebook_Response::getConnection() enter");

	const char *methodName = "getConnection";
	const char *methodSignature = "()Ljava/net/HttpURLConnection;";
	const char *className = "com/facebook/Response";

	LOGV("com_facebook_Response className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_Response cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_Response jni address %d", javaObject);


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

	AndroidCXX::java_net_HttpURLConnection result((AndroidCXX::java_net_HttpURLConnection) *((AndroidCXX::java_net_HttpURLConnection *) cxx_value));
	delete ((AndroidCXX::java_net_HttpURLConnection *) cxx_value);
		
	LOGV("AndroidCXX::java_net_HttpURLConnection com_facebook_Response::getConnection() exit");

	return result;
}
FacebookCXX::com_facebook_Request com_facebook_Response::getRequest()
{
	LOGV("FacebookCXX::com_facebook_Request com_facebook_Response::getRequest() enter");

	const char *methodName = "getRequest";
	const char *methodSignature = "()Lcom/facebook/Request;";
	const char *className = "com/facebook/Response";

	LOGV("com_facebook_Response className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_Response cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_Response jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("com.facebook.Request");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_com_facebook_Request(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	FacebookCXX::com_facebook_Request result((FacebookCXX::com_facebook_Request) *((FacebookCXX::com_facebook_Request *) cxx_value));
	delete ((FacebookCXX::com_facebook_Request *) cxx_value);
		
	LOGV("FacebookCXX::com_facebook_Request com_facebook_Response::getRequest() exit");

	return result;
}
FacebookCXX::com_facebook_Request com_facebook_Response::getRequestForPagedResults(com_facebook_Response_PagingDirection::com_facebook_Response_PagingDirection const& arg0)
{
	LOGV("FacebookCXX::com_facebook_Request com_facebook_Response::getRequestForPagedResults(com_facebook_Response_PagingDirection::com_facebook_Response_PagingDirection const& arg0) enter");

	const char *methodName = "getRequestForPagedResults";
	const char *methodSignature = "(Lcom/facebook/Response$PagingDirection;)Lcom/facebook/Request;";
	const char *className = "com/facebook/Response";

	LOGV("com_facebook_Response className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_Response cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_Response jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("com.facebook.Response$PagingDirection");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_com_facebook_Response_PagingDirection(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

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
			cxx_type_hierarchy.type_name = std::string("com.facebook.Request");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_com_facebook_Request(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	FacebookCXX::com_facebook_Request result((FacebookCXX::com_facebook_Request) *((FacebookCXX::com_facebook_Request *) cxx_value));
	delete ((FacebookCXX::com_facebook_Request *) cxx_value);
		
	LOGV("FacebookCXX::com_facebook_Request com_facebook_Response::getRequestForPagedResults(com_facebook_Response_PagingDirection::com_facebook_Response_PagingDirection const& arg0) exit");

	return result;
}
bool com_facebook_Response::getIsFromCache()
{
	LOGV("bool com_facebook_Response::getIsFromCache() enter");

	const char *methodName = "getIsFromCache";
	const char *methodSignature = "()Z";
	const char *className = "com/facebook/Response";

	LOGV("com_facebook_Response className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_Response cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_Response jni address %d", javaObject);


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
		
	LOGV("bool com_facebook_Response::getIsFromCache() exit");

	return result;
}

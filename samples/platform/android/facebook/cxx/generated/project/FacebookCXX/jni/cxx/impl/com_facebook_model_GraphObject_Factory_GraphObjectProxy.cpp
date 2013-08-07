/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
	
	


 		 
 		 
 	
 		 








// Generated Code 

#include <com_facebook_model_GraphObject_Factory_GraphObjectProxy.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <CXXConverter.hpp>
#include <FacebookCXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "com_facebook_model_GraphObject_Factory_GraphObjectProxy"
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

static long static_obj;
static long static_address = (long) &static_obj;

com_facebook_model_GraphObject_Factory_GraphObjectProxy::com_facebook_model_GraphObject_Factory_GraphObjectProxy(const com_facebook_model_GraphObject_Factory_GraphObjectProxy& cc)
{
	LOGV("com_facebook_model_GraphObject_Factory_GraphObjectProxy::com_facebook_model_GraphObject_Factory_GraphObjectProxy(const com_facebook_model_GraphObject_Factory_GraphObjectProxy& cc) enter");

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

	LOGV("com_facebook_model_GraphObject_Factory_GraphObjectProxy::com_facebook_model_GraphObject_Factory_GraphObjectProxy(const com_facebook_model_GraphObject_Factory_GraphObjectProxy& cc) exit");
}
com_facebook_model_GraphObject_Factory_GraphObjectProxy::com_facebook_model_GraphObject_Factory_GraphObjectProxy(Proxy proxy)
{
	LOGV("com_facebook_model_GraphObject_Factory_GraphObjectProxy::com_facebook_model_GraphObject_Factory_GraphObjectProxy(Proxy proxy) enter");

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

	LOGV("com_facebook_model_GraphObject_Factory_GraphObjectProxy::com_facebook_model_GraphObject_Factory_GraphObjectProxy(Proxy proxy) exit");
}
Proxy com_facebook_model_GraphObject_Factory_GraphObjectProxy::proxy() const
{	
	LOGV("com_facebook_model_GraphObject_Factory_GraphObjectProxy::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_GraphObject_Factory_GraphObjectProxy cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_GraphObject_Factory_GraphObjectProxy jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("com_facebook_model_GraphObject_Factory_GraphObjectProxy::proxy() exit");	

	return proxy;
}
com_facebook_model_GraphObject_Factory_GraphObjectProxy::com_facebook_model_GraphObject_Factory_GraphObjectProxy(AndroidCXX::org_json_JSONObject const& arg0,AndroidCXX::java_lang_Class const& arg1)
{
	LOGV("com_facebook_model_GraphObject_Factory_GraphObjectProxy::com_facebook_model_GraphObject_Factory_GraphObjectProxy(AndroidCXX::org_json_JSONObject const& arg0,AndroidCXX::java_lang_Class const& arg1) enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "(Lorg/json/JSONObject;Ljava/lang/Class;)V";
	const char *className = "com/facebook/model/GraphObject$Factory$GraphObjectProxy";

	LOGV("com_facebook_model_GraphObject_Factory_GraphObjectProxy className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_GraphObject_Factory_GraphObjectProxy cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_GraphObject_Factory_GraphObjectProxy jni address %d", proxiedComponent);

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
				cxx_type_hierarchy.type_name = std::string("org.json.JSONObject");
			}
			std::stack<long> converter_stack;
			converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
			convert_org_json_JSONObject(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
				cxx_type_hierarchy.type_name = std::string("java.lang.Object");
			}
			std::stack<long> converter_stack;
			
			{
				{
					converter_stack.push((long) &convert_java_lang_Object);				

				}
			}
			converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
			convert_java_lang_Class(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

			// Convert to JNI
			jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
		}
			
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, methodName, methodSignature),jarg0,jarg1);
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("com_facebook_model_GraphObject_Factory_GraphObjectProxy::com_facebook_model_GraphObject_Factory_GraphObjectProxy(AndroidCXX::org_json_JSONObject const& arg0,AndroidCXX::java_lang_Class const& arg1) exit");	
}
// Default Instance Destructor
com_facebook_model_GraphObject_Factory_GraphObjectProxy::~com_facebook_model_GraphObject_Factory_GraphObjectProxy()
{
	LOGV("com_facebook_model_GraphObject_Factory_GraphObjectProxy::~com_facebook_model_GraphObject_Factory_GraphObjectProxy() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("com_facebook_model_GraphObject_Factory_GraphObjectProxy::~com_facebook_model_GraphObject_Factory_GraphObjectProxy() exit");
}
// Functions
AndroidCXX::java_lang_Object com_facebook_model_GraphObject_Factory_GraphObjectProxy::invoke(AndroidCXX::java_lang_Object const& arg0,AndroidCXX::java_lang_reflect_Method const& arg1,std::vector<AndroidCXX::java_lang_Object > const& arg2)
{
	LOGV("AndroidCXX::java_lang_Object com_facebook_model_GraphObject_Factory_GraphObjectProxy::invoke(AndroidCXX::java_lang_Object const& arg0,AndroidCXX::java_lang_reflect_Method const& arg1,std::vector<AndroidCXX::java_lang_Object > const& arg2) enter");

	const char *methodName = "invoke";
	const char *methodSignature = "(Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;";
	const char *className = "com/facebook/model/GraphObject$Factory$GraphObjectProxy";

	LOGV("com_facebook_model_GraphObject_Factory_GraphObjectProxy className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_GraphObject_Factory_GraphObjectProxy cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_GraphObject_Factory_GraphObjectProxy jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("java.lang.Object");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_lang_Object(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
			cxx_type_hierarchy.type_name = std::string("java.lang.reflect.Method");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_lang_reflect_Method(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
	}
	jobjectArray jarg2;
	{
		long cxx_value = (long) & arg2;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("_object_array_type");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.lang.Object");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_java_lang_Object);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert__object_array_type(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg2 = convert_jni__object_array_type_to_jni(java_value);
	}

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
			cxx_type_hierarchy.type_name = std::string("java.lang.Object");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_lang_Object(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::java_lang_Object result((AndroidCXX::java_lang_Object) *((AndroidCXX::java_lang_Object *) cxx_value));
	delete ((AndroidCXX::java_lang_Object *) cxx_value);
		
	LOGV("AndroidCXX::java_lang_Object com_facebook_model_GraphObject_Factory_GraphObjectProxy::invoke(AndroidCXX::java_lang_Object const& arg0,AndroidCXX::java_lang_reflect_Method const& arg1,std::vector<AndroidCXX::java_lang_Object > const& arg2) exit");

	return result;
}
AndroidCXX::java_lang_String com_facebook_model_GraphObject_Factory_GraphObjectProxy::toString()
{
	LOGV("AndroidCXX::java_lang_String com_facebook_model_GraphObject_Factory_GraphObjectProxy::toString() enter");

	const char *methodName = "toString";
	const char *methodSignature = "()Ljava/lang/String;";
	const char *className = "com/facebook/model/GraphObject$Factory$GraphObjectProxy";

	LOGV("com_facebook_model_GraphObject_Factory_GraphObjectProxy className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_GraphObject_Factory_GraphObjectProxy cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_GraphObject_Factory_GraphObjectProxy jni address %d", javaObject);


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
		
	LOGV("AndroidCXX::java_lang_String com_facebook_model_GraphObject_Factory_GraphObjectProxy::toString() exit");

	return result;
}

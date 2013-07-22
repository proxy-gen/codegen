/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
	









// Generated Code 

#include <com_facebook_model_GraphObjectList.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <FacebookCXXConverter.hpp>

#define LOG_TAG "com_facebook_model_GraphObjectList"
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

static long static_obj;
static long static_address = (long) &static_obj;


// Default Instance Constructors
com_facebook_model_GraphObjectList::com_facebook_model_GraphObjectList(const com_facebook_model_GraphObjectList& cc)
{
	LOGV("com_facebook_model_GraphObjectList::com_facebook_model_GraphObjectList(const com_facebook_model_GraphObjectList& cc) enter");

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

	LOGV("com_facebook_model_GraphObjectList::com_facebook_model_GraphObjectList(const com_facebook_model_GraphObjectList& cc) exit");
}
com_facebook_model_GraphObjectList::com_facebook_model_GraphObjectList(void * proxy)
{
	LOGV("com_facebook_model_GraphObjectList::com_facebook_model_GraphObjectList(void * proxy) enter");

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

	LOGV("com_facebook_model_GraphObjectList::com_facebook_model_GraphObjectList(void * proxy) exit");
}
com_facebook_model_GraphObjectList::com_facebook_model_GraphObjectList()
{
	LOGV("com_facebook_model_GraphObjectList::com_facebook_model_GraphObjectList() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "com/facebook/model/GraphObjectList";

	LOGV("com_facebook_model_GraphObjectList className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_GraphObjectList cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_GraphObjectList jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, "<init>", methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("com_facebook_model_GraphObjectList::com_facebook_model_GraphObjectList() exit");	
}
// Public Constructors
// Default Instance Destructor
com_facebook_model_GraphObjectList::~com_facebook_model_GraphObjectList()
{
	LOGV("com_facebook_model_GraphObjectList::~com_facebook_model_GraphObjectList() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("com_facebook_model_GraphObjectList::~com_facebook_model_GraphObjectList() exit");
}
// Functions
FacebookCXX::com_facebook_model_GraphObjectList com_facebook_model_GraphObjectList::castToListOf(FacebookCXX::java_lang_Class& arg0)
{
	LOGV("FacebookCXX::com_facebook_model_GraphObjectList com_facebook_model_GraphObjectList::castToListOf(FacebookCXX::java_lang_Class& arg0) enter");

	const char *methodName = "castToListOf";
	const char *methodSignature = "(Ljava/lang/Class;)Lcom/facebook/model/GraphObjectList;";
	const char *className = "com/facebook/model/GraphObjectList";

	LOGV("com_facebook_model_GraphObjectList className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_GraphObjectList cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_GraphObjectList jni address %d", javaObject);

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

	FacebookCXX::com_facebook_model_GraphObjectList result;
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
	result = (FacebookCXX::com_facebook_model_GraphObjectList) (FacebookCXX::com_facebook_model_GraphObjectList((FacebookCXX::com_facebook_model_GraphObjectList *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("FacebookCXX::com_facebook_model_GraphObjectList com_facebook_model_GraphObjectList::castToListOf(FacebookCXX::java_lang_Class& arg0) exit");

	return result;
}
FacebookCXX::org_json_JSONArray com_facebook_model_GraphObjectList::getInnerJSONArray()
{
	LOGV("FacebookCXX::org_json_JSONArray com_facebook_model_GraphObjectList::getInnerJSONArray() enter");

	const char *methodName = "getInnerJSONArray";
	const char *methodSignature = "()Lorg/json/JSONArray;";
	const char *className = "com/facebook/model/GraphObjectList";

	LOGV("com_facebook_model_GraphObjectList className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_model_GraphObjectList cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_model_GraphObjectList jni address %d", javaObject);


	FacebookCXX::org_json_JSONArray result;
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
			cxx_type_hierarchy.type_name = std::string("org.json.JSONArray");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_org_json_JSONArray(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (FacebookCXX::org_json_JSONArray) (FacebookCXX::org_json_JSONArray((FacebookCXX::org_json_JSONArray *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("FacebookCXX::org_json_JSONArray com_facebook_model_GraphObjectList::getInnerJSONArray() exit");

	return result;
}

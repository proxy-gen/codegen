/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	


 		 
 		 







// Generated Code 

#include <com_facebook_widget_GraphObjectAdapter_SectionAndItem.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <CXXConverter.hpp>
#include <FacebookCXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "com_facebook_widget_GraphObjectAdapter_SectionAndItem"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace FacebookCXX;

// 
// 
// 
// 
// 
// 
// using namespace com_facebook_widget_GraphObjectAdapter_SectionAndItem_Type;
// 
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

static long static_obj;
static long static_address = (long) &static_obj;

com_facebook_widget_GraphObjectAdapter_SectionAndItem::com_facebook_widget_GraphObjectAdapter_SectionAndItem(const com_facebook_widget_GraphObjectAdapter_SectionAndItem& cc)
{
	LOGV("com_facebook_widget_GraphObjectAdapter_SectionAndItem::com_facebook_widget_GraphObjectAdapter_SectionAndItem(const com_facebook_widget_GraphObjectAdapter_SectionAndItem& cc) enter");

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

	LOGV("com_facebook_widget_GraphObjectAdapter_SectionAndItem::com_facebook_widget_GraphObjectAdapter_SectionAndItem(const com_facebook_widget_GraphObjectAdapter_SectionAndItem& cc) exit");
}
com_facebook_widget_GraphObjectAdapter_SectionAndItem::com_facebook_widget_GraphObjectAdapter_SectionAndItem(Proxy proxy)
{
	LOGV("com_facebook_widget_GraphObjectAdapter_SectionAndItem::com_facebook_widget_GraphObjectAdapter_SectionAndItem(Proxy proxy) enter");

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

	LOGV("com_facebook_widget_GraphObjectAdapter_SectionAndItem::com_facebook_widget_GraphObjectAdapter_SectionAndItem(Proxy proxy) exit");
}
Proxy com_facebook_widget_GraphObjectAdapter_SectionAndItem::proxy() const
{	
	LOGV("com_facebook_widget_GraphObjectAdapter_SectionAndItem::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_GraphObjectAdapter_SectionAndItem cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_GraphObjectAdapter_SectionAndItem jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("com_facebook_widget_GraphObjectAdapter_SectionAndItem::proxy() exit");	

	return proxy;
}
com_facebook_widget_GraphObjectAdapter_SectionAndItem::com_facebook_widget_GraphObjectAdapter_SectionAndItem(AndroidCXX::java_lang_String const& arg0,FacebookCXX::com_facebook_model_GraphObject const& arg1)
{
	LOGV("com_facebook_widget_GraphObjectAdapter_SectionAndItem::com_facebook_widget_GraphObjectAdapter_SectionAndItem(AndroidCXX::java_lang_String const& arg0,FacebookCXX::com_facebook_model_GraphObject const& arg1) enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "(Ljava/lang/String;Lcom/facebook/model/GraphObject;)V";
	const char *className = "com/facebook/widget/GraphObjectAdapter$SectionAndItem";

	LOGV("com_facebook_widget_GraphObjectAdapter_SectionAndItem className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_GraphObjectAdapter_SectionAndItem cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_GraphObjectAdapter_SectionAndItem jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{

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
				cxx_type_hierarchy.type_name = std::string("com.facebook.model.GraphObject");
			}
			std::stack<long> converter_stack;
			converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
			convert_com_facebook_model_GraphObject(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

			// Convert to JNI
			jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
		}
			
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, methodName, methodSignature),jarg0,jarg1);
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("com_facebook_widget_GraphObjectAdapter_SectionAndItem::com_facebook_widget_GraphObjectAdapter_SectionAndItem(AndroidCXX::java_lang_String const& arg0,FacebookCXX::com_facebook_model_GraphObject const& arg1) exit");	
}
// Default Instance Destructor
com_facebook_widget_GraphObjectAdapter_SectionAndItem::~com_facebook_widget_GraphObjectAdapter_SectionAndItem()
{
	LOGV("com_facebook_widget_GraphObjectAdapter_SectionAndItem::~com_facebook_widget_GraphObjectAdapter_SectionAndItem() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("com_facebook_widget_GraphObjectAdapter_SectionAndItem::~com_facebook_widget_GraphObjectAdapter_SectionAndItem() exit");
}
// Functions
com_facebook_widget_GraphObjectAdapter_SectionAndItem_Type::com_facebook_widget_GraphObjectAdapter_SectionAndItem_Type com_facebook_widget_GraphObjectAdapter_SectionAndItem::getType()
{
	LOGV("com_facebook_widget_GraphObjectAdapter_SectionAndItem_Type::com_facebook_widget_GraphObjectAdapter_SectionAndItem_Type com_facebook_widget_GraphObjectAdapter_SectionAndItem::getType() enter");

	const char *methodName = "getType";
	const char *methodSignature = "()Lcom/facebook/widget/GraphObjectAdapter$SectionAndItem$Type;";
	const char *className = "com/facebook/widget/GraphObjectAdapter$SectionAndItem";

	LOGV("com_facebook_widget_GraphObjectAdapter_SectionAndItem className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_GraphObjectAdapter_SectionAndItem cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_GraphObjectAdapter_SectionAndItem jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("com.facebook.widget.GraphObjectAdapter$SectionAndItem$Type");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_com_facebook_widget_GraphObjectAdapter_SectionAndItem_Type(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	com_facebook_widget_GraphObjectAdapter_SectionAndItem_Type::com_facebook_widget_GraphObjectAdapter_SectionAndItem_Type result = (com_facebook_widget_GraphObjectAdapter_SectionAndItem_Type::com_facebook_widget_GraphObjectAdapter_SectionAndItem_Type) (cxx_value);
	//
		
	LOGV("com_facebook_widget_GraphObjectAdapter_SectionAndItem_Type::com_facebook_widget_GraphObjectAdapter_SectionAndItem_Type com_facebook_widget_GraphObjectAdapter_SectionAndItem::getType() exit");

	return result;
}

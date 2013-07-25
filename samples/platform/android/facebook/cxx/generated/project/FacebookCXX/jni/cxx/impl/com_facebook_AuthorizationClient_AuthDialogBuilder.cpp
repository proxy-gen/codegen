/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	


 		 
 		 
 		 







// Generated Code 

#include <com_facebook_AuthorizationClient_AuthDialogBuilder.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <FacebookCXXConverter.hpp>
// TODO: FIXME: add include package
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "com_facebook_AuthorizationClient_AuthDialogBuilder"
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


// Default Instance Constructors
com_facebook_AuthorizationClient_AuthDialogBuilder::com_facebook_AuthorizationClient_AuthDialogBuilder(const com_facebook_AuthorizationClient_AuthDialogBuilder& cc)
{
	LOGV("com_facebook_AuthorizationClient_AuthDialogBuilder::com_facebook_AuthorizationClient_AuthDialogBuilder(const com_facebook_AuthorizationClient_AuthDialogBuilder& cc) enter");

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

	LOGV("com_facebook_AuthorizationClient_AuthDialogBuilder::com_facebook_AuthorizationClient_AuthDialogBuilder(const com_facebook_AuthorizationClient_AuthDialogBuilder& cc) exit");
}
com_facebook_AuthorizationClient_AuthDialogBuilder::com_facebook_AuthorizationClient_AuthDialogBuilder(void * proxy)
{
	LOGV("com_facebook_AuthorizationClient_AuthDialogBuilder::com_facebook_AuthorizationClient_AuthDialogBuilder(void * proxy) enter");

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

	LOGV("com_facebook_AuthorizationClient_AuthDialogBuilder::com_facebook_AuthorizationClient_AuthDialogBuilder(void * proxy) exit");
}
com_facebook_AuthorizationClient_AuthDialogBuilder::com_facebook_AuthorizationClient_AuthDialogBuilder()
{
	LOGV("com_facebook_AuthorizationClient_AuthDialogBuilder::com_facebook_AuthorizationClient_AuthDialogBuilder() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "com/facebook/AuthorizationClient$AuthDialogBuilder";

	LOGV("com_facebook_AuthorizationClient_AuthDialogBuilder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_AuthorizationClient_AuthDialogBuilder cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_AuthorizationClient_AuthDialogBuilder jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, "<init>", methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("com_facebook_AuthorizationClient_AuthDialogBuilder::com_facebook_AuthorizationClient_AuthDialogBuilder() exit");	
}
// Public Constructors
com_facebook_AuthorizationClient_AuthDialogBuilder::com_facebook_AuthorizationClient_AuthDialogBuilder(AndroidCXX::android_content_Context& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::android_os_Bundle& arg2)
{
	LOGV("com_facebook_AuthorizationClient_AuthDialogBuilder::com_facebook_AuthorizationClient_AuthDialogBuilder(AndroidCXX::android_content_Context& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::android_os_Bundle& arg2) enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "(Landroid/content/Context;Ljava/lang/String;Landroid/os/Bundle;)V";
	const char *className = "com/facebook/AuthorizationClient$AuthDialogBuilder";

	LOGV("com_facebook_AuthorizationClient_AuthDialogBuilder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_AuthorizationClient_AuthDialogBuilder cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_AuthorizationClient_AuthDialogBuilder jni address %d", proxiedComponent);

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
				cxx_type_hierarchy.type_name = std::string("android.content.Context");
			}
			std::stack<long> converter_stack;
			converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
			convert_android_content_Context(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

			// Convert to JNI
			jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
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
				cxx_type_hierarchy.type_name = std::string("android.os.Bundle");
			}
			std::stack<long> converter_stack;
			converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
			convert_android_os_Bundle(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

			// Convert to JNI
			jarg2 = convert_jni_java_lang_Object_to_jni(java_value);
		}
			
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, methodName, methodSignature),jarg0,jarg1,jarg2);
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("com_facebook_AuthorizationClient_AuthDialogBuilder::com_facebook_AuthorizationClient_AuthDialogBuilder(AndroidCXX::android_content_Context& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::android_os_Bundle& arg2) exit");	
}
// Default Instance Destructor
com_facebook_AuthorizationClient_AuthDialogBuilder::~com_facebook_AuthorizationClient_AuthDialogBuilder()
{
	LOGV("com_facebook_AuthorizationClient_AuthDialogBuilder::~com_facebook_AuthorizationClient_AuthDialogBuilder() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("com_facebook_AuthorizationClient_AuthDialogBuilder::~com_facebook_AuthorizationClient_AuthDialogBuilder() exit");
}
// Functions
FacebookCXX::com_facebook_widget_WebDialog com_facebook_AuthorizationClient_AuthDialogBuilder::build()
{
	LOGV("FacebookCXX::com_facebook_widget_WebDialog com_facebook_AuthorizationClient_AuthDialogBuilder::build() enter");

	const char *methodName = "build";
	const char *methodSignature = "()Lcom/facebook/widget/WebDialog;";
	const char *className = "com/facebook/AuthorizationClient$AuthDialogBuilder";

	LOGV("com_facebook_AuthorizationClient_AuthDialogBuilder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_AuthorizationClient_AuthDialogBuilder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_AuthorizationClient_AuthDialogBuilder jni address %d", javaObject);


	FacebookCXX::com_facebook_widget_WebDialog result;
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
			cxx_type_hierarchy.type_name = std::string("com.facebook.widget.WebDialog");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_com_facebook_widget_WebDialog(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (FacebookCXX::com_facebook_widget_WebDialog) (FacebookCXX::com_facebook_widget_WebDialog((FacebookCXX::com_facebook_widget_WebDialog *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("FacebookCXX::com_facebook_widget_WebDialog com_facebook_AuthorizationClient_AuthDialogBuilder::build() exit");

	return result;
}
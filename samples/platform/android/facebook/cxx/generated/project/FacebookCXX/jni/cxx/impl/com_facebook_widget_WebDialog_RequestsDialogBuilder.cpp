/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	
 		 
	
 		 
	
 		 
	


 		 
 		 
 		 
 		 
 		 











// Generated Code 

#include <com_facebook_widget_WebDialog_RequestsDialogBuilder.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <CXXConverter.hpp>
#include <FacebookCXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "com_facebook_widget_WebDialog_RequestsDialogBuilder"
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

static long static_obj;
static long static_address = (long) &static_obj;

com_facebook_widget_WebDialog_RequestsDialogBuilder::com_facebook_widget_WebDialog_RequestsDialogBuilder(const com_facebook_widget_WebDialog_RequestsDialogBuilder& cc)
{
	LOGV("com_facebook_widget_WebDialog_RequestsDialogBuilder::com_facebook_widget_WebDialog_RequestsDialogBuilder(const com_facebook_widget_WebDialog_RequestsDialogBuilder& cc) enter");

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

	LOGV("com_facebook_widget_WebDialog_RequestsDialogBuilder::com_facebook_widget_WebDialog_RequestsDialogBuilder(const com_facebook_widget_WebDialog_RequestsDialogBuilder& cc) exit");
}
com_facebook_widget_WebDialog_RequestsDialogBuilder::com_facebook_widget_WebDialog_RequestsDialogBuilder(Proxy proxy)
{
	LOGV("com_facebook_widget_WebDialog_RequestsDialogBuilder::com_facebook_widget_WebDialog_RequestsDialogBuilder(Proxy proxy) enter");

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

	LOGV("com_facebook_widget_WebDialog_RequestsDialogBuilder::com_facebook_widget_WebDialog_RequestsDialogBuilder(Proxy proxy) exit");
}
Proxy com_facebook_widget_WebDialog_RequestsDialogBuilder::proxy() const
{	
	LOGV("com_facebook_widget_WebDialog_RequestsDialogBuilder::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_WebDialog_RequestsDialogBuilder cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_WebDialog_RequestsDialogBuilder jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("com_facebook_widget_WebDialog_RequestsDialogBuilder::proxy() exit");	

	return proxy;
}
com_facebook_widget_WebDialog_RequestsDialogBuilder::com_facebook_widget_WebDialog_RequestsDialogBuilder(AndroidCXX::android_content_Context const& arg0,FacebookCXX::com_facebook_Session const& arg1)
{
	LOGV("com_facebook_widget_WebDialog_RequestsDialogBuilder::com_facebook_widget_WebDialog_RequestsDialogBuilder(AndroidCXX::android_content_Context const& arg0,FacebookCXX::com_facebook_Session const& arg1) enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "(Landroid/content/Context;Lcom/facebook/Session;)V";
	const char *className = "com/facebook/widget/WebDialog$RequestsDialogBuilder";

	LOGV("com_facebook_widget_WebDialog_RequestsDialogBuilder className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_WebDialog_RequestsDialogBuilder cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_WebDialog_RequestsDialogBuilder jni address %d", proxiedComponent);

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
				cxx_type_hierarchy.type_name = std::string("com.facebook.Session");
			}
			std::stack<long> converter_stack;
			converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
			convert_com_facebook_Session(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

			// Convert to JNI
			jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
		}
			
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, methodName, methodSignature),jarg0,jarg1);
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("com_facebook_widget_WebDialog_RequestsDialogBuilder::com_facebook_widget_WebDialog_RequestsDialogBuilder(AndroidCXX::android_content_Context const& arg0,FacebookCXX::com_facebook_Session const& arg1) exit");	
}
com_facebook_widget_WebDialog_RequestsDialogBuilder::com_facebook_widget_WebDialog_RequestsDialogBuilder(AndroidCXX::android_content_Context const& arg0,FacebookCXX::com_facebook_Session const& arg1,AndroidCXX::android_os_Bundle const& arg2)
{
	LOGV("com_facebook_widget_WebDialog_RequestsDialogBuilder::com_facebook_widget_WebDialog_RequestsDialogBuilder(AndroidCXX::android_content_Context const& arg0,FacebookCXX::com_facebook_Session const& arg1,AndroidCXX::android_os_Bundle const& arg2) enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "(Landroid/content/Context;Lcom/facebook/Session;Landroid/os/Bundle;)V";
	const char *className = "com/facebook/widget/WebDialog$RequestsDialogBuilder";

	LOGV("com_facebook_widget_WebDialog_RequestsDialogBuilder className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_WebDialog_RequestsDialogBuilder cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_WebDialog_RequestsDialogBuilder jni address %d", proxiedComponent);

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
				cxx_type_hierarchy.type_name = std::string("com.facebook.Session");
			}
			std::stack<long> converter_stack;
			converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
			convert_com_facebook_Session(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

			// Convert to JNI
			jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
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

	LOGV("com_facebook_widget_WebDialog_RequestsDialogBuilder::com_facebook_widget_WebDialog_RequestsDialogBuilder(AndroidCXX::android_content_Context const& arg0,FacebookCXX::com_facebook_Session const& arg1,AndroidCXX::android_os_Bundle const& arg2) exit");	
}
// Default Instance Destructor
com_facebook_widget_WebDialog_RequestsDialogBuilder::~com_facebook_widget_WebDialog_RequestsDialogBuilder()
{
	LOGV("com_facebook_widget_WebDialog_RequestsDialogBuilder::~com_facebook_widget_WebDialog_RequestsDialogBuilder() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("com_facebook_widget_WebDialog_RequestsDialogBuilder::~com_facebook_widget_WebDialog_RequestsDialogBuilder() exit");
}
// Functions
FacebookCXX::com_facebook_widget_WebDialog_RequestsDialogBuilder com_facebook_widget_WebDialog_RequestsDialogBuilder::setData(AndroidCXX::java_lang_String const& arg0)
{
	LOGV("FacebookCXX::com_facebook_widget_WebDialog_RequestsDialogBuilder com_facebook_widget_WebDialog_RequestsDialogBuilder::setData(AndroidCXX::java_lang_String const& arg0) enter");

	const char *methodName = "setData";
	const char *methodSignature = "(Ljava/lang/String;)Lcom/facebook/widget/WebDialog$RequestsDialogBuilder;";
	const char *className = "com/facebook/widget/WebDialog$RequestsDialogBuilder";

	LOGV("com_facebook_widget_WebDialog_RequestsDialogBuilder className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_WebDialog_RequestsDialogBuilder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_WebDialog_RequestsDialogBuilder jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("com.facebook.widget.WebDialog$RequestsDialogBuilder");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_com_facebook_widget_WebDialog_RequestsDialogBuilder(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	FacebookCXX::com_facebook_widget_WebDialog_RequestsDialogBuilder result((FacebookCXX::com_facebook_widget_WebDialog_RequestsDialogBuilder) *((FacebookCXX::com_facebook_widget_WebDialog_RequestsDialogBuilder *) cxx_value));
	delete ((FacebookCXX::com_facebook_widget_WebDialog_RequestsDialogBuilder *) cxx_value);
		
	LOGV("FacebookCXX::com_facebook_widget_WebDialog_RequestsDialogBuilder com_facebook_widget_WebDialog_RequestsDialogBuilder::setData(AndroidCXX::java_lang_String const& arg0) exit");

	return result;
}
FacebookCXX::com_facebook_widget_WebDialog_RequestsDialogBuilder com_facebook_widget_WebDialog_RequestsDialogBuilder::setTitle(AndroidCXX::java_lang_String const& arg0)
{
	LOGV("FacebookCXX::com_facebook_widget_WebDialog_RequestsDialogBuilder com_facebook_widget_WebDialog_RequestsDialogBuilder::setTitle(AndroidCXX::java_lang_String const& arg0) enter");

	const char *methodName = "setTitle";
	const char *methodSignature = "(Ljava/lang/String;)Lcom/facebook/widget/WebDialog$RequestsDialogBuilder;";
	const char *className = "com/facebook/widget/WebDialog$RequestsDialogBuilder";

	LOGV("com_facebook_widget_WebDialog_RequestsDialogBuilder className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_WebDialog_RequestsDialogBuilder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_WebDialog_RequestsDialogBuilder jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("com.facebook.widget.WebDialog$RequestsDialogBuilder");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_com_facebook_widget_WebDialog_RequestsDialogBuilder(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	FacebookCXX::com_facebook_widget_WebDialog_RequestsDialogBuilder result((FacebookCXX::com_facebook_widget_WebDialog_RequestsDialogBuilder) *((FacebookCXX::com_facebook_widget_WebDialog_RequestsDialogBuilder *) cxx_value));
	delete ((FacebookCXX::com_facebook_widget_WebDialog_RequestsDialogBuilder *) cxx_value);
		
	LOGV("FacebookCXX::com_facebook_widget_WebDialog_RequestsDialogBuilder com_facebook_widget_WebDialog_RequestsDialogBuilder::setTitle(AndroidCXX::java_lang_String const& arg0) exit");

	return result;
}
FacebookCXX::com_facebook_widget_WebDialog_RequestsDialogBuilder com_facebook_widget_WebDialog_RequestsDialogBuilder::setMessage(AndroidCXX::java_lang_String const& arg0)
{
	LOGV("FacebookCXX::com_facebook_widget_WebDialog_RequestsDialogBuilder com_facebook_widget_WebDialog_RequestsDialogBuilder::setMessage(AndroidCXX::java_lang_String const& arg0) enter");

	const char *methodName = "setMessage";
	const char *methodSignature = "(Ljava/lang/String;)Lcom/facebook/widget/WebDialog$RequestsDialogBuilder;";
	const char *className = "com/facebook/widget/WebDialog$RequestsDialogBuilder";

	LOGV("com_facebook_widget_WebDialog_RequestsDialogBuilder className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_WebDialog_RequestsDialogBuilder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_WebDialog_RequestsDialogBuilder jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("com.facebook.widget.WebDialog$RequestsDialogBuilder");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_com_facebook_widget_WebDialog_RequestsDialogBuilder(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	FacebookCXX::com_facebook_widget_WebDialog_RequestsDialogBuilder result((FacebookCXX::com_facebook_widget_WebDialog_RequestsDialogBuilder) *((FacebookCXX::com_facebook_widget_WebDialog_RequestsDialogBuilder *) cxx_value));
	delete ((FacebookCXX::com_facebook_widget_WebDialog_RequestsDialogBuilder *) cxx_value);
		
	LOGV("FacebookCXX::com_facebook_widget_WebDialog_RequestsDialogBuilder com_facebook_widget_WebDialog_RequestsDialogBuilder::setMessage(AndroidCXX::java_lang_String const& arg0) exit");

	return result;
}
FacebookCXX::com_facebook_widget_WebDialog_RequestsDialogBuilder com_facebook_widget_WebDialog_RequestsDialogBuilder::setTo(AndroidCXX::java_lang_String const& arg0)
{
	LOGV("FacebookCXX::com_facebook_widget_WebDialog_RequestsDialogBuilder com_facebook_widget_WebDialog_RequestsDialogBuilder::setTo(AndroidCXX::java_lang_String const& arg0) enter");

	const char *methodName = "setTo";
	const char *methodSignature = "(Ljava/lang/String;)Lcom/facebook/widget/WebDialog$RequestsDialogBuilder;";
	const char *className = "com/facebook/widget/WebDialog$RequestsDialogBuilder";

	LOGV("com_facebook_widget_WebDialog_RequestsDialogBuilder className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_WebDialog_RequestsDialogBuilder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_WebDialog_RequestsDialogBuilder jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("com.facebook.widget.WebDialog$RequestsDialogBuilder");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_com_facebook_widget_WebDialog_RequestsDialogBuilder(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	FacebookCXX::com_facebook_widget_WebDialog_RequestsDialogBuilder result((FacebookCXX::com_facebook_widget_WebDialog_RequestsDialogBuilder) *((FacebookCXX::com_facebook_widget_WebDialog_RequestsDialogBuilder *) cxx_value));
	delete ((FacebookCXX::com_facebook_widget_WebDialog_RequestsDialogBuilder *) cxx_value);
		
	LOGV("FacebookCXX::com_facebook_widget_WebDialog_RequestsDialogBuilder com_facebook_widget_WebDialog_RequestsDialogBuilder::setTo(AndroidCXX::java_lang_String const& arg0) exit");

	return result;
}

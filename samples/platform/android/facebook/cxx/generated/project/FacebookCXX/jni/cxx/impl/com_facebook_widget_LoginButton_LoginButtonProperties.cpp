/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
 		 
 		 
	
	
 		 
 		 
 		 
 		 
 		 
 		 
	


















// Generated Code 

#include <com_facebook_widget_LoginButton_LoginButtonProperties.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <FacebookCXXConverter.hpp>
// TODO: FIXME: add include package
// FIXME: remove after testing
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "com_facebook_widget_LoginButton_LoginButtonProperties"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace FacebookCXX;

// 
// 
// 
// 
// 
// 
// using namespace com_facebook_SessionLoginBehavior;
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// using namespace com_facebook_SessionDefaultAudience;
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
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

com_facebook_widget_LoginButton_LoginButtonProperties::com_facebook_widget_LoginButton_LoginButtonProperties(const com_facebook_widget_LoginButton_LoginButtonProperties& cc)
{
	LOGV("com_facebook_widget_LoginButton_LoginButtonProperties::com_facebook_widget_LoginButton_LoginButtonProperties(const com_facebook_widget_LoginButton_LoginButtonProperties& cc) enter");

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

	LOGV("com_facebook_widget_LoginButton_LoginButtonProperties::com_facebook_widget_LoginButton_LoginButtonProperties(const com_facebook_widget_LoginButton_LoginButtonProperties& cc) exit");
}
com_facebook_widget_LoginButton_LoginButtonProperties::com_facebook_widget_LoginButton_LoginButtonProperties(Proxy proxy)
{
	LOGV("com_facebook_widget_LoginButton_LoginButtonProperties::com_facebook_widget_LoginButton_LoginButtonProperties(Proxy proxy) enter");

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

	LOGV("com_facebook_widget_LoginButton_LoginButtonProperties::com_facebook_widget_LoginButton_LoginButtonProperties(Proxy proxy) exit");
}
Proxy com_facebook_widget_LoginButton_LoginButtonProperties::proxy() const
{	
	LOGV("com_facebook_widget_LoginButton_LoginButtonProperties::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_LoginButton_LoginButtonProperties cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_LoginButton_LoginButtonProperties jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("com_facebook_widget_LoginButton_LoginButtonProperties::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
com_facebook_widget_LoginButton_LoginButtonProperties::~com_facebook_widget_LoginButton_LoginButtonProperties()
{
	LOGV("com_facebook_widget_LoginButton_LoginButtonProperties::~com_facebook_widget_LoginButton_LoginButtonProperties() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("com_facebook_widget_LoginButton_LoginButtonProperties::~com_facebook_widget_LoginButton_LoginButtonProperties() exit");
}
// Functions
com_facebook_SessionLoginBehavior::com_facebook_SessionLoginBehavior com_facebook_widget_LoginButton_LoginButtonProperties::getLoginBehavior()
{
	LOGV("com_facebook_SessionLoginBehavior::com_facebook_SessionLoginBehavior com_facebook_widget_LoginButton_LoginButtonProperties::getLoginBehavior() enter");

	const char *methodName = "getLoginBehavior";
	const char *methodSignature = "()Lcom/facebook/SessionLoginBehavior;";
	const char *className = "com/facebook/widget/LoginButton$LoginButtonProperties";

	LOGV("com_facebook_widget_LoginButton_LoginButtonProperties className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_LoginButton_LoginButtonProperties cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_LoginButton_LoginButtonProperties jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("com.facebook.SessionLoginBehavior");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_com_facebook_SessionLoginBehavior(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	com_facebook_SessionLoginBehavior::com_facebook_SessionLoginBehavior result = (com_facebook_SessionLoginBehavior::com_facebook_SessionLoginBehavior) (cxx_value);
	//
		
	LOGV("com_facebook_SessionLoginBehavior::com_facebook_SessionLoginBehavior com_facebook_widget_LoginButton_LoginButtonProperties::getLoginBehavior() exit");

	return result;
}
void com_facebook_widget_LoginButton_LoginButtonProperties::setLoginBehavior(com_facebook_SessionLoginBehavior::com_facebook_SessionLoginBehavior const& arg0)
{
	LOGV("void com_facebook_widget_LoginButton_LoginButtonProperties::setLoginBehavior(com_facebook_SessionLoginBehavior::com_facebook_SessionLoginBehavior const& arg0) enter");

	const char *methodName = "setLoginBehavior";
	const char *methodSignature = "(Lcom/facebook/SessionLoginBehavior;)V";
	const char *className = "com/facebook/widget/LoginButton$LoginButtonProperties";

	LOGV("com_facebook_widget_LoginButton_LoginButtonProperties className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_LoginButton_LoginButtonProperties cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_LoginButton_LoginButtonProperties jni address %d", javaObject);

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

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void com_facebook_widget_LoginButton_LoginButtonProperties::setLoginBehavior(com_facebook_SessionLoginBehavior::com_facebook_SessionLoginBehavior const& arg0) exit");

}
void com_facebook_widget_LoginButton_LoginButtonProperties::setDefaultAudience(com_facebook_SessionDefaultAudience::com_facebook_SessionDefaultAudience const& arg0)
{
	LOGV("void com_facebook_widget_LoginButton_LoginButtonProperties::setDefaultAudience(com_facebook_SessionDefaultAudience::com_facebook_SessionDefaultAudience const& arg0) enter");

	const char *methodName = "setDefaultAudience";
	const char *methodSignature = "(Lcom/facebook/SessionDefaultAudience;)V";
	const char *className = "com/facebook/widget/LoginButton$LoginButtonProperties";

	LOGV("com_facebook_widget_LoginButton_LoginButtonProperties className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_LoginButton_LoginButtonProperties cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_LoginButton_LoginButtonProperties jni address %d", javaObject);

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

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void com_facebook_widget_LoginButton_LoginButtonProperties::setDefaultAudience(com_facebook_SessionDefaultAudience::com_facebook_SessionDefaultAudience const& arg0) exit");

}
com_facebook_SessionDefaultAudience::com_facebook_SessionDefaultAudience com_facebook_widget_LoginButton_LoginButtonProperties::getDefaultAudience()
{
	LOGV("com_facebook_SessionDefaultAudience::com_facebook_SessionDefaultAudience com_facebook_widget_LoginButton_LoginButtonProperties::getDefaultAudience() enter");

	const char *methodName = "getDefaultAudience";
	const char *methodSignature = "()Lcom/facebook/SessionDefaultAudience;";
	const char *className = "com/facebook/widget/LoginButton$LoginButtonProperties";

	LOGV("com_facebook_widget_LoginButton_LoginButtonProperties className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_LoginButton_LoginButtonProperties cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_LoginButton_LoginButtonProperties jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("com.facebook.SessionDefaultAudience");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_com_facebook_SessionDefaultAudience(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	com_facebook_SessionDefaultAudience::com_facebook_SessionDefaultAudience result = (com_facebook_SessionDefaultAudience::com_facebook_SessionDefaultAudience) (cxx_value);
	//
		
	LOGV("com_facebook_SessionDefaultAudience::com_facebook_SessionDefaultAudience com_facebook_widget_LoginButton_LoginButtonProperties::getDefaultAudience() exit");

	return result;
}
FacebookCXX::com_facebook_widget_LoginButton_OnErrorListener com_facebook_widget_LoginButton_LoginButtonProperties::getOnErrorListener()
{
	LOGV("FacebookCXX::com_facebook_widget_LoginButton_OnErrorListener com_facebook_widget_LoginButton_LoginButtonProperties::getOnErrorListener() enter");

	const char *methodName = "getOnErrorListener";
	const char *methodSignature = "()Lcom/facebook/widget/LoginButton$OnErrorListener;";
	const char *className = "com/facebook/widget/LoginButton$LoginButtonProperties";

	LOGV("com_facebook_widget_LoginButton_LoginButtonProperties className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_LoginButton_LoginButtonProperties cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_LoginButton_LoginButtonProperties jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("com.facebook.widget.LoginButton$OnErrorListener");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_com_facebook_widget_LoginButton_OnErrorListener(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	FacebookCXX::com_facebook_widget_LoginButton_OnErrorListener result((FacebookCXX::com_facebook_widget_LoginButton_OnErrorListener) *((FacebookCXX::com_facebook_widget_LoginButton_OnErrorListener *) cxx_value));
	delete ((FacebookCXX::com_facebook_widget_LoginButton_OnErrorListener *) cxx_value);
		
	LOGV("FacebookCXX::com_facebook_widget_LoginButton_OnErrorListener com_facebook_widget_LoginButton_LoginButtonProperties::getOnErrorListener() exit");

	return result;
}
void com_facebook_widget_LoginButton_LoginButtonProperties::setOnErrorListener(FacebookCXX::com_facebook_widget_LoginButton_OnErrorListener const& arg0)
{
	LOGV("void com_facebook_widget_LoginButton_LoginButtonProperties::setOnErrorListener(FacebookCXX::com_facebook_widget_LoginButton_OnErrorListener const& arg0) enter");

	const char *methodName = "setOnErrorListener";
	const char *methodSignature = "(Lcom/facebook/widget/LoginButton$OnErrorListener;)V";
	const char *className = "com/facebook/widget/LoginButton$LoginButtonProperties";

	LOGV("com_facebook_widget_LoginButton_LoginButtonProperties className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_LoginButton_LoginButtonProperties cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_LoginButton_LoginButtonProperties jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("com.facebook.widget.LoginButton$OnErrorListener");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_com_facebook_widget_LoginButton_OnErrorListener(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void com_facebook_widget_LoginButton_LoginButtonProperties::setOnErrorListener(FacebookCXX::com_facebook_widget_LoginButton_OnErrorListener const& arg0) exit");

}
void com_facebook_widget_LoginButton_LoginButtonProperties::setReadPermissions(AndroidCXX::java_util_List const& arg0,FacebookCXX::com_facebook_Session const& arg1)
{
	LOGV("void com_facebook_widget_LoginButton_LoginButtonProperties::setReadPermissions(AndroidCXX::java_util_List const& arg0,FacebookCXX::com_facebook_Session const& arg1) enter");

	const char *methodName = "setReadPermissions";
	const char *methodSignature = "(Ljava/util/List;Lcom/facebook/Session;)V";
	const char *className = "com/facebook/widget/LoginButton$LoginButtonProperties";

	LOGV("com_facebook_widget_LoginButton_LoginButtonProperties className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_LoginButton_LoginButtonProperties cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_LoginButton_LoginButtonProperties jni address %d", javaObject);

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

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1);
		
	LOGV("void com_facebook_widget_LoginButton_LoginButtonProperties::setReadPermissions(AndroidCXX::java_util_List const& arg0,FacebookCXX::com_facebook_Session const& arg1) exit");

}
void com_facebook_widget_LoginButton_LoginButtonProperties::setPublishPermissions(AndroidCXX::java_util_List const& arg0,FacebookCXX::com_facebook_Session const& arg1)
{
	LOGV("void com_facebook_widget_LoginButton_LoginButtonProperties::setPublishPermissions(AndroidCXX::java_util_List const& arg0,FacebookCXX::com_facebook_Session const& arg1) enter");

	const char *methodName = "setPublishPermissions";
	const char *methodSignature = "(Ljava/util/List;Lcom/facebook/Session;)V";
	const char *className = "com/facebook/widget/LoginButton$LoginButtonProperties";

	LOGV("com_facebook_widget_LoginButton_LoginButtonProperties className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_LoginButton_LoginButtonProperties cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_LoginButton_LoginButtonProperties jni address %d", javaObject);

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

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1);
		
	LOGV("void com_facebook_widget_LoginButton_LoginButtonProperties::setPublishPermissions(AndroidCXX::java_util_List const& arg0,FacebookCXX::com_facebook_Session const& arg1) exit");

}
void com_facebook_widget_LoginButton_LoginButtonProperties::clearPermissions()
{
	LOGV("void com_facebook_widget_LoginButton_LoginButtonProperties::clearPermissions() enter");

	const char *methodName = "clearPermissions";
	const char *methodSignature = "()V";
	const char *className = "com/facebook/widget/LoginButton$LoginButtonProperties";

	LOGV("com_facebook_widget_LoginButton_LoginButtonProperties className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_LoginButton_LoginButtonProperties cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_LoginButton_LoginButtonProperties jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	LOGV("void com_facebook_widget_LoginButton_LoginButtonProperties::clearPermissions() exit");

}
void com_facebook_widget_LoginButton_LoginButtonProperties::setSessionStatusCallback(FacebookCXX::com_facebook_Session_StatusCallback const& arg0)
{
	LOGV("void com_facebook_widget_LoginButton_LoginButtonProperties::setSessionStatusCallback(FacebookCXX::com_facebook_Session_StatusCallback const& arg0) enter");

	const char *methodName = "setSessionStatusCallback";
	const char *methodSignature = "(Lcom/facebook/Session$StatusCallback;)V";
	const char *className = "com/facebook/widget/LoginButton$LoginButtonProperties";

	LOGV("com_facebook_widget_LoginButton_LoginButtonProperties className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_LoginButton_LoginButtonProperties cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_LoginButton_LoginButtonProperties jni address %d", javaObject);

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

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void com_facebook_widget_LoginButton_LoginButtonProperties::setSessionStatusCallback(FacebookCXX::com_facebook_Session_StatusCallback const& arg0) exit");

}
FacebookCXX::com_facebook_Session_StatusCallback com_facebook_widget_LoginButton_LoginButtonProperties::getSessionStatusCallback()
{
	LOGV("FacebookCXX::com_facebook_Session_StatusCallback com_facebook_widget_LoginButton_LoginButtonProperties::getSessionStatusCallback() enter");

	const char *methodName = "getSessionStatusCallback";
	const char *methodSignature = "()Lcom/facebook/Session$StatusCallback;";
	const char *className = "com/facebook/widget/LoginButton$LoginButtonProperties";

	LOGV("com_facebook_widget_LoginButton_LoginButtonProperties className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_LoginButton_LoginButtonProperties cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_LoginButton_LoginButtonProperties jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("com.facebook.Session$StatusCallback");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_com_facebook_Session_StatusCallback(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	FacebookCXX::com_facebook_Session_StatusCallback result((FacebookCXX::com_facebook_Session_StatusCallback) *((FacebookCXX::com_facebook_Session_StatusCallback *) cxx_value));
	delete ((FacebookCXX::com_facebook_Session_StatusCallback *) cxx_value);
		
	LOGV("FacebookCXX::com_facebook_Session_StatusCallback com_facebook_widget_LoginButton_LoginButtonProperties::getSessionStatusCallback() exit");

	return result;
}

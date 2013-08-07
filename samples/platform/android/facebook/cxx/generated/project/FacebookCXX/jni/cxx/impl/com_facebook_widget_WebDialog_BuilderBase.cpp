/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
	
 		 
	










// Generated Code 

#include <com_facebook_widget_WebDialog_BuilderBase.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <CXXConverter.hpp>
#include <FacebookCXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "com_facebook_widget_WebDialog_BuilderBase"
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

static long static_obj;
static long static_address = (long) &static_obj;

com_facebook_widget_WebDialog_BuilderBase::com_facebook_widget_WebDialog_BuilderBase(const com_facebook_widget_WebDialog_BuilderBase& cc)
{
	LOGV("com_facebook_widget_WebDialog_BuilderBase::com_facebook_widget_WebDialog_BuilderBase(const com_facebook_widget_WebDialog_BuilderBase& cc) enter");

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

	LOGV("com_facebook_widget_WebDialog_BuilderBase::com_facebook_widget_WebDialog_BuilderBase(const com_facebook_widget_WebDialog_BuilderBase& cc) exit");
}
com_facebook_widget_WebDialog_BuilderBase::com_facebook_widget_WebDialog_BuilderBase(Proxy proxy)
{
	LOGV("com_facebook_widget_WebDialog_BuilderBase::com_facebook_widget_WebDialog_BuilderBase(Proxy proxy) enter");

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

	LOGV("com_facebook_widget_WebDialog_BuilderBase::com_facebook_widget_WebDialog_BuilderBase(Proxy proxy) exit");
}
Proxy com_facebook_widget_WebDialog_BuilderBase::proxy() const
{	
	LOGV("com_facebook_widget_WebDialog_BuilderBase::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_WebDialog_BuilderBase cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_WebDialog_BuilderBase jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("com_facebook_widget_WebDialog_BuilderBase::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
com_facebook_widget_WebDialog_BuilderBase::~com_facebook_widget_WebDialog_BuilderBase()
{
	LOGV("com_facebook_widget_WebDialog_BuilderBase::~com_facebook_widget_WebDialog_BuilderBase() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("com_facebook_widget_WebDialog_BuilderBase::~com_facebook_widget_WebDialog_BuilderBase() exit");
}
// Functions
FacebookCXX::com_facebook_widget_WebDialog_BuilderBase com_facebook_widget_WebDialog_BuilderBase::setTheme(int const& arg0)
{
	LOGV("FacebookCXX::com_facebook_widget_WebDialog_BuilderBase com_facebook_widget_WebDialog_BuilderBase::setTheme(int const& arg0) enter");

	const char *methodName = "setTheme";
	const char *methodSignature = "(I)Lcom/facebook/widget/WebDialog$BuilderBase;";
	const char *className = "com/facebook/widget/WebDialog$BuilderBase";

	LOGV("com_facebook_widget_WebDialog_BuilderBase className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_WebDialog_BuilderBase cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_WebDialog_BuilderBase jni address %d", javaObject);

	jint jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("int");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_int(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_int_to_jni(java_value);
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
			cxx_type_hierarchy.type_name = std::string("com.facebook.widget.WebDialog$BuilderBase");
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
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_com_facebook_widget_WebDialog_BuilderBase(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	FacebookCXX::com_facebook_widget_WebDialog_BuilderBase result((FacebookCXX::com_facebook_widget_WebDialog_BuilderBase) *((FacebookCXX::com_facebook_widget_WebDialog_BuilderBase *) cxx_value));
	delete ((FacebookCXX::com_facebook_widget_WebDialog_BuilderBase *) cxx_value);
		
	LOGV("FacebookCXX::com_facebook_widget_WebDialog_BuilderBase com_facebook_widget_WebDialog_BuilderBase::setTheme(int const& arg0) exit");

	return result;
}
FacebookCXX::com_facebook_widget_WebDialog com_facebook_widget_WebDialog_BuilderBase::build()
{
	LOGV("FacebookCXX::com_facebook_widget_WebDialog com_facebook_widget_WebDialog_BuilderBase::build() enter");

	const char *methodName = "build";
	const char *methodSignature = "()Lcom/facebook/widget/WebDialog;";
	const char *className = "com/facebook/widget/WebDialog$BuilderBase";

	LOGV("com_facebook_widget_WebDialog_BuilderBase className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_WebDialog_BuilderBase cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_WebDialog_BuilderBase jni address %d", javaObject);


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

	FacebookCXX::com_facebook_widget_WebDialog result((FacebookCXX::com_facebook_widget_WebDialog) *((FacebookCXX::com_facebook_widget_WebDialog *) cxx_value));
	delete ((FacebookCXX::com_facebook_widget_WebDialog *) cxx_value);
		
	LOGV("FacebookCXX::com_facebook_widget_WebDialog com_facebook_widget_WebDialog_BuilderBase::build() exit");

	return result;
}
FacebookCXX::com_facebook_widget_WebDialog_BuilderBase com_facebook_widget_WebDialog_BuilderBase::setOnCompleteListener(FacebookCXX::com_facebook_widget_WebDialog_OnCompleteListener const& arg0)
{
	LOGV("FacebookCXX::com_facebook_widget_WebDialog_BuilderBase com_facebook_widget_WebDialog_BuilderBase::setOnCompleteListener(FacebookCXX::com_facebook_widget_WebDialog_OnCompleteListener const& arg0) enter");

	const char *methodName = "setOnCompleteListener";
	const char *methodSignature = "(Lcom/facebook/widget/WebDialog$OnCompleteListener;)Lcom/facebook/widget/WebDialog$BuilderBase;";
	const char *className = "com/facebook/widget/WebDialog$BuilderBase";

	LOGV("com_facebook_widget_WebDialog_BuilderBase className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_WebDialog_BuilderBase cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_WebDialog_BuilderBase jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("com.facebook.widget.WebDialog$OnCompleteListener");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_com_facebook_widget_WebDialog_OnCompleteListener(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
			cxx_type_hierarchy.type_name = std::string("com.facebook.widget.WebDialog$BuilderBase");
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
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_com_facebook_widget_WebDialog_BuilderBase(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	FacebookCXX::com_facebook_widget_WebDialog_BuilderBase result((FacebookCXX::com_facebook_widget_WebDialog_BuilderBase) *((FacebookCXX::com_facebook_widget_WebDialog_BuilderBase *) cxx_value));
	delete ((FacebookCXX::com_facebook_widget_WebDialog_BuilderBase *) cxx_value);
		
	LOGV("FacebookCXX::com_facebook_widget_WebDialog_BuilderBase com_facebook_widget_WebDialog_BuilderBase::setOnCompleteListener(FacebookCXX::com_facebook_widget_WebDialog_OnCompleteListener const& arg0) exit");

	return result;
}

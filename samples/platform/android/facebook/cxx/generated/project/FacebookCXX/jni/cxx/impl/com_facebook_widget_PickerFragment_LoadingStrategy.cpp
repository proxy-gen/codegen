/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 












// Generated Code 

#include <com_facebook_widget_PickerFragment_LoadingStrategy.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <CXXConverter.hpp>
#include <FacebookCXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "com_facebook_widget_PickerFragment_LoadingStrategy"
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

static long static_obj;
static long static_address = (long) &static_obj;

com_facebook_widget_PickerFragment_LoadingStrategy::com_facebook_widget_PickerFragment_LoadingStrategy(const com_facebook_widget_PickerFragment_LoadingStrategy& cc)
{
	LOGV("com_facebook_widget_PickerFragment_LoadingStrategy::com_facebook_widget_PickerFragment_LoadingStrategy(const com_facebook_widget_PickerFragment_LoadingStrategy& cc) enter");

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

	LOGV("com_facebook_widget_PickerFragment_LoadingStrategy::com_facebook_widget_PickerFragment_LoadingStrategy(const com_facebook_widget_PickerFragment_LoadingStrategy& cc) exit");
}
com_facebook_widget_PickerFragment_LoadingStrategy::com_facebook_widget_PickerFragment_LoadingStrategy(Proxy proxy)
{
	LOGV("com_facebook_widget_PickerFragment_LoadingStrategy::com_facebook_widget_PickerFragment_LoadingStrategy(Proxy proxy) enter");

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

	LOGV("com_facebook_widget_PickerFragment_LoadingStrategy::com_facebook_widget_PickerFragment_LoadingStrategy(Proxy proxy) exit");
}
Proxy com_facebook_widget_PickerFragment_LoadingStrategy::proxy() const
{	
	LOGV("com_facebook_widget_PickerFragment_LoadingStrategy::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_PickerFragment_LoadingStrategy cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_PickerFragment_LoadingStrategy jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("com_facebook_widget_PickerFragment_LoadingStrategy::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
com_facebook_widget_PickerFragment_LoadingStrategy::~com_facebook_widget_PickerFragment_LoadingStrategy()
{
	LOGV("com_facebook_widget_PickerFragment_LoadingStrategy::~com_facebook_widget_PickerFragment_LoadingStrategy() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("com_facebook_widget_PickerFragment_LoadingStrategy::~com_facebook_widget_PickerFragment_LoadingStrategy() exit");
}
// Functions
void com_facebook_widget_PickerFragment_LoadingStrategy::attach(FacebookCXX::com_facebook_widget_GraphObjectAdapter const& arg0)
{
	LOGV("void com_facebook_widget_PickerFragment_LoadingStrategy::attach(FacebookCXX::com_facebook_widget_GraphObjectAdapter const& arg0) enter");

	const char *methodName = "attach";
	const char *methodSignature = "(Lcom/facebook/widget/GraphObjectAdapter;)V";
	const char *className = "com/facebook/widget/PickerFragment$LoadingStrategy";

	LOGV("com_facebook_widget_PickerFragment_LoadingStrategy className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_PickerFragment_LoadingStrategy cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_PickerFragment_LoadingStrategy jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("com.facebook.widget.GraphObjectAdapter");
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
		convert_com_facebook_widget_GraphObjectAdapter(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void com_facebook_widget_PickerFragment_LoadingStrategy::attach(FacebookCXX::com_facebook_widget_GraphObjectAdapter const& arg0) exit");

}
void com_facebook_widget_PickerFragment_LoadingStrategy::detach()
{
	LOGV("void com_facebook_widget_PickerFragment_LoadingStrategy::detach() enter");

	const char *methodName = "detach";
	const char *methodSignature = "()V";
	const char *className = "com/facebook/widget/PickerFragment$LoadingStrategy";

	LOGV("com_facebook_widget_PickerFragment_LoadingStrategy className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_PickerFragment_LoadingStrategy cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_PickerFragment_LoadingStrategy jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	LOGV("void com_facebook_widget_PickerFragment_LoadingStrategy::detach() exit");

}
bool com_facebook_widget_PickerFragment_LoadingStrategy::isDataPresentOrLoading()
{
	LOGV("bool com_facebook_widget_PickerFragment_LoadingStrategy::isDataPresentOrLoading() enter");

	const char *methodName = "isDataPresentOrLoading";
	const char *methodSignature = "()Z";
	const char *className = "com/facebook/widget/PickerFragment$LoadingStrategy";

	LOGV("com_facebook_widget_PickerFragment_LoadingStrategy className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_PickerFragment_LoadingStrategy cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_PickerFragment_LoadingStrategy jni address %d", javaObject);


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
		
	LOGV("bool com_facebook_widget_PickerFragment_LoadingStrategy::isDataPresentOrLoading() exit");

	return result;
}
void com_facebook_widget_PickerFragment_LoadingStrategy::clearResults()
{
	LOGV("void com_facebook_widget_PickerFragment_LoadingStrategy::clearResults() enter");

	const char *methodName = "clearResults";
	const char *methodSignature = "()V";
	const char *className = "com/facebook/widget/PickerFragment$LoadingStrategy";

	LOGV("com_facebook_widget_PickerFragment_LoadingStrategy className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_PickerFragment_LoadingStrategy cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_PickerFragment_LoadingStrategy jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	LOGV("void com_facebook_widget_PickerFragment_LoadingStrategy::clearResults() exit");

}
void com_facebook_widget_PickerFragment_LoadingStrategy::startLoading(FacebookCXX::com_facebook_Request const& arg0)
{
	LOGV("void com_facebook_widget_PickerFragment_LoadingStrategy::startLoading(FacebookCXX::com_facebook_Request const& arg0) enter");

	const char *methodName = "startLoading";
	const char *methodSignature = "(Lcom/facebook/Request;)V";
	const char *className = "com/facebook/widget/PickerFragment$LoadingStrategy";

	LOGV("com_facebook_widget_PickerFragment_LoadingStrategy className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_PickerFragment_LoadingStrategy cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_PickerFragment_LoadingStrategy jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("com.facebook.Request");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_com_facebook_Request(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void com_facebook_widget_PickerFragment_LoadingStrategy::startLoading(FacebookCXX::com_facebook_Request const& arg0) exit");

}

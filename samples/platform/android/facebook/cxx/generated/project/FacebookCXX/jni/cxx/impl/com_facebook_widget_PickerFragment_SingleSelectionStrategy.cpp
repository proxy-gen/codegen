/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	









// Generated Code 

#include <com_facebook_widget_PickerFragment_SingleSelectionStrategy.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <CXXConverter.hpp>
#include <FacebookCXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "com_facebook_widget_PickerFragment_SingleSelectionStrategy"
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

static long static_obj;
static long static_address = (long) &static_obj;

com_facebook_widget_PickerFragment_SingleSelectionStrategy::com_facebook_widget_PickerFragment_SingleSelectionStrategy(const com_facebook_widget_PickerFragment_SingleSelectionStrategy& cc)
{
	LOGV("com_facebook_widget_PickerFragment_SingleSelectionStrategy::com_facebook_widget_PickerFragment_SingleSelectionStrategy(const com_facebook_widget_PickerFragment_SingleSelectionStrategy& cc) enter");

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

	LOGV("com_facebook_widget_PickerFragment_SingleSelectionStrategy::com_facebook_widget_PickerFragment_SingleSelectionStrategy(const com_facebook_widget_PickerFragment_SingleSelectionStrategy& cc) exit");
}
com_facebook_widget_PickerFragment_SingleSelectionStrategy::com_facebook_widget_PickerFragment_SingleSelectionStrategy(Proxy proxy)
{
	LOGV("com_facebook_widget_PickerFragment_SingleSelectionStrategy::com_facebook_widget_PickerFragment_SingleSelectionStrategy(Proxy proxy) enter");

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

	LOGV("com_facebook_widget_PickerFragment_SingleSelectionStrategy::com_facebook_widget_PickerFragment_SingleSelectionStrategy(Proxy proxy) exit");
}
Proxy com_facebook_widget_PickerFragment_SingleSelectionStrategy::proxy() const
{	
	LOGV("com_facebook_widget_PickerFragment_SingleSelectionStrategy::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_PickerFragment_SingleSelectionStrategy cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_PickerFragment_SingleSelectionStrategy jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("com_facebook_widget_PickerFragment_SingleSelectionStrategy::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
com_facebook_widget_PickerFragment_SingleSelectionStrategy::~com_facebook_widget_PickerFragment_SingleSelectionStrategy()
{
	LOGV("com_facebook_widget_PickerFragment_SingleSelectionStrategy::~com_facebook_widget_PickerFragment_SingleSelectionStrategy() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("com_facebook_widget_PickerFragment_SingleSelectionStrategy::~com_facebook_widget_PickerFragment_SingleSelectionStrategy() exit");
}
// Functions
void com_facebook_widget_PickerFragment_SingleSelectionStrategy::clear()
{
	LOGV("void com_facebook_widget_PickerFragment_SingleSelectionStrategy::clear() enter");

	const char *methodName = "clear";
	const char *methodSignature = "()V";
	const char *className = "com/facebook/widget/PickerFragment$SingleSelectionStrategy";

	LOGV("com_facebook_widget_PickerFragment_SingleSelectionStrategy className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_PickerFragment_SingleSelectionStrategy cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_PickerFragment_SingleSelectionStrategy jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	LOGV("void com_facebook_widget_PickerFragment_SingleSelectionStrategy::clear() exit");

}
AndroidCXX::java_util_Collection com_facebook_widget_PickerFragment_SingleSelectionStrategy::getSelectedIds()
{
	LOGV("AndroidCXX::java_util_Collection com_facebook_widget_PickerFragment_SingleSelectionStrategy::getSelectedIds() enter");

	const char *methodName = "getSelectedIds";
	const char *methodSignature = "()Ljava/util/Collection;";
	const char *className = "com/facebook/widget/PickerFragment$SingleSelectionStrategy";

	LOGV("com_facebook_widget_PickerFragment_SingleSelectionStrategy className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_PickerFragment_SingleSelectionStrategy cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_PickerFragment_SingleSelectionStrategy jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("java.util.Collection");
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
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_util_Collection(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::java_util_Collection result((AndroidCXX::java_util_Collection) *((AndroidCXX::java_util_Collection *) cxx_value));
	delete ((AndroidCXX::java_util_Collection *) cxx_value);
		
	LOGV("AndroidCXX::java_util_Collection com_facebook_widget_PickerFragment_SingleSelectionStrategy::getSelectedIds() exit");

	return result;
}

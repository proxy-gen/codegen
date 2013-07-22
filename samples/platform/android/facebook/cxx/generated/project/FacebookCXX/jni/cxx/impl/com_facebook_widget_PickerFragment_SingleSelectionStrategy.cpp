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
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <FacebookCXXConverter.hpp>

#define LOG_TAG "com_facebook_widget_PickerFragment_SingleSelectionStrategy"
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

static long static_obj;
static long static_address = (long) &static_obj;


// Default Instance Constructors
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
com_facebook_widget_PickerFragment_SingleSelectionStrategy::com_facebook_widget_PickerFragment_SingleSelectionStrategy(void * proxy)
{
	LOGV("com_facebook_widget_PickerFragment_SingleSelectionStrategy::com_facebook_widget_PickerFragment_SingleSelectionStrategy(void * proxy) enter");

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

	LOGV("com_facebook_widget_PickerFragment_SingleSelectionStrategy::com_facebook_widget_PickerFragment_SingleSelectionStrategy(void * proxy) exit");
}
com_facebook_widget_PickerFragment_SingleSelectionStrategy::com_facebook_widget_PickerFragment_SingleSelectionStrategy()
{
	LOGV("com_facebook_widget_PickerFragment_SingleSelectionStrategy::com_facebook_widget_PickerFragment_SingleSelectionStrategy() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "com/facebook/widget/PickerFragment$SingleSelectionStrategy";

	LOGV("com_facebook_widget_PickerFragment_SingleSelectionStrategy className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_PickerFragment_SingleSelectionStrategy cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_PickerFragment_SingleSelectionStrategy jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, "<init>", methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("com_facebook_widget_PickerFragment_SingleSelectionStrategy::com_facebook_widget_PickerFragment_SingleSelectionStrategy() exit");	
}
// Public Constructors
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

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_PickerFragment_SingleSelectionStrategy cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_PickerFragment_SingleSelectionStrategy jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	jni->popLocalFrame();

	LOGV("void com_facebook_widget_PickerFragment_SingleSelectionStrategy::clear() exit");

}
FacebookCXX::java_util_Collection com_facebook_widget_PickerFragment_SingleSelectionStrategy::getSelectedIds()
{
	LOGV("FacebookCXX::java_util_Collection com_facebook_widget_PickerFragment_SingleSelectionStrategy::getSelectedIds() enter");

	const char *methodName = "getSelectedIds";
	const char *methodSignature = "()Ljava/util/Collection;";
	const char *className = "com/facebook/widget/PickerFragment$SingleSelectionStrategy";

	LOGV("com_facebook_widget_PickerFragment_SingleSelectionStrategy className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_PickerFragment_SingleSelectionStrategy cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_PickerFragment_SingleSelectionStrategy jni address %d", javaObject);


	FacebookCXX::java_util_Collection result;
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
	result = (FacebookCXX::java_util_Collection) (FacebookCXX::java_util_Collection((FacebookCXX::java_util_Collection *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("FacebookCXX::java_util_Collection com_facebook_widget_PickerFragment_SingleSelectionStrategy::getSelectedIds() exit");

	return result;
}

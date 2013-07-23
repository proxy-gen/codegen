/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 








// Generated Code 

#include <com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <FacebookCXXConverter.hpp>
// TODO: FIXME: add include package
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy"
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
com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy::com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy(const com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy& cc)
{
	LOGV("com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy::com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy(const com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy& cc) enter");

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

	LOGV("com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy::com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy(const com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy& cc) exit");
}
com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy::com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy(void * proxy)
{
	LOGV("com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy::com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy(void * proxy) enter");

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

	LOGV("com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy::com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy(void * proxy) exit");
}
com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy::com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy()
{
	LOGV("com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy::com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "com/facebook/widget/PlacePickerFragment$AsNeededLoadingStrategy";

	LOGV("com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, "<init>", methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy::com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy() exit");	
}
// Public Constructors
// Default Instance Destructor
com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy::~com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy()
{
	LOGV("com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy::~com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy::~com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy() exit");
}
// Functions
void com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy::attach(FacebookCXX::com_facebook_widget_GraphObjectAdapter& arg0)
{
	LOGV("void com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy::attach(FacebookCXX::com_facebook_widget_GraphObjectAdapter& arg0) enter");

	const char *methodName = "attach";
	const char *methodSignature = "(Lcom/facebook/widget/GraphObjectAdapter;)V";
	const char *className = "com/facebook/widget/PlacePickerFragment$AsNeededLoadingStrategy";

	LOGV("com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("com.facebook.model.GraphPlace");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_com_facebook_model_GraphPlace);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_com_facebook_widget_GraphObjectAdapter(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy::attach(FacebookCXX::com_facebook_widget_GraphObjectAdapter& arg0) exit");

}

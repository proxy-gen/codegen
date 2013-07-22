/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//













// Generated Code 

#include <com_facebook_widget_WorkQueue_WorkItem.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <FacebookCXXConverter.hpp>

#define LOG_TAG "com_facebook_widget_WorkQueue_WorkItem"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace FacebookCXX;

// 
// 

static long static_obj;
static long static_address = (long) &static_obj;


// Default Instance Constructors
com_facebook_widget_WorkQueue_WorkItem::com_facebook_widget_WorkQueue_WorkItem(const com_facebook_widget_WorkQueue_WorkItem& cc)
{
	LOGV("com_facebook_widget_WorkQueue_WorkItem::com_facebook_widget_WorkQueue_WorkItem(const com_facebook_widget_WorkQueue_WorkItem& cc) enter");

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

	LOGV("com_facebook_widget_WorkQueue_WorkItem::com_facebook_widget_WorkQueue_WorkItem(const com_facebook_widget_WorkQueue_WorkItem& cc) exit");
}
com_facebook_widget_WorkQueue_WorkItem::com_facebook_widget_WorkQueue_WorkItem(void * proxy)
{
	LOGV("com_facebook_widget_WorkQueue_WorkItem::com_facebook_widget_WorkQueue_WorkItem(void * proxy) enter");

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

	LOGV("com_facebook_widget_WorkQueue_WorkItem::com_facebook_widget_WorkQueue_WorkItem(void * proxy) exit");
}
com_facebook_widget_WorkQueue_WorkItem::com_facebook_widget_WorkQueue_WorkItem()
{
	LOGV("com_facebook_widget_WorkQueue_WorkItem::com_facebook_widget_WorkQueue_WorkItem() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "com/facebook/widget/WorkQueue$WorkItem";

	LOGV("com_facebook_widget_WorkQueue_WorkItem className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_WorkQueue_WorkItem cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_WorkQueue_WorkItem jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, "<init>", methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("com_facebook_widget_WorkQueue_WorkItem::com_facebook_widget_WorkQueue_WorkItem() exit");	
}
// Public Constructors
// Default Instance Destructor
com_facebook_widget_WorkQueue_WorkItem::~com_facebook_widget_WorkQueue_WorkItem()
{
	LOGV("com_facebook_widget_WorkQueue_WorkItem::~com_facebook_widget_WorkQueue_WorkItem() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("com_facebook_widget_WorkQueue_WorkItem::~com_facebook_widget_WorkQueue_WorkItem() exit");
}
// Functions
bool com_facebook_widget_WorkQueue_WorkItem::cancel()
{
	LOGV("bool com_facebook_widget_WorkQueue_WorkItem::cancel() enter");

	const char *methodName = "cancel";
	const char *methodSignature = "()Z";
	const char *className = "com/facebook/widget/WorkQueue$WorkItem";

	LOGV("com_facebook_widget_WorkQueue_WorkItem className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_WorkQueue_WorkItem cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_WorkQueue_WorkItem jni address %d", javaObject);


	bool result;
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
	result = (bool) (cxx_value);
		
	jni->popLocalFrame();

	LOGV("bool com_facebook_widget_WorkQueue_WorkItem::cancel() exit");

	return result;
}
bool com_facebook_widget_WorkQueue_WorkItem::isRunning()
{
	LOGV("bool com_facebook_widget_WorkQueue_WorkItem::isRunning() enter");

	const char *methodName = "isRunning";
	const char *methodSignature = "()Z";
	const char *className = "com/facebook/widget/WorkQueue$WorkItem";

	LOGV("com_facebook_widget_WorkQueue_WorkItem className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_WorkQueue_WorkItem cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_WorkQueue_WorkItem jni address %d", javaObject);


	bool result;
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
	result = (bool) (cxx_value);
		
	jni->popLocalFrame();

	LOGV("bool com_facebook_widget_WorkQueue_WorkItem::isRunning() exit");

	return result;
}
void com_facebook_widget_WorkQueue_WorkItem::moveToFront()
{
	LOGV("void com_facebook_widget_WorkQueue_WorkItem::moveToFront() enter");

	const char *methodName = "moveToFront";
	const char *methodSignature = "()V";
	const char *className = "com/facebook/widget/WorkQueue$WorkItem";

	LOGV("com_facebook_widget_WorkQueue_WorkItem className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_WorkQueue_WorkItem cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_WorkQueue_WorkItem jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	jni->popLocalFrame();

	LOGV("void com_facebook_widget_WorkQueue_WorkItem::moveToFront() exit");

}

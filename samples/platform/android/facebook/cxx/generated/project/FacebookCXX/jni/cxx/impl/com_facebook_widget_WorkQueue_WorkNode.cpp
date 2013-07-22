/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//













// Generated Code 

#include <com_facebook_widget_WorkQueue_WorkNode.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <FacebookCXXConverter.hpp>

#define LOG_TAG "com_facebook_widget_WorkQueue_WorkNode"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace FacebookCXX;

// 
// 

static long static_obj;
static long static_address = (long) &static_obj;


// Default Instance Constructors
com_facebook_widget_WorkQueue_WorkNode::com_facebook_widget_WorkQueue_WorkNode(const com_facebook_widget_WorkQueue_WorkNode& cc)
{
	LOGV("com_facebook_widget_WorkQueue_WorkNode::com_facebook_widget_WorkQueue_WorkNode(const com_facebook_widget_WorkQueue_WorkNode& cc) enter");

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

	LOGV("com_facebook_widget_WorkQueue_WorkNode::com_facebook_widget_WorkQueue_WorkNode(const com_facebook_widget_WorkQueue_WorkNode& cc) exit");
}
com_facebook_widget_WorkQueue_WorkNode::com_facebook_widget_WorkQueue_WorkNode(void * proxy)
{
	LOGV("com_facebook_widget_WorkQueue_WorkNode::com_facebook_widget_WorkQueue_WorkNode(void * proxy) enter");

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

	LOGV("com_facebook_widget_WorkQueue_WorkNode::com_facebook_widget_WorkQueue_WorkNode(void * proxy) exit");
}
com_facebook_widget_WorkQueue_WorkNode::com_facebook_widget_WorkQueue_WorkNode()
{
	LOGV("com_facebook_widget_WorkQueue_WorkNode::com_facebook_widget_WorkQueue_WorkNode() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "com/facebook/widget/WorkQueue$WorkNode";

	LOGV("com_facebook_widget_WorkQueue_WorkNode className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_WorkQueue_WorkNode cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_WorkQueue_WorkNode jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, "<init>", methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("com_facebook_widget_WorkQueue_WorkNode::com_facebook_widget_WorkQueue_WorkNode() exit");	
}
// Public Constructors
// Default Instance Destructor
com_facebook_widget_WorkQueue_WorkNode::~com_facebook_widget_WorkQueue_WorkNode()
{
	LOGV("com_facebook_widget_WorkQueue_WorkNode::~com_facebook_widget_WorkQueue_WorkNode() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("com_facebook_widget_WorkQueue_WorkNode::~com_facebook_widget_WorkQueue_WorkNode() exit");
}
// Functions
bool com_facebook_widget_WorkQueue_WorkNode::cancel()
{
	LOGV("bool com_facebook_widget_WorkQueue_WorkNode::cancel() enter");

	const char *methodName = "cancel";
	const char *methodSignature = "()Z";
	const char *className = "com/facebook/widget/WorkQueue$WorkNode";

	LOGV("com_facebook_widget_WorkQueue_WorkNode className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_WorkQueue_WorkNode cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_WorkQueue_WorkNode jni address %d", javaObject);


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

	LOGV("bool com_facebook_widget_WorkQueue_WorkNode::cancel() exit");

	return result;
}
bool com_facebook_widget_WorkQueue_WorkNode::isRunning()
{
	LOGV("bool com_facebook_widget_WorkQueue_WorkNode::isRunning() enter");

	const char *methodName = "isRunning";
	const char *methodSignature = "()Z";
	const char *className = "com/facebook/widget/WorkQueue$WorkNode";

	LOGV("com_facebook_widget_WorkQueue_WorkNode className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_WorkQueue_WorkNode cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_WorkQueue_WorkNode jni address %d", javaObject);


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

	LOGV("bool com_facebook_widget_WorkQueue_WorkNode::isRunning() exit");

	return result;
}
void com_facebook_widget_WorkQueue_WorkNode::moveToFront()
{
	LOGV("void com_facebook_widget_WorkQueue_WorkNode::moveToFront() enter");

	const char *methodName = "moveToFront";
	const char *methodSignature = "()V";
	const char *className = "com/facebook/widget/WorkQueue$WorkNode";

	LOGV("com_facebook_widget_WorkQueue_WorkNode className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_WorkQueue_WorkNode cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_WorkQueue_WorkNode jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	jni->popLocalFrame();

	LOGV("void com_facebook_widget_WorkQueue_WorkNode::moveToFront() exit");

}

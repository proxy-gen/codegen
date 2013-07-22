/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//












// Generated Code 

#include <android_content_DialogInterface.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "android_content_DialogInterface"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace AndroidCXX;

// 
// 

static long static_obj;
static long static_address = (long) &static_obj;


// Default Instance Constructors
android_content_DialogInterface::android_content_DialogInterface(const android_content_DialogInterface& cc)
{
	LOGV("android_content_DialogInterface::android_content_DialogInterface(const android_content_DialogInterface& cc) enter");

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

	LOGV("android_content_DialogInterface::android_content_DialogInterface(const android_content_DialogInterface& cc) exit");
}
android_content_DialogInterface::android_content_DialogInterface(void * proxy)
{
	LOGV("android_content_DialogInterface::android_content_DialogInterface(void * proxy) enter");

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

	LOGV("android_content_DialogInterface::android_content_DialogInterface(void * proxy) exit");
}
android_content_DialogInterface::android_content_DialogInterface()
{
	LOGV("android_content_DialogInterface::android_content_DialogInterface() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "android/content/DialogInterface";

	LOGV("android_content_DialogInterface className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_content_DialogInterface cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_DialogInterface jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, "<init>", methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("android_content_DialogInterface::android_content_DialogInterface() exit");	
}
// Public Constructors
// Default Instance Destructor
android_content_DialogInterface::~android_content_DialogInterface()
{
	LOGV("android_content_DialogInterface::~android_content_DialogInterface() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("android_content_DialogInterface::~android_content_DialogInterface() exit");
}
// Functions
void android_content_DialogInterface::cancel()
{
	LOGV("void android_content_DialogInterface::cancel() enter");

	const char *methodName = "cancel";
	const char *methodSignature = "()V";
	const char *className = "android/content/DialogInterface";

	LOGV("android_content_DialogInterface className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_content_DialogInterface cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_DialogInterface jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	jni->popLocalFrame();

	LOGV("void android_content_DialogInterface::cancel() exit");

}
void android_content_DialogInterface::dismiss()
{
	LOGV("void android_content_DialogInterface::dismiss() enter");

	const char *methodName = "dismiss";
	const char *methodSignature = "()V";
	const char *className = "android/content/DialogInterface";

	LOGV("android_content_DialogInterface className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_content_DialogInterface cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_DialogInterface jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	jni->popLocalFrame();

	LOGV("void android_content_DialogInterface::dismiss() exit");

}

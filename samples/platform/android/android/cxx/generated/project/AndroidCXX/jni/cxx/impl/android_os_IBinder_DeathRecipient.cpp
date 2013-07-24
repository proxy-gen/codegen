/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//










// Generated Code 

#include <android_os_IBinder_DeathRecipient.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>
// TODO: FIXME: add include package
// FIXME: remove after testing

#define LOG_TAG "android_os_IBinder_DeathRecipient"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace AndroidCXX;

// 
// 

static long static_obj;
static long static_address = (long) &static_obj;

// Default Instance Constructors
android_os_IBinder_DeathRecipient::android_os_IBinder_DeathRecipient(const android_os_IBinder_DeathRecipient& cc)
{
	LOGV("android_os_IBinder_DeathRecipient::android_os_IBinder_DeathRecipient(const android_os_IBinder_DeathRecipient& cc) enter");

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

	LOGV("android_os_IBinder_DeathRecipient::android_os_IBinder_DeathRecipient(const android_os_IBinder_DeathRecipient& cc) exit");
}
android_os_IBinder_DeathRecipient::android_os_IBinder_DeathRecipient(void * proxy)
{
	LOGV("android_os_IBinder_DeathRecipient::android_os_IBinder_DeathRecipient(void * proxy) enter");

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

	LOGV("android_os_IBinder_DeathRecipient::android_os_IBinder_DeathRecipient(void * proxy) exit");
}
// TODO: remove
// 
// 
// android_os_IBinder_DeathRecipient::android_os_IBinder_DeathRecipient()
// {
// 	LOGV("android_os_IBinder_DeathRecipient::android_os_IBinder_DeathRecipient() enter");	

// 	const char *methodName = "<init>";
// 	const char *methodSignature = "()V";
// 	const char *className = "android/os/IBinder$DeathRecipient";

// 	LOGV("android_os_IBinder_DeathRecipient className %d methodName %s methodSignature %s", className, methodName, methodSignature);

// 	CXXContext *ctx = CXXContext::sharedInstance();
// 	JNIContext *jni = JNIContext::sharedInstance();

// 	jni->pushLocalFrame();

// 	long cxxAddress = (long) this;
// 	LOGV("android_os_IBinder_DeathRecipient cxx address %d", cxxAddress);
// 	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
// 	LOGV("android_os_IBinder_DeathRecipient jni address %d", proxiedComponent);

// 	if (proxiedComponent == 0)
// 	{
// 		jclass clazz = jni->getClassRef(className);

// 		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, "<init>", methodSignature));
// 		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

// 		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
// 	}

// 	jni->popLocalFrame();

// 	LOGV("android_os_IBinder_DeathRecipient::android_os_IBinder_DeathRecipient() exit");	
// }
// 
// 
// Public Constructors
// Default Instance Destructor
android_os_IBinder_DeathRecipient::~android_os_IBinder_DeathRecipient()
{
	LOGV("android_os_IBinder_DeathRecipient::~android_os_IBinder_DeathRecipient() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("android_os_IBinder_DeathRecipient::~android_os_IBinder_DeathRecipient() exit");
}
// Functions
void android_os_IBinder_DeathRecipient::binderDied()
{
	LOGV("void android_os_IBinder_DeathRecipient::binderDied() enter");

	const char *methodName = "binderDied";
	const char *methodSignature = "()V";
	const char *className = "android/os/IBinder$DeathRecipient";

	LOGV("android_os_IBinder_DeathRecipient className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_os_IBinder_DeathRecipient cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_os_IBinder_DeathRecipient jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	jni->popLocalFrame();

	LOGV("void android_os_IBinder_DeathRecipient::binderDied() exit");

}

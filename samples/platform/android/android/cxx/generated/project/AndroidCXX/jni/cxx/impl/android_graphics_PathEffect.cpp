/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//











// Generated Code 

#include <android_graphics_PathEffect.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "android_graphics_PathEffect"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace AndroidCXX;

// 
// 

static long static_obj;
static long static_address = (long) &static_obj;


// Default Instance Constructors
android_graphics_PathEffect::android_graphics_PathEffect(const android_graphics_PathEffect& cc)
{
	LOGV("android_graphics_PathEffect::android_graphics_PathEffect(const android_graphics_PathEffect& cc) enter");

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

	LOGV("android_graphics_PathEffect::android_graphics_PathEffect(const android_graphics_PathEffect& cc) exit");
}
android_graphics_PathEffect::android_graphics_PathEffect(void * proxy)
{
	LOGV("android_graphics_PathEffect::android_graphics_PathEffect(void * proxy) enter");

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

	LOGV("android_graphics_PathEffect::android_graphics_PathEffect(void * proxy) exit");
}
// Public Constructors
android_graphics_PathEffect::android_graphics_PathEffect()
{
	LOGV("android_graphics_PathEffect::android_graphics_PathEffect() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "android/graphics/PathEffect";

	LOGV("android_graphics_PathEffect className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_graphics_PathEffect cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("android_graphics_PathEffect jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{

			
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, methodName, methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("android_graphics_PathEffect::android_graphics_PathEffect() exit");	
}
// Default Instance Destructor
android_graphics_PathEffect::~android_graphics_PathEffect()
{
	LOGV("android_graphics_PathEffect::~android_graphics_PathEffect() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("android_graphics_PathEffect::~android_graphics_PathEffect() exit");
}
// Functions

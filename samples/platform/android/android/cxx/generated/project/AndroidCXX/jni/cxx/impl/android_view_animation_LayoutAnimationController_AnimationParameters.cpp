/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//











// Generated Code 

#include <android_view_animation_LayoutAnimationController_AnimationParameters.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>
// TODO: FIXME: add include package
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "android_view_animation_LayoutAnimationController_AnimationParameters"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace AndroidCXX;

// 
// 

static long static_obj;
static long static_address = (long) &static_obj;


// Default Instance Constructors
android_view_animation_LayoutAnimationController_AnimationParameters::android_view_animation_LayoutAnimationController_AnimationParameters(const android_view_animation_LayoutAnimationController_AnimationParameters& cc)
{
	LOGV("android_view_animation_LayoutAnimationController_AnimationParameters::android_view_animation_LayoutAnimationController_AnimationParameters(const android_view_animation_LayoutAnimationController_AnimationParameters& cc) enter");

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

	LOGV("android_view_animation_LayoutAnimationController_AnimationParameters::android_view_animation_LayoutAnimationController_AnimationParameters(const android_view_animation_LayoutAnimationController_AnimationParameters& cc) exit");
}
android_view_animation_LayoutAnimationController_AnimationParameters::android_view_animation_LayoutAnimationController_AnimationParameters(void * proxy)
{
	LOGV("android_view_animation_LayoutAnimationController_AnimationParameters::android_view_animation_LayoutAnimationController_AnimationParameters(void * proxy) enter");

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

	LOGV("android_view_animation_LayoutAnimationController_AnimationParameters::android_view_animation_LayoutAnimationController_AnimationParameters(void * proxy) exit");
}
// Public Constructors
android_view_animation_LayoutAnimationController_AnimationParameters::android_view_animation_LayoutAnimationController_AnimationParameters()
{
	LOGV("android_view_animation_LayoutAnimationController_AnimationParameters::android_view_animation_LayoutAnimationController_AnimationParameters() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "android/view/animation/LayoutAnimationController$AnimationParameters";

	LOGV("android_view_animation_LayoutAnimationController_AnimationParameters className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_view_animation_LayoutAnimationController_AnimationParameters cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_animation_LayoutAnimationController_AnimationParameters jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{

			
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, methodName, methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("android_view_animation_LayoutAnimationController_AnimationParameters::android_view_animation_LayoutAnimationController_AnimationParameters() exit");	
}
// Default Instance Destructor
android_view_animation_LayoutAnimationController_AnimationParameters::~android_view_animation_LayoutAnimationController_AnimationParameters()
{
	LOGV("android_view_animation_LayoutAnimationController_AnimationParameters::~android_view_animation_LayoutAnimationController_AnimationParameters() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("android_view_animation_LayoutAnimationController_AnimationParameters::~android_view_animation_LayoutAnimationController_AnimationParameters() exit");
}
// Functions

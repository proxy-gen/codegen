/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//











// Generated Code 

#include <android_graphics_BitmapFactory_Options.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>
// TODO: FIXME: add include package
// FIXME: remove after testing

#define LOG_TAG "android_graphics_BitmapFactory_Options"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace AndroidCXX;

// 
// 

static long static_obj;
static long static_address = (long) &static_obj;

android_graphics_BitmapFactory_Options::android_graphics_BitmapFactory_Options(const android_graphics_BitmapFactory_Options& cc)
{
	LOGV("android_graphics_BitmapFactory_Options::android_graphics_BitmapFactory_Options(const android_graphics_BitmapFactory_Options& cc) enter");

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

	LOGV("android_graphics_BitmapFactory_Options::android_graphics_BitmapFactory_Options(const android_graphics_BitmapFactory_Options& cc) exit");
}
android_graphics_BitmapFactory_Options::android_graphics_BitmapFactory_Options(Proxy proxy)
{
	LOGV("android_graphics_BitmapFactory_Options::android_graphics_BitmapFactory_Options(Proxy proxy) enter");

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

	LOGV("android_graphics_BitmapFactory_Options::android_graphics_BitmapFactory_Options(Proxy proxy) exit");
}
Proxy android_graphics_BitmapFactory_Options::proxy() const
{	
	LOGV("android_graphics_BitmapFactory_Options::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_graphics_BitmapFactory_Options cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("android_graphics_BitmapFactory_Options jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("android_graphics_BitmapFactory_Options::proxy() exit");	

	return proxy;
}
android_graphics_BitmapFactory_Options::android_graphics_BitmapFactory_Options()
{
	LOGV("android_graphics_BitmapFactory_Options::android_graphics_BitmapFactory_Options() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "android/graphics/BitmapFactory$Options";

	LOGV("android_graphics_BitmapFactory_Options className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_graphics_BitmapFactory_Options cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("android_graphics_BitmapFactory_Options jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{

			
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, methodName, methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("android_graphics_BitmapFactory_Options::android_graphics_BitmapFactory_Options() exit");	
}
// Default Instance Destructor
android_graphics_BitmapFactory_Options::~android_graphics_BitmapFactory_Options()
{
	LOGV("android_graphics_BitmapFactory_Options::~android_graphics_BitmapFactory_Options() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("android_graphics_BitmapFactory_Options::~android_graphics_BitmapFactory_Options() exit");
}
// Functions
void android_graphics_BitmapFactory_Options::requestCancelDecode()
{
	LOGV("void android_graphics_BitmapFactory_Options::requestCancelDecode() enter");

	const char *methodName = "requestCancelDecode";
	const char *methodSignature = "()V";
	const char *className = "android/graphics/BitmapFactory$Options";

	LOGV("android_graphics_BitmapFactory_Options className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_graphics_BitmapFactory_Options cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_graphics_BitmapFactory_Options jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	LOGV("void android_graphics_BitmapFactory_Options::requestCancelDecode() exit");

}

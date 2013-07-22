/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//












// Generated Code 

#include <android_widget_Advanceable.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "android_widget_Advanceable"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace AndroidCXX;

// 
// 

static long static_obj;
static long static_address = (long) &static_obj;


// Default Instance Constructors
android_widget_Advanceable::android_widget_Advanceable(const android_widget_Advanceable& cc)
{
	LOGV("android_widget_Advanceable::android_widget_Advanceable(const android_widget_Advanceable& cc) enter");

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

	LOGV("android_widget_Advanceable::android_widget_Advanceable(const android_widget_Advanceable& cc) exit");
}
android_widget_Advanceable::android_widget_Advanceable(void * proxy)
{
	LOGV("android_widget_Advanceable::android_widget_Advanceable(void * proxy) enter");

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

	LOGV("android_widget_Advanceable::android_widget_Advanceable(void * proxy) exit");
}
android_widget_Advanceable::android_widget_Advanceable()
{
	LOGV("android_widget_Advanceable::android_widget_Advanceable() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "android/widget/Advanceable";

	LOGV("android_widget_Advanceable className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_Advanceable cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_Advanceable jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, "<init>", methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("android_widget_Advanceable::android_widget_Advanceable() exit");	
}
// Public Constructors
// Default Instance Destructor
android_widget_Advanceable::~android_widget_Advanceable()
{
	LOGV("android_widget_Advanceable::~android_widget_Advanceable() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("android_widget_Advanceable::~android_widget_Advanceable() exit");
}
// Functions
void android_widget_Advanceable::advance()
{
	LOGV("void android_widget_Advanceable::advance() enter");

	const char *methodName = "advance";
	const char *methodSignature = "()V";
	const char *className = "android/widget/Advanceable";

	LOGV("android_widget_Advanceable className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_Advanceable cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_Advanceable jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	jni->popLocalFrame();

	LOGV("void android_widget_Advanceable::advance() exit");

}
void android_widget_Advanceable::fyiWillBeAdvancedByHostKThx()
{
	LOGV("void android_widget_Advanceable::fyiWillBeAdvancedByHostKThx() enter");

	const char *methodName = "fyiWillBeAdvancedByHostKThx";
	const char *methodSignature = "()V";
	const char *className = "android/widget/Advanceable";

	LOGV("android_widget_Advanceable className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_Advanceable cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_Advanceable jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	jni->popLocalFrame();

	LOGV("void android_widget_Advanceable::fyiWillBeAdvancedByHostKThx() exit");

}

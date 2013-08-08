/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 








// Generated Code 

#include <android_media_MediaPlayer_OnTimedTextListener.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "android_media_MediaPlayer_OnTimedTextListener"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace AndroidCXX;

// 
// 
// 
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

android_media_MediaPlayer_OnTimedTextListener::android_media_MediaPlayer_OnTimedTextListener(const android_media_MediaPlayer_OnTimedTextListener& cc)
{
	LOGV("android_media_MediaPlayer_OnTimedTextListener::android_media_MediaPlayer_OnTimedTextListener(const android_media_MediaPlayer_OnTimedTextListener& cc) enter");

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

	LOGV("android_media_MediaPlayer_OnTimedTextListener::android_media_MediaPlayer_OnTimedTextListener(const android_media_MediaPlayer_OnTimedTextListener& cc) exit");
}
android_media_MediaPlayer_OnTimedTextListener::android_media_MediaPlayer_OnTimedTextListener(Proxy proxy)
{
	LOGV("android_media_MediaPlayer_OnTimedTextListener::android_media_MediaPlayer_OnTimedTextListener(Proxy proxy) enter");

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

	LOGV("android_media_MediaPlayer_OnTimedTextListener::android_media_MediaPlayer_OnTimedTextListener(Proxy proxy) exit");
}
Proxy android_media_MediaPlayer_OnTimedTextListener::proxy() const
{	
	LOGV("android_media_MediaPlayer_OnTimedTextListener::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_media_MediaPlayer_OnTimedTextListener cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("android_media_MediaPlayer_OnTimedTextListener jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("android_media_MediaPlayer_OnTimedTextListener::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
android_media_MediaPlayer_OnTimedTextListener::~android_media_MediaPlayer_OnTimedTextListener()
{
	LOGV("android_media_MediaPlayer_OnTimedTextListener::~android_media_MediaPlayer_OnTimedTextListener() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("android_media_MediaPlayer_OnTimedTextListener::~android_media_MediaPlayer_OnTimedTextListener() exit");
}
// Functions
void android_media_MediaPlayer_OnTimedTextListener::onTimedText(AndroidCXX::android_media_MediaPlayer const& arg0,AndroidCXX::android_media_TimedText const& arg1)
{
	LOGV("void android_media_MediaPlayer_OnTimedTextListener::onTimedText(AndroidCXX::android_media_MediaPlayer const& arg0,AndroidCXX::android_media_TimedText const& arg1) enter");

	const char *methodName = "onTimedText";
	const char *methodSignature = "(Landroid/media/MediaPlayer;Landroid/media/TimedText;)V";
	const char *className = "android/media/MediaPlayer$OnTimedTextListener";

	LOGV("android_media_MediaPlayer_OnTimedTextListener className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_media_MediaPlayer_OnTimedTextListener cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_media_MediaPlayer_OnTimedTextListener jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.media.MediaPlayer");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_media_MediaPlayer(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}
	jobject jarg1;
	{
		long cxx_value = (long) & arg1;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("android.media.TimedText");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_media_TimedText(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1);
		
	LOGV("void android_media_MediaPlayer_OnTimedTextListener::onTimedText(AndroidCXX::android_media_MediaPlayer const& arg0,AndroidCXX::android_media_TimedText const& arg1) exit");

}

/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 








// Generated Code 

#include <android_media_MediaPlayer_OnVideoSizeChangedListener.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "android_media_MediaPlayer_OnVideoSizeChangedListener"
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

static long static_obj;
static long static_address = (long) &static_obj;

android_media_MediaPlayer_OnVideoSizeChangedListener::android_media_MediaPlayer_OnVideoSizeChangedListener(const android_media_MediaPlayer_OnVideoSizeChangedListener& cc)
{
	LOGV("android_media_MediaPlayer_OnVideoSizeChangedListener::android_media_MediaPlayer_OnVideoSizeChangedListener(const android_media_MediaPlayer_OnVideoSizeChangedListener& cc) enter");

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

	LOGV("android_media_MediaPlayer_OnVideoSizeChangedListener::android_media_MediaPlayer_OnVideoSizeChangedListener(const android_media_MediaPlayer_OnVideoSizeChangedListener& cc) exit");
}
android_media_MediaPlayer_OnVideoSizeChangedListener::android_media_MediaPlayer_OnVideoSizeChangedListener(Proxy proxy)
{
	LOGV("android_media_MediaPlayer_OnVideoSizeChangedListener::android_media_MediaPlayer_OnVideoSizeChangedListener(Proxy proxy) enter");

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

	LOGV("android_media_MediaPlayer_OnVideoSizeChangedListener::android_media_MediaPlayer_OnVideoSizeChangedListener(Proxy proxy) exit");
}
Proxy android_media_MediaPlayer_OnVideoSizeChangedListener::proxy() const
{	
	LOGV("android_media_MediaPlayer_OnVideoSizeChangedListener::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_media_MediaPlayer_OnVideoSizeChangedListener cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("android_media_MediaPlayer_OnVideoSizeChangedListener jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("android_media_MediaPlayer_OnVideoSizeChangedListener::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
android_media_MediaPlayer_OnVideoSizeChangedListener::~android_media_MediaPlayer_OnVideoSizeChangedListener()
{
	LOGV("android_media_MediaPlayer_OnVideoSizeChangedListener::~android_media_MediaPlayer_OnVideoSizeChangedListener() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("android_media_MediaPlayer_OnVideoSizeChangedListener::~android_media_MediaPlayer_OnVideoSizeChangedListener() exit");
}
// Functions
void android_media_MediaPlayer_OnVideoSizeChangedListener::onVideoSizeChanged(AndroidCXX::android_media_MediaPlayer const& arg0,int const& arg1,int const& arg2)
{
	LOGV("void android_media_MediaPlayer_OnVideoSizeChangedListener::onVideoSizeChanged(AndroidCXX::android_media_MediaPlayer const& arg0,int const& arg1,int const& arg2) enter");

	const char *methodName = "onVideoSizeChanged";
	const char *methodSignature = "(Landroid/media/MediaPlayer;II)V";
	const char *className = "android/media/MediaPlayer$OnVideoSizeChangedListener";

	LOGV("android_media_MediaPlayer_OnVideoSizeChangedListener className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_media_MediaPlayer_OnVideoSizeChangedListener cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_media_MediaPlayer_OnVideoSizeChangedListener jni address %d", javaObject);

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
	jint jarg1;
	{
		long cxx_value = (long) & arg1;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("int");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_int(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_int_to_jni(java_value);
	}
	jint jarg2;
	{
		long cxx_value = (long) & arg2;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("int");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_int(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg2 = convert_jni_int_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1,jarg2);
		
	LOGV("void android_media_MediaPlayer_OnVideoSizeChangedListener::onVideoSizeChanged(AndroidCXX::android_media_MediaPlayer const& arg0,int const& arg1,int const& arg2) exit");

}

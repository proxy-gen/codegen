/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//




















// Generated Code 

#include <android_widget_MediaController_MediaPlayerControl.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "android_widget_MediaController_MediaPlayerControl"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace AndroidCXX;

// 
// 

static long static_obj;
static long static_address = (long) &static_obj;


// Default Instance Constructors
android_widget_MediaController_MediaPlayerControl::android_widget_MediaController_MediaPlayerControl(const android_widget_MediaController_MediaPlayerControl& cc)
{
	LOGV("android_widget_MediaController_MediaPlayerControl::android_widget_MediaController_MediaPlayerControl(const android_widget_MediaController_MediaPlayerControl& cc) enter");

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

	LOGV("android_widget_MediaController_MediaPlayerControl::android_widget_MediaController_MediaPlayerControl(const android_widget_MediaController_MediaPlayerControl& cc) exit");
}
android_widget_MediaController_MediaPlayerControl::android_widget_MediaController_MediaPlayerControl(void * proxy)
{
	LOGV("android_widget_MediaController_MediaPlayerControl::android_widget_MediaController_MediaPlayerControl(void * proxy) enter");

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

	LOGV("android_widget_MediaController_MediaPlayerControl::android_widget_MediaController_MediaPlayerControl(void * proxy) exit");
}
android_widget_MediaController_MediaPlayerControl::android_widget_MediaController_MediaPlayerControl()
{
	LOGV("android_widget_MediaController_MediaPlayerControl::android_widget_MediaController_MediaPlayerControl() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "android/widget/MediaController$MediaPlayerControl";

	LOGV("android_widget_MediaController_MediaPlayerControl className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_MediaController_MediaPlayerControl cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_MediaController_MediaPlayerControl jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, "<init>", methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("android_widget_MediaController_MediaPlayerControl::android_widget_MediaController_MediaPlayerControl() exit");	
}
// Public Constructors
// Default Instance Destructor
android_widget_MediaController_MediaPlayerControl::~android_widget_MediaController_MediaPlayerControl()
{
	LOGV("android_widget_MediaController_MediaPlayerControl::~android_widget_MediaController_MediaPlayerControl() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("android_widget_MediaController_MediaPlayerControl::~android_widget_MediaController_MediaPlayerControl() exit");
}
// Functions
void android_widget_MediaController_MediaPlayerControl::start()
{
	LOGV("void android_widget_MediaController_MediaPlayerControl::start() enter");

	const char *methodName = "start";
	const char *methodSignature = "()V";
	const char *className = "android/widget/MediaController$MediaPlayerControl";

	LOGV("android_widget_MediaController_MediaPlayerControl className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_MediaController_MediaPlayerControl cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_MediaController_MediaPlayerControl jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	jni->popLocalFrame();

	LOGV("void android_widget_MediaController_MediaPlayerControl::start() exit");

}
int android_widget_MediaController_MediaPlayerControl::getDuration()
{
	LOGV("int android_widget_MediaController_MediaPlayerControl::getDuration() enter");

	const char *methodName = "getDuration";
	const char *methodSignature = "()I";
	const char *className = "android/widget/MediaController$MediaPlayerControl";

	LOGV("android_widget_MediaController_MediaPlayerControl className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_MediaController_MediaPlayerControl cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_MediaController_MediaPlayerControl jni address %d", javaObject);


	int result;
	jint jni_result = (jint) jni->invokeIntMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni_int_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("int");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_int(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (int) (cxx_value);
		
	jni->popLocalFrame();

	LOGV("int android_widget_MediaController_MediaPlayerControl::getDuration() exit");

	return result;
}
void android_widget_MediaController_MediaPlayerControl::pause()
{
	LOGV("void android_widget_MediaController_MediaPlayerControl::pause() enter");

	const char *methodName = "pause";
	const char *methodSignature = "()V";
	const char *className = "android/widget/MediaController$MediaPlayerControl";

	LOGV("android_widget_MediaController_MediaPlayerControl className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_MediaController_MediaPlayerControl cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_MediaController_MediaPlayerControl jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	jni->popLocalFrame();

	LOGV("void android_widget_MediaController_MediaPlayerControl::pause() exit");

}
int android_widget_MediaController_MediaPlayerControl::getCurrentPosition()
{
	LOGV("int android_widget_MediaController_MediaPlayerControl::getCurrentPosition() enter");

	const char *methodName = "getCurrentPosition";
	const char *methodSignature = "()I";
	const char *className = "android/widget/MediaController$MediaPlayerControl";

	LOGV("android_widget_MediaController_MediaPlayerControl className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_MediaController_MediaPlayerControl cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_MediaController_MediaPlayerControl jni address %d", javaObject);


	int result;
	jint jni_result = (jint) jni->invokeIntMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni_int_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("int");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_int(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (int) (cxx_value);
		
	jni->popLocalFrame();

	LOGV("int android_widget_MediaController_MediaPlayerControl::getCurrentPosition() exit");

	return result;
}
void android_widget_MediaController_MediaPlayerControl::seekTo(int& arg0)
{
	LOGV("void android_widget_MediaController_MediaPlayerControl::seekTo(int& arg0) enter");

	const char *methodName = "seekTo";
	const char *methodSignature = "(I)V";
	const char *className = "android/widget/MediaController$MediaPlayerControl";

	LOGV("android_widget_MediaController_MediaPlayerControl className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_MediaController_MediaPlayerControl cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_MediaController_MediaPlayerControl jni address %d", javaObject);

	jint jarg0;
	{
		long cxx_value = (long) & arg0;
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
		jarg0 = convert_jni_int_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void android_widget_MediaController_MediaPlayerControl::seekTo(int& arg0) exit");

}
bool android_widget_MediaController_MediaPlayerControl::isPlaying()
{
	LOGV("bool android_widget_MediaController_MediaPlayerControl::isPlaying() enter");

	const char *methodName = "isPlaying";
	const char *methodSignature = "()Z";
	const char *className = "android/widget/MediaController$MediaPlayerControl";

	LOGV("android_widget_MediaController_MediaPlayerControl className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_MediaController_MediaPlayerControl cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_MediaController_MediaPlayerControl jni address %d", javaObject);


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

	LOGV("bool android_widget_MediaController_MediaPlayerControl::isPlaying() exit");

	return result;
}
int android_widget_MediaController_MediaPlayerControl::getBufferPercentage()
{
	LOGV("int android_widget_MediaController_MediaPlayerControl::getBufferPercentage() enter");

	const char *methodName = "getBufferPercentage";
	const char *methodSignature = "()I";
	const char *className = "android/widget/MediaController$MediaPlayerControl";

	LOGV("android_widget_MediaController_MediaPlayerControl className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_MediaController_MediaPlayerControl cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_MediaController_MediaPlayerControl jni address %d", javaObject);


	int result;
	jint jni_result = (jint) jni->invokeIntMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni_int_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("int");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_int(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (int) (cxx_value);
		
	jni->popLocalFrame();

	LOGV("int android_widget_MediaController_MediaPlayerControl::getBufferPercentage() exit");

	return result;
}
bool android_widget_MediaController_MediaPlayerControl::canPause()
{
	LOGV("bool android_widget_MediaController_MediaPlayerControl::canPause() enter");

	const char *methodName = "canPause";
	const char *methodSignature = "()Z";
	const char *className = "android/widget/MediaController$MediaPlayerControl";

	LOGV("android_widget_MediaController_MediaPlayerControl className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_MediaController_MediaPlayerControl cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_MediaController_MediaPlayerControl jni address %d", javaObject);


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

	LOGV("bool android_widget_MediaController_MediaPlayerControl::canPause() exit");

	return result;
}
bool android_widget_MediaController_MediaPlayerControl::canSeekBackward()
{
	LOGV("bool android_widget_MediaController_MediaPlayerControl::canSeekBackward() enter");

	const char *methodName = "canSeekBackward";
	const char *methodSignature = "()Z";
	const char *className = "android/widget/MediaController$MediaPlayerControl";

	LOGV("android_widget_MediaController_MediaPlayerControl className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_MediaController_MediaPlayerControl cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_MediaController_MediaPlayerControl jni address %d", javaObject);


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

	LOGV("bool android_widget_MediaController_MediaPlayerControl::canSeekBackward() exit");

	return result;
}
bool android_widget_MediaController_MediaPlayerControl::canSeekForward()
{
	LOGV("bool android_widget_MediaController_MediaPlayerControl::canSeekForward() enter");

	const char *methodName = "canSeekForward";
	const char *methodSignature = "()Z";
	const char *className = "android/widget/MediaController$MediaPlayerControl";

	LOGV("android_widget_MediaController_MediaPlayerControl className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_MediaController_MediaPlayerControl cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_MediaController_MediaPlayerControl jni address %d", javaObject);


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

	LOGV("bool android_widget_MediaController_MediaPlayerControl::canSeekForward() exit");

	return result;
}

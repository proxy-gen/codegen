/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
 		 
	
 		 
 		 
 		 
	


























// Generated Code 

#include <android_animation_Animator.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "android_animation_Animator"
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
// 
// 
// 
// 

static long static_obj;
static long static_address = (long) &static_obj;


// Default Instance Constructors
android_animation_Animator::android_animation_Animator(const android_animation_Animator& cc)
{
	LOGV("android_animation_Animator::android_animation_Animator(const android_animation_Animator& cc) enter");

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

	LOGV("android_animation_Animator::android_animation_Animator(const android_animation_Animator& cc) exit");
}
android_animation_Animator::android_animation_Animator(void * proxy)
{
	LOGV("android_animation_Animator::android_animation_Animator(void * proxy) enter");

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

	LOGV("android_animation_Animator::android_animation_Animator(void * proxy) exit");
}
// Public Constructors
android_animation_Animator::android_animation_Animator()
{
	LOGV("android_animation_Animator::android_animation_Animator() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "android/animation/Animator";

	LOGV("android_animation_Animator className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_animation_Animator cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_Animator jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{

			
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, methodName, methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("android_animation_Animator::android_animation_Animator() exit");	
}
// Default Instance Destructor
android_animation_Animator::~android_animation_Animator()
{
	LOGV("android_animation_Animator::~android_animation_Animator() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("android_animation_Animator::~android_animation_Animator() exit");
}
// Functions
AndroidCXX::android_animation_Animator android_animation_Animator::clone()
{
	LOGV("AndroidCXX::android_animation_Animator android_animation_Animator::clone() enter");

	const char *methodName = "clone";
	const char *methodSignature = "()Landroid/animation/Animator;";
	const char *className = "android/animation/Animator";

	LOGV("android_animation_Animator className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_animation_Animator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_Animator jni address %d", javaObject);


	AndroidCXX::android_animation_Animator result;
	jobject jni_result = (jobject) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni_java_lang_Object_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("android.animation.Animator");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_animation_Animator(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_animation_Animator) (AndroidCXX::android_animation_Animator((AndroidCXX::android_animation_Animator *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_animation_Animator android_animation_Animator::clone() exit");

	return result;
}
void android_animation_Animator::start()
{
	LOGV("void android_animation_Animator::start() enter");

	const char *methodName = "start";
	const char *methodSignature = "()V";
	const char *className = "android/animation/Animator";

	LOGV("android_animation_Animator className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_animation_Animator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_Animator jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	jni->popLocalFrame();

	LOGV("void android_animation_Animator::start() exit");

}
void android_animation_Animator::end()
{
	LOGV("void android_animation_Animator::end() enter");

	const char *methodName = "end";
	const char *methodSignature = "()V";
	const char *className = "android/animation/Animator";

	LOGV("android_animation_Animator className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_animation_Animator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_Animator jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	jni->popLocalFrame();

	LOGV("void android_animation_Animator::end() exit");

}
void android_animation_Animator::cancel()
{
	LOGV("void android_animation_Animator::cancel() enter");

	const char *methodName = "cancel";
	const char *methodSignature = "()V";
	const char *className = "android/animation/Animator";

	LOGV("android_animation_Animator className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_animation_Animator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_Animator jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	jni->popLocalFrame();

	LOGV("void android_animation_Animator::cancel() exit");

}
void android_animation_Animator::setInterpolator(AndroidCXX::android_animation_TimeInterpolator& arg0)
{
	LOGV("void android_animation_Animator::setInterpolator(AndroidCXX::android_animation_TimeInterpolator& arg0) enter");

	const char *methodName = "setInterpolator";
	const char *methodSignature = "(Landroid/animation/TimeInterpolator;)V";
	const char *className = "android/animation/Animator";

	LOGV("android_animation_Animator className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_animation_Animator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_Animator jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.animation.TimeInterpolator");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_animation_TimeInterpolator(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void android_animation_Animator::setInterpolator(AndroidCXX::android_animation_TimeInterpolator& arg0) exit");

}
AndroidCXX::android_animation_Animator android_animation_Animator::setDuration(long& arg0)
{
	LOGV("AndroidCXX::android_animation_Animator android_animation_Animator::setDuration(long& arg0) enter");

	const char *methodName = "setDuration";
	const char *methodSignature = "(J)Landroid/animation/Animator;";
	const char *className = "android/animation/Animator";

	LOGV("android_animation_Animator className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_animation_Animator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_Animator jni address %d", javaObject);

	jlong jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("long");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_long(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_long_to_jni(java_value);
	}

	AndroidCXX::android_animation_Animator result;
	jobject jni_result = (jobject) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature,jarg0);
	long cxx_value = (long) 0;
	long java_value = convert_jni_java_lang_Object_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("android.animation.Animator");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_animation_Animator(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_animation_Animator) (AndroidCXX::android_animation_Animator((AndroidCXX::android_animation_Animator *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_animation_Animator android_animation_Animator::setDuration(long& arg0) exit");

	return result;
}
long android_animation_Animator::getDuration()
{
	LOGV("long android_animation_Animator::getDuration() enter");

	const char *methodName = "getDuration";
	const char *methodSignature = "()J";
	const char *className = "android/animation/Animator";

	LOGV("android_animation_Animator className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_animation_Animator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_Animator jni address %d", javaObject);


	long result;
	jlong jni_result = (jlong) jni->invokeLongMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni_long_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("long");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_long(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (long) (cxx_value);
		
	jni->popLocalFrame();

	LOGV("long android_animation_Animator::getDuration() exit");

	return result;
}
void android_animation_Animator::setTarget(AndroidCXX::java_lang_Object& arg0)
{
	LOGV("void android_animation_Animator::setTarget(AndroidCXX::java_lang_Object& arg0) enter");

	const char *methodName = "setTarget";
	const char *methodSignature = "(Ljava/lang/Object;)V";
	const char *className = "android/animation/Animator";

	LOGV("android_animation_Animator className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_animation_Animator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_Animator jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("java.lang.Object");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_lang_Object(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void android_animation_Animator::setTarget(AndroidCXX::java_lang_Object& arg0) exit");

}
long android_animation_Animator::getStartDelay()
{
	LOGV("long android_animation_Animator::getStartDelay() enter");

	const char *methodName = "getStartDelay";
	const char *methodSignature = "()J";
	const char *className = "android/animation/Animator";

	LOGV("android_animation_Animator className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_animation_Animator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_Animator jni address %d", javaObject);


	long result;
	jlong jni_result = (jlong) jni->invokeLongMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni_long_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("long");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_long(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (long) (cxx_value);
		
	jni->popLocalFrame();

	LOGV("long android_animation_Animator::getStartDelay() exit");

	return result;
}
void android_animation_Animator::setStartDelay(long& arg0)
{
	LOGV("void android_animation_Animator::setStartDelay(long& arg0) enter");

	const char *methodName = "setStartDelay";
	const char *methodSignature = "(J)V";
	const char *className = "android/animation/Animator";

	LOGV("android_animation_Animator className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_animation_Animator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_Animator jni address %d", javaObject);

	jlong jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("long");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_long(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_long_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void android_animation_Animator::setStartDelay(long& arg0) exit");

}
bool android_animation_Animator::isRunning()
{
	LOGV("bool android_animation_Animator::isRunning() enter");

	const char *methodName = "isRunning";
	const char *methodSignature = "()Z";
	const char *className = "android/animation/Animator";

	LOGV("android_animation_Animator className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_animation_Animator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_Animator jni address %d", javaObject);


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

	LOGV("bool android_animation_Animator::isRunning() exit");

	return result;
}
bool android_animation_Animator::isStarted()
{
	LOGV("bool android_animation_Animator::isStarted() enter");

	const char *methodName = "isStarted";
	const char *methodSignature = "()Z";
	const char *className = "android/animation/Animator";

	LOGV("android_animation_Animator className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_animation_Animator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_Animator jni address %d", javaObject);


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

	LOGV("bool android_animation_Animator::isStarted() exit");

	return result;
}
void android_animation_Animator::addListener(AndroidCXX::android_animation_Animator_AnimatorListener& arg0)
{
	LOGV("void android_animation_Animator::addListener(AndroidCXX::android_animation_Animator_AnimatorListener& arg0) enter");

	const char *methodName = "addListener";
	const char *methodSignature = "(Landroid/animation/Animator$AnimatorListener;)V";
	const char *className = "android/animation/Animator";

	LOGV("android_animation_Animator className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_animation_Animator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_Animator jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.animation.Animator$AnimatorListener");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_animation_Animator_AnimatorListener(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void android_animation_Animator::addListener(AndroidCXX::android_animation_Animator_AnimatorListener& arg0) exit");

}
void android_animation_Animator::removeListener(AndroidCXX::android_animation_Animator_AnimatorListener& arg0)
{
	LOGV("void android_animation_Animator::removeListener(AndroidCXX::android_animation_Animator_AnimatorListener& arg0) enter");

	const char *methodName = "removeListener";
	const char *methodSignature = "(Landroid/animation/Animator$AnimatorListener;)V";
	const char *className = "android/animation/Animator";

	LOGV("android_animation_Animator className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_animation_Animator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_Animator jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.animation.Animator$AnimatorListener");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_animation_Animator_AnimatorListener(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void android_animation_Animator::removeListener(AndroidCXX::android_animation_Animator_AnimatorListener& arg0) exit");

}
AndroidCXX::java_util_ArrayList android_animation_Animator::getListeners()
{
	LOGV("AndroidCXX::java_util_ArrayList android_animation_Animator::getListeners() enter");

	const char *methodName = "getListeners";
	const char *methodSignature = "()Ljava/util/ArrayList;";
	const char *className = "android/animation/Animator";

	LOGV("android_animation_Animator className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_animation_Animator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_Animator jni address %d", javaObject);


	AndroidCXX::java_util_ArrayList result;
	jobject jni_result = (jobject) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni_java_lang_Object_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.util.ArrayList");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("android.animation.Animator$AnimatorListener");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_android_animation_Animator_AnimatorListener);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_util_ArrayList(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::java_util_ArrayList) (AndroidCXX::java_util_ArrayList((AndroidCXX::java_util_ArrayList *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::java_util_ArrayList android_animation_Animator::getListeners() exit");

	return result;
}
void android_animation_Animator::removeAllListeners()
{
	LOGV("void android_animation_Animator::removeAllListeners() enter");

	const char *methodName = "removeAllListeners";
	const char *methodSignature = "()V";
	const char *className = "android/animation/Animator";

	LOGV("android_animation_Animator className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_animation_Animator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_Animator jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	jni->popLocalFrame();

	LOGV("void android_animation_Animator::removeAllListeners() exit");

}
void android_animation_Animator::setupStartValues()
{
	LOGV("void android_animation_Animator::setupStartValues() enter");

	const char *methodName = "setupStartValues";
	const char *methodSignature = "()V";
	const char *className = "android/animation/Animator";

	LOGV("android_animation_Animator className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_animation_Animator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_Animator jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	jni->popLocalFrame();

	LOGV("void android_animation_Animator::setupStartValues() exit");

}
void android_animation_Animator::setupEndValues()
{
	LOGV("void android_animation_Animator::setupEndValues() enter");

	const char *methodName = "setupEndValues";
	const char *methodSignature = "()V";
	const char *className = "android/animation/Animator";

	LOGV("android_animation_Animator className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_animation_Animator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_Animator jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	jni->popLocalFrame();

	LOGV("void android_animation_Animator::setupEndValues() exit");

}

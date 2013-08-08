/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
	
	
 		 
	
	
	
	
	
	
	
	
	
	
	
 		 
	
	
	
	
	
	
	
	
	
	
	
	
 		 
	
 		 
	







































// Generated Code 

#include <android_view_ViewPropertyAnimator.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "android_view_ViewPropertyAnimator"
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

android_view_ViewPropertyAnimator::android_view_ViewPropertyAnimator(const android_view_ViewPropertyAnimator& cc)
{
	LOGV("android_view_ViewPropertyAnimator::android_view_ViewPropertyAnimator(const android_view_ViewPropertyAnimator& cc) enter");

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

	LOGV("android_view_ViewPropertyAnimator::android_view_ViewPropertyAnimator(const android_view_ViewPropertyAnimator& cc) exit");
}
android_view_ViewPropertyAnimator::android_view_ViewPropertyAnimator(Proxy proxy)
{
	LOGV("android_view_ViewPropertyAnimator::android_view_ViewPropertyAnimator(Proxy proxy) enter");

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

	LOGV("android_view_ViewPropertyAnimator::android_view_ViewPropertyAnimator(Proxy proxy) exit");
}
Proxy android_view_ViewPropertyAnimator::proxy() const
{	
	LOGV("android_view_ViewPropertyAnimator::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewPropertyAnimator cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewPropertyAnimator jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("android_view_ViewPropertyAnimator::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
android_view_ViewPropertyAnimator::~android_view_ViewPropertyAnimator()
{
	LOGV("android_view_ViewPropertyAnimator::~android_view_ViewPropertyAnimator() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("android_view_ViewPropertyAnimator::~android_view_ViewPropertyAnimator() exit");
}
// Functions
void android_view_ViewPropertyAnimator::start()
{
	LOGV("void android_view_ViewPropertyAnimator::start() enter");

	const char *methodName = "start";
	const char *methodSignature = "()V";
	const char *className = "android/view/ViewPropertyAnimator";

	LOGV("android_view_ViewPropertyAnimator className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewPropertyAnimator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewPropertyAnimator jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	LOGV("void android_view_ViewPropertyAnimator::start() exit");

}
AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::y(float const& arg0)
{
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::y(float const& arg0) enter");

	const char *methodName = "y";
	const char *methodSignature = "(F)Landroid/view/ViewPropertyAnimator;";
	const char *className = "android/view/ViewPropertyAnimator";

	LOGV("android_view_ViewPropertyAnimator className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewPropertyAnimator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewPropertyAnimator jni address %d", javaObject);

	jfloat jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("float");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_float(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_float_to_jni(java_value);
	}

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
			cxx_type_hierarchy.type_name = std::string("android.view.ViewPropertyAnimator");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_view_ViewPropertyAnimator(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_view_ViewPropertyAnimator result((AndroidCXX::android_view_ViewPropertyAnimator) *((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value));
	delete ((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value);
		
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::y(float const& arg0) exit");

	return result;
}
AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::x(float const& arg0)
{
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::x(float const& arg0) enter");

	const char *methodName = "x";
	const char *methodSignature = "(F)Landroid/view/ViewPropertyAnimator;";
	const char *className = "android/view/ViewPropertyAnimator";

	LOGV("android_view_ViewPropertyAnimator className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewPropertyAnimator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewPropertyAnimator jni address %d", javaObject);

	jfloat jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("float");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_float(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_float_to_jni(java_value);
	}

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
			cxx_type_hierarchy.type_name = std::string("android.view.ViewPropertyAnimator");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_view_ViewPropertyAnimator(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_view_ViewPropertyAnimator result((AndroidCXX::android_view_ViewPropertyAnimator) *((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value));
	delete ((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value);
		
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::x(float const& arg0) exit");

	return result;
}
void android_view_ViewPropertyAnimator::cancel()
{
	LOGV("void android_view_ViewPropertyAnimator::cancel() enter");

	const char *methodName = "cancel";
	const char *methodSignature = "()V";
	const char *className = "android/view/ViewPropertyAnimator";

	LOGV("android_view_ViewPropertyAnimator className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewPropertyAnimator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewPropertyAnimator jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	LOGV("void android_view_ViewPropertyAnimator::cancel() exit");

}
AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::alpha(float const& arg0)
{
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::alpha(float const& arg0) enter");

	const char *methodName = "alpha";
	const char *methodSignature = "(F)Landroid/view/ViewPropertyAnimator;";
	const char *className = "android/view/ViewPropertyAnimator";

	LOGV("android_view_ViewPropertyAnimator className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewPropertyAnimator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewPropertyAnimator jni address %d", javaObject);

	jfloat jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("float");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_float(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_float_to_jni(java_value);
	}

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
			cxx_type_hierarchy.type_name = std::string("android.view.ViewPropertyAnimator");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_view_ViewPropertyAnimator(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_view_ViewPropertyAnimator result((AndroidCXX::android_view_ViewPropertyAnimator) *((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value));
	delete ((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value);
		
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::alpha(float const& arg0) exit");

	return result;
}
AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::setInterpolator(AndroidCXX::android_animation_TimeInterpolator const& arg0)
{
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::setInterpolator(AndroidCXX::android_animation_TimeInterpolator const& arg0) enter");

	const char *methodName = "setInterpolator";
	const char *methodSignature = "(Landroid/animation/TimeInterpolator;)Landroid/view/ViewPropertyAnimator;";
	const char *className = "android/view/ViewPropertyAnimator";

	LOGV("android_view_ViewPropertyAnimator className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewPropertyAnimator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewPropertyAnimator jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.ViewPropertyAnimator");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_view_ViewPropertyAnimator(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_view_ViewPropertyAnimator result((AndroidCXX::android_view_ViewPropertyAnimator) *((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value));
	delete ((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value);
		
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::setInterpolator(AndroidCXX::android_animation_TimeInterpolator const& arg0) exit");

	return result;
}
AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::setDuration(long const& arg0)
{
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::setDuration(long const& arg0) enter");

	const char *methodName = "setDuration";
	const char *methodSignature = "(J)Landroid/view/ViewPropertyAnimator;";
	const char *className = "android/view/ViewPropertyAnimator";

	LOGV("android_view_ViewPropertyAnimator className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewPropertyAnimator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewPropertyAnimator jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.ViewPropertyAnimator");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_view_ViewPropertyAnimator(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_view_ViewPropertyAnimator result((AndroidCXX::android_view_ViewPropertyAnimator) *((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value));
	delete ((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value);
		
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::setDuration(long const& arg0) exit");

	return result;
}
AndroidCXX::android_animation_TimeInterpolator android_view_ViewPropertyAnimator::getInterpolator()
{
	LOGV("AndroidCXX::android_animation_TimeInterpolator android_view_ViewPropertyAnimator::getInterpolator() enter");

	const char *methodName = "getInterpolator";
	const char *methodSignature = "()Landroid/animation/TimeInterpolator;";
	const char *className = "android/view/ViewPropertyAnimator";

	LOGV("android_view_ViewPropertyAnimator className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewPropertyAnimator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewPropertyAnimator jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("android.animation.TimeInterpolator");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_animation_TimeInterpolator(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_animation_TimeInterpolator result((AndroidCXX::android_animation_TimeInterpolator) *((AndroidCXX::android_animation_TimeInterpolator *) cxx_value));
	delete ((AndroidCXX::android_animation_TimeInterpolator *) cxx_value);
		
	LOGV("AndroidCXX::android_animation_TimeInterpolator android_view_ViewPropertyAnimator::getInterpolator() exit");

	return result;
}
long android_view_ViewPropertyAnimator::getDuration()
{
	LOGV("long android_view_ViewPropertyAnimator::getDuration() enter");

	const char *methodName = "getDuration";
	const char *methodSignature = "()J";
	const char *className = "android/view/ViewPropertyAnimator";

	LOGV("android_view_ViewPropertyAnimator className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewPropertyAnimator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewPropertyAnimator jni address %d", javaObject);


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

	long result = (long) *((long *) cxx_value);
	// 
		
	LOGV("long android_view_ViewPropertyAnimator::getDuration() exit");

	return result;
}
AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::rotation(float const& arg0)
{
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::rotation(float const& arg0) enter");

	const char *methodName = "rotation";
	const char *methodSignature = "(F)Landroid/view/ViewPropertyAnimator;";
	const char *className = "android/view/ViewPropertyAnimator";

	LOGV("android_view_ViewPropertyAnimator className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewPropertyAnimator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewPropertyAnimator jni address %d", javaObject);

	jfloat jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("float");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_float(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_float_to_jni(java_value);
	}

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
			cxx_type_hierarchy.type_name = std::string("android.view.ViewPropertyAnimator");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_view_ViewPropertyAnimator(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_view_ViewPropertyAnimator result((AndroidCXX::android_view_ViewPropertyAnimator) *((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value));
	delete ((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value);
		
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::rotation(float const& arg0) exit");

	return result;
}
AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::rotationY(float const& arg0)
{
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::rotationY(float const& arg0) enter");

	const char *methodName = "rotationY";
	const char *methodSignature = "(F)Landroid/view/ViewPropertyAnimator;";
	const char *className = "android/view/ViewPropertyAnimator";

	LOGV("android_view_ViewPropertyAnimator className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewPropertyAnimator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewPropertyAnimator jni address %d", javaObject);

	jfloat jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("float");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_float(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_float_to_jni(java_value);
	}

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
			cxx_type_hierarchy.type_name = std::string("android.view.ViewPropertyAnimator");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_view_ViewPropertyAnimator(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_view_ViewPropertyAnimator result((AndroidCXX::android_view_ViewPropertyAnimator) *((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value));
	delete ((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value);
		
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::rotationY(float const& arg0) exit");

	return result;
}
AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::rotationX(float const& arg0)
{
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::rotationX(float const& arg0) enter");

	const char *methodName = "rotationX";
	const char *methodSignature = "(F)Landroid/view/ViewPropertyAnimator;";
	const char *className = "android/view/ViewPropertyAnimator";

	LOGV("android_view_ViewPropertyAnimator className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewPropertyAnimator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewPropertyAnimator jni address %d", javaObject);

	jfloat jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("float");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_float(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_float_to_jni(java_value);
	}

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
			cxx_type_hierarchy.type_name = std::string("android.view.ViewPropertyAnimator");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_view_ViewPropertyAnimator(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_view_ViewPropertyAnimator result((AndroidCXX::android_view_ViewPropertyAnimator) *((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value));
	delete ((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value);
		
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::rotationX(float const& arg0) exit");

	return result;
}
AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::scaleX(float const& arg0)
{
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::scaleX(float const& arg0) enter");

	const char *methodName = "scaleX";
	const char *methodSignature = "(F)Landroid/view/ViewPropertyAnimator;";
	const char *className = "android/view/ViewPropertyAnimator";

	LOGV("android_view_ViewPropertyAnimator className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewPropertyAnimator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewPropertyAnimator jni address %d", javaObject);

	jfloat jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("float");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_float(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_float_to_jni(java_value);
	}

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
			cxx_type_hierarchy.type_name = std::string("android.view.ViewPropertyAnimator");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_view_ViewPropertyAnimator(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_view_ViewPropertyAnimator result((AndroidCXX::android_view_ViewPropertyAnimator) *((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value));
	delete ((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value);
		
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::scaleX(float const& arg0) exit");

	return result;
}
AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::scaleY(float const& arg0)
{
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::scaleY(float const& arg0) enter");

	const char *methodName = "scaleY";
	const char *methodSignature = "(F)Landroid/view/ViewPropertyAnimator;";
	const char *className = "android/view/ViewPropertyAnimator";

	LOGV("android_view_ViewPropertyAnimator className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewPropertyAnimator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewPropertyAnimator jni address %d", javaObject);

	jfloat jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("float");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_float(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_float_to_jni(java_value);
	}

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
			cxx_type_hierarchy.type_name = std::string("android.view.ViewPropertyAnimator");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_view_ViewPropertyAnimator(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_view_ViewPropertyAnimator result((AndroidCXX::android_view_ViewPropertyAnimator) *((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value));
	delete ((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value);
		
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::scaleY(float const& arg0) exit");

	return result;
}
AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::translationX(float const& arg0)
{
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::translationX(float const& arg0) enter");

	const char *methodName = "translationX";
	const char *methodSignature = "(F)Landroid/view/ViewPropertyAnimator;";
	const char *className = "android/view/ViewPropertyAnimator";

	LOGV("android_view_ViewPropertyAnimator className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewPropertyAnimator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewPropertyAnimator jni address %d", javaObject);

	jfloat jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("float");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_float(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_float_to_jni(java_value);
	}

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
			cxx_type_hierarchy.type_name = std::string("android.view.ViewPropertyAnimator");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_view_ViewPropertyAnimator(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_view_ViewPropertyAnimator result((AndroidCXX::android_view_ViewPropertyAnimator) *((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value));
	delete ((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value);
		
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::translationX(float const& arg0) exit");

	return result;
}
AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::translationY(float const& arg0)
{
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::translationY(float const& arg0) enter");

	const char *methodName = "translationY";
	const char *methodSignature = "(F)Landroid/view/ViewPropertyAnimator;";
	const char *className = "android/view/ViewPropertyAnimator";

	LOGV("android_view_ViewPropertyAnimator className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewPropertyAnimator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewPropertyAnimator jni address %d", javaObject);

	jfloat jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("float");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_float(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_float_to_jni(java_value);
	}

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
			cxx_type_hierarchy.type_name = std::string("android.view.ViewPropertyAnimator");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_view_ViewPropertyAnimator(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_view_ViewPropertyAnimator result((AndroidCXX::android_view_ViewPropertyAnimator) *((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value));
	delete ((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value);
		
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::translationY(float const& arg0) exit");

	return result;
}
long android_view_ViewPropertyAnimator::getStartDelay()
{
	LOGV("long android_view_ViewPropertyAnimator::getStartDelay() enter");

	const char *methodName = "getStartDelay";
	const char *methodSignature = "()J";
	const char *className = "android/view/ViewPropertyAnimator";

	LOGV("android_view_ViewPropertyAnimator className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewPropertyAnimator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewPropertyAnimator jni address %d", javaObject);


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

	long result = (long) *((long *) cxx_value);
	// 
		
	LOGV("long android_view_ViewPropertyAnimator::getStartDelay() exit");

	return result;
}
AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::setStartDelay(long const& arg0)
{
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::setStartDelay(long const& arg0) enter");

	const char *methodName = "setStartDelay";
	const char *methodSignature = "(J)Landroid/view/ViewPropertyAnimator;";
	const char *className = "android/view/ViewPropertyAnimator";

	LOGV("android_view_ViewPropertyAnimator className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewPropertyAnimator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewPropertyAnimator jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.ViewPropertyAnimator");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_view_ViewPropertyAnimator(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_view_ViewPropertyAnimator result((AndroidCXX::android_view_ViewPropertyAnimator) *((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value));
	delete ((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value);
		
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::setStartDelay(long const& arg0) exit");

	return result;
}
AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::setListener(AndroidCXX::android_animation_Animator_AnimatorListener const& arg0)
{
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::setListener(AndroidCXX::android_animation_Animator_AnimatorListener const& arg0) enter");

	const char *methodName = "setListener";
	const char *methodSignature = "(Landroid/animation/Animator$AnimatorListener;)Landroid/view/ViewPropertyAnimator;";
	const char *className = "android/view/ViewPropertyAnimator";

	LOGV("android_view_ViewPropertyAnimator className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewPropertyAnimator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewPropertyAnimator jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.ViewPropertyAnimator");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_view_ViewPropertyAnimator(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_view_ViewPropertyAnimator result((AndroidCXX::android_view_ViewPropertyAnimator) *((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value));
	delete ((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value);
		
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::setListener(AndroidCXX::android_animation_Animator_AnimatorListener const& arg0) exit");

	return result;
}
AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::xBy(float const& arg0)
{
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::xBy(float const& arg0) enter");

	const char *methodName = "xBy";
	const char *methodSignature = "(F)Landroid/view/ViewPropertyAnimator;";
	const char *className = "android/view/ViewPropertyAnimator";

	LOGV("android_view_ViewPropertyAnimator className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewPropertyAnimator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewPropertyAnimator jni address %d", javaObject);

	jfloat jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("float");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_float(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_float_to_jni(java_value);
	}

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
			cxx_type_hierarchy.type_name = std::string("android.view.ViewPropertyAnimator");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_view_ViewPropertyAnimator(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_view_ViewPropertyAnimator result((AndroidCXX::android_view_ViewPropertyAnimator) *((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value));
	delete ((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value);
		
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::xBy(float const& arg0) exit");

	return result;
}
AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::yBy(float const& arg0)
{
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::yBy(float const& arg0) enter");

	const char *methodName = "yBy";
	const char *methodSignature = "(F)Landroid/view/ViewPropertyAnimator;";
	const char *className = "android/view/ViewPropertyAnimator";

	LOGV("android_view_ViewPropertyAnimator className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewPropertyAnimator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewPropertyAnimator jni address %d", javaObject);

	jfloat jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("float");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_float(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_float_to_jni(java_value);
	}

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
			cxx_type_hierarchy.type_name = std::string("android.view.ViewPropertyAnimator");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_view_ViewPropertyAnimator(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_view_ViewPropertyAnimator result((AndroidCXX::android_view_ViewPropertyAnimator) *((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value));
	delete ((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value);
		
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::yBy(float const& arg0) exit");

	return result;
}
AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::rotationBy(float const& arg0)
{
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::rotationBy(float const& arg0) enter");

	const char *methodName = "rotationBy";
	const char *methodSignature = "(F)Landroid/view/ViewPropertyAnimator;";
	const char *className = "android/view/ViewPropertyAnimator";

	LOGV("android_view_ViewPropertyAnimator className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewPropertyAnimator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewPropertyAnimator jni address %d", javaObject);

	jfloat jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("float");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_float(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_float_to_jni(java_value);
	}

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
			cxx_type_hierarchy.type_name = std::string("android.view.ViewPropertyAnimator");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_view_ViewPropertyAnimator(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_view_ViewPropertyAnimator result((AndroidCXX::android_view_ViewPropertyAnimator) *((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value));
	delete ((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value);
		
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::rotationBy(float const& arg0) exit");

	return result;
}
AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::rotationXBy(float const& arg0)
{
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::rotationXBy(float const& arg0) enter");

	const char *methodName = "rotationXBy";
	const char *methodSignature = "(F)Landroid/view/ViewPropertyAnimator;";
	const char *className = "android/view/ViewPropertyAnimator";

	LOGV("android_view_ViewPropertyAnimator className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewPropertyAnimator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewPropertyAnimator jni address %d", javaObject);

	jfloat jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("float");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_float(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_float_to_jni(java_value);
	}

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
			cxx_type_hierarchy.type_name = std::string("android.view.ViewPropertyAnimator");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_view_ViewPropertyAnimator(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_view_ViewPropertyAnimator result((AndroidCXX::android_view_ViewPropertyAnimator) *((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value));
	delete ((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value);
		
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::rotationXBy(float const& arg0) exit");

	return result;
}
AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::rotationYBy(float const& arg0)
{
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::rotationYBy(float const& arg0) enter");

	const char *methodName = "rotationYBy";
	const char *methodSignature = "(F)Landroid/view/ViewPropertyAnimator;";
	const char *className = "android/view/ViewPropertyAnimator";

	LOGV("android_view_ViewPropertyAnimator className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewPropertyAnimator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewPropertyAnimator jni address %d", javaObject);

	jfloat jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("float");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_float(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_float_to_jni(java_value);
	}

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
			cxx_type_hierarchy.type_name = std::string("android.view.ViewPropertyAnimator");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_view_ViewPropertyAnimator(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_view_ViewPropertyAnimator result((AndroidCXX::android_view_ViewPropertyAnimator) *((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value));
	delete ((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value);
		
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::rotationYBy(float const& arg0) exit");

	return result;
}
AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::translationXBy(float const& arg0)
{
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::translationXBy(float const& arg0) enter");

	const char *methodName = "translationXBy";
	const char *methodSignature = "(F)Landroid/view/ViewPropertyAnimator;";
	const char *className = "android/view/ViewPropertyAnimator";

	LOGV("android_view_ViewPropertyAnimator className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewPropertyAnimator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewPropertyAnimator jni address %d", javaObject);

	jfloat jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("float");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_float(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_float_to_jni(java_value);
	}

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
			cxx_type_hierarchy.type_name = std::string("android.view.ViewPropertyAnimator");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_view_ViewPropertyAnimator(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_view_ViewPropertyAnimator result((AndroidCXX::android_view_ViewPropertyAnimator) *((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value));
	delete ((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value);
		
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::translationXBy(float const& arg0) exit");

	return result;
}
AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::translationYBy(float const& arg0)
{
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::translationYBy(float const& arg0) enter");

	const char *methodName = "translationYBy";
	const char *methodSignature = "(F)Landroid/view/ViewPropertyAnimator;";
	const char *className = "android/view/ViewPropertyAnimator";

	LOGV("android_view_ViewPropertyAnimator className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewPropertyAnimator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewPropertyAnimator jni address %d", javaObject);

	jfloat jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("float");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_float(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_float_to_jni(java_value);
	}

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
			cxx_type_hierarchy.type_name = std::string("android.view.ViewPropertyAnimator");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_view_ViewPropertyAnimator(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_view_ViewPropertyAnimator result((AndroidCXX::android_view_ViewPropertyAnimator) *((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value));
	delete ((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value);
		
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::translationYBy(float const& arg0) exit");

	return result;
}
AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::scaleXBy(float const& arg0)
{
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::scaleXBy(float const& arg0) enter");

	const char *methodName = "scaleXBy";
	const char *methodSignature = "(F)Landroid/view/ViewPropertyAnimator;";
	const char *className = "android/view/ViewPropertyAnimator";

	LOGV("android_view_ViewPropertyAnimator className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewPropertyAnimator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewPropertyAnimator jni address %d", javaObject);

	jfloat jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("float");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_float(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_float_to_jni(java_value);
	}

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
			cxx_type_hierarchy.type_name = std::string("android.view.ViewPropertyAnimator");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_view_ViewPropertyAnimator(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_view_ViewPropertyAnimator result((AndroidCXX::android_view_ViewPropertyAnimator) *((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value));
	delete ((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value);
		
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::scaleXBy(float const& arg0) exit");

	return result;
}
AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::scaleYBy(float const& arg0)
{
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::scaleYBy(float const& arg0) enter");

	const char *methodName = "scaleYBy";
	const char *methodSignature = "(F)Landroid/view/ViewPropertyAnimator;";
	const char *className = "android/view/ViewPropertyAnimator";

	LOGV("android_view_ViewPropertyAnimator className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewPropertyAnimator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewPropertyAnimator jni address %d", javaObject);

	jfloat jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("float");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_float(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_float_to_jni(java_value);
	}

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
			cxx_type_hierarchy.type_name = std::string("android.view.ViewPropertyAnimator");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_view_ViewPropertyAnimator(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_view_ViewPropertyAnimator result((AndroidCXX::android_view_ViewPropertyAnimator) *((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value));
	delete ((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value);
		
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::scaleYBy(float const& arg0) exit");

	return result;
}
AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::alphaBy(float const& arg0)
{
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::alphaBy(float const& arg0) enter");

	const char *methodName = "alphaBy";
	const char *methodSignature = "(F)Landroid/view/ViewPropertyAnimator;";
	const char *className = "android/view/ViewPropertyAnimator";

	LOGV("android_view_ViewPropertyAnimator className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewPropertyAnimator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewPropertyAnimator jni address %d", javaObject);

	jfloat jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("float");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_float(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_float_to_jni(java_value);
	}

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
			cxx_type_hierarchy.type_name = std::string("android.view.ViewPropertyAnimator");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_view_ViewPropertyAnimator(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_view_ViewPropertyAnimator result((AndroidCXX::android_view_ViewPropertyAnimator) *((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value));
	delete ((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value);
		
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::alphaBy(float const& arg0) exit");

	return result;
}
AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::withLayer()
{
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::withLayer() enter");

	const char *methodName = "withLayer";
	const char *methodSignature = "()Landroid/view/ViewPropertyAnimator;";
	const char *className = "android/view/ViewPropertyAnimator";

	LOGV("android_view_ViewPropertyAnimator className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewPropertyAnimator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewPropertyAnimator jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("android.view.ViewPropertyAnimator");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_view_ViewPropertyAnimator(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_view_ViewPropertyAnimator result((AndroidCXX::android_view_ViewPropertyAnimator) *((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value));
	delete ((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value);
		
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::withLayer() exit");

	return result;
}
AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::withStartAction(AndroidCXX::java_lang_Runnable const& arg0)
{
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::withStartAction(AndroidCXX::java_lang_Runnable const& arg0) enter");

	const char *methodName = "withStartAction";
	const char *methodSignature = "(Ljava/lang/Runnable;)Landroid/view/ViewPropertyAnimator;";
	const char *className = "android/view/ViewPropertyAnimator";

	LOGV("android_view_ViewPropertyAnimator className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewPropertyAnimator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewPropertyAnimator jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("java.lang.Runnable");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_lang_Runnable(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

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
			cxx_type_hierarchy.type_name = std::string("android.view.ViewPropertyAnimator");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_view_ViewPropertyAnimator(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_view_ViewPropertyAnimator result((AndroidCXX::android_view_ViewPropertyAnimator) *((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value));
	delete ((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value);
		
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::withStartAction(AndroidCXX::java_lang_Runnable const& arg0) exit");

	return result;
}
AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::withEndAction(AndroidCXX::java_lang_Runnable const& arg0)
{
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::withEndAction(AndroidCXX::java_lang_Runnable const& arg0) enter");

	const char *methodName = "withEndAction";
	const char *methodSignature = "(Ljava/lang/Runnable;)Landroid/view/ViewPropertyAnimator;";
	const char *className = "android/view/ViewPropertyAnimator";

	LOGV("android_view_ViewPropertyAnimator className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewPropertyAnimator cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewPropertyAnimator jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("java.lang.Runnable");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_lang_Runnable(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

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
			cxx_type_hierarchy.type_name = std::string("android.view.ViewPropertyAnimator");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_view_ViewPropertyAnimator(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_view_ViewPropertyAnimator result((AndroidCXX::android_view_ViewPropertyAnimator) *((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value));
	delete ((AndroidCXX::android_view_ViewPropertyAnimator *) cxx_value);
		
	LOGV("AndroidCXX::android_view_ViewPropertyAnimator android_view_ViewPropertyAnimator::withEndAction(AndroidCXX::java_lang_Runnable const& arg0) exit");

	return result;
}

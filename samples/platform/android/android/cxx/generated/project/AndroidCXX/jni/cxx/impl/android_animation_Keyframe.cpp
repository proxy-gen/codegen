/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
	
	
 		 
 		 
	
	
	
	
	
	
 		 
	























// Generated Code 

#include <android_animation_Keyframe.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "android_animation_Keyframe"
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

static long static_obj;
static long static_address = (long) &static_obj;


// Default Instance Constructors
android_animation_Keyframe::android_animation_Keyframe(const android_animation_Keyframe& cc)
{
	LOGV("android_animation_Keyframe::android_animation_Keyframe(const android_animation_Keyframe& cc) enter");

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

	LOGV("android_animation_Keyframe::android_animation_Keyframe(const android_animation_Keyframe& cc) exit");
}
android_animation_Keyframe::android_animation_Keyframe(void * proxy)
{
	LOGV("android_animation_Keyframe::android_animation_Keyframe(void * proxy) enter");

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

	LOGV("android_animation_Keyframe::android_animation_Keyframe(void * proxy) exit");
}
// Public Constructors
android_animation_Keyframe::android_animation_Keyframe()
{
	LOGV("android_animation_Keyframe::android_animation_Keyframe() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "android/animation/Keyframe";

	LOGV("android_animation_Keyframe className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_animation_Keyframe cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_Keyframe jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{

			
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, methodName, methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("android_animation_Keyframe::android_animation_Keyframe() exit");	
}
// Default Instance Destructor
android_animation_Keyframe::~android_animation_Keyframe()
{
	LOGV("android_animation_Keyframe::~android_animation_Keyframe() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("android_animation_Keyframe::~android_animation_Keyframe() exit");
}
// Functions
AndroidCXX::android_animation_Keyframe android_animation_Keyframe::clone()
{
	LOGV("AndroidCXX::android_animation_Keyframe android_animation_Keyframe::clone() enter");

	const char *methodName = "clone";
	const char *methodSignature = "()Landroid/animation/Keyframe;";
	const char *className = "android/animation/Keyframe";

	LOGV("android_animation_Keyframe className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_animation_Keyframe cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_Keyframe jni address %d", javaObject);


	AndroidCXX::android_animation_Keyframe result;
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
			cxx_type_hierarchy.type_name = std::string("android.animation.Keyframe");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_animation_Keyframe(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_animation_Keyframe) (AndroidCXX::android_animation_Keyframe((AndroidCXX::android_animation_Keyframe *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_animation_Keyframe android_animation_Keyframe::clone() exit");

	return result;
}
AndroidCXX::java_lang_Object android_animation_Keyframe::getValue()
{
	LOGV("AndroidCXX::java_lang_Object android_animation_Keyframe::getValue() enter");

	const char *methodName = "getValue";
	const char *methodSignature = "()Ljava/lang/Object;";
	const char *className = "android/animation/Keyframe";

	LOGV("android_animation_Keyframe className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_animation_Keyframe cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_Keyframe jni address %d", javaObject);


	AndroidCXX::java_lang_Object result;
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
			cxx_type_hierarchy.type_name = std::string("java.lang.Object");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_lang_Object(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::java_lang_Object) (AndroidCXX::java_lang_Object((AndroidCXX::java_lang_Object *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::java_lang_Object android_animation_Keyframe::getValue() exit");

	return result;
}
AndroidCXX::java_lang_Class android_animation_Keyframe::getType()
{
	LOGV("AndroidCXX::java_lang_Class android_animation_Keyframe::getType() enter");

	const char *methodName = "getType";
	const char *methodSignature = "()Ljava/lang/Class;";
	const char *className = "android/animation/Keyframe";

	LOGV("android_animation_Keyframe className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_animation_Keyframe cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_Keyframe jni address %d", javaObject);


	AndroidCXX::java_lang_Class result;
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
			cxx_type_hierarchy.type_name = std::string("java.lang.Class");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_lang_Class(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::java_lang_Class) (AndroidCXX::java_lang_Class((AndroidCXX::java_lang_Class *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::java_lang_Class android_animation_Keyframe::getType() exit");

	return result;
}
void android_animation_Keyframe::setValue(AndroidCXX::java_lang_Object& arg0)
{
	LOGV("void android_animation_Keyframe::setValue(AndroidCXX::java_lang_Object& arg0) enter");

	const char *methodName = "setValue";
	const char *methodSignature = "(Ljava/lang/Object;)V";
	const char *className = "android/animation/Keyframe";

	LOGV("android_animation_Keyframe className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_animation_Keyframe cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_Keyframe jni address %d", javaObject);

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

	LOGV("void android_animation_Keyframe::setValue(AndroidCXX::java_lang_Object& arg0) exit");

}
void android_animation_Keyframe::setInterpolator(AndroidCXX::android_animation_TimeInterpolator& arg0)
{
	LOGV("void android_animation_Keyframe::setInterpolator(AndroidCXX::android_animation_TimeInterpolator& arg0) enter");

	const char *methodName = "setInterpolator";
	const char *methodSignature = "(Landroid/animation/TimeInterpolator;)V";
	const char *className = "android/animation/Keyframe";

	LOGV("android_animation_Keyframe className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_animation_Keyframe cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_Keyframe jni address %d", javaObject);

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

	LOGV("void android_animation_Keyframe::setInterpolator(AndroidCXX::android_animation_TimeInterpolator& arg0) exit");

}
float android_animation_Keyframe::getFraction()
{
	LOGV("float android_animation_Keyframe::getFraction() enter");

	const char *methodName = "getFraction";
	const char *methodSignature = "()F";
	const char *className = "android/animation/Keyframe";

	LOGV("android_animation_Keyframe className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_animation_Keyframe cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_Keyframe jni address %d", javaObject);


	float result;
	jfloat jni_result = (jfloat) jni->invokeFloatMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni_float_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("float");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_float(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (float) (cxx_value);
		
	jni->popLocalFrame();

	LOGV("float android_animation_Keyframe::getFraction() exit");

	return result;
}
AndroidCXX::android_animation_TimeInterpolator android_animation_Keyframe::getInterpolator()
{
	LOGV("AndroidCXX::android_animation_TimeInterpolator android_animation_Keyframe::getInterpolator() enter");

	const char *methodName = "getInterpolator";
	const char *methodSignature = "()Landroid/animation/TimeInterpolator;";
	const char *className = "android/animation/Keyframe";

	LOGV("android_animation_Keyframe className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_animation_Keyframe cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_Keyframe jni address %d", javaObject);


	AndroidCXX::android_animation_TimeInterpolator result;
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
	result = (AndroidCXX::android_animation_TimeInterpolator) (AndroidCXX::android_animation_TimeInterpolator((AndroidCXX::android_animation_TimeInterpolator *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_animation_TimeInterpolator android_animation_Keyframe::getInterpolator() exit");

	return result;
}
bool android_animation_Keyframe::hasValue()
{
	LOGV("bool android_animation_Keyframe::hasValue() enter");

	const char *methodName = "hasValue";
	const char *methodSignature = "()Z";
	const char *className = "android/animation/Keyframe";

	LOGV("android_animation_Keyframe className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_animation_Keyframe cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_Keyframe jni address %d", javaObject);


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

	LOGV("bool android_animation_Keyframe::hasValue() exit");

	return result;
}
AndroidCXX::android_animation_Keyframe android_animation_Keyframe::ofInt(float& arg0)
{
	LOGV("AndroidCXX::android_animation_Keyframe android_animation_Keyframe::ofInt(float& arg0) enter");

	const char *methodName = "ofInt";
	const char *methodSignature = "(F)Landroid/animation/Keyframe;";
	const char *className = "android/animation/Keyframe";

	LOGV("android_animation_Keyframe className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) static_address; // _static function
	LOGV("android_animation_Keyframe cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_Keyframe jni address %d", javaObject);

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

	AndroidCXX::android_animation_Keyframe result;
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
			cxx_type_hierarchy.type_name = std::string("android.animation.Keyframe");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_animation_Keyframe(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_animation_Keyframe) (AndroidCXX::android_animation_Keyframe((AndroidCXX::android_animation_Keyframe *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_animation_Keyframe android_animation_Keyframe::ofInt(float& arg0) exit");

	return result;
}
AndroidCXX::android_animation_Keyframe android_animation_Keyframe::ofInt(float& arg0,int& arg1)
{
	LOGV("AndroidCXX::android_animation_Keyframe android_animation_Keyframe::ofInt(float& arg0,int& arg1) enter");

	const char *methodName = "ofInt";
	const char *methodSignature = "(FI)Landroid/animation/Keyframe;";
	const char *className = "android/animation/Keyframe";

	LOGV("android_animation_Keyframe className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) static_address; // _static function
	LOGV("android_animation_Keyframe cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_Keyframe jni address %d", javaObject);

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

	AndroidCXX::android_animation_Keyframe result;
	jobject jni_result = (jobject) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1);
	long cxx_value = (long) 0;
	long java_value = convert_jni_java_lang_Object_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("android.animation.Keyframe");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_animation_Keyframe(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_animation_Keyframe) (AndroidCXX::android_animation_Keyframe((AndroidCXX::android_animation_Keyframe *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_animation_Keyframe android_animation_Keyframe::ofInt(float& arg0,int& arg1) exit");

	return result;
}
AndroidCXX::android_animation_Keyframe android_animation_Keyframe::ofFloat(float& arg0)
{
	LOGV("AndroidCXX::android_animation_Keyframe android_animation_Keyframe::ofFloat(float& arg0) enter");

	const char *methodName = "ofFloat";
	const char *methodSignature = "(F)Landroid/animation/Keyframe;";
	const char *className = "android/animation/Keyframe";

	LOGV("android_animation_Keyframe className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) static_address; // _static function
	LOGV("android_animation_Keyframe cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_Keyframe jni address %d", javaObject);

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

	AndroidCXX::android_animation_Keyframe result;
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
			cxx_type_hierarchy.type_name = std::string("android.animation.Keyframe");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_animation_Keyframe(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_animation_Keyframe) (AndroidCXX::android_animation_Keyframe((AndroidCXX::android_animation_Keyframe *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_animation_Keyframe android_animation_Keyframe::ofFloat(float& arg0) exit");

	return result;
}
AndroidCXX::android_animation_Keyframe android_animation_Keyframe::ofFloat(float& arg0,float& arg1)
{
	LOGV("AndroidCXX::android_animation_Keyframe android_animation_Keyframe::ofFloat(float& arg0,float& arg1) enter");

	const char *methodName = "ofFloat";
	const char *methodSignature = "(FF)Landroid/animation/Keyframe;";
	const char *className = "android/animation/Keyframe";

	LOGV("android_animation_Keyframe className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) static_address; // _static function
	LOGV("android_animation_Keyframe cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_Keyframe jni address %d", javaObject);

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
	jfloat jarg1;
	{
		long cxx_value = (long) & arg1;
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
		jarg1 = convert_jni_float_to_jni(java_value);
	}

	AndroidCXX::android_animation_Keyframe result;
	jobject jni_result = (jobject) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1);
	long cxx_value = (long) 0;
	long java_value = convert_jni_java_lang_Object_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("android.animation.Keyframe");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_animation_Keyframe(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_animation_Keyframe) (AndroidCXX::android_animation_Keyframe((AndroidCXX::android_animation_Keyframe *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_animation_Keyframe android_animation_Keyframe::ofFloat(float& arg0,float& arg1) exit");

	return result;
}
AndroidCXX::android_animation_Keyframe android_animation_Keyframe::ofObject(float& arg0)
{
	LOGV("AndroidCXX::android_animation_Keyframe android_animation_Keyframe::ofObject(float& arg0) enter");

	const char *methodName = "ofObject";
	const char *methodSignature = "(F)Landroid/animation/Keyframe;";
	const char *className = "android/animation/Keyframe";

	LOGV("android_animation_Keyframe className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) static_address; // _static function
	LOGV("android_animation_Keyframe cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_Keyframe jni address %d", javaObject);

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

	AndroidCXX::android_animation_Keyframe result;
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
			cxx_type_hierarchy.type_name = std::string("android.animation.Keyframe");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_animation_Keyframe(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_animation_Keyframe) (AndroidCXX::android_animation_Keyframe((AndroidCXX::android_animation_Keyframe *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_animation_Keyframe android_animation_Keyframe::ofObject(float& arg0) exit");

	return result;
}
AndroidCXX::android_animation_Keyframe android_animation_Keyframe::ofObject(float& arg0,AndroidCXX::java_lang_Object& arg1)
{
	LOGV("AndroidCXX::android_animation_Keyframe android_animation_Keyframe::ofObject(float& arg0,AndroidCXX::java_lang_Object& arg1) enter");

	const char *methodName = "ofObject";
	const char *methodSignature = "(FLjava/lang/Object;)Landroid/animation/Keyframe;";
	const char *className = "android/animation/Keyframe";

	LOGV("android_animation_Keyframe className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) static_address; // _static function
	LOGV("android_animation_Keyframe cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_Keyframe jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("java.lang.Object");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_lang_Object(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	AndroidCXX::android_animation_Keyframe result;
	jobject jni_result = (jobject) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1);
	long cxx_value = (long) 0;
	long java_value = convert_jni_java_lang_Object_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("android.animation.Keyframe");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_animation_Keyframe(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_animation_Keyframe) (AndroidCXX::android_animation_Keyframe((AndroidCXX::android_animation_Keyframe *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_animation_Keyframe android_animation_Keyframe::ofObject(float& arg0,AndroidCXX::java_lang_Object& arg1) exit");

	return result;
}
void android_animation_Keyframe::setFraction(float& arg0)
{
	LOGV("void android_animation_Keyframe::setFraction(float& arg0) enter");

	const char *methodName = "setFraction";
	const char *methodSignature = "(F)V";
	const char *className = "android/animation/Keyframe";

	LOGV("android_animation_Keyframe className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_animation_Keyframe cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_Keyframe jni address %d", javaObject);

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

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void android_animation_Keyframe::setFraction(float& arg0) exit");

}

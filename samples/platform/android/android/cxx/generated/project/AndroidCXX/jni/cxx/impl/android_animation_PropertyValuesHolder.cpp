/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
 		 
	
 		 
 		 
	
 		 
 		 
	
 		 
	

























// Generated Code 

#include <android_animation_PropertyValuesHolder.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "android_animation_PropertyValuesHolder"
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

static long static_obj;
static long static_address = (long) &static_obj;


// Default Instance Constructors
android_animation_PropertyValuesHolder::android_animation_PropertyValuesHolder(const android_animation_PropertyValuesHolder& cc)
{
	LOGV("android_animation_PropertyValuesHolder::android_animation_PropertyValuesHolder(const android_animation_PropertyValuesHolder& cc) enter");

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

	LOGV("android_animation_PropertyValuesHolder::android_animation_PropertyValuesHolder(const android_animation_PropertyValuesHolder& cc) exit");
}
android_animation_PropertyValuesHolder::android_animation_PropertyValuesHolder(void * proxy)
{
	LOGV("android_animation_PropertyValuesHolder::android_animation_PropertyValuesHolder(void * proxy) enter");

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

	LOGV("android_animation_PropertyValuesHolder::android_animation_PropertyValuesHolder(void * proxy) exit");
}
android_animation_PropertyValuesHolder::android_animation_PropertyValuesHolder()
{
	LOGV("android_animation_PropertyValuesHolder::android_animation_PropertyValuesHolder() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "android/animation/PropertyValuesHolder";

	LOGV("android_animation_PropertyValuesHolder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_animation_PropertyValuesHolder cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_PropertyValuesHolder jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, "<init>", methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("android_animation_PropertyValuesHolder::android_animation_PropertyValuesHolder() exit");	
}
// Public Constructors
// Default Instance Destructor
android_animation_PropertyValuesHolder::~android_animation_PropertyValuesHolder()
{
	LOGV("android_animation_PropertyValuesHolder::~android_animation_PropertyValuesHolder() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("android_animation_PropertyValuesHolder::~android_animation_PropertyValuesHolder() exit");
}
// Functions
void android_animation_PropertyValuesHolder::setProperty(AndroidCXX::android_util_Property& arg0)
{
	LOGV("void android_animation_PropertyValuesHolder::setProperty(AndroidCXX::android_util_Property& arg0) enter");

	const char *methodName = "setProperty";
	const char *methodSignature = "(Landroid/util/Property;)V";
	const char *className = "android/animation/PropertyValuesHolder";

	LOGV("android_animation_PropertyValuesHolder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_animation_PropertyValuesHolder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_PropertyValuesHolder jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.util.Property");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_util_Property(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void android_animation_PropertyValuesHolder::setProperty(AndroidCXX::android_util_Property& arg0) exit");

}
AndroidCXX::java_lang_String android_animation_PropertyValuesHolder::toString()
{
	LOGV("AndroidCXX::java_lang_String android_animation_PropertyValuesHolder::toString() enter");

	const char *methodName = "toString";
	const char *methodSignature = "()Ljava/lang/String;";
	const char *className = "android/animation/PropertyValuesHolder";

	LOGV("android_animation_PropertyValuesHolder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_animation_PropertyValuesHolder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_PropertyValuesHolder jni address %d", javaObject);


	AndroidCXX::java_lang_String result;
	jstring jni_result = (jstring) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni_string_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.lang.String");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_lang_String(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::java_lang_String) (AndroidCXX::java_lang_String((AndroidCXX::java_lang_String *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::java_lang_String android_animation_PropertyValuesHolder::toString() exit");

	return result;
}
AndroidCXX::android_animation_PropertyValuesHolder android_animation_PropertyValuesHolder::clone()
{
	LOGV("AndroidCXX::android_animation_PropertyValuesHolder android_animation_PropertyValuesHolder::clone() enter");

	const char *methodName = "clone";
	const char *methodSignature = "()Landroid/animation/PropertyValuesHolder;";
	const char *className = "android/animation/PropertyValuesHolder";

	LOGV("android_animation_PropertyValuesHolder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_animation_PropertyValuesHolder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_PropertyValuesHolder jni address %d", javaObject);


	AndroidCXX::android_animation_PropertyValuesHolder result;
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
			cxx_type_hierarchy.type_name = std::string("android.animation.PropertyValuesHolder");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_animation_PropertyValuesHolder(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_animation_PropertyValuesHolder) (AndroidCXX::android_animation_PropertyValuesHolder((AndroidCXX::android_animation_PropertyValuesHolder *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_animation_PropertyValuesHolder android_animation_PropertyValuesHolder::clone() exit");

	return result;
}
void android_animation_PropertyValuesHolder::setPropertyName(AndroidCXX::java_lang_String& arg0)
{
	LOGV("void android_animation_PropertyValuesHolder::setPropertyName(AndroidCXX::java_lang_String& arg0) enter");

	const char *methodName = "setPropertyName";
	const char *methodSignature = "(Ljava/lang/String;)V";
	const char *className = "android/animation/PropertyValuesHolder";

	LOGV("android_animation_PropertyValuesHolder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_animation_PropertyValuesHolder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_PropertyValuesHolder jni address %d", javaObject);

	jstring jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.lang.String");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_lang_String(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_string_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void android_animation_PropertyValuesHolder::setPropertyName(AndroidCXX::java_lang_String& arg0) exit");

}
AndroidCXX::java_lang_String android_animation_PropertyValuesHolder::getPropertyName()
{
	LOGV("AndroidCXX::java_lang_String android_animation_PropertyValuesHolder::getPropertyName() enter");

	const char *methodName = "getPropertyName";
	const char *methodSignature = "()Ljava/lang/String;";
	const char *className = "android/animation/PropertyValuesHolder";

	LOGV("android_animation_PropertyValuesHolder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_animation_PropertyValuesHolder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_PropertyValuesHolder jni address %d", javaObject);


	AndroidCXX::java_lang_String result;
	jstring jni_result = (jstring) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni_string_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.lang.String");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_lang_String(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::java_lang_String) (AndroidCXX::java_lang_String((AndroidCXX::java_lang_String *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::java_lang_String android_animation_PropertyValuesHolder::getPropertyName() exit");

	return result;
}
AndroidCXX::android_animation_PropertyValuesHolder android_animation_PropertyValuesHolder::ofInt(AndroidCXX::java_lang_String& arg0,std::vector<int>& arg1)
{
	LOGV("AndroidCXX::android_animation_PropertyValuesHolder android_animation_PropertyValuesHolder::ofInt(AndroidCXX::java_lang_String& arg0,std::vector<int>& arg1) enter");

	const char *methodName = "ofInt";
	const char *methodSignature = "(Ljava/lang/String;[I)Landroid/animation/PropertyValuesHolder;";
	const char *className = "android/animation/PropertyValuesHolder";

	LOGV("android_animation_PropertyValuesHolder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) static_address; // _static function
	LOGV("android_animation_PropertyValuesHolder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_PropertyValuesHolder jni address %d", javaObject);

	jstring jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.lang.String");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_lang_String(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_string_to_jni(java_value);
	}
	jintArray jarg1;
	{
		long cxx_value = (long) & arg1;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("_int_array_type");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("int");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_int);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert__int_array_type(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni__int_array_type_to_jni(java_value);
	}

	AndroidCXX::android_animation_PropertyValuesHolder result;
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
			cxx_type_hierarchy.type_name = std::string("android.animation.PropertyValuesHolder");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_animation_PropertyValuesHolder(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_animation_PropertyValuesHolder) (AndroidCXX::android_animation_PropertyValuesHolder((AndroidCXX::android_animation_PropertyValuesHolder *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_animation_PropertyValuesHolder android_animation_PropertyValuesHolder::ofInt(AndroidCXX::java_lang_String& arg0,std::vector<int>& arg1) exit");

	return result;
}
AndroidCXX::android_animation_PropertyValuesHolder android_animation_PropertyValuesHolder::ofInt(AndroidCXX::android_util_Property& arg0,std::vector<int>& arg1)
{
	LOGV("AndroidCXX::android_animation_PropertyValuesHolder android_animation_PropertyValuesHolder::ofInt(AndroidCXX::android_util_Property& arg0,std::vector<int>& arg1) enter");

	const char *methodName = "ofInt";
	const char *methodSignature = "(Landroid/util/Property;[I)Landroid/animation/PropertyValuesHolder;";
	const char *className = "android/animation/PropertyValuesHolder";

	LOGV("android_animation_PropertyValuesHolder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) static_address; // _static function
	LOGV("android_animation_PropertyValuesHolder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_PropertyValuesHolder jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.util.Property");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.lang.Integer");
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.lang.Object");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_java_lang_Object);				

			}
			{
				converter_stack.push((long) &convert_java_lang_Integer);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_util_Property(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}
	jintArray jarg1;
	{
		long cxx_value = (long) & arg1;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("_int_array_type");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("int");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_int);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert__int_array_type(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni__int_array_type_to_jni(java_value);
	}

	AndroidCXX::android_animation_PropertyValuesHolder result;
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
			cxx_type_hierarchy.type_name = std::string("android.animation.PropertyValuesHolder");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_animation_PropertyValuesHolder(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_animation_PropertyValuesHolder) (AndroidCXX::android_animation_PropertyValuesHolder((AndroidCXX::android_animation_PropertyValuesHolder *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_animation_PropertyValuesHolder android_animation_PropertyValuesHolder::ofInt(AndroidCXX::android_util_Property& arg0,std::vector<int>& arg1) exit");

	return result;
}
AndroidCXX::android_animation_PropertyValuesHolder android_animation_PropertyValuesHolder::ofFloat(AndroidCXX::android_util_Property& arg0,std::vector<float>& arg1)
{
	LOGV("AndroidCXX::android_animation_PropertyValuesHolder android_animation_PropertyValuesHolder::ofFloat(AndroidCXX::android_util_Property& arg0,std::vector<float>& arg1) enter");

	const char *methodName = "ofFloat";
	const char *methodSignature = "(Landroid/util/Property;[F)Landroid/animation/PropertyValuesHolder;";
	const char *className = "android/animation/PropertyValuesHolder";

	LOGV("android_animation_PropertyValuesHolder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) static_address; // _static function
	LOGV("android_animation_PropertyValuesHolder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_PropertyValuesHolder jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.util.Property");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.lang.Float");
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.lang.Object");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_java_lang_Object);				

			}
			{
				converter_stack.push((long) &convert_java_lang_Float);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_util_Property(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}
	jfloatArray jarg1;
	{
		long cxx_value = (long) & arg1;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("_float_array_type");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("float");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_float);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert__float_array_type(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni__float_array_type_to_jni(java_value);
	}

	AndroidCXX::android_animation_PropertyValuesHolder result;
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
			cxx_type_hierarchy.type_name = std::string("android.animation.PropertyValuesHolder");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_animation_PropertyValuesHolder(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_animation_PropertyValuesHolder) (AndroidCXX::android_animation_PropertyValuesHolder((AndroidCXX::android_animation_PropertyValuesHolder *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_animation_PropertyValuesHolder android_animation_PropertyValuesHolder::ofFloat(AndroidCXX::android_util_Property& arg0,std::vector<float>& arg1) exit");

	return result;
}
AndroidCXX::android_animation_PropertyValuesHolder android_animation_PropertyValuesHolder::ofFloat(AndroidCXX::java_lang_String& arg0,std::vector<float>& arg1)
{
	LOGV("AndroidCXX::android_animation_PropertyValuesHolder android_animation_PropertyValuesHolder::ofFloat(AndroidCXX::java_lang_String& arg0,std::vector<float>& arg1) enter");

	const char *methodName = "ofFloat";
	const char *methodSignature = "(Ljava/lang/String;[F)Landroid/animation/PropertyValuesHolder;";
	const char *className = "android/animation/PropertyValuesHolder";

	LOGV("android_animation_PropertyValuesHolder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) static_address; // _static function
	LOGV("android_animation_PropertyValuesHolder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_PropertyValuesHolder jni address %d", javaObject);

	jstring jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.lang.String");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_lang_String(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_string_to_jni(java_value);
	}
	jfloatArray jarg1;
	{
		long cxx_value = (long) & arg1;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("_float_array_type");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("float");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_float);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert__float_array_type(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni__float_array_type_to_jni(java_value);
	}

	AndroidCXX::android_animation_PropertyValuesHolder result;
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
			cxx_type_hierarchy.type_name = std::string("android.animation.PropertyValuesHolder");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_animation_PropertyValuesHolder(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_animation_PropertyValuesHolder) (AndroidCXX::android_animation_PropertyValuesHolder((AndroidCXX::android_animation_PropertyValuesHolder *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_animation_PropertyValuesHolder android_animation_PropertyValuesHolder::ofFloat(AndroidCXX::java_lang_String& arg0,std::vector<float>& arg1) exit");

	return result;
}
AndroidCXX::android_animation_PropertyValuesHolder android_animation_PropertyValuesHolder::ofObject(AndroidCXX::java_lang_String& arg0,AndroidCXX::android_animation_TypeEvaluator& arg1,std::vector<java_lang_Object >& arg2)
{
	LOGV("AndroidCXX::android_animation_PropertyValuesHolder android_animation_PropertyValuesHolder::ofObject(AndroidCXX::java_lang_String& arg0,AndroidCXX::android_animation_TypeEvaluator& arg1,std::vector<java_lang_Object >& arg2) enter");

	const char *methodName = "ofObject";
	const char *methodSignature = "(Ljava/lang/String;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/PropertyValuesHolder;";
	const char *className = "android/animation/PropertyValuesHolder";

	LOGV("android_animation_PropertyValuesHolder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) static_address; // _static function
	LOGV("android_animation_PropertyValuesHolder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_PropertyValuesHolder jni address %d", javaObject);

	jstring jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.lang.String");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_lang_String(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_string_to_jni(java_value);
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
			cxx_type_hierarchy.type_name = std::string("android.animation.TypeEvaluator");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_animation_TypeEvaluator(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
	}
	jobjectArray jarg2;
	{
		long cxx_value = (long) & arg2;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("_object_array_type");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.lang.Object");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_java_lang_Object);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert__object_array_type(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg2 = convert_jni__object_array_type_to_jni(java_value);
	}

	AndroidCXX::android_animation_PropertyValuesHolder result;
	jobject jni_result = (jobject) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1,jarg2);
	long cxx_value = (long) 0;
	long java_value = convert_jni_java_lang_Object_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("android.animation.PropertyValuesHolder");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_animation_PropertyValuesHolder(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_animation_PropertyValuesHolder) (AndroidCXX::android_animation_PropertyValuesHolder((AndroidCXX::android_animation_PropertyValuesHolder *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_animation_PropertyValuesHolder android_animation_PropertyValuesHolder::ofObject(AndroidCXX::java_lang_String& arg0,AndroidCXX::android_animation_TypeEvaluator& arg1,std::vector<java_lang_Object >& arg2) exit");

	return result;
}
AndroidCXX::android_animation_PropertyValuesHolder android_animation_PropertyValuesHolder::ofObject(AndroidCXX::android_util_Property& arg0,AndroidCXX::android_animation_TypeEvaluator& arg1,std::vector<java_lang_Object >& arg2)
{
	LOGV("AndroidCXX::android_animation_PropertyValuesHolder android_animation_PropertyValuesHolder::ofObject(AndroidCXX::android_util_Property& arg0,AndroidCXX::android_animation_TypeEvaluator& arg1,std::vector<java_lang_Object >& arg2) enter");

	const char *methodName = "ofObject";
	const char *methodSignature = "(Landroid/util/Property;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/PropertyValuesHolder;";
	const char *className = "android/animation/PropertyValuesHolder";

	LOGV("android_animation_PropertyValuesHolder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) static_address; // _static function
	LOGV("android_animation_PropertyValuesHolder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_PropertyValuesHolder jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.util.Property");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_util_Property(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
			cxx_type_hierarchy.type_name = std::string("android.animation.TypeEvaluator");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.lang.Object");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_java_lang_Object);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_animation_TypeEvaluator(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
	}
	jobjectArray jarg2;
	{
		long cxx_value = (long) & arg2;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("_object_array_type");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.lang.Object");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_java_lang_Object);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert__object_array_type(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg2 = convert_jni__object_array_type_to_jni(java_value);
	}

	AndroidCXX::android_animation_PropertyValuesHolder result;
	jobject jni_result = (jobject) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1,jarg2);
	long cxx_value = (long) 0;
	long java_value = convert_jni_java_lang_Object_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("android.animation.PropertyValuesHolder");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_animation_PropertyValuesHolder(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_animation_PropertyValuesHolder) (AndroidCXX::android_animation_PropertyValuesHolder((AndroidCXX::android_animation_PropertyValuesHolder *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_animation_PropertyValuesHolder android_animation_PropertyValuesHolder::ofObject(AndroidCXX::android_util_Property& arg0,AndroidCXX::android_animation_TypeEvaluator& arg1,std::vector<java_lang_Object >& arg2) exit");

	return result;
}
void android_animation_PropertyValuesHolder::setIntValues(std::vector<int>& arg0)
{
	LOGV("void android_animation_PropertyValuesHolder::setIntValues(std::vector<int>& arg0) enter");

	const char *methodName = "setIntValues";
	const char *methodSignature = "([I)V";
	const char *className = "android/animation/PropertyValuesHolder";

	LOGV("android_animation_PropertyValuesHolder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_animation_PropertyValuesHolder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_PropertyValuesHolder jni address %d", javaObject);

	jintArray jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("_int_array_type");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("int");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_int);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert__int_array_type(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni__int_array_type_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void android_animation_PropertyValuesHolder::setIntValues(std::vector<int>& arg0) exit");

}
void android_animation_PropertyValuesHolder::setFloatValues(std::vector<float>& arg0)
{
	LOGV("void android_animation_PropertyValuesHolder::setFloatValues(std::vector<float>& arg0) enter");

	const char *methodName = "setFloatValues";
	const char *methodSignature = "([F)V";
	const char *className = "android/animation/PropertyValuesHolder";

	LOGV("android_animation_PropertyValuesHolder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_animation_PropertyValuesHolder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_PropertyValuesHolder jni address %d", javaObject);

	jfloatArray jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("_float_array_type");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("float");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_float);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert__float_array_type(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni__float_array_type_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void android_animation_PropertyValuesHolder::setFloatValues(std::vector<float>& arg0) exit");

}
void android_animation_PropertyValuesHolder::setObjectValues(std::vector<java_lang_Object >& arg0)
{
	LOGV("void android_animation_PropertyValuesHolder::setObjectValues(std::vector<java_lang_Object >& arg0) enter");

	const char *methodName = "setObjectValues";
	const char *methodSignature = "([Ljava/lang/Object;)V";
	const char *className = "android/animation/PropertyValuesHolder";

	LOGV("android_animation_PropertyValuesHolder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_animation_PropertyValuesHolder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_PropertyValuesHolder jni address %d", javaObject);

	jobjectArray jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("_object_array_type");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.lang.Object");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_java_lang_Object);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert__object_array_type(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni__object_array_type_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void android_animation_PropertyValuesHolder::setObjectValues(std::vector<java_lang_Object >& arg0) exit");

}
void android_animation_PropertyValuesHolder::setEvaluator(AndroidCXX::android_animation_TypeEvaluator& arg0)
{
	LOGV("void android_animation_PropertyValuesHolder::setEvaluator(AndroidCXX::android_animation_TypeEvaluator& arg0) enter");

	const char *methodName = "setEvaluator";
	const char *methodSignature = "(Landroid/animation/TypeEvaluator;)V";
	const char *className = "android/animation/PropertyValuesHolder";

	LOGV("android_animation_PropertyValuesHolder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_animation_PropertyValuesHolder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_PropertyValuesHolder jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.animation.TypeEvaluator");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_animation_TypeEvaluator(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void android_animation_PropertyValuesHolder::setEvaluator(AndroidCXX::android_animation_TypeEvaluator& arg0) exit");

}
AndroidCXX::android_animation_PropertyValuesHolder android_animation_PropertyValuesHolder::ofKeyframe(AndroidCXX::android_util_Property& arg0,std::vector<android_animation_Keyframe >& arg1)
{
	LOGV("AndroidCXX::android_animation_PropertyValuesHolder android_animation_PropertyValuesHolder::ofKeyframe(AndroidCXX::android_util_Property& arg0,std::vector<android_animation_Keyframe >& arg1) enter");

	const char *methodName = "ofKeyframe";
	const char *methodSignature = "(Landroid/util/Property;[Landroid/animation/Keyframe;)Landroid/animation/PropertyValuesHolder;";
	const char *className = "android/animation/PropertyValuesHolder";

	LOGV("android_animation_PropertyValuesHolder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) static_address; // _static function
	LOGV("android_animation_PropertyValuesHolder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_PropertyValuesHolder jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.util.Property");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_util_Property(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}
	jobjectArray jarg1;
	{
		long cxx_value = (long) & arg1;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("_object_array_type");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("android.animation.Keyframe");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_android_animation_Keyframe);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert__object_array_type(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni__object_array_type_to_jni(java_value);
	}

	AndroidCXX::android_animation_PropertyValuesHolder result;
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
			cxx_type_hierarchy.type_name = std::string("android.animation.PropertyValuesHolder");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_animation_PropertyValuesHolder(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_animation_PropertyValuesHolder) (AndroidCXX::android_animation_PropertyValuesHolder((AndroidCXX::android_animation_PropertyValuesHolder *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_animation_PropertyValuesHolder android_animation_PropertyValuesHolder::ofKeyframe(AndroidCXX::android_util_Property& arg0,std::vector<android_animation_Keyframe >& arg1) exit");

	return result;
}
AndroidCXX::android_animation_PropertyValuesHolder android_animation_PropertyValuesHolder::ofKeyframe(AndroidCXX::java_lang_String& arg0,std::vector<android_animation_Keyframe >& arg1)
{
	LOGV("AndroidCXX::android_animation_PropertyValuesHolder android_animation_PropertyValuesHolder::ofKeyframe(AndroidCXX::java_lang_String& arg0,std::vector<android_animation_Keyframe >& arg1) enter");

	const char *methodName = "ofKeyframe";
	const char *methodSignature = "(Ljava/lang/String;[Landroid/animation/Keyframe;)Landroid/animation/PropertyValuesHolder;";
	const char *className = "android/animation/PropertyValuesHolder";

	LOGV("android_animation_PropertyValuesHolder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) static_address; // _static function
	LOGV("android_animation_PropertyValuesHolder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_PropertyValuesHolder jni address %d", javaObject);

	jstring jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.lang.String");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_lang_String(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_string_to_jni(java_value);
	}
	jobjectArray jarg1;
	{
		long cxx_value = (long) & arg1;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("_object_array_type");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("android.animation.Keyframe");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_android_animation_Keyframe);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert__object_array_type(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni__object_array_type_to_jni(java_value);
	}

	AndroidCXX::android_animation_PropertyValuesHolder result;
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
			cxx_type_hierarchy.type_name = std::string("android.animation.PropertyValuesHolder");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_animation_PropertyValuesHolder(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_animation_PropertyValuesHolder) (AndroidCXX::android_animation_PropertyValuesHolder((AndroidCXX::android_animation_PropertyValuesHolder *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_animation_PropertyValuesHolder android_animation_PropertyValuesHolder::ofKeyframe(AndroidCXX::java_lang_String& arg0,std::vector<android_animation_Keyframe >& arg1) exit");

	return result;
}
void android_animation_PropertyValuesHolder::setKeyframes(std::vector<android_animation_Keyframe >& arg0)
{
	LOGV("void android_animation_PropertyValuesHolder::setKeyframes(std::vector<android_animation_Keyframe >& arg0) enter");

	const char *methodName = "setKeyframes";
	const char *methodSignature = "([Landroid/animation/Keyframe;)V";
	const char *className = "android/animation/PropertyValuesHolder";

	LOGV("android_animation_PropertyValuesHolder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_animation_PropertyValuesHolder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_animation_PropertyValuesHolder jni address %d", javaObject);

	jobjectArray jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("_object_array_type");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("android.animation.Keyframe");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_android_animation_Keyframe);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert__object_array_type(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni__object_array_type_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void android_animation_PropertyValuesHolder::setKeyframes(std::vector<android_animation_Keyframe >& arg0) exit");

}

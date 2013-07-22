/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
























// Generated Code 

#include <android_view_ViewTreeObserver.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "android_view_ViewTreeObserver"
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
android_view_ViewTreeObserver::android_view_ViewTreeObserver(const android_view_ViewTreeObserver& cc)
{
	LOGV("android_view_ViewTreeObserver::android_view_ViewTreeObserver(const android_view_ViewTreeObserver& cc) enter");

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

	LOGV("android_view_ViewTreeObserver::android_view_ViewTreeObserver(const android_view_ViewTreeObserver& cc) exit");
}
android_view_ViewTreeObserver::android_view_ViewTreeObserver(void * proxy)
{
	LOGV("android_view_ViewTreeObserver::android_view_ViewTreeObserver(void * proxy) enter");

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

	LOGV("android_view_ViewTreeObserver::android_view_ViewTreeObserver(void * proxy) exit");
}
android_view_ViewTreeObserver::android_view_ViewTreeObserver()
{
	LOGV("android_view_ViewTreeObserver::android_view_ViewTreeObserver() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "android/view/ViewTreeObserver";

	LOGV("android_view_ViewTreeObserver className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewTreeObserver cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewTreeObserver jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, "<init>", methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("android_view_ViewTreeObserver::android_view_ViewTreeObserver() exit");	
}
// Public Constructors
// Default Instance Destructor
android_view_ViewTreeObserver::~android_view_ViewTreeObserver()
{
	LOGV("android_view_ViewTreeObserver::~android_view_ViewTreeObserver() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("android_view_ViewTreeObserver::~android_view_ViewTreeObserver() exit");
}
// Functions
bool android_view_ViewTreeObserver::isAlive()
{
	LOGV("bool android_view_ViewTreeObserver::isAlive() enter");

	const char *methodName = "isAlive";
	const char *methodSignature = "()Z";
	const char *className = "android/view/ViewTreeObserver";

	LOGV("android_view_ViewTreeObserver className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewTreeObserver cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewTreeObserver jni address %d", javaObject);


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

	LOGV("bool android_view_ViewTreeObserver::isAlive() exit");

	return result;
}
void android_view_ViewTreeObserver::addOnGlobalFocusChangeListener(AndroidCXX::android_view_ViewTreeObserver_OnGlobalFocusChangeListener& arg0)
{
	LOGV("void android_view_ViewTreeObserver::addOnGlobalFocusChangeListener(AndroidCXX::android_view_ViewTreeObserver_OnGlobalFocusChangeListener& arg0) enter");

	const char *methodName = "addOnGlobalFocusChangeListener";
	const char *methodSignature = "(Landroid/view/ViewTreeObserver$OnGlobalFocusChangeListener;)V";
	const char *className = "android/view/ViewTreeObserver";

	LOGV("android_view_ViewTreeObserver className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewTreeObserver cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewTreeObserver jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.ViewTreeObserver$OnGlobalFocusChangeListener");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_view_ViewTreeObserver_OnGlobalFocusChangeListener(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void android_view_ViewTreeObserver::addOnGlobalFocusChangeListener(AndroidCXX::android_view_ViewTreeObserver_OnGlobalFocusChangeListener& arg0) exit");

}
void android_view_ViewTreeObserver::removeOnGlobalFocusChangeListener(AndroidCXX::android_view_ViewTreeObserver_OnGlobalFocusChangeListener& arg0)
{
	LOGV("void android_view_ViewTreeObserver::removeOnGlobalFocusChangeListener(AndroidCXX::android_view_ViewTreeObserver_OnGlobalFocusChangeListener& arg0) enter");

	const char *methodName = "removeOnGlobalFocusChangeListener";
	const char *methodSignature = "(Landroid/view/ViewTreeObserver$OnGlobalFocusChangeListener;)V";
	const char *className = "android/view/ViewTreeObserver";

	LOGV("android_view_ViewTreeObserver className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewTreeObserver cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewTreeObserver jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.ViewTreeObserver$OnGlobalFocusChangeListener");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_view_ViewTreeObserver_OnGlobalFocusChangeListener(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void android_view_ViewTreeObserver::removeOnGlobalFocusChangeListener(AndroidCXX::android_view_ViewTreeObserver_OnGlobalFocusChangeListener& arg0) exit");

}
void android_view_ViewTreeObserver::addOnGlobalLayoutListener(AndroidCXX::android_view_ViewTreeObserver_OnGlobalLayoutListener& arg0)
{
	LOGV("void android_view_ViewTreeObserver::addOnGlobalLayoutListener(AndroidCXX::android_view_ViewTreeObserver_OnGlobalLayoutListener& arg0) enter");

	const char *methodName = "addOnGlobalLayoutListener";
	const char *methodSignature = "(Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;)V";
	const char *className = "android/view/ViewTreeObserver";

	LOGV("android_view_ViewTreeObserver className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewTreeObserver cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewTreeObserver jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.ViewTreeObserver$OnGlobalLayoutListener");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_view_ViewTreeObserver_OnGlobalLayoutListener(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void android_view_ViewTreeObserver::addOnGlobalLayoutListener(AndroidCXX::android_view_ViewTreeObserver_OnGlobalLayoutListener& arg0) exit");

}
void android_view_ViewTreeObserver::removeGlobalOnLayoutListener(AndroidCXX::android_view_ViewTreeObserver_OnGlobalLayoutListener& arg0)
{
	LOGV("void android_view_ViewTreeObserver::removeGlobalOnLayoutListener(AndroidCXX::android_view_ViewTreeObserver_OnGlobalLayoutListener& arg0) enter");

	const char *methodName = "removeGlobalOnLayoutListener";
	const char *methodSignature = "(Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;)V";
	const char *className = "android/view/ViewTreeObserver";

	LOGV("android_view_ViewTreeObserver className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewTreeObserver cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewTreeObserver jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.ViewTreeObserver$OnGlobalLayoutListener");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_view_ViewTreeObserver_OnGlobalLayoutListener(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void android_view_ViewTreeObserver::removeGlobalOnLayoutListener(AndroidCXX::android_view_ViewTreeObserver_OnGlobalLayoutListener& arg0) exit");

}
void android_view_ViewTreeObserver::removeOnGlobalLayoutListener(AndroidCXX::android_view_ViewTreeObserver_OnGlobalLayoutListener& arg0)
{
	LOGV("void android_view_ViewTreeObserver::removeOnGlobalLayoutListener(AndroidCXX::android_view_ViewTreeObserver_OnGlobalLayoutListener& arg0) enter");

	const char *methodName = "removeOnGlobalLayoutListener";
	const char *methodSignature = "(Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;)V";
	const char *className = "android/view/ViewTreeObserver";

	LOGV("android_view_ViewTreeObserver className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewTreeObserver cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewTreeObserver jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.ViewTreeObserver$OnGlobalLayoutListener");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_view_ViewTreeObserver_OnGlobalLayoutListener(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void android_view_ViewTreeObserver::removeOnGlobalLayoutListener(AndroidCXX::android_view_ViewTreeObserver_OnGlobalLayoutListener& arg0) exit");

}
void android_view_ViewTreeObserver::addOnPreDrawListener(AndroidCXX::android_view_ViewTreeObserver_OnPreDrawListener& arg0)
{
	LOGV("void android_view_ViewTreeObserver::addOnPreDrawListener(AndroidCXX::android_view_ViewTreeObserver_OnPreDrawListener& arg0) enter");

	const char *methodName = "addOnPreDrawListener";
	const char *methodSignature = "(Landroid/view/ViewTreeObserver$OnPreDrawListener;)V";
	const char *className = "android/view/ViewTreeObserver";

	LOGV("android_view_ViewTreeObserver className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewTreeObserver cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewTreeObserver jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.ViewTreeObserver$OnPreDrawListener");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_view_ViewTreeObserver_OnPreDrawListener(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void android_view_ViewTreeObserver::addOnPreDrawListener(AndroidCXX::android_view_ViewTreeObserver_OnPreDrawListener& arg0) exit");

}
void android_view_ViewTreeObserver::removeOnPreDrawListener(AndroidCXX::android_view_ViewTreeObserver_OnPreDrawListener& arg0)
{
	LOGV("void android_view_ViewTreeObserver::removeOnPreDrawListener(AndroidCXX::android_view_ViewTreeObserver_OnPreDrawListener& arg0) enter");

	const char *methodName = "removeOnPreDrawListener";
	const char *methodSignature = "(Landroid/view/ViewTreeObserver$OnPreDrawListener;)V";
	const char *className = "android/view/ViewTreeObserver";

	LOGV("android_view_ViewTreeObserver className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewTreeObserver cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewTreeObserver jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.ViewTreeObserver$OnPreDrawListener");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_view_ViewTreeObserver_OnPreDrawListener(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void android_view_ViewTreeObserver::removeOnPreDrawListener(AndroidCXX::android_view_ViewTreeObserver_OnPreDrawListener& arg0) exit");

}
void android_view_ViewTreeObserver::addOnDrawListener(AndroidCXX::android_view_ViewTreeObserver_OnDrawListener& arg0)
{
	LOGV("void android_view_ViewTreeObserver::addOnDrawListener(AndroidCXX::android_view_ViewTreeObserver_OnDrawListener& arg0) enter");

	const char *methodName = "addOnDrawListener";
	const char *methodSignature = "(Landroid/view/ViewTreeObserver$OnDrawListener;)V";
	const char *className = "android/view/ViewTreeObserver";

	LOGV("android_view_ViewTreeObserver className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewTreeObserver cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewTreeObserver jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.ViewTreeObserver$OnDrawListener");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_view_ViewTreeObserver_OnDrawListener(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void android_view_ViewTreeObserver::addOnDrawListener(AndroidCXX::android_view_ViewTreeObserver_OnDrawListener& arg0) exit");

}
void android_view_ViewTreeObserver::removeOnDrawListener(AndroidCXX::android_view_ViewTreeObserver_OnDrawListener& arg0)
{
	LOGV("void android_view_ViewTreeObserver::removeOnDrawListener(AndroidCXX::android_view_ViewTreeObserver_OnDrawListener& arg0) enter");

	const char *methodName = "removeOnDrawListener";
	const char *methodSignature = "(Landroid/view/ViewTreeObserver$OnDrawListener;)V";
	const char *className = "android/view/ViewTreeObserver";

	LOGV("android_view_ViewTreeObserver className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewTreeObserver cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewTreeObserver jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.ViewTreeObserver$OnDrawListener");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_view_ViewTreeObserver_OnDrawListener(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void android_view_ViewTreeObserver::removeOnDrawListener(AndroidCXX::android_view_ViewTreeObserver_OnDrawListener& arg0) exit");

}
void android_view_ViewTreeObserver::addOnScrollChangedListener(AndroidCXX::android_view_ViewTreeObserver_OnScrollChangedListener& arg0)
{
	LOGV("void android_view_ViewTreeObserver::addOnScrollChangedListener(AndroidCXX::android_view_ViewTreeObserver_OnScrollChangedListener& arg0) enter");

	const char *methodName = "addOnScrollChangedListener";
	const char *methodSignature = "(Landroid/view/ViewTreeObserver$OnScrollChangedListener;)V";
	const char *className = "android/view/ViewTreeObserver";

	LOGV("android_view_ViewTreeObserver className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewTreeObserver cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewTreeObserver jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.ViewTreeObserver$OnScrollChangedListener");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_view_ViewTreeObserver_OnScrollChangedListener(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void android_view_ViewTreeObserver::addOnScrollChangedListener(AndroidCXX::android_view_ViewTreeObserver_OnScrollChangedListener& arg0) exit");

}
void android_view_ViewTreeObserver::removeOnScrollChangedListener(AndroidCXX::android_view_ViewTreeObserver_OnScrollChangedListener& arg0)
{
	LOGV("void android_view_ViewTreeObserver::removeOnScrollChangedListener(AndroidCXX::android_view_ViewTreeObserver_OnScrollChangedListener& arg0) enter");

	const char *methodName = "removeOnScrollChangedListener";
	const char *methodSignature = "(Landroid/view/ViewTreeObserver$OnScrollChangedListener;)V";
	const char *className = "android/view/ViewTreeObserver";

	LOGV("android_view_ViewTreeObserver className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewTreeObserver cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewTreeObserver jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.ViewTreeObserver$OnScrollChangedListener");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_view_ViewTreeObserver_OnScrollChangedListener(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void android_view_ViewTreeObserver::removeOnScrollChangedListener(AndroidCXX::android_view_ViewTreeObserver_OnScrollChangedListener& arg0) exit");

}
void android_view_ViewTreeObserver::addOnTouchModeChangeListener(AndroidCXX::android_view_ViewTreeObserver_OnTouchModeChangeListener& arg0)
{
	LOGV("void android_view_ViewTreeObserver::addOnTouchModeChangeListener(AndroidCXX::android_view_ViewTreeObserver_OnTouchModeChangeListener& arg0) enter");

	const char *methodName = "addOnTouchModeChangeListener";
	const char *methodSignature = "(Landroid/view/ViewTreeObserver$OnTouchModeChangeListener;)V";
	const char *className = "android/view/ViewTreeObserver";

	LOGV("android_view_ViewTreeObserver className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewTreeObserver cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewTreeObserver jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.ViewTreeObserver$OnTouchModeChangeListener");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_view_ViewTreeObserver_OnTouchModeChangeListener(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void android_view_ViewTreeObserver::addOnTouchModeChangeListener(AndroidCXX::android_view_ViewTreeObserver_OnTouchModeChangeListener& arg0) exit");

}
void android_view_ViewTreeObserver::removeOnTouchModeChangeListener(AndroidCXX::android_view_ViewTreeObserver_OnTouchModeChangeListener& arg0)
{
	LOGV("void android_view_ViewTreeObserver::removeOnTouchModeChangeListener(AndroidCXX::android_view_ViewTreeObserver_OnTouchModeChangeListener& arg0) enter");

	const char *methodName = "removeOnTouchModeChangeListener";
	const char *methodSignature = "(Landroid/view/ViewTreeObserver$OnTouchModeChangeListener;)V";
	const char *className = "android/view/ViewTreeObserver";

	LOGV("android_view_ViewTreeObserver className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewTreeObserver cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewTreeObserver jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.ViewTreeObserver$OnTouchModeChangeListener");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_view_ViewTreeObserver_OnTouchModeChangeListener(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void android_view_ViewTreeObserver::removeOnTouchModeChangeListener(AndroidCXX::android_view_ViewTreeObserver_OnTouchModeChangeListener& arg0) exit");

}
void android_view_ViewTreeObserver::dispatchOnGlobalLayout()
{
	LOGV("void android_view_ViewTreeObserver::dispatchOnGlobalLayout() enter");

	const char *methodName = "dispatchOnGlobalLayout";
	const char *methodSignature = "()V";
	const char *className = "android/view/ViewTreeObserver";

	LOGV("android_view_ViewTreeObserver className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewTreeObserver cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewTreeObserver jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	jni->popLocalFrame();

	LOGV("void android_view_ViewTreeObserver::dispatchOnGlobalLayout() exit");

}
bool android_view_ViewTreeObserver::dispatchOnPreDraw()
{
	LOGV("bool android_view_ViewTreeObserver::dispatchOnPreDraw() enter");

	const char *methodName = "dispatchOnPreDraw";
	const char *methodSignature = "()Z";
	const char *className = "android/view/ViewTreeObserver";

	LOGV("android_view_ViewTreeObserver className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewTreeObserver cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewTreeObserver jni address %d", javaObject);


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

	LOGV("bool android_view_ViewTreeObserver::dispatchOnPreDraw() exit");

	return result;
}
void android_view_ViewTreeObserver::dispatchOnDraw()
{
	LOGV("void android_view_ViewTreeObserver::dispatchOnDraw() enter");

	const char *methodName = "dispatchOnDraw";
	const char *methodSignature = "()V";
	const char *className = "android/view/ViewTreeObserver";

	LOGV("android_view_ViewTreeObserver className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_view_ViewTreeObserver cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ViewTreeObserver jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	jni->popLocalFrame();

	LOGV("void android_view_ViewTreeObserver::dispatchOnDraw() exit");

}

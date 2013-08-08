/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
	
	
 		 
 		 
	
	
 		 
	
	
 		 
	


 		 
 		 
 		 
 		 
 		 






















































// Generated Code 

#include <android_widget_AutoCompleteTextView.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "android_widget_AutoCompleteTextView"
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

static long static_obj;
static long static_address = (long) &static_obj;

android_widget_AutoCompleteTextView::android_widget_AutoCompleteTextView(const android_widget_AutoCompleteTextView& cc)
{
	LOGV("android_widget_AutoCompleteTextView::android_widget_AutoCompleteTextView(const android_widget_AutoCompleteTextView& cc) enter");

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

	LOGV("android_widget_AutoCompleteTextView::android_widget_AutoCompleteTextView(const android_widget_AutoCompleteTextView& cc) exit");
}
android_widget_AutoCompleteTextView::android_widget_AutoCompleteTextView(Proxy proxy)
{
	LOGV("android_widget_AutoCompleteTextView::android_widget_AutoCompleteTextView(Proxy proxy) enter");

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

	LOGV("android_widget_AutoCompleteTextView::android_widget_AutoCompleteTextView(Proxy proxy) exit");
}
Proxy android_widget_AutoCompleteTextView::proxy() const
{	
	LOGV("android_widget_AutoCompleteTextView::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("android_widget_AutoCompleteTextView::proxy() exit");	

	return proxy;
}
android_widget_AutoCompleteTextView::android_widget_AutoCompleteTextView(AndroidCXX::android_content_Context const& arg0)
{
	LOGV("android_widget_AutoCompleteTextView::android_widget_AutoCompleteTextView(AndroidCXX::android_content_Context const& arg0) enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "(Landroid/content/Context;)V";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{

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
				cxx_type_hierarchy.type_name = std::string("android.content.Context");
			}
			std::stack<long> converter_stack;
			converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
			convert_android_content_Context(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

			// Convert to JNI
			jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
		}
			
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, methodName, methodSignature),jarg0);
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("android_widget_AutoCompleteTextView::android_widget_AutoCompleteTextView(AndroidCXX::android_content_Context const& arg0) exit");	
}
android_widget_AutoCompleteTextView::android_widget_AutoCompleteTextView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2)
{
	LOGV("android_widget_AutoCompleteTextView::android_widget_AutoCompleteTextView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2) enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "(Landroid/content/Context;Landroid/util/AttributeSet;I)V";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{

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
				cxx_type_hierarchy.type_name = std::string("android.content.Context");
			}
			std::stack<long> converter_stack;
			converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
			convert_android_content_Context(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
				cxx_type_hierarchy.type_name = std::string("android.util.AttributeSet");
			}
			std::stack<long> converter_stack;
			converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
			convert_android_util_AttributeSet(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

			// Convert to JNI
			jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
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
			
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, methodName, methodSignature),jarg0,jarg1,jarg2);
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("android_widget_AutoCompleteTextView::android_widget_AutoCompleteTextView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2) exit");	
}
android_widget_AutoCompleteTextView::android_widget_AutoCompleteTextView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1)
{
	LOGV("android_widget_AutoCompleteTextView::android_widget_AutoCompleteTextView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1) enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "(Landroid/content/Context;Landroid/util/AttributeSet;)V";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{

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
				cxx_type_hierarchy.type_name = std::string("android.content.Context");
			}
			std::stack<long> converter_stack;
			converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
			convert_android_content_Context(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
				cxx_type_hierarchy.type_name = std::string("android.util.AttributeSet");
			}
			std::stack<long> converter_stack;
			converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
			convert_android_util_AttributeSet(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

			// Convert to JNI
			jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
		}
			
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, methodName, methodSignature),jarg0,jarg1);
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("android_widget_AutoCompleteTextView::android_widget_AutoCompleteTextView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1) exit");	
}
// Default Instance Destructor
android_widget_AutoCompleteTextView::~android_widget_AutoCompleteTextView()
{
	LOGV("android_widget_AutoCompleteTextView::~android_widget_AutoCompleteTextView() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("android_widget_AutoCompleteTextView::~android_widget_AutoCompleteTextView() exit");
}
// Functions
void android_widget_AutoCompleteTextView::setThreshold(int const& arg0)
{
	LOGV("void android_widget_AutoCompleteTextView::setThreshold(int const& arg0) enter");

	const char *methodName = "setThreshold";
	const char *methodSignature = "(I)V";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);

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
		
	LOGV("void android_widget_AutoCompleteTextView::setThreshold(int const& arg0) exit");

}
void android_widget_AutoCompleteTextView::setText(AndroidCXX::java_lang_CharSequence const& arg0,bool const& arg1)
{
	LOGV("void android_widget_AutoCompleteTextView::setText(AndroidCXX::java_lang_CharSequence const& arg0,bool const& arg1) enter");

	const char *methodName = "setText";
	const char *methodSignature = "(Ljava/lang/CharSequence;Z)V";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("java.lang.CharSequence");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_lang_CharSequence(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}
	jboolean jarg1;
	{
		long cxx_value = (long) & arg1;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("boolean");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_boolean(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_boolean_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1);
		
	LOGV("void android_widget_AutoCompleteTextView::setText(AndroidCXX::java_lang_CharSequence const& arg0,bool const& arg1) exit");

}
bool android_widget_AutoCompleteTextView::onKeyDown(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1)
{
	LOGV("bool android_widget_AutoCompleteTextView::onKeyDown(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) enter");

	const char *methodName = "onKeyDown";
	const char *methodSignature = "(ILandroid/view/KeyEvent;)Z";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.KeyEvent");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_view_KeyEvent(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jboolean jni_result = (jboolean) jni->invokeBooleanMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1);
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

	bool result = (bool) *((bool *) cxx_value);
	// 
		
	LOGV("bool android_widget_AutoCompleteTextView::onKeyDown(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) exit");

	return result;
}
bool android_widget_AutoCompleteTextView::onKeyUp(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1)
{
	LOGV("bool android_widget_AutoCompleteTextView::onKeyUp(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) enter");

	const char *methodName = "onKeyUp";
	const char *methodSignature = "(ILandroid/view/KeyEvent;)Z";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.KeyEvent");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_view_KeyEvent(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jboolean jni_result = (jboolean) jni->invokeBooleanMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1);
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

	bool result = (bool) *((bool *) cxx_value);
	// 
		
	LOGV("bool android_widget_AutoCompleteTextView::onKeyUp(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) exit");

	return result;
}
void android_widget_AutoCompleteTextView::onWindowFocusChanged(bool const& arg0)
{
	LOGV("void android_widget_AutoCompleteTextView::onWindowFocusChanged(bool const& arg0) enter");

	const char *methodName = "onWindowFocusChanged";
	const char *methodSignature = "(Z)V";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);

	jboolean jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("boolean");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_boolean(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_boolean_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_widget_AutoCompleteTextView::onWindowFocusChanged(bool const& arg0) exit");

}
void android_widget_AutoCompleteTextView::setOnClickListener(AndroidCXX::android_view_View_OnClickListener const& arg0)
{
	LOGV("void android_widget_AutoCompleteTextView::setOnClickListener(AndroidCXX::android_view_View_OnClickListener const& arg0) enter");

	const char *methodName = "setOnClickListener";
	const char *methodSignature = "(Landroid/view/View$OnClickListener;)V";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.View$OnClickListener");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_view_View_OnClickListener(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_widget_AutoCompleteTextView::setOnClickListener(AndroidCXX::android_view_View_OnClickListener const& arg0) exit");

}
bool android_widget_AutoCompleteTextView::onKeyPreIme(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1)
{
	LOGV("bool android_widget_AutoCompleteTextView::onKeyPreIme(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) enter");

	const char *methodName = "onKeyPreIme";
	const char *methodSignature = "(ILandroid/view/KeyEvent;)Z";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.KeyEvent");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_view_KeyEvent(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jboolean jni_result = (jboolean) jni->invokeBooleanMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1);
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

	bool result = (bool) *((bool *) cxx_value);
	// 
		
	LOGV("bool android_widget_AutoCompleteTextView::onKeyPreIme(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) exit");

	return result;
}
void android_widget_AutoCompleteTextView::setOnDismissListener(AndroidCXX::android_widget_AutoCompleteTextView_OnDismissListener const& arg0)
{
	LOGV("void android_widget_AutoCompleteTextView::setOnDismissListener(AndroidCXX::android_widget_AutoCompleteTextView_OnDismissListener const& arg0) enter");

	const char *methodName = "setOnDismissListener";
	const char *methodSignature = "(Landroid/widget/AutoCompleteTextView$OnDismissListener;)V";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.widget.AutoCompleteTextView$OnDismissListener");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_widget_AutoCompleteTextView_OnDismissListener(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_widget_AutoCompleteTextView::setOnDismissListener(AndroidCXX::android_widget_AutoCompleteTextView_OnDismissListener const& arg0) exit");

}
void android_widget_AutoCompleteTextView::setAdapter(AndroidCXX::android_widget_ListAdapter const& arg0)
{
	LOGV("void android_widget_AutoCompleteTextView::setAdapter(AndroidCXX::android_widget_ListAdapter const& arg0) enter");

	const char *methodName = "setAdapter";
	const char *methodSignature = "(Landroid/widget/ListAdapter;)V";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.widget.ListAdapter");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_widget_ListAdapter(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_widget_AutoCompleteTextView::setAdapter(AndroidCXX::android_widget_ListAdapter const& arg0) exit");

}
void android_widget_AutoCompleteTextView::onFilterComplete(int const& arg0)
{
	LOGV("void android_widget_AutoCompleteTextView::onFilterComplete(int const& arg0) enter");

	const char *methodName = "onFilterComplete";
	const char *methodSignature = "(I)V";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);

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
		
	LOGV("void android_widget_AutoCompleteTextView::onFilterComplete(int const& arg0) exit");

}
void android_widget_AutoCompleteTextView::setOnItemClickListener(AndroidCXX::android_widget_AdapterView_OnItemClickListener const& arg0)
{
	LOGV("void android_widget_AutoCompleteTextView::setOnItemClickListener(AndroidCXX::android_widget_AdapterView_OnItemClickListener const& arg0) enter");

	const char *methodName = "setOnItemClickListener";
	const char *methodSignature = "(Landroid/widget/AdapterView$OnItemClickListener;)V";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.widget.AdapterView$OnItemClickListener");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_widget_AdapterView_OnItemClickListener(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_widget_AutoCompleteTextView::setOnItemClickListener(AndroidCXX::android_widget_AdapterView_OnItemClickListener const& arg0) exit");

}
AndroidCXX::android_widget_AdapterView_OnItemClickListener android_widget_AutoCompleteTextView::getOnItemClickListener()
{
	LOGV("AndroidCXX::android_widget_AdapterView_OnItemClickListener android_widget_AutoCompleteTextView::getOnItemClickListener() enter");

	const char *methodName = "getOnItemClickListener";
	const char *methodSignature = "()Landroid/widget/AdapterView$OnItemClickListener;";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("android.widget.AdapterView$OnItemClickListener");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_widget_AdapterView_OnItemClickListener(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_widget_AdapterView_OnItemClickListener result((AndroidCXX::android_widget_AdapterView_OnItemClickListener) *((AndroidCXX::android_widget_AdapterView_OnItemClickListener *) cxx_value));
	delete ((AndroidCXX::android_widget_AdapterView_OnItemClickListener *) cxx_value);
		
	LOGV("AndroidCXX::android_widget_AdapterView_OnItemClickListener android_widget_AutoCompleteTextView::getOnItemClickListener() exit");

	return result;
}
void android_widget_AutoCompleteTextView::setOnItemSelectedListener(AndroidCXX::android_widget_AdapterView_OnItemSelectedListener const& arg0)
{
	LOGV("void android_widget_AutoCompleteTextView::setOnItemSelectedListener(AndroidCXX::android_widget_AdapterView_OnItemSelectedListener const& arg0) enter");

	const char *methodName = "setOnItemSelectedListener";
	const char *methodSignature = "(Landroid/widget/AdapterView$OnItemSelectedListener;)V";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.widget.AdapterView$OnItemSelectedListener");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_widget_AdapterView_OnItemSelectedListener(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_widget_AutoCompleteTextView::setOnItemSelectedListener(AndroidCXX::android_widget_AdapterView_OnItemSelectedListener const& arg0) exit");

}
AndroidCXX::android_widget_AdapterView_OnItemSelectedListener android_widget_AutoCompleteTextView::getOnItemSelectedListener()
{
	LOGV("AndroidCXX::android_widget_AdapterView_OnItemSelectedListener android_widget_AutoCompleteTextView::getOnItemSelectedListener() enter");

	const char *methodName = "getOnItemSelectedListener";
	const char *methodSignature = "()Landroid/widget/AdapterView$OnItemSelectedListener;";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("android.widget.AdapterView$OnItemSelectedListener");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_widget_AdapterView_OnItemSelectedListener(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_widget_AdapterView_OnItemSelectedListener result((AndroidCXX::android_widget_AdapterView_OnItemSelectedListener) *((AndroidCXX::android_widget_AdapterView_OnItemSelectedListener *) cxx_value));
	delete ((AndroidCXX::android_widget_AdapterView_OnItemSelectedListener *) cxx_value);
		
	LOGV("AndroidCXX::android_widget_AdapterView_OnItemSelectedListener android_widget_AutoCompleteTextView::getOnItemSelectedListener() exit");

	return result;
}
AndroidCXX::android_widget_ListAdapter android_widget_AutoCompleteTextView::getAdapter()
{
	LOGV("AndroidCXX::android_widget_ListAdapter android_widget_AutoCompleteTextView::getAdapter() enter");

	const char *methodName = "getAdapter";
	const char *methodSignature = "()Landroid/widget/ListAdapter;";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("android.widget.ListAdapter");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_widget_ListAdapter(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_widget_ListAdapter result((AndroidCXX::android_widget_ListAdapter) *((AndroidCXX::android_widget_ListAdapter *) cxx_value));
	delete ((AndroidCXX::android_widget_ListAdapter *) cxx_value);
		
	LOGV("AndroidCXX::android_widget_ListAdapter android_widget_AutoCompleteTextView::getAdapter() exit");

	return result;
}
void android_widget_AutoCompleteTextView::onCommitCompletion(AndroidCXX::android_view_inputmethod_CompletionInfo const& arg0)
{
	LOGV("void android_widget_AutoCompleteTextView::onCommitCompletion(AndroidCXX::android_view_inputmethod_CompletionInfo const& arg0) enter");

	const char *methodName = "onCommitCompletion";
	const char *methodSignature = "(Landroid/view/inputmethod/CompletionInfo;)V";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.inputmethod.CompletionInfo");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_view_inputmethod_CompletionInfo(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_widget_AutoCompleteTextView::onCommitCompletion(AndroidCXX::android_view_inputmethod_CompletionInfo const& arg0) exit");

}
void android_widget_AutoCompleteTextView::setCompletionHint(AndroidCXX::java_lang_CharSequence const& arg0)
{
	LOGV("void android_widget_AutoCompleteTextView::setCompletionHint(AndroidCXX::java_lang_CharSequence const& arg0) enter");

	const char *methodName = "setCompletionHint";
	const char *methodSignature = "(Ljava/lang/CharSequence;)V";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("java.lang.CharSequence");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_lang_CharSequence(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_widget_AutoCompleteTextView::setCompletionHint(AndroidCXX::java_lang_CharSequence const& arg0) exit");

}
AndroidCXX::java_lang_CharSequence android_widget_AutoCompleteTextView::getCompletionHint()
{
	LOGV("AndroidCXX::java_lang_CharSequence android_widget_AutoCompleteTextView::getCompletionHint() enter");

	const char *methodName = "getCompletionHint";
	const char *methodSignature = "()Ljava/lang/CharSequence;";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("java.lang.CharSequence");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_lang_CharSequence(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::java_lang_CharSequence result((AndroidCXX::java_lang_CharSequence) *((AndroidCXX::java_lang_CharSequence *) cxx_value));
	delete ((AndroidCXX::java_lang_CharSequence *) cxx_value);
		
	LOGV("AndroidCXX::java_lang_CharSequence android_widget_AutoCompleteTextView::getCompletionHint() exit");

	return result;
}
int android_widget_AutoCompleteTextView::getDropDownWidth()
{
	LOGV("int android_widget_AutoCompleteTextView::getDropDownWidth() enter");

	const char *methodName = "getDropDownWidth";
	const char *methodSignature = "()I";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);


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

	int result = (int) *((int *) cxx_value);
	// 
		
	LOGV("int android_widget_AutoCompleteTextView::getDropDownWidth() exit");

	return result;
}
void android_widget_AutoCompleteTextView::setDropDownWidth(int const& arg0)
{
	LOGV("void android_widget_AutoCompleteTextView::setDropDownWidth(int const& arg0) enter");

	const char *methodName = "setDropDownWidth";
	const char *methodSignature = "(I)V";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);

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
		
	LOGV("void android_widget_AutoCompleteTextView::setDropDownWidth(int const& arg0) exit");

}
int android_widget_AutoCompleteTextView::getDropDownHeight()
{
	LOGV("int android_widget_AutoCompleteTextView::getDropDownHeight() enter");

	const char *methodName = "getDropDownHeight";
	const char *methodSignature = "()I";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);


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

	int result = (int) *((int *) cxx_value);
	// 
		
	LOGV("int android_widget_AutoCompleteTextView::getDropDownHeight() exit");

	return result;
}
void android_widget_AutoCompleteTextView::setDropDownHeight(int const& arg0)
{
	LOGV("void android_widget_AutoCompleteTextView::setDropDownHeight(int const& arg0) enter");

	const char *methodName = "setDropDownHeight";
	const char *methodSignature = "(I)V";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);

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
		
	LOGV("void android_widget_AutoCompleteTextView::setDropDownHeight(int const& arg0) exit");

}
int android_widget_AutoCompleteTextView::getDropDownAnchor()
{
	LOGV("int android_widget_AutoCompleteTextView::getDropDownAnchor() enter");

	const char *methodName = "getDropDownAnchor";
	const char *methodSignature = "()I";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);


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

	int result = (int) *((int *) cxx_value);
	// 
		
	LOGV("int android_widget_AutoCompleteTextView::getDropDownAnchor() exit");

	return result;
}
void android_widget_AutoCompleteTextView::setDropDownAnchor(int const& arg0)
{
	LOGV("void android_widget_AutoCompleteTextView::setDropDownAnchor(int const& arg0) enter");

	const char *methodName = "setDropDownAnchor";
	const char *methodSignature = "(I)V";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);

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
		
	LOGV("void android_widget_AutoCompleteTextView::setDropDownAnchor(int const& arg0) exit");

}
AndroidCXX::android_graphics_drawable_Drawable android_widget_AutoCompleteTextView::getDropDownBackground()
{
	LOGV("AndroidCXX::android_graphics_drawable_Drawable android_widget_AutoCompleteTextView::getDropDownBackground() enter");

	const char *methodName = "getDropDownBackground";
	const char *methodSignature = "()Landroid/graphics/drawable/Drawable;";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("android.graphics.drawable.Drawable");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_graphics_drawable_Drawable(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_graphics_drawable_Drawable result((AndroidCXX::android_graphics_drawable_Drawable) *((AndroidCXX::android_graphics_drawable_Drawable *) cxx_value));
	delete ((AndroidCXX::android_graphics_drawable_Drawable *) cxx_value);
		
	LOGV("AndroidCXX::android_graphics_drawable_Drawable android_widget_AutoCompleteTextView::getDropDownBackground() exit");

	return result;
}
void android_widget_AutoCompleteTextView::setDropDownBackgroundDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0)
{
	LOGV("void android_widget_AutoCompleteTextView::setDropDownBackgroundDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0) enter");

	const char *methodName = "setDropDownBackgroundDrawable";
	const char *methodSignature = "(Landroid/graphics/drawable/Drawable;)V";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.graphics.drawable.Drawable");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_graphics_drawable_Drawable(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_widget_AutoCompleteTextView::setDropDownBackgroundDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0) exit");

}
void android_widget_AutoCompleteTextView::setDropDownBackgroundResource(int const& arg0)
{
	LOGV("void android_widget_AutoCompleteTextView::setDropDownBackgroundResource(int const& arg0) enter");

	const char *methodName = "setDropDownBackgroundResource";
	const char *methodSignature = "(I)V";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);

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
		
	LOGV("void android_widget_AutoCompleteTextView::setDropDownBackgroundResource(int const& arg0) exit");

}
void android_widget_AutoCompleteTextView::setDropDownVerticalOffset(int const& arg0)
{
	LOGV("void android_widget_AutoCompleteTextView::setDropDownVerticalOffset(int const& arg0) enter");

	const char *methodName = "setDropDownVerticalOffset";
	const char *methodSignature = "(I)V";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);

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
		
	LOGV("void android_widget_AutoCompleteTextView::setDropDownVerticalOffset(int const& arg0) exit");

}
int android_widget_AutoCompleteTextView::getDropDownVerticalOffset()
{
	LOGV("int android_widget_AutoCompleteTextView::getDropDownVerticalOffset() enter");

	const char *methodName = "getDropDownVerticalOffset";
	const char *methodSignature = "()I";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);


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

	int result = (int) *((int *) cxx_value);
	// 
		
	LOGV("int android_widget_AutoCompleteTextView::getDropDownVerticalOffset() exit");

	return result;
}
void android_widget_AutoCompleteTextView::setDropDownHorizontalOffset(int const& arg0)
{
	LOGV("void android_widget_AutoCompleteTextView::setDropDownHorizontalOffset(int const& arg0) enter");

	const char *methodName = "setDropDownHorizontalOffset";
	const char *methodSignature = "(I)V";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);

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
		
	LOGV("void android_widget_AutoCompleteTextView::setDropDownHorizontalOffset(int const& arg0) exit");

}
int android_widget_AutoCompleteTextView::getDropDownHorizontalOffset()
{
	LOGV("int android_widget_AutoCompleteTextView::getDropDownHorizontalOffset() enter");

	const char *methodName = "getDropDownHorizontalOffset";
	const char *methodSignature = "()I";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);


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

	int result = (int) *((int *) cxx_value);
	// 
		
	LOGV("int android_widget_AutoCompleteTextView::getDropDownHorizontalOffset() exit");

	return result;
}
int android_widget_AutoCompleteTextView::getThreshold()
{
	LOGV("int android_widget_AutoCompleteTextView::getThreshold() enter");

	const char *methodName = "getThreshold";
	const char *methodSignature = "()I";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);


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

	int result = (int) *((int *) cxx_value);
	// 
		
	LOGV("int android_widget_AutoCompleteTextView::getThreshold() exit");

	return result;
}
AndroidCXX::android_widget_AdapterView_OnItemClickListener android_widget_AutoCompleteTextView::getItemClickListener()
{
	LOGV("AndroidCXX::android_widget_AdapterView_OnItemClickListener android_widget_AutoCompleteTextView::getItemClickListener() enter");

	const char *methodName = "getItemClickListener";
	const char *methodSignature = "()Landroid/widget/AdapterView$OnItemClickListener;";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("android.widget.AdapterView$OnItemClickListener");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_widget_AdapterView_OnItemClickListener(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_widget_AdapterView_OnItemClickListener result((AndroidCXX::android_widget_AdapterView_OnItemClickListener) *((AndroidCXX::android_widget_AdapterView_OnItemClickListener *) cxx_value));
	delete ((AndroidCXX::android_widget_AdapterView_OnItemClickListener *) cxx_value);
		
	LOGV("AndroidCXX::android_widget_AdapterView_OnItemClickListener android_widget_AutoCompleteTextView::getItemClickListener() exit");

	return result;
}
AndroidCXX::android_widget_AdapterView_OnItemSelectedListener android_widget_AutoCompleteTextView::getItemSelectedListener()
{
	LOGV("AndroidCXX::android_widget_AdapterView_OnItemSelectedListener android_widget_AutoCompleteTextView::getItemSelectedListener() enter");

	const char *methodName = "getItemSelectedListener";
	const char *methodSignature = "()Landroid/widget/AdapterView$OnItemSelectedListener;";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("android.widget.AdapterView$OnItemSelectedListener");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_widget_AdapterView_OnItemSelectedListener(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_widget_AdapterView_OnItemSelectedListener result((AndroidCXX::android_widget_AdapterView_OnItemSelectedListener) *((AndroidCXX::android_widget_AdapterView_OnItemSelectedListener *) cxx_value));
	delete ((AndroidCXX::android_widget_AdapterView_OnItemSelectedListener *) cxx_value);
		
	LOGV("AndroidCXX::android_widget_AdapterView_OnItemSelectedListener android_widget_AutoCompleteTextView::getItemSelectedListener() exit");

	return result;
}
bool android_widget_AutoCompleteTextView::enoughToFilter()
{
	LOGV("bool android_widget_AutoCompleteTextView::enoughToFilter() enter");

	const char *methodName = "enoughToFilter";
	const char *methodSignature = "()Z";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);


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

	bool result = (bool) *((bool *) cxx_value);
	// 
		
	LOGV("bool android_widget_AutoCompleteTextView::enoughToFilter() exit");

	return result;
}
bool android_widget_AutoCompleteTextView::isPopupShowing()
{
	LOGV("bool android_widget_AutoCompleteTextView::isPopupShowing() enter");

	const char *methodName = "isPopupShowing";
	const char *methodSignature = "()Z";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);


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

	bool result = (bool) *((bool *) cxx_value);
	// 
		
	LOGV("bool android_widget_AutoCompleteTextView::isPopupShowing() exit");

	return result;
}
void android_widget_AutoCompleteTextView::clearListSelection()
{
	LOGV("void android_widget_AutoCompleteTextView::clearListSelection() enter");

	const char *methodName = "clearListSelection";
	const char *methodSignature = "()V";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	LOGV("void android_widget_AutoCompleteTextView::clearListSelection() exit");

}
void android_widget_AutoCompleteTextView::setListSelection(int const& arg0)
{
	LOGV("void android_widget_AutoCompleteTextView::setListSelection(int const& arg0) enter");

	const char *methodName = "setListSelection";
	const char *methodSignature = "(I)V";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);

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
		
	LOGV("void android_widget_AutoCompleteTextView::setListSelection(int const& arg0) exit");

}
int android_widget_AutoCompleteTextView::getListSelection()
{
	LOGV("int android_widget_AutoCompleteTextView::getListSelection() enter");

	const char *methodName = "getListSelection";
	const char *methodSignature = "()I";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);


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

	int result = (int) *((int *) cxx_value);
	// 
		
	LOGV("int android_widget_AutoCompleteTextView::getListSelection() exit");

	return result;
}
void android_widget_AutoCompleteTextView::performCompletion()
{
	LOGV("void android_widget_AutoCompleteTextView::performCompletion() enter");

	const char *methodName = "performCompletion";
	const char *methodSignature = "()V";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	LOGV("void android_widget_AutoCompleteTextView::performCompletion() exit");

}
bool android_widget_AutoCompleteTextView::isPerformingCompletion()
{
	LOGV("bool android_widget_AutoCompleteTextView::isPerformingCompletion() enter");

	const char *methodName = "isPerformingCompletion";
	const char *methodSignature = "()Z";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);


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

	bool result = (bool) *((bool *) cxx_value);
	// 
		
	LOGV("bool android_widget_AutoCompleteTextView::isPerformingCompletion() exit");

	return result;
}
void android_widget_AutoCompleteTextView::dismissDropDown()
{
	LOGV("void android_widget_AutoCompleteTextView::dismissDropDown() enter");

	const char *methodName = "dismissDropDown";
	const char *methodSignature = "()V";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	LOGV("void android_widget_AutoCompleteTextView::dismissDropDown() exit");

}
void android_widget_AutoCompleteTextView::showDropDown()
{
	LOGV("void android_widget_AutoCompleteTextView::showDropDown() enter");

	const char *methodName = "showDropDown";
	const char *methodSignature = "()V";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	LOGV("void android_widget_AutoCompleteTextView::showDropDown() exit");

}
void android_widget_AutoCompleteTextView::setValidator(AndroidCXX::android_widget_AutoCompleteTextView_Validator const& arg0)
{
	LOGV("void android_widget_AutoCompleteTextView::setValidator(AndroidCXX::android_widget_AutoCompleteTextView_Validator const& arg0) enter");

	const char *methodName = "setValidator";
	const char *methodSignature = "(Landroid/widget/AutoCompleteTextView$Validator;)V";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.widget.AutoCompleteTextView$Validator");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_widget_AutoCompleteTextView_Validator(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_widget_AutoCompleteTextView::setValidator(AndroidCXX::android_widget_AutoCompleteTextView_Validator const& arg0) exit");

}
AndroidCXX::android_widget_AutoCompleteTextView_Validator android_widget_AutoCompleteTextView::getValidator()
{
	LOGV("AndroidCXX::android_widget_AutoCompleteTextView_Validator android_widget_AutoCompleteTextView::getValidator() enter");

	const char *methodName = "getValidator";
	const char *methodSignature = "()Landroid/widget/AutoCompleteTextView$Validator;";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("android.widget.AutoCompleteTextView$Validator");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_widget_AutoCompleteTextView_Validator(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_widget_AutoCompleteTextView_Validator result((AndroidCXX::android_widget_AutoCompleteTextView_Validator) *((AndroidCXX::android_widget_AutoCompleteTextView_Validator *) cxx_value));
	delete ((AndroidCXX::android_widget_AutoCompleteTextView_Validator *) cxx_value);
		
	LOGV("AndroidCXX::android_widget_AutoCompleteTextView_Validator android_widget_AutoCompleteTextView::getValidator() exit");

	return result;
}
void android_widget_AutoCompleteTextView::performValidation()
{
	LOGV("void android_widget_AutoCompleteTextView::performValidation() enter");

	const char *methodName = "performValidation";
	const char *methodSignature = "()V";
	const char *className = "android/widget/AutoCompleteTextView";

	LOGV("android_widget_AutoCompleteTextView className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AutoCompleteTextView cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AutoCompleteTextView jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	LOGV("void android_widget_AutoCompleteTextView::performValidation() exit");

}

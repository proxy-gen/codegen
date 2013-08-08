/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
 		 










// Generated Code 

#include <android_widget_SeekBar_OnSeekBarChangeListener.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "android_widget_SeekBar_OnSeekBarChangeListener"
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

static long static_obj;
static long static_address = (long) &static_obj;

android_widget_SeekBar_OnSeekBarChangeListener::android_widget_SeekBar_OnSeekBarChangeListener(const android_widget_SeekBar_OnSeekBarChangeListener& cc)
{
	LOGV("android_widget_SeekBar_OnSeekBarChangeListener::android_widget_SeekBar_OnSeekBarChangeListener(const android_widget_SeekBar_OnSeekBarChangeListener& cc) enter");

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

	LOGV("android_widget_SeekBar_OnSeekBarChangeListener::android_widget_SeekBar_OnSeekBarChangeListener(const android_widget_SeekBar_OnSeekBarChangeListener& cc) exit");
}
android_widget_SeekBar_OnSeekBarChangeListener::android_widget_SeekBar_OnSeekBarChangeListener(Proxy proxy)
{
	LOGV("android_widget_SeekBar_OnSeekBarChangeListener::android_widget_SeekBar_OnSeekBarChangeListener(Proxy proxy) enter");

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

	LOGV("android_widget_SeekBar_OnSeekBarChangeListener::android_widget_SeekBar_OnSeekBarChangeListener(Proxy proxy) exit");
}
Proxy android_widget_SeekBar_OnSeekBarChangeListener::proxy() const
{	
	LOGV("android_widget_SeekBar_OnSeekBarChangeListener::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_SeekBar_OnSeekBarChangeListener cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_SeekBar_OnSeekBarChangeListener jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("android_widget_SeekBar_OnSeekBarChangeListener::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
android_widget_SeekBar_OnSeekBarChangeListener::~android_widget_SeekBar_OnSeekBarChangeListener()
{
	LOGV("android_widget_SeekBar_OnSeekBarChangeListener::~android_widget_SeekBar_OnSeekBarChangeListener() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("android_widget_SeekBar_OnSeekBarChangeListener::~android_widget_SeekBar_OnSeekBarChangeListener() exit");
}
// Functions
void android_widget_SeekBar_OnSeekBarChangeListener::onProgressChanged(AndroidCXX::android_widget_SeekBar const& arg0,int const& arg1,bool const& arg2)
{
	LOGV("void android_widget_SeekBar_OnSeekBarChangeListener::onProgressChanged(AndroidCXX::android_widget_SeekBar const& arg0,int const& arg1,bool const& arg2) enter");

	const char *methodName = "onProgressChanged";
	const char *methodSignature = "(Landroid/widget/SeekBar;IZ)V";
	const char *className = "android/widget/SeekBar$OnSeekBarChangeListener";

	LOGV("android_widget_SeekBar_OnSeekBarChangeListener className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_SeekBar_OnSeekBarChangeListener cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_SeekBar_OnSeekBarChangeListener jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.widget.SeekBar");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_widget_SeekBar(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
	jboolean jarg2;
	{
		long cxx_value = (long) & arg2;
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
		jarg2 = convert_jni_boolean_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1,jarg2);
		
	LOGV("void android_widget_SeekBar_OnSeekBarChangeListener::onProgressChanged(AndroidCXX::android_widget_SeekBar const& arg0,int const& arg1,bool const& arg2) exit");

}
void android_widget_SeekBar_OnSeekBarChangeListener::onStartTrackingTouch(AndroidCXX::android_widget_SeekBar const& arg0)
{
	LOGV("void android_widget_SeekBar_OnSeekBarChangeListener::onStartTrackingTouch(AndroidCXX::android_widget_SeekBar const& arg0) enter");

	const char *methodName = "onStartTrackingTouch";
	const char *methodSignature = "(Landroid/widget/SeekBar;)V";
	const char *className = "android/widget/SeekBar$OnSeekBarChangeListener";

	LOGV("android_widget_SeekBar_OnSeekBarChangeListener className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_SeekBar_OnSeekBarChangeListener cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_SeekBar_OnSeekBarChangeListener jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.widget.SeekBar");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_widget_SeekBar(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_widget_SeekBar_OnSeekBarChangeListener::onStartTrackingTouch(AndroidCXX::android_widget_SeekBar const& arg0) exit");

}
void android_widget_SeekBar_OnSeekBarChangeListener::onStopTrackingTouch(AndroidCXX::android_widget_SeekBar const& arg0)
{
	LOGV("void android_widget_SeekBar_OnSeekBarChangeListener::onStopTrackingTouch(AndroidCXX::android_widget_SeekBar const& arg0) enter");

	const char *methodName = "onStopTrackingTouch";
	const char *methodSignature = "(Landroid/widget/SeekBar;)V";
	const char *className = "android/widget/SeekBar$OnSeekBarChangeListener";

	LOGV("android_widget_SeekBar_OnSeekBarChangeListener className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_SeekBar_OnSeekBarChangeListener cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_SeekBar_OnSeekBarChangeListener jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.widget.SeekBar");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_widget_SeekBar(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_widget_SeekBar_OnSeekBarChangeListener::onStopTrackingTouch(AndroidCXX::android_widget_SeekBar const& arg0) exit");

}

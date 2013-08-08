/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
 		 










// Generated Code 

#include <com_facebook_widget_PlacePickerFragment_SearchTextWatcher.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <CXXConverter.hpp>
#include <FacebookCXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "com_facebook_widget_PlacePickerFragment_SearchTextWatcher"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace FacebookCXX;

// 
// 
// 
// 
// 
// 
// using namespace AndroidCXX;
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

com_facebook_widget_PlacePickerFragment_SearchTextWatcher::com_facebook_widget_PlacePickerFragment_SearchTextWatcher(const com_facebook_widget_PlacePickerFragment_SearchTextWatcher& cc)
{
	LOGV("com_facebook_widget_PlacePickerFragment_SearchTextWatcher::com_facebook_widget_PlacePickerFragment_SearchTextWatcher(const com_facebook_widget_PlacePickerFragment_SearchTextWatcher& cc) enter");

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

	LOGV("com_facebook_widget_PlacePickerFragment_SearchTextWatcher::com_facebook_widget_PlacePickerFragment_SearchTextWatcher(const com_facebook_widget_PlacePickerFragment_SearchTextWatcher& cc) exit");
}
com_facebook_widget_PlacePickerFragment_SearchTextWatcher::com_facebook_widget_PlacePickerFragment_SearchTextWatcher(Proxy proxy)
{
	LOGV("com_facebook_widget_PlacePickerFragment_SearchTextWatcher::com_facebook_widget_PlacePickerFragment_SearchTextWatcher(Proxy proxy) enter");

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

	LOGV("com_facebook_widget_PlacePickerFragment_SearchTextWatcher::com_facebook_widget_PlacePickerFragment_SearchTextWatcher(Proxy proxy) exit");
}
Proxy com_facebook_widget_PlacePickerFragment_SearchTextWatcher::proxy() const
{	
	LOGV("com_facebook_widget_PlacePickerFragment_SearchTextWatcher::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_PlacePickerFragment_SearchTextWatcher cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_PlacePickerFragment_SearchTextWatcher jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("com_facebook_widget_PlacePickerFragment_SearchTextWatcher::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
com_facebook_widget_PlacePickerFragment_SearchTextWatcher::~com_facebook_widget_PlacePickerFragment_SearchTextWatcher()
{
	LOGV("com_facebook_widget_PlacePickerFragment_SearchTextWatcher::~com_facebook_widget_PlacePickerFragment_SearchTextWatcher() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("com_facebook_widget_PlacePickerFragment_SearchTextWatcher::~com_facebook_widget_PlacePickerFragment_SearchTextWatcher() exit");
}
// Functions
void com_facebook_widget_PlacePickerFragment_SearchTextWatcher::onTextChanged(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1,int const& arg2,int const& arg3)
{
	LOGV("void com_facebook_widget_PlacePickerFragment_SearchTextWatcher::onTextChanged(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1,int const& arg2,int const& arg3) enter");

	const char *methodName = "onTextChanged";
	const char *methodSignature = "(Ljava/lang/CharSequence;III)V";
	const char *className = "com/facebook/widget/PlacePickerFragment$SearchTextWatcher";

	LOGV("com_facebook_widget_PlacePickerFragment_SearchTextWatcher className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_PlacePickerFragment_SearchTextWatcher cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_PlacePickerFragment_SearchTextWatcher jni address %d", javaObject);

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
	jint jarg3;
	{
		long cxx_value = (long) & arg3;
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
		jarg3 = convert_jni_int_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1,jarg2,jarg3);
		
	LOGV("void com_facebook_widget_PlacePickerFragment_SearchTextWatcher::onTextChanged(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1,int const& arg2,int const& arg3) exit");

}
void com_facebook_widget_PlacePickerFragment_SearchTextWatcher::beforeTextChanged(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1,int const& arg2,int const& arg3)
{
	LOGV("void com_facebook_widget_PlacePickerFragment_SearchTextWatcher::beforeTextChanged(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1,int const& arg2,int const& arg3) enter");

	const char *methodName = "beforeTextChanged";
	const char *methodSignature = "(Ljava/lang/CharSequence;III)V";
	const char *className = "com/facebook/widget/PlacePickerFragment$SearchTextWatcher";

	LOGV("com_facebook_widget_PlacePickerFragment_SearchTextWatcher className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_PlacePickerFragment_SearchTextWatcher cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_PlacePickerFragment_SearchTextWatcher jni address %d", javaObject);

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
	jint jarg3;
	{
		long cxx_value = (long) & arg3;
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
		jarg3 = convert_jni_int_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1,jarg2,jarg3);
		
	LOGV("void com_facebook_widget_PlacePickerFragment_SearchTextWatcher::beforeTextChanged(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1,int const& arg2,int const& arg3) exit");

}
void com_facebook_widget_PlacePickerFragment_SearchTextWatcher::afterTextChanged(AndroidCXX::android_text_Editable const& arg0)
{
	LOGV("void com_facebook_widget_PlacePickerFragment_SearchTextWatcher::afterTextChanged(AndroidCXX::android_text_Editable const& arg0) enter");

	const char *methodName = "afterTextChanged";
	const char *methodSignature = "(Landroid/text/Editable;)V";
	const char *className = "com/facebook/widget/PlacePickerFragment$SearchTextWatcher";

	LOGV("com_facebook_widget_PlacePickerFragment_SearchTextWatcher className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_PlacePickerFragment_SearchTextWatcher cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_PlacePickerFragment_SearchTextWatcher jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.text.Editable");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_text_Editable(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void com_facebook_widget_PlacePickerFragment_SearchTextWatcher::afterTextChanged(AndroidCXX::android_text_Editable const& arg0) exit");

}

/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
 		 
 		 
	
 		 
	
 		 
	
	
 		 
	
 		 
	














// Generated Code 

#include <android_widget_TabHost_TabSpec.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>
// TODO: FIXME: add include package
// FIXME: remove after testing

#define LOG_TAG "android_widget_TabHost_TabSpec"
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

android_widget_TabHost_TabSpec::android_widget_TabHost_TabSpec(const android_widget_TabHost_TabSpec& cc)
{
	LOGV("android_widget_TabHost_TabSpec::android_widget_TabHost_TabSpec(const android_widget_TabHost_TabSpec& cc) enter");

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

	LOGV("android_widget_TabHost_TabSpec::android_widget_TabHost_TabSpec(const android_widget_TabHost_TabSpec& cc) exit");
}
android_widget_TabHost_TabSpec::android_widget_TabHost_TabSpec(Proxy proxy)
{
	LOGV("android_widget_TabHost_TabSpec::android_widget_TabHost_TabSpec(Proxy proxy) enter");

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

	LOGV("android_widget_TabHost_TabSpec::android_widget_TabHost_TabSpec(Proxy proxy) exit");
}
Proxy android_widget_TabHost_TabSpec::proxy() const
{	
	LOGV("android_widget_TabHost_TabSpec::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_TabHost_TabSpec cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_TabHost_TabSpec jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("android_widget_TabHost_TabSpec::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
android_widget_TabHost_TabSpec::~android_widget_TabHost_TabSpec()
{
	LOGV("android_widget_TabHost_TabSpec::~android_widget_TabHost_TabSpec() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("android_widget_TabHost_TabSpec::~android_widget_TabHost_TabSpec() exit");
}
// Functions
AndroidCXX::java_lang_String android_widget_TabHost_TabSpec::getTag()
{
	LOGV("AndroidCXX::java_lang_String android_widget_TabHost_TabSpec::getTag() enter");

	const char *methodName = "getTag";
	const char *methodSignature = "()Ljava/lang/String;";
	const char *className = "android/widget/TabHost$TabSpec";

	LOGV("android_widget_TabHost_TabSpec className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_TabHost_TabSpec cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_TabHost_TabSpec jni address %d", javaObject);


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

	AndroidCXX::java_lang_String result((AndroidCXX::java_lang_String) *((AndroidCXX::java_lang_String *) cxx_value));
	delete ((AndroidCXX::java_lang_String *) cxx_value);
		
	LOGV("AndroidCXX::java_lang_String android_widget_TabHost_TabSpec::getTag() exit");

	return result;
}
AndroidCXX::android_widget_TabHost_TabSpec android_widget_TabHost_TabSpec::setIndicator(AndroidCXX::java_lang_CharSequence const& arg0,AndroidCXX::android_graphics_drawable_Drawable const& arg1)
{
	LOGV("AndroidCXX::android_widget_TabHost_TabSpec android_widget_TabHost_TabSpec::setIndicator(AndroidCXX::java_lang_CharSequence const& arg0,AndroidCXX::android_graphics_drawable_Drawable const& arg1) enter");

	const char *methodName = "setIndicator";
	const char *methodSignature = "(Ljava/lang/CharSequence;Landroid/graphics/drawable/Drawable;)Landroid/widget/TabHost$TabSpec;";
	const char *className = "android/widget/TabHost$TabSpec";

	LOGV("android_widget_TabHost_TabSpec className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_TabHost_TabSpec cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_TabHost_TabSpec jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.graphics.drawable.Drawable");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_graphics_drawable_Drawable(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
	}

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
			cxx_type_hierarchy.type_name = std::string("android.widget.TabHost$TabSpec");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_widget_TabHost_TabSpec(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_widget_TabHost_TabSpec result((AndroidCXX::android_widget_TabHost_TabSpec) *((AndroidCXX::android_widget_TabHost_TabSpec *) cxx_value));
	delete ((AndroidCXX::android_widget_TabHost_TabSpec *) cxx_value);
		
	LOGV("AndroidCXX::android_widget_TabHost_TabSpec android_widget_TabHost_TabSpec::setIndicator(AndroidCXX::java_lang_CharSequence const& arg0,AndroidCXX::android_graphics_drawable_Drawable const& arg1) exit");

	return result;
}
AndroidCXX::android_widget_TabHost_TabSpec android_widget_TabHost_TabSpec::setIndicator(AndroidCXX::android_view_View const& arg0)
{
	LOGV("AndroidCXX::android_widget_TabHost_TabSpec android_widget_TabHost_TabSpec::setIndicator(AndroidCXX::android_view_View const& arg0) enter");

	const char *methodName = "setIndicator";
	const char *methodSignature = "(Landroid/view/View;)Landroid/widget/TabHost$TabSpec;";
	const char *className = "android/widget/TabHost$TabSpec";

	LOGV("android_widget_TabHost_TabSpec className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_TabHost_TabSpec cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_TabHost_TabSpec jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.View");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_view_View(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
			cxx_type_hierarchy.type_name = std::string("android.widget.TabHost$TabSpec");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_widget_TabHost_TabSpec(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_widget_TabHost_TabSpec result((AndroidCXX::android_widget_TabHost_TabSpec) *((AndroidCXX::android_widget_TabHost_TabSpec *) cxx_value));
	delete ((AndroidCXX::android_widget_TabHost_TabSpec *) cxx_value);
		
	LOGV("AndroidCXX::android_widget_TabHost_TabSpec android_widget_TabHost_TabSpec::setIndicator(AndroidCXX::android_view_View const& arg0) exit");

	return result;
}
AndroidCXX::android_widget_TabHost_TabSpec android_widget_TabHost_TabSpec::setIndicator(AndroidCXX::java_lang_CharSequence const& arg0)
{
	LOGV("AndroidCXX::android_widget_TabHost_TabSpec android_widget_TabHost_TabSpec::setIndicator(AndroidCXX::java_lang_CharSequence const& arg0) enter");

	const char *methodName = "setIndicator";
	const char *methodSignature = "(Ljava/lang/CharSequence;)Landroid/widget/TabHost$TabSpec;";
	const char *className = "android/widget/TabHost$TabSpec";

	LOGV("android_widget_TabHost_TabSpec className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_TabHost_TabSpec cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_TabHost_TabSpec jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.widget.TabHost$TabSpec");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_widget_TabHost_TabSpec(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_widget_TabHost_TabSpec result((AndroidCXX::android_widget_TabHost_TabSpec) *((AndroidCXX::android_widget_TabHost_TabSpec *) cxx_value));
	delete ((AndroidCXX::android_widget_TabHost_TabSpec *) cxx_value);
		
	LOGV("AndroidCXX::android_widget_TabHost_TabSpec android_widget_TabHost_TabSpec::setIndicator(AndroidCXX::java_lang_CharSequence const& arg0) exit");

	return result;
}
AndroidCXX::android_widget_TabHost_TabSpec android_widget_TabHost_TabSpec::setContent(int const& arg0)
{
	LOGV("AndroidCXX::android_widget_TabHost_TabSpec android_widget_TabHost_TabSpec::setContent(int const& arg0) enter");

	const char *methodName = "setContent";
	const char *methodSignature = "(I)Landroid/widget/TabHost$TabSpec;";
	const char *className = "android/widget/TabHost$TabSpec";

	LOGV("android_widget_TabHost_TabSpec className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_TabHost_TabSpec cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_TabHost_TabSpec jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.widget.TabHost$TabSpec");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_widget_TabHost_TabSpec(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_widget_TabHost_TabSpec result((AndroidCXX::android_widget_TabHost_TabSpec) *((AndroidCXX::android_widget_TabHost_TabSpec *) cxx_value));
	delete ((AndroidCXX::android_widget_TabHost_TabSpec *) cxx_value);
		
	LOGV("AndroidCXX::android_widget_TabHost_TabSpec android_widget_TabHost_TabSpec::setContent(int const& arg0) exit");

	return result;
}
AndroidCXX::android_widget_TabHost_TabSpec android_widget_TabHost_TabSpec::setContent(AndroidCXX::android_widget_TabHost_TabContentFactory const& arg0)
{
	LOGV("AndroidCXX::android_widget_TabHost_TabSpec android_widget_TabHost_TabSpec::setContent(AndroidCXX::android_widget_TabHost_TabContentFactory const& arg0) enter");

	const char *methodName = "setContent";
	const char *methodSignature = "(Landroid/widget/TabHost$TabContentFactory;)Landroid/widget/TabHost$TabSpec;";
	const char *className = "android/widget/TabHost$TabSpec";

	LOGV("android_widget_TabHost_TabSpec className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_TabHost_TabSpec cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_TabHost_TabSpec jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.widget.TabHost$TabContentFactory");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_widget_TabHost_TabContentFactory(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
			cxx_type_hierarchy.type_name = std::string("android.widget.TabHost$TabSpec");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_widget_TabHost_TabSpec(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_widget_TabHost_TabSpec result((AndroidCXX::android_widget_TabHost_TabSpec) *((AndroidCXX::android_widget_TabHost_TabSpec *) cxx_value));
	delete ((AndroidCXX::android_widget_TabHost_TabSpec *) cxx_value);
		
	LOGV("AndroidCXX::android_widget_TabHost_TabSpec android_widget_TabHost_TabSpec::setContent(AndroidCXX::android_widget_TabHost_TabContentFactory const& arg0) exit");

	return result;
}
AndroidCXX::android_widget_TabHost_TabSpec android_widget_TabHost_TabSpec::setContent(AndroidCXX::android_content_Intent const& arg0)
{
	LOGV("AndroidCXX::android_widget_TabHost_TabSpec android_widget_TabHost_TabSpec::setContent(AndroidCXX::android_content_Intent const& arg0) enter");

	const char *methodName = "setContent";
	const char *methodSignature = "(Landroid/content/Intent;)Landroid/widget/TabHost$TabSpec;";
	const char *className = "android/widget/TabHost$TabSpec";

	LOGV("android_widget_TabHost_TabSpec className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_TabHost_TabSpec cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_TabHost_TabSpec jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.content.Intent");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_content_Intent(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
			cxx_type_hierarchy.type_name = std::string("android.widget.TabHost$TabSpec");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_widget_TabHost_TabSpec(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_widget_TabHost_TabSpec result((AndroidCXX::android_widget_TabHost_TabSpec) *((AndroidCXX::android_widget_TabHost_TabSpec *) cxx_value));
	delete ((AndroidCXX::android_widget_TabHost_TabSpec *) cxx_value);
		
	LOGV("AndroidCXX::android_widget_TabHost_TabSpec android_widget_TabHost_TabSpec::setContent(AndroidCXX::android_content_Intent const& arg0) exit");

	return result;
}

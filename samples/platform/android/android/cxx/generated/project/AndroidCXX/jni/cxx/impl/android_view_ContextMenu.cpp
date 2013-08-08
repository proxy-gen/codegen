/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
 		 
	
	
 		 
	
 		 
	













// Generated Code 

#include <android_view_ContextMenu.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "android_view_ContextMenu"
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

static long static_obj;
static long static_address = (long) &static_obj;

android_view_ContextMenu::android_view_ContextMenu(const android_view_ContextMenu& cc)
{
	LOGV("android_view_ContextMenu::android_view_ContextMenu(const android_view_ContextMenu& cc) enter");

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

	LOGV("android_view_ContextMenu::android_view_ContextMenu(const android_view_ContextMenu& cc) exit");
}
android_view_ContextMenu::android_view_ContextMenu(Proxy proxy)
{
	LOGV("android_view_ContextMenu::android_view_ContextMenu(Proxy proxy) enter");

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

	LOGV("android_view_ContextMenu::android_view_ContextMenu(Proxy proxy) exit");
}
Proxy android_view_ContextMenu::proxy() const
{	
	LOGV("android_view_ContextMenu::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_ContextMenu cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ContextMenu jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("android_view_ContextMenu::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
android_view_ContextMenu::~android_view_ContextMenu()
{
	LOGV("android_view_ContextMenu::~android_view_ContextMenu() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("android_view_ContextMenu::~android_view_ContextMenu() exit");
}
// Functions
AndroidCXX::android_view_ContextMenu android_view_ContextMenu::setHeaderTitle(int const& arg0)
{
	LOGV("AndroidCXX::android_view_ContextMenu android_view_ContextMenu::setHeaderTitle(int const& arg0) enter");

	const char *methodName = "setHeaderTitle";
	const char *methodSignature = "(I)Landroid/view/ContextMenu;";
	const char *className = "android/view/ContextMenu";

	LOGV("android_view_ContextMenu className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_ContextMenu cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ContextMenu jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.ContextMenu");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_view_ContextMenu(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_view_ContextMenu result((AndroidCXX::android_view_ContextMenu) *((AndroidCXX::android_view_ContextMenu *) cxx_value));
	delete ((AndroidCXX::android_view_ContextMenu *) cxx_value);
		
	LOGV("AndroidCXX::android_view_ContextMenu android_view_ContextMenu::setHeaderTitle(int const& arg0) exit");

	return result;
}
AndroidCXX::android_view_ContextMenu android_view_ContextMenu::setHeaderTitle(AndroidCXX::java_lang_CharSequence const& arg0)
{
	LOGV("AndroidCXX::android_view_ContextMenu android_view_ContextMenu::setHeaderTitle(AndroidCXX::java_lang_CharSequence const& arg0) enter");

	const char *methodName = "setHeaderTitle";
	const char *methodSignature = "(Ljava/lang/CharSequence;)Landroid/view/ContextMenu;";
	const char *className = "android/view/ContextMenu";

	LOGV("android_view_ContextMenu className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_ContextMenu cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ContextMenu jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.ContextMenu");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_view_ContextMenu(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_view_ContextMenu result((AndroidCXX::android_view_ContextMenu) *((AndroidCXX::android_view_ContextMenu *) cxx_value));
	delete ((AndroidCXX::android_view_ContextMenu *) cxx_value);
		
	LOGV("AndroidCXX::android_view_ContextMenu android_view_ContextMenu::setHeaderTitle(AndroidCXX::java_lang_CharSequence const& arg0) exit");

	return result;
}
AndroidCXX::android_view_ContextMenu android_view_ContextMenu::setHeaderIcon(int const& arg0)
{
	LOGV("AndroidCXX::android_view_ContextMenu android_view_ContextMenu::setHeaderIcon(int const& arg0) enter");

	const char *methodName = "setHeaderIcon";
	const char *methodSignature = "(I)Landroid/view/ContextMenu;";
	const char *className = "android/view/ContextMenu";

	LOGV("android_view_ContextMenu className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_ContextMenu cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ContextMenu jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.ContextMenu");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_view_ContextMenu(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_view_ContextMenu result((AndroidCXX::android_view_ContextMenu) *((AndroidCXX::android_view_ContextMenu *) cxx_value));
	delete ((AndroidCXX::android_view_ContextMenu *) cxx_value);
		
	LOGV("AndroidCXX::android_view_ContextMenu android_view_ContextMenu::setHeaderIcon(int const& arg0) exit");

	return result;
}
AndroidCXX::android_view_ContextMenu android_view_ContextMenu::setHeaderIcon(AndroidCXX::android_graphics_drawable_Drawable const& arg0)
{
	LOGV("AndroidCXX::android_view_ContextMenu android_view_ContextMenu::setHeaderIcon(AndroidCXX::android_graphics_drawable_Drawable const& arg0) enter");

	const char *methodName = "setHeaderIcon";
	const char *methodSignature = "(Landroid/graphics/drawable/Drawable;)Landroid/view/ContextMenu;";
	const char *className = "android/view/ContextMenu";

	LOGV("android_view_ContextMenu className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_ContextMenu cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ContextMenu jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.ContextMenu");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_view_ContextMenu(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_view_ContextMenu result((AndroidCXX::android_view_ContextMenu) *((AndroidCXX::android_view_ContextMenu *) cxx_value));
	delete ((AndroidCXX::android_view_ContextMenu *) cxx_value);
		
	LOGV("AndroidCXX::android_view_ContextMenu android_view_ContextMenu::setHeaderIcon(AndroidCXX::android_graphics_drawable_Drawable const& arg0) exit");

	return result;
}
AndroidCXX::android_view_ContextMenu android_view_ContextMenu::setHeaderView(AndroidCXX::android_view_View const& arg0)
{
	LOGV("AndroidCXX::android_view_ContextMenu android_view_ContextMenu::setHeaderView(AndroidCXX::android_view_View const& arg0) enter");

	const char *methodName = "setHeaderView";
	const char *methodSignature = "(Landroid/view/View;)Landroid/view/ContextMenu;";
	const char *className = "android/view/ContextMenu";

	LOGV("android_view_ContextMenu className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_ContextMenu cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ContextMenu jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.ContextMenu");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_view_ContextMenu(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_view_ContextMenu result((AndroidCXX::android_view_ContextMenu) *((AndroidCXX::android_view_ContextMenu *) cxx_value));
	delete ((AndroidCXX::android_view_ContextMenu *) cxx_value);
		
	LOGV("AndroidCXX::android_view_ContextMenu android_view_ContextMenu::setHeaderView(AndroidCXX::android_view_View const& arg0) exit");

	return result;
}
void android_view_ContextMenu::clearHeader()
{
	LOGV("void android_view_ContextMenu::clearHeader() enter");

	const char *methodName = "clearHeader";
	const char *methodSignature = "()V";
	const char *className = "android/view/ContextMenu";

	LOGV("android_view_ContextMenu className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_ContextMenu cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_ContextMenu jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	LOGV("void android_view_ContextMenu::clearHeader() exit");

}

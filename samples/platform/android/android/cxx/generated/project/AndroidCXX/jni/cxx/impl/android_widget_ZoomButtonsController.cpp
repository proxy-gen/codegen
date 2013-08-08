/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
	
 		 
	


 		 


















// Generated Code 

#include <android_widget_ZoomButtonsController.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "android_widget_ZoomButtonsController"
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

static long static_obj;
static long static_address = (long) &static_obj;

android_widget_ZoomButtonsController::android_widget_ZoomButtonsController(const android_widget_ZoomButtonsController& cc)
{
	LOGV("android_widget_ZoomButtonsController::android_widget_ZoomButtonsController(const android_widget_ZoomButtonsController& cc) enter");

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

	LOGV("android_widget_ZoomButtonsController::android_widget_ZoomButtonsController(const android_widget_ZoomButtonsController& cc) exit");
}
android_widget_ZoomButtonsController::android_widget_ZoomButtonsController(Proxy proxy)
{
	LOGV("android_widget_ZoomButtonsController::android_widget_ZoomButtonsController(Proxy proxy) enter");

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

	LOGV("android_widget_ZoomButtonsController::android_widget_ZoomButtonsController(Proxy proxy) exit");
}
Proxy android_widget_ZoomButtonsController::proxy() const
{	
	LOGV("android_widget_ZoomButtonsController::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_ZoomButtonsController cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_ZoomButtonsController jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("android_widget_ZoomButtonsController::proxy() exit");	

	return proxy;
}
android_widget_ZoomButtonsController::android_widget_ZoomButtonsController(AndroidCXX::android_view_View const& arg0)
{
	LOGV("android_widget_ZoomButtonsController::android_widget_ZoomButtonsController(AndroidCXX::android_view_View const& arg0) enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "(Landroid/view/View;)V";
	const char *className = "android/widget/ZoomButtonsController";

	LOGV("android_widget_ZoomButtonsController className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_ZoomButtonsController cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_ZoomButtonsController jni address %d", proxiedComponent);

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
				cxx_type_hierarchy.type_name = std::string("android.view.View");
			}
			std::stack<long> converter_stack;
			converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
			convert_android_view_View(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

			// Convert to JNI
			jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
		}
			
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, methodName, methodSignature),jarg0);
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("android_widget_ZoomButtonsController::android_widget_ZoomButtonsController(AndroidCXX::android_view_View const& arg0) exit");	
}
// Default Instance Destructor
android_widget_ZoomButtonsController::~android_widget_ZoomButtonsController()
{
	LOGV("android_widget_ZoomButtonsController::~android_widget_ZoomButtonsController() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("android_widget_ZoomButtonsController::~android_widget_ZoomButtonsController() exit");
}
// Functions
bool android_widget_ZoomButtonsController::isVisible()
{
	LOGV("bool android_widget_ZoomButtonsController::isVisible() enter");

	const char *methodName = "isVisible";
	const char *methodSignature = "()Z";
	const char *className = "android/widget/ZoomButtonsController";

	LOGV("android_widget_ZoomButtonsController className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_ZoomButtonsController cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_ZoomButtonsController jni address %d", javaObject);


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
		
	LOGV("bool android_widget_ZoomButtonsController::isVisible() exit");

	return result;
}
void android_widget_ZoomButtonsController::setVisible(bool const& arg0)
{
	LOGV("void android_widget_ZoomButtonsController::setVisible(bool const& arg0) enter");

	const char *methodName = "setVisible";
	const char *methodSignature = "(Z)V";
	const char *className = "android/widget/ZoomButtonsController";

	LOGV("android_widget_ZoomButtonsController className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_ZoomButtonsController cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_ZoomButtonsController jni address %d", javaObject);

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
		
	LOGV("void android_widget_ZoomButtonsController::setVisible(bool const& arg0) exit");

}
void android_widget_ZoomButtonsController::setFocusable(bool const& arg0)
{
	LOGV("void android_widget_ZoomButtonsController::setFocusable(bool const& arg0) enter");

	const char *methodName = "setFocusable";
	const char *methodSignature = "(Z)V";
	const char *className = "android/widget/ZoomButtonsController";

	LOGV("android_widget_ZoomButtonsController className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_ZoomButtonsController cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_ZoomButtonsController jni address %d", javaObject);

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
		
	LOGV("void android_widget_ZoomButtonsController::setFocusable(bool const& arg0) exit");

}
bool android_widget_ZoomButtonsController::onTouch(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_MotionEvent const& arg1)
{
	LOGV("bool android_widget_ZoomButtonsController::onTouch(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_MotionEvent const& arg1) enter");

	const char *methodName = "onTouch";
	const char *methodSignature = "(Landroid/view/View;Landroid/view/MotionEvent;)Z";
	const char *className = "android/widget/ZoomButtonsController";

	LOGV("android_widget_ZoomButtonsController className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_ZoomButtonsController cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_ZoomButtonsController jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.MotionEvent");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_view_MotionEvent(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
		
	LOGV("bool android_widget_ZoomButtonsController::onTouch(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_MotionEvent const& arg1) exit");

	return result;
}
AndroidCXX::android_view_ViewGroup android_widget_ZoomButtonsController::getContainer()
{
	LOGV("AndroidCXX::android_view_ViewGroup android_widget_ZoomButtonsController::getContainer() enter");

	const char *methodName = "getContainer";
	const char *methodSignature = "()Landroid/view/ViewGroup;";
	const char *className = "android/widget/ZoomButtonsController";

	LOGV("android_widget_ZoomButtonsController className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_ZoomButtonsController cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_ZoomButtonsController jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("android.view.ViewGroup");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_view_ViewGroup(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_view_ViewGroup result((AndroidCXX::android_view_ViewGroup) *((AndroidCXX::android_view_ViewGroup *) cxx_value));
	delete ((AndroidCXX::android_view_ViewGroup *) cxx_value);
		
	LOGV("AndroidCXX::android_view_ViewGroup android_widget_ZoomButtonsController::getContainer() exit");

	return result;
}
void android_widget_ZoomButtonsController::setZoomSpeed(long const& arg0)
{
	LOGV("void android_widget_ZoomButtonsController::setZoomSpeed(long const& arg0) enter");

	const char *methodName = "setZoomSpeed";
	const char *methodSignature = "(J)V";
	const char *className = "android/widget/ZoomButtonsController";

	LOGV("android_widget_ZoomButtonsController className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_ZoomButtonsController cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_ZoomButtonsController jni address %d", javaObject);

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
		
	LOGV("void android_widget_ZoomButtonsController::setZoomSpeed(long const& arg0) exit");

}
void android_widget_ZoomButtonsController::setZoomInEnabled(bool const& arg0)
{
	LOGV("void android_widget_ZoomButtonsController::setZoomInEnabled(bool const& arg0) enter");

	const char *methodName = "setZoomInEnabled";
	const char *methodSignature = "(Z)V";
	const char *className = "android/widget/ZoomButtonsController";

	LOGV("android_widget_ZoomButtonsController className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_ZoomButtonsController cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_ZoomButtonsController jni address %d", javaObject);

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
		
	LOGV("void android_widget_ZoomButtonsController::setZoomInEnabled(bool const& arg0) exit");

}
void android_widget_ZoomButtonsController::setZoomOutEnabled(bool const& arg0)
{
	LOGV("void android_widget_ZoomButtonsController::setZoomOutEnabled(bool const& arg0) enter");

	const char *methodName = "setZoomOutEnabled";
	const char *methodSignature = "(Z)V";
	const char *className = "android/widget/ZoomButtonsController";

	LOGV("android_widget_ZoomButtonsController className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_ZoomButtonsController cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_ZoomButtonsController jni address %d", javaObject);

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
		
	LOGV("void android_widget_ZoomButtonsController::setZoomOutEnabled(bool const& arg0) exit");

}
void android_widget_ZoomButtonsController::setOnZoomListener(AndroidCXX::android_widget_ZoomButtonsController_OnZoomListener const& arg0)
{
	LOGV("void android_widget_ZoomButtonsController::setOnZoomListener(AndroidCXX::android_widget_ZoomButtonsController_OnZoomListener const& arg0) enter");

	const char *methodName = "setOnZoomListener";
	const char *methodSignature = "(Landroid/widget/ZoomButtonsController$OnZoomListener;)V";
	const char *className = "android/widget/ZoomButtonsController";

	LOGV("android_widget_ZoomButtonsController className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_ZoomButtonsController cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_ZoomButtonsController jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.widget.ZoomButtonsController$OnZoomListener");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_widget_ZoomButtonsController_OnZoomListener(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_widget_ZoomButtonsController::setOnZoomListener(AndroidCXX::android_widget_ZoomButtonsController_OnZoomListener const& arg0) exit");

}
bool android_widget_ZoomButtonsController::isAutoDismissed()
{
	LOGV("bool android_widget_ZoomButtonsController::isAutoDismissed() enter");

	const char *methodName = "isAutoDismissed";
	const char *methodSignature = "()Z";
	const char *className = "android/widget/ZoomButtonsController";

	LOGV("android_widget_ZoomButtonsController className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_ZoomButtonsController cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_ZoomButtonsController jni address %d", javaObject);


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
		
	LOGV("bool android_widget_ZoomButtonsController::isAutoDismissed() exit");

	return result;
}
void android_widget_ZoomButtonsController::setAutoDismissed(bool const& arg0)
{
	LOGV("void android_widget_ZoomButtonsController::setAutoDismissed(bool const& arg0) enter");

	const char *methodName = "setAutoDismissed";
	const char *methodSignature = "(Z)V";
	const char *className = "android/widget/ZoomButtonsController";

	LOGV("android_widget_ZoomButtonsController className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_ZoomButtonsController cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_ZoomButtonsController jni address %d", javaObject);

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
		
	LOGV("void android_widget_ZoomButtonsController::setAutoDismissed(bool const& arg0) exit");

}
AndroidCXX::android_view_View android_widget_ZoomButtonsController::getZoomControls()
{
	LOGV("AndroidCXX::android_view_View android_widget_ZoomButtonsController::getZoomControls() enter");

	const char *methodName = "getZoomControls";
	const char *methodSignature = "()Landroid/view/View;";
	const char *className = "android/widget/ZoomButtonsController";

	LOGV("android_widget_ZoomButtonsController className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_ZoomButtonsController cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_ZoomButtonsController jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("android.view.View");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_view_View(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_view_View result((AndroidCXX::android_view_View) *((AndroidCXX::android_view_View *) cxx_value));
	delete ((AndroidCXX::android_view_View *) cxx_value);
		
	LOGV("AndroidCXX::android_view_View android_widget_ZoomButtonsController::getZoomControls() exit");

	return result;
}

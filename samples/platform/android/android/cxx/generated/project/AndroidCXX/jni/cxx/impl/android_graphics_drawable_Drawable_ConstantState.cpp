/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
 		 
	











// Generated Code 

#include <android_graphics_drawable_Drawable_ConstantState.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>
// TODO: FIXME: add include package
// FIXME: remove after testing

#define LOG_TAG "android_graphics_drawable_Drawable_ConstantState"
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

android_graphics_drawable_Drawable_ConstantState::android_graphics_drawable_Drawable_ConstantState(const android_graphics_drawable_Drawable_ConstantState& cc)
{
	LOGV("android_graphics_drawable_Drawable_ConstantState::android_graphics_drawable_Drawable_ConstantState(const android_graphics_drawable_Drawable_ConstantState& cc) enter");

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

	LOGV("android_graphics_drawable_Drawable_ConstantState::android_graphics_drawable_Drawable_ConstantState(const android_graphics_drawable_Drawable_ConstantState& cc) exit");
}
android_graphics_drawable_Drawable_ConstantState::android_graphics_drawable_Drawable_ConstantState(Proxy proxy)
{
	LOGV("android_graphics_drawable_Drawable_ConstantState::android_graphics_drawable_Drawable_ConstantState(Proxy proxy) enter");

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

	LOGV("android_graphics_drawable_Drawable_ConstantState::android_graphics_drawable_Drawable_ConstantState(Proxy proxy) exit");
}
Proxy android_graphics_drawable_Drawable_ConstantState::proxy() const
{	
	LOGV("android_graphics_drawable_Drawable_ConstantState::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_graphics_drawable_Drawable_ConstantState cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("android_graphics_drawable_Drawable_ConstantState jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("android_graphics_drawable_Drawable_ConstantState::proxy() exit");	

	return proxy;
}
android_graphics_drawable_Drawable_ConstantState::android_graphics_drawable_Drawable_ConstantState()
{
	LOGV("android_graphics_drawable_Drawable_ConstantState::android_graphics_drawable_Drawable_ConstantState() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "android/graphics/drawable/Drawable$ConstantState";

	LOGV("android_graphics_drawable_Drawable_ConstantState className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_graphics_drawable_Drawable_ConstantState cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("android_graphics_drawable_Drawable_ConstantState jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{

			
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, methodName, methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("android_graphics_drawable_Drawable_ConstantState::android_graphics_drawable_Drawable_ConstantState() exit");	
}
// Default Instance Destructor
android_graphics_drawable_Drawable_ConstantState::~android_graphics_drawable_Drawable_ConstantState()
{
	LOGV("android_graphics_drawable_Drawable_ConstantState::~android_graphics_drawable_Drawable_ConstantState() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("android_graphics_drawable_Drawable_ConstantState::~android_graphics_drawable_Drawable_ConstantState() exit");
}
// Functions
int android_graphics_drawable_Drawable_ConstantState::getChangingConfigurations()
{
	LOGV("int android_graphics_drawable_Drawable_ConstantState::getChangingConfigurations() enter");

	const char *methodName = "getChangingConfigurations";
	const char *methodSignature = "()I";
	const char *className = "android/graphics/drawable/Drawable$ConstantState";

	LOGV("android_graphics_drawable_Drawable_ConstantState className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_graphics_drawable_Drawable_ConstantState cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_graphics_drawable_Drawable_ConstantState jni address %d", javaObject);


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
		
	LOGV("int android_graphics_drawable_Drawable_ConstantState::getChangingConfigurations() exit");

	return result;
}
AndroidCXX::android_graphics_drawable_Drawable android_graphics_drawable_Drawable_ConstantState::newDrawable()
{
	LOGV("AndroidCXX::android_graphics_drawable_Drawable android_graphics_drawable_Drawable_ConstantState::newDrawable() enter");

	const char *methodName = "newDrawable";
	const char *methodSignature = "()Landroid/graphics/drawable/Drawable;";
	const char *className = "android/graphics/drawable/Drawable$ConstantState";

	LOGV("android_graphics_drawable_Drawable_ConstantState className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_graphics_drawable_Drawable_ConstantState cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_graphics_drawable_Drawable_ConstantState jni address %d", javaObject);


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
		
	LOGV("AndroidCXX::android_graphics_drawable_Drawable android_graphics_drawable_Drawable_ConstantState::newDrawable() exit");

	return result;
}
AndroidCXX::android_graphics_drawable_Drawable android_graphics_drawable_Drawable_ConstantState::newDrawable(AndroidCXX::android_content_res_Resources const& arg0)
{
	LOGV("AndroidCXX::android_graphics_drawable_Drawable android_graphics_drawable_Drawable_ConstantState::newDrawable(AndroidCXX::android_content_res_Resources const& arg0) enter");

	const char *methodName = "newDrawable";
	const char *methodSignature = "(Landroid/content/res/Resources;)Landroid/graphics/drawable/Drawable;";
	const char *className = "android/graphics/drawable/Drawable$ConstantState";

	LOGV("android_graphics_drawable_Drawable_ConstantState className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_graphics_drawable_Drawable_ConstantState cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_graphics_drawable_Drawable_ConstantState jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.content.res.Resources");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_content_res_Resources(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
			cxx_type_hierarchy.type_name = std::string("android.graphics.drawable.Drawable");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_graphics_drawable_Drawable(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_graphics_drawable_Drawable result((AndroidCXX::android_graphics_drawable_Drawable) *((AndroidCXX::android_graphics_drawable_Drawable *) cxx_value));
	delete ((AndroidCXX::android_graphics_drawable_Drawable *) cxx_value);
		
	LOGV("AndroidCXX::android_graphics_drawable_Drawable android_graphics_drawable_Drawable_ConstantState::newDrawable(AndroidCXX::android_content_res_Resources const& arg0) exit");

	return result;
}

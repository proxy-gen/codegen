/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//




 		 






// Generated Code 

#include <android_widget_AdapterView_AdapterContextMenuInfo.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>
// TODO: FIXME: add include package
// FIXME: remove after testing

#define LOG_TAG "android_widget_AdapterView_AdapterContextMenuInfo"
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

static long static_obj;
static long static_address = (long) &static_obj;

android_widget_AdapterView_AdapterContextMenuInfo::android_widget_AdapterView_AdapterContextMenuInfo(const android_widget_AdapterView_AdapterContextMenuInfo& cc)
{
	LOGV("android_widget_AdapterView_AdapterContextMenuInfo::android_widget_AdapterView_AdapterContextMenuInfo(const android_widget_AdapterView_AdapterContextMenuInfo& cc) enter");

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

	LOGV("android_widget_AdapterView_AdapterContextMenuInfo::android_widget_AdapterView_AdapterContextMenuInfo(const android_widget_AdapterView_AdapterContextMenuInfo& cc) exit");
}
android_widget_AdapterView_AdapterContextMenuInfo::android_widget_AdapterView_AdapterContextMenuInfo(Proxy proxy)
{
	LOGV("android_widget_AdapterView_AdapterContextMenuInfo::android_widget_AdapterView_AdapterContextMenuInfo(Proxy proxy) enter");

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

	LOGV("android_widget_AdapterView_AdapterContextMenuInfo::android_widget_AdapterView_AdapterContextMenuInfo(Proxy proxy) exit");
}
Proxy android_widget_AdapterView_AdapterContextMenuInfo::proxy() const
{	
	LOGV("android_widget_AdapterView_AdapterContextMenuInfo::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_widget_AdapterView_AdapterContextMenuInfo cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AdapterView_AdapterContextMenuInfo jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("android_widget_AdapterView_AdapterContextMenuInfo::proxy() exit");	

	return proxy;
}
android_widget_AdapterView_AdapterContextMenuInfo::android_widget_AdapterView_AdapterContextMenuInfo(AndroidCXX::android_view_View const& arg0,int const& arg1,long const& arg2)
{
	LOGV("android_widget_AdapterView_AdapterContextMenuInfo::android_widget_AdapterView_AdapterContextMenuInfo(AndroidCXX::android_view_View const& arg0,int const& arg1,long const& arg2) enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "(Landroid/view/View;IJ)V";
	const char *className = "android/widget/AdapterView$AdapterContextMenuInfo";

	LOGV("android_widget_AdapterView_AdapterContextMenuInfo className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_AdapterView_AdapterContextMenuInfo cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_AdapterView_AdapterContextMenuInfo jni address %d", proxiedComponent);

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
		jlong jarg2;
		{
			long cxx_value = (long) & arg2;
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
			jarg2 = convert_jni_long_to_jni(java_value);
		}
			
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, methodName, methodSignature),jarg0,jarg1,jarg2);
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("android_widget_AdapterView_AdapterContextMenuInfo::android_widget_AdapterView_AdapterContextMenuInfo(AndroidCXX::android_view_View const& arg0,int const& arg1,long const& arg2) exit");	
}
// Default Instance Destructor
android_widget_AdapterView_AdapterContextMenuInfo::~android_widget_AdapterView_AdapterContextMenuInfo()
{
	LOGV("android_widget_AdapterView_AdapterContextMenuInfo::~android_widget_AdapterView_AdapterContextMenuInfo() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("android_widget_AdapterView_AdapterContextMenuInfo::~android_widget_AdapterView_AdapterContextMenuInfo() exit");
}
// Functions

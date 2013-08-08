/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
 		 


 		 
 		 
 		 








// Generated Code 

#include <com_facebook_android_Facebook_TokenRefreshServiceConnection.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <CXXConverter.hpp>
#include <FacebookCXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "com_facebook_android_Facebook_TokenRefreshServiceConnection"
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

com_facebook_android_Facebook_TokenRefreshServiceConnection::com_facebook_android_Facebook_TokenRefreshServiceConnection(const com_facebook_android_Facebook_TokenRefreshServiceConnection& cc)
{
	LOGV("com_facebook_android_Facebook_TokenRefreshServiceConnection::com_facebook_android_Facebook_TokenRefreshServiceConnection(const com_facebook_android_Facebook_TokenRefreshServiceConnection& cc) enter");

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

	LOGV("com_facebook_android_Facebook_TokenRefreshServiceConnection::com_facebook_android_Facebook_TokenRefreshServiceConnection(const com_facebook_android_Facebook_TokenRefreshServiceConnection& cc) exit");
}
com_facebook_android_Facebook_TokenRefreshServiceConnection::com_facebook_android_Facebook_TokenRefreshServiceConnection(Proxy proxy)
{
	LOGV("com_facebook_android_Facebook_TokenRefreshServiceConnection::com_facebook_android_Facebook_TokenRefreshServiceConnection(Proxy proxy) enter");

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

	LOGV("com_facebook_android_Facebook_TokenRefreshServiceConnection::com_facebook_android_Facebook_TokenRefreshServiceConnection(Proxy proxy) exit");
}
Proxy com_facebook_android_Facebook_TokenRefreshServiceConnection::proxy() const
{	
	LOGV("com_facebook_android_Facebook_TokenRefreshServiceConnection::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_android_Facebook_TokenRefreshServiceConnection cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_android_Facebook_TokenRefreshServiceConnection jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("com_facebook_android_Facebook_TokenRefreshServiceConnection::proxy() exit");	

	return proxy;
}
com_facebook_android_Facebook_TokenRefreshServiceConnection::com_facebook_android_Facebook_TokenRefreshServiceConnection(FacebookCXX::com_facebook_android_Facebook const& arg0,AndroidCXX::android_content_Context const& arg1,FacebookCXX::com_facebook_android_Facebook_ServiceListener const& arg2)
{
	LOGV("com_facebook_android_Facebook_TokenRefreshServiceConnection::com_facebook_android_Facebook_TokenRefreshServiceConnection(FacebookCXX::com_facebook_android_Facebook const& arg0,AndroidCXX::android_content_Context const& arg1,FacebookCXX::com_facebook_android_Facebook_ServiceListener const& arg2) enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "(Lcom/facebook/android/Facebook;Landroid/content/Context;Lcom/facebook/android/Facebook$ServiceListener;)V";
	const char *className = "com/facebook/android/Facebook$TokenRefreshServiceConnection";

	LOGV("com_facebook_android_Facebook_TokenRefreshServiceConnection className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_android_Facebook_TokenRefreshServiceConnection cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_android_Facebook_TokenRefreshServiceConnection jni address %d", proxiedComponent);

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
				cxx_type_hierarchy.type_name = std::string("com.facebook.android.Facebook");
			}
			std::stack<long> converter_stack;
			converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
			convert_com_facebook_android_Facebook(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
				cxx_type_hierarchy.type_name = std::string("android.content.Context");
			}
			std::stack<long> converter_stack;
			converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
			convert_android_content_Context(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

			// Convert to JNI
			jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
		}
		jobject jarg2;
		{
			long cxx_value = (long) & arg2;
			long java_value = 0;

			CXXTypeHierarchy cxx_type_hierarchy;
			std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
			
			cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
			{
				CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
				cxx_type_hierarchy_stack.pop();
				cxx_type_hierarchy.type_name = std::string("com.facebook.android.Facebook$ServiceListener");
			}
			std::stack<long> converter_stack;
			converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
			convert_com_facebook_android_Facebook_ServiceListener(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

			// Convert to JNI
			jarg2 = convert_jni_java_lang_Object_to_jni(java_value);
		}
			
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, methodName, methodSignature),jarg0,jarg1,jarg2);
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("com_facebook_android_Facebook_TokenRefreshServiceConnection::com_facebook_android_Facebook_TokenRefreshServiceConnection(FacebookCXX::com_facebook_android_Facebook const& arg0,AndroidCXX::android_content_Context const& arg1,FacebookCXX::com_facebook_android_Facebook_ServiceListener const& arg2) exit");	
}
// Default Instance Destructor
com_facebook_android_Facebook_TokenRefreshServiceConnection::~com_facebook_android_Facebook_TokenRefreshServiceConnection()
{
	LOGV("com_facebook_android_Facebook_TokenRefreshServiceConnection::~com_facebook_android_Facebook_TokenRefreshServiceConnection() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("com_facebook_android_Facebook_TokenRefreshServiceConnection::~com_facebook_android_Facebook_TokenRefreshServiceConnection() exit");
}
// Functions
void com_facebook_android_Facebook_TokenRefreshServiceConnection::onServiceConnected(AndroidCXX::android_content_ComponentName const& arg0,AndroidCXX::android_os_IBinder const& arg1)
{
	LOGV("void com_facebook_android_Facebook_TokenRefreshServiceConnection::onServiceConnected(AndroidCXX::android_content_ComponentName const& arg0,AndroidCXX::android_os_IBinder const& arg1) enter");

	const char *methodName = "onServiceConnected";
	const char *methodSignature = "(Landroid/content/ComponentName;Landroid/os/IBinder;)V";
	const char *className = "com/facebook/android/Facebook$TokenRefreshServiceConnection";

	LOGV("com_facebook_android_Facebook_TokenRefreshServiceConnection className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_android_Facebook_TokenRefreshServiceConnection cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_android_Facebook_TokenRefreshServiceConnection jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.content.ComponentName");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_content_ComponentName(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
			cxx_type_hierarchy.type_name = std::string("android.os.IBinder");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_os_IBinder(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1);
		
	LOGV("void com_facebook_android_Facebook_TokenRefreshServiceConnection::onServiceConnected(AndroidCXX::android_content_ComponentName const& arg0,AndroidCXX::android_os_IBinder const& arg1) exit");

}
void com_facebook_android_Facebook_TokenRefreshServiceConnection::onServiceDisconnected(AndroidCXX::android_content_ComponentName const& arg0)
{
	LOGV("void com_facebook_android_Facebook_TokenRefreshServiceConnection::onServiceDisconnected(AndroidCXX::android_content_ComponentName const& arg0) enter");

	const char *methodName = "onServiceDisconnected";
	const char *methodSignature = "(Landroid/content/ComponentName;)V";
	const char *className = "com/facebook/android/Facebook$TokenRefreshServiceConnection";

	LOGV("com_facebook_android_Facebook_TokenRefreshServiceConnection className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_android_Facebook_TokenRefreshServiceConnection cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_android_Facebook_TokenRefreshServiceConnection jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.content.ComponentName");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_content_ComponentName(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void com_facebook_android_Facebook_TokenRefreshServiceConnection::onServiceDisconnected(AndroidCXX::android_content_ComponentName const& arg0) exit");

}

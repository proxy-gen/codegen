/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
 		 


 		 
 		 
 		 










// Generated Code 

#include <com_facebook_SharedPreferencesTokenCachingStrategy.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <CXXConverter.hpp>
#include <FacebookCXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "com_facebook_SharedPreferencesTokenCachingStrategy"
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

static long static_obj;
static long static_address = (long) &static_obj;

com_facebook_SharedPreferencesTokenCachingStrategy::com_facebook_SharedPreferencesTokenCachingStrategy(const com_facebook_SharedPreferencesTokenCachingStrategy& cc)
{
	LOGV("com_facebook_SharedPreferencesTokenCachingStrategy::com_facebook_SharedPreferencesTokenCachingStrategy(const com_facebook_SharedPreferencesTokenCachingStrategy& cc) enter");

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

	LOGV("com_facebook_SharedPreferencesTokenCachingStrategy::com_facebook_SharedPreferencesTokenCachingStrategy(const com_facebook_SharedPreferencesTokenCachingStrategy& cc) exit");
}
com_facebook_SharedPreferencesTokenCachingStrategy::com_facebook_SharedPreferencesTokenCachingStrategy(Proxy proxy)
{
	LOGV("com_facebook_SharedPreferencesTokenCachingStrategy::com_facebook_SharedPreferencesTokenCachingStrategy(Proxy proxy) enter");

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

	LOGV("com_facebook_SharedPreferencesTokenCachingStrategy::com_facebook_SharedPreferencesTokenCachingStrategy(Proxy proxy) exit");
}
Proxy com_facebook_SharedPreferencesTokenCachingStrategy::proxy() const
{	
	LOGV("com_facebook_SharedPreferencesTokenCachingStrategy::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_SharedPreferencesTokenCachingStrategy cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_SharedPreferencesTokenCachingStrategy jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("com_facebook_SharedPreferencesTokenCachingStrategy::proxy() exit");	

	return proxy;
}
com_facebook_SharedPreferencesTokenCachingStrategy::com_facebook_SharedPreferencesTokenCachingStrategy(AndroidCXX::android_content_Context const& arg0)
{
	LOGV("com_facebook_SharedPreferencesTokenCachingStrategy::com_facebook_SharedPreferencesTokenCachingStrategy(AndroidCXX::android_content_Context const& arg0) enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "(Landroid/content/Context;)V";
	const char *className = "com/facebook/SharedPreferencesTokenCachingStrategy";

	LOGV("com_facebook_SharedPreferencesTokenCachingStrategy className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_SharedPreferencesTokenCachingStrategy cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_SharedPreferencesTokenCachingStrategy jni address %d", proxiedComponent);

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

	LOGV("com_facebook_SharedPreferencesTokenCachingStrategy::com_facebook_SharedPreferencesTokenCachingStrategy(AndroidCXX::android_content_Context const& arg0) exit");	
}
com_facebook_SharedPreferencesTokenCachingStrategy::com_facebook_SharedPreferencesTokenCachingStrategy(AndroidCXX::android_content_Context const& arg0,AndroidCXX::java_lang_String const& arg1)
{
	LOGV("com_facebook_SharedPreferencesTokenCachingStrategy::com_facebook_SharedPreferencesTokenCachingStrategy(AndroidCXX::android_content_Context const& arg0,AndroidCXX::java_lang_String const& arg1) enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "(Landroid/content/Context;Ljava/lang/String;)V";
	const char *className = "com/facebook/SharedPreferencesTokenCachingStrategy";

	LOGV("com_facebook_SharedPreferencesTokenCachingStrategy className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_SharedPreferencesTokenCachingStrategy cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_SharedPreferencesTokenCachingStrategy jni address %d", proxiedComponent);

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
		jstring jarg1;
		{
			long cxx_value = (long) & arg1;
			long java_value = 0;

			CXXTypeHierarchy cxx_type_hierarchy;
			std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
			
			cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
			{
				CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
				cxx_type_hierarchy_stack.pop();
				cxx_type_hierarchy.type_name = std::string("java.lang.String");
			}
			std::stack<long> converter_stack;
			converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
			convert_java_lang_String(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

			// Convert to JNI
			jarg1 = convert_jni_string_to_jni(java_value);
		}
			
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, methodName, methodSignature),jarg0,jarg1);
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("com_facebook_SharedPreferencesTokenCachingStrategy::com_facebook_SharedPreferencesTokenCachingStrategy(AndroidCXX::android_content_Context const& arg0,AndroidCXX::java_lang_String const& arg1) exit");	
}
// Default Instance Destructor
com_facebook_SharedPreferencesTokenCachingStrategy::~com_facebook_SharedPreferencesTokenCachingStrategy()
{
	LOGV("com_facebook_SharedPreferencesTokenCachingStrategy::~com_facebook_SharedPreferencesTokenCachingStrategy() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("com_facebook_SharedPreferencesTokenCachingStrategy::~com_facebook_SharedPreferencesTokenCachingStrategy() exit");
}
// Functions
void com_facebook_SharedPreferencesTokenCachingStrategy::clear()
{
	LOGV("void com_facebook_SharedPreferencesTokenCachingStrategy::clear() enter");

	const char *methodName = "clear";
	const char *methodSignature = "()V";
	const char *className = "com/facebook/SharedPreferencesTokenCachingStrategy";

	LOGV("com_facebook_SharedPreferencesTokenCachingStrategy className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_SharedPreferencesTokenCachingStrategy cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_SharedPreferencesTokenCachingStrategy jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	LOGV("void com_facebook_SharedPreferencesTokenCachingStrategy::clear() exit");

}
AndroidCXX::android_os_Bundle com_facebook_SharedPreferencesTokenCachingStrategy::load()
{
	LOGV("AndroidCXX::android_os_Bundle com_facebook_SharedPreferencesTokenCachingStrategy::load() enter");

	const char *methodName = "load";
	const char *methodSignature = "()Landroid/os/Bundle;";
	const char *className = "com/facebook/SharedPreferencesTokenCachingStrategy";

	LOGV("com_facebook_SharedPreferencesTokenCachingStrategy className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_SharedPreferencesTokenCachingStrategy cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_SharedPreferencesTokenCachingStrategy jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("android.os.Bundle");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_os_Bundle(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_os_Bundle result((AndroidCXX::android_os_Bundle) *((AndroidCXX::android_os_Bundle *) cxx_value));
	delete ((AndroidCXX::android_os_Bundle *) cxx_value);
		
	LOGV("AndroidCXX::android_os_Bundle com_facebook_SharedPreferencesTokenCachingStrategy::load() exit");

	return result;
}
void com_facebook_SharedPreferencesTokenCachingStrategy::save(AndroidCXX::android_os_Bundle const& arg0)
{
	LOGV("void com_facebook_SharedPreferencesTokenCachingStrategy::save(AndroidCXX::android_os_Bundle const& arg0) enter");

	const char *methodName = "save";
	const char *methodSignature = "(Landroid/os/Bundle;)V";
	const char *className = "com/facebook/SharedPreferencesTokenCachingStrategy";

	LOGV("com_facebook_SharedPreferencesTokenCachingStrategy className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_SharedPreferencesTokenCachingStrategy cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_SharedPreferencesTokenCachingStrategy jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.os.Bundle");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_os_Bundle(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void com_facebook_SharedPreferencesTokenCachingStrategy::save(AndroidCXX::android_os_Bundle const& arg0) exit");

}
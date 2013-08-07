/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 












// Generated Code 

#include <com_facebook_android_AsyncFacebookRunner_RequestListener.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <CXXConverter.hpp>
#include <FacebookCXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "com_facebook_android_AsyncFacebookRunner_RequestListener"
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

com_facebook_android_AsyncFacebookRunner_RequestListener::com_facebook_android_AsyncFacebookRunner_RequestListener(const com_facebook_android_AsyncFacebookRunner_RequestListener& cc)
{
	LOGV("com_facebook_android_AsyncFacebookRunner_RequestListener::com_facebook_android_AsyncFacebookRunner_RequestListener(const com_facebook_android_AsyncFacebookRunner_RequestListener& cc) enter");

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

	LOGV("com_facebook_android_AsyncFacebookRunner_RequestListener::com_facebook_android_AsyncFacebookRunner_RequestListener(const com_facebook_android_AsyncFacebookRunner_RequestListener& cc) exit");
}
com_facebook_android_AsyncFacebookRunner_RequestListener::com_facebook_android_AsyncFacebookRunner_RequestListener(Proxy proxy)
{
	LOGV("com_facebook_android_AsyncFacebookRunner_RequestListener::com_facebook_android_AsyncFacebookRunner_RequestListener(Proxy proxy) enter");

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

	LOGV("com_facebook_android_AsyncFacebookRunner_RequestListener::com_facebook_android_AsyncFacebookRunner_RequestListener(Proxy proxy) exit");
}
Proxy com_facebook_android_AsyncFacebookRunner_RequestListener::proxy() const
{	
	LOGV("com_facebook_android_AsyncFacebookRunner_RequestListener::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_android_AsyncFacebookRunner_RequestListener cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_android_AsyncFacebookRunner_RequestListener jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("com_facebook_android_AsyncFacebookRunner_RequestListener::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
com_facebook_android_AsyncFacebookRunner_RequestListener::~com_facebook_android_AsyncFacebookRunner_RequestListener()
{
	LOGV("com_facebook_android_AsyncFacebookRunner_RequestListener::~com_facebook_android_AsyncFacebookRunner_RequestListener() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("com_facebook_android_AsyncFacebookRunner_RequestListener::~com_facebook_android_AsyncFacebookRunner_RequestListener() exit");
}
// Functions
void com_facebook_android_AsyncFacebookRunner_RequestListener::onComplete(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_Object const& arg1)
{
	LOGV("void com_facebook_android_AsyncFacebookRunner_RequestListener::onComplete(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_Object const& arg1) enter");

	const char *methodName = "onComplete";
	const char *methodSignature = "(Ljava/lang/String;Ljava/lang/Object;)V";
	const char *className = "com/facebook/android/AsyncFacebookRunner$RequestListener";

	LOGV("com_facebook_android_AsyncFacebookRunner_RequestListener className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_android_AsyncFacebookRunner_RequestListener cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_android_AsyncFacebookRunner_RequestListener jni address %d", javaObject);

	jstring jarg0;
	{
		long cxx_value = (long) & arg0;
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
		jarg0 = convert_jni_string_to_jni(java_value);
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
			cxx_type_hierarchy.type_name = std::string("java.lang.Object");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_lang_Object(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1);
		
	LOGV("void com_facebook_android_AsyncFacebookRunner_RequestListener::onComplete(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_Object const& arg1) exit");

}
void com_facebook_android_AsyncFacebookRunner_RequestListener::onFacebookError(FacebookCXX::com_facebook_android_FacebookError const& arg0,AndroidCXX::java_lang_Object const& arg1)
{
	LOGV("void com_facebook_android_AsyncFacebookRunner_RequestListener::onFacebookError(FacebookCXX::com_facebook_android_FacebookError const& arg0,AndroidCXX::java_lang_Object const& arg1) enter");

	const char *methodName = "onFacebookError";
	const char *methodSignature = "(Lcom/facebook/android/FacebookError;Ljava/lang/Object;)V";
	const char *className = "com/facebook/android/AsyncFacebookRunner$RequestListener";

	LOGV("com_facebook_android_AsyncFacebookRunner_RequestListener className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_android_AsyncFacebookRunner_RequestListener cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_android_AsyncFacebookRunner_RequestListener jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("com.facebook.android.FacebookError");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_com_facebook_android_FacebookError(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
			cxx_type_hierarchy.type_name = std::string("java.lang.Object");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_lang_Object(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1);
		
	LOGV("void com_facebook_android_AsyncFacebookRunner_RequestListener::onFacebookError(FacebookCXX::com_facebook_android_FacebookError const& arg0,AndroidCXX::java_lang_Object const& arg1) exit");

}
void com_facebook_android_AsyncFacebookRunner_RequestListener::onFileNotFoundException(AndroidCXX::java_io_FileNotFoundException const& arg0,AndroidCXX::java_lang_Object const& arg1)
{
	LOGV("void com_facebook_android_AsyncFacebookRunner_RequestListener::onFileNotFoundException(AndroidCXX::java_io_FileNotFoundException const& arg0,AndroidCXX::java_lang_Object const& arg1) enter");

	const char *methodName = "onFileNotFoundException";
	const char *methodSignature = "(Ljava/io/FileNotFoundException;Ljava/lang/Object;)V";
	const char *className = "com/facebook/android/AsyncFacebookRunner$RequestListener";

	LOGV("com_facebook_android_AsyncFacebookRunner_RequestListener className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_android_AsyncFacebookRunner_RequestListener cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_android_AsyncFacebookRunner_RequestListener jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("java.io.FileNotFoundException");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_io_FileNotFoundException(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
			cxx_type_hierarchy.type_name = std::string("java.lang.Object");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_lang_Object(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1);
		
	LOGV("void com_facebook_android_AsyncFacebookRunner_RequestListener::onFileNotFoundException(AndroidCXX::java_io_FileNotFoundException const& arg0,AndroidCXX::java_lang_Object const& arg1) exit");

}
void com_facebook_android_AsyncFacebookRunner_RequestListener::onMalformedURLException(AndroidCXX::java_net_MalformedURLException const& arg0,AndroidCXX::java_lang_Object const& arg1)
{
	LOGV("void com_facebook_android_AsyncFacebookRunner_RequestListener::onMalformedURLException(AndroidCXX::java_net_MalformedURLException const& arg0,AndroidCXX::java_lang_Object const& arg1) enter");

	const char *methodName = "onMalformedURLException";
	const char *methodSignature = "(Ljava/net/MalformedURLException;Ljava/lang/Object;)V";
	const char *className = "com/facebook/android/AsyncFacebookRunner$RequestListener";

	LOGV("com_facebook_android_AsyncFacebookRunner_RequestListener className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_android_AsyncFacebookRunner_RequestListener cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_android_AsyncFacebookRunner_RequestListener jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("java.net.MalformedURLException");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_net_MalformedURLException(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
			cxx_type_hierarchy.type_name = std::string("java.lang.Object");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_lang_Object(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1);
		
	LOGV("void com_facebook_android_AsyncFacebookRunner_RequestListener::onMalformedURLException(AndroidCXX::java_net_MalformedURLException const& arg0,AndroidCXX::java_lang_Object const& arg1) exit");

}
void com_facebook_android_AsyncFacebookRunner_RequestListener::onIOException(AndroidCXX::java_io_IOException const& arg0,AndroidCXX::java_lang_Object const& arg1)
{
	LOGV("void com_facebook_android_AsyncFacebookRunner_RequestListener::onIOException(AndroidCXX::java_io_IOException const& arg0,AndroidCXX::java_lang_Object const& arg1) enter");

	const char *methodName = "onIOException";
	const char *methodSignature = "(Ljava/io/IOException;Ljava/lang/Object;)V";
	const char *className = "com/facebook/android/AsyncFacebookRunner$RequestListener";

	LOGV("com_facebook_android_AsyncFacebookRunner_RequestListener className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_android_AsyncFacebookRunner_RequestListener cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_android_AsyncFacebookRunner_RequestListener jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("java.io.IOException");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_io_IOException(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
			cxx_type_hierarchy.type_name = std::string("java.lang.Object");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_lang_Object(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1);
		
	LOGV("void com_facebook_android_AsyncFacebookRunner_RequestListener::onIOException(AndroidCXX::java_io_IOException const& arg0,AndroidCXX::java_lang_Object const& arg1) exit");

}

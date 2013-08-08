/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
 		 
	
 		 
	
	
 		 
	
 		 
 		 
	
 		 
	
	
	
















// Generated Code 

#include <android_content_ContentProviderOperation_Builder.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "android_content_ContentProviderOperation_Builder"
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
// 
// 
// 
// 
// 
// 

static long static_obj;
static long static_address = (long) &static_obj;

android_content_ContentProviderOperation_Builder::android_content_ContentProviderOperation_Builder(const android_content_ContentProviderOperation_Builder& cc)
{
	LOGV("android_content_ContentProviderOperation_Builder::android_content_ContentProviderOperation_Builder(const android_content_ContentProviderOperation_Builder& cc) enter");

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

	LOGV("android_content_ContentProviderOperation_Builder::android_content_ContentProviderOperation_Builder(const android_content_ContentProviderOperation_Builder& cc) exit");
}
android_content_ContentProviderOperation_Builder::android_content_ContentProviderOperation_Builder(Proxy proxy)
{
	LOGV("android_content_ContentProviderOperation_Builder::android_content_ContentProviderOperation_Builder(Proxy proxy) enter");

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

	LOGV("android_content_ContentProviderOperation_Builder::android_content_ContentProviderOperation_Builder(Proxy proxy) exit");
}
Proxy android_content_ContentProviderOperation_Builder::proxy() const
{	
	LOGV("android_content_ContentProviderOperation_Builder::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_content_ContentProviderOperation_Builder cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_ContentProviderOperation_Builder jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("android_content_ContentProviderOperation_Builder::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
android_content_ContentProviderOperation_Builder::~android_content_ContentProviderOperation_Builder()
{
	LOGV("android_content_ContentProviderOperation_Builder::~android_content_ContentProviderOperation_Builder() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("android_content_ContentProviderOperation_Builder::~android_content_ContentProviderOperation_Builder() exit");
}
// Functions
AndroidCXX::android_content_ContentProviderOperation android_content_ContentProviderOperation_Builder::build()
{
	LOGV("AndroidCXX::android_content_ContentProviderOperation android_content_ContentProviderOperation_Builder::build() enter");

	const char *methodName = "build";
	const char *methodSignature = "()Landroid/content/ContentProviderOperation;";
	const char *className = "android/content/ContentProviderOperation$Builder";

	LOGV("android_content_ContentProviderOperation_Builder className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_content_ContentProviderOperation_Builder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_ContentProviderOperation_Builder jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("android.content.ContentProviderOperation");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_content_ContentProviderOperation(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_content_ContentProviderOperation result((AndroidCXX::android_content_ContentProviderOperation) *((AndroidCXX::android_content_ContentProviderOperation *) cxx_value));
	delete ((AndroidCXX::android_content_ContentProviderOperation *) cxx_value);
		
	LOGV("AndroidCXX::android_content_ContentProviderOperation android_content_ContentProviderOperation_Builder::build() exit");

	return result;
}
AndroidCXX::android_content_ContentProviderOperation_Builder android_content_ContentProviderOperation_Builder::withValueBackReferences(AndroidCXX::android_content_ContentValues const& arg0)
{
	LOGV("AndroidCXX::android_content_ContentProviderOperation_Builder android_content_ContentProviderOperation_Builder::withValueBackReferences(AndroidCXX::android_content_ContentValues const& arg0) enter");

	const char *methodName = "withValueBackReferences";
	const char *methodSignature = "(Landroid/content/ContentValues;)Landroid/content/ContentProviderOperation$Builder;";
	const char *className = "android/content/ContentProviderOperation$Builder";

	LOGV("android_content_ContentProviderOperation_Builder className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_content_ContentProviderOperation_Builder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_ContentProviderOperation_Builder jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.content.ContentValues");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_content_ContentValues(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
			cxx_type_hierarchy.type_name = std::string("android.content.ContentProviderOperation$Builder");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_content_ContentProviderOperation_Builder(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_content_ContentProviderOperation_Builder result((AndroidCXX::android_content_ContentProviderOperation_Builder) *((AndroidCXX::android_content_ContentProviderOperation_Builder *) cxx_value));
	delete ((AndroidCXX::android_content_ContentProviderOperation_Builder *) cxx_value);
		
	LOGV("AndroidCXX::android_content_ContentProviderOperation_Builder android_content_ContentProviderOperation_Builder::withValueBackReferences(AndroidCXX::android_content_ContentValues const& arg0) exit");

	return result;
}
AndroidCXX::android_content_ContentProviderOperation_Builder android_content_ContentProviderOperation_Builder::withValueBackReference(AndroidCXX::java_lang_String const& arg0,int const& arg1)
{
	LOGV("AndroidCXX::android_content_ContentProviderOperation_Builder android_content_ContentProviderOperation_Builder::withValueBackReference(AndroidCXX::java_lang_String const& arg0,int const& arg1) enter");

	const char *methodName = "withValueBackReference";
	const char *methodSignature = "(Ljava/lang/String;I)Landroid/content/ContentProviderOperation$Builder;";
	const char *className = "android/content/ContentProviderOperation$Builder";

	LOGV("android_content_ContentProviderOperation_Builder className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_content_ContentProviderOperation_Builder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_ContentProviderOperation_Builder jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.content.ContentProviderOperation$Builder");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_content_ContentProviderOperation_Builder(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_content_ContentProviderOperation_Builder result((AndroidCXX::android_content_ContentProviderOperation_Builder) *((AndroidCXX::android_content_ContentProviderOperation_Builder *) cxx_value));
	delete ((AndroidCXX::android_content_ContentProviderOperation_Builder *) cxx_value);
		
	LOGV("AndroidCXX::android_content_ContentProviderOperation_Builder android_content_ContentProviderOperation_Builder::withValueBackReference(AndroidCXX::java_lang_String const& arg0,int const& arg1) exit");

	return result;
}
AndroidCXX::android_content_ContentProviderOperation_Builder android_content_ContentProviderOperation_Builder::withSelectionBackReference(int const& arg0,int const& arg1)
{
	LOGV("AndroidCXX::android_content_ContentProviderOperation_Builder android_content_ContentProviderOperation_Builder::withSelectionBackReference(int const& arg0,int const& arg1) enter");

	const char *methodName = "withSelectionBackReference";
	const char *methodSignature = "(II)Landroid/content/ContentProviderOperation$Builder;";
	const char *className = "android/content/ContentProviderOperation$Builder";

	LOGV("android_content_ContentProviderOperation_Builder className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_content_ContentProviderOperation_Builder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_ContentProviderOperation_Builder jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.content.ContentProviderOperation$Builder");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_content_ContentProviderOperation_Builder(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_content_ContentProviderOperation_Builder result((AndroidCXX::android_content_ContentProviderOperation_Builder) *((AndroidCXX::android_content_ContentProviderOperation_Builder *) cxx_value));
	delete ((AndroidCXX::android_content_ContentProviderOperation_Builder *) cxx_value);
		
	LOGV("AndroidCXX::android_content_ContentProviderOperation_Builder android_content_ContentProviderOperation_Builder::withSelectionBackReference(int const& arg0,int const& arg1) exit");

	return result;
}
AndroidCXX::android_content_ContentProviderOperation_Builder android_content_ContentProviderOperation_Builder::withValues(AndroidCXX::android_content_ContentValues const& arg0)
{
	LOGV("AndroidCXX::android_content_ContentProviderOperation_Builder android_content_ContentProviderOperation_Builder::withValues(AndroidCXX::android_content_ContentValues const& arg0) enter");

	const char *methodName = "withValues";
	const char *methodSignature = "(Landroid/content/ContentValues;)Landroid/content/ContentProviderOperation$Builder;";
	const char *className = "android/content/ContentProviderOperation$Builder";

	LOGV("android_content_ContentProviderOperation_Builder className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_content_ContentProviderOperation_Builder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_ContentProviderOperation_Builder jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.content.ContentValues");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_content_ContentValues(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
			cxx_type_hierarchy.type_name = std::string("android.content.ContentProviderOperation$Builder");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_content_ContentProviderOperation_Builder(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_content_ContentProviderOperation_Builder result((AndroidCXX::android_content_ContentProviderOperation_Builder) *((AndroidCXX::android_content_ContentProviderOperation_Builder *) cxx_value));
	delete ((AndroidCXX::android_content_ContentProviderOperation_Builder *) cxx_value);
		
	LOGV("AndroidCXX::android_content_ContentProviderOperation_Builder android_content_ContentProviderOperation_Builder::withValues(AndroidCXX::android_content_ContentValues const& arg0) exit");

	return result;
}
AndroidCXX::android_content_ContentProviderOperation_Builder android_content_ContentProviderOperation_Builder::withValue(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_Object const& arg1)
{
	LOGV("AndroidCXX::android_content_ContentProviderOperation_Builder android_content_ContentProviderOperation_Builder::withValue(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_Object const& arg1) enter");

	const char *methodName = "withValue";
	const char *methodSignature = "(Ljava/lang/String;Ljava/lang/Object;)Landroid/content/ContentProviderOperation$Builder;";
	const char *className = "android/content/ContentProviderOperation$Builder";

	LOGV("android_content_ContentProviderOperation_Builder className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_content_ContentProviderOperation_Builder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_ContentProviderOperation_Builder jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.content.ContentProviderOperation$Builder");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_content_ContentProviderOperation_Builder(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_content_ContentProviderOperation_Builder result((AndroidCXX::android_content_ContentProviderOperation_Builder) *((AndroidCXX::android_content_ContentProviderOperation_Builder *) cxx_value));
	delete ((AndroidCXX::android_content_ContentProviderOperation_Builder *) cxx_value);
		
	LOGV("AndroidCXX::android_content_ContentProviderOperation_Builder android_content_ContentProviderOperation_Builder::withValue(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_Object const& arg1) exit");

	return result;
}
AndroidCXX::android_content_ContentProviderOperation_Builder android_content_ContentProviderOperation_Builder::withSelection(AndroidCXX::java_lang_String const& arg0,std::vector<AndroidCXX::java_lang_String > const& arg1)
{
	LOGV("AndroidCXX::android_content_ContentProviderOperation_Builder android_content_ContentProviderOperation_Builder::withSelection(AndroidCXX::java_lang_String const& arg0,std::vector<AndroidCXX::java_lang_String > const& arg1) enter");

	const char *methodName = "withSelection";
	const char *methodSignature = "(Ljava/lang/String;[Ljava/lang/String;)Landroid/content/ContentProviderOperation$Builder;";
	const char *className = "android/content/ContentProviderOperation$Builder";

	LOGV("android_content_ContentProviderOperation_Builder className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_content_ContentProviderOperation_Builder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_ContentProviderOperation_Builder jni address %d", javaObject);

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
	jobjectArray jarg1;
	{
		long cxx_value = (long) & arg1;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("_object_array_type");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.lang.String");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_java_lang_String);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert__object_array_type(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni__object_array_type_to_jni(java_value);
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
			cxx_type_hierarchy.type_name = std::string("android.content.ContentProviderOperation$Builder");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_content_ContentProviderOperation_Builder(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_content_ContentProviderOperation_Builder result((AndroidCXX::android_content_ContentProviderOperation_Builder) *((AndroidCXX::android_content_ContentProviderOperation_Builder *) cxx_value));
	delete ((AndroidCXX::android_content_ContentProviderOperation_Builder *) cxx_value);
		
	LOGV("AndroidCXX::android_content_ContentProviderOperation_Builder android_content_ContentProviderOperation_Builder::withSelection(AndroidCXX::java_lang_String const& arg0,std::vector<AndroidCXX::java_lang_String > const& arg1) exit");

	return result;
}
AndroidCXX::android_content_ContentProviderOperation_Builder android_content_ContentProviderOperation_Builder::withExpectedCount(int const& arg0)
{
	LOGV("AndroidCXX::android_content_ContentProviderOperation_Builder android_content_ContentProviderOperation_Builder::withExpectedCount(int const& arg0) enter");

	const char *methodName = "withExpectedCount";
	const char *methodSignature = "(I)Landroid/content/ContentProviderOperation$Builder;";
	const char *className = "android/content/ContentProviderOperation$Builder";

	LOGV("android_content_ContentProviderOperation_Builder className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_content_ContentProviderOperation_Builder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_ContentProviderOperation_Builder jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.content.ContentProviderOperation$Builder");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_content_ContentProviderOperation_Builder(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_content_ContentProviderOperation_Builder result((AndroidCXX::android_content_ContentProviderOperation_Builder) *((AndroidCXX::android_content_ContentProviderOperation_Builder *) cxx_value));
	delete ((AndroidCXX::android_content_ContentProviderOperation_Builder *) cxx_value);
		
	LOGV("AndroidCXX::android_content_ContentProviderOperation_Builder android_content_ContentProviderOperation_Builder::withExpectedCount(int const& arg0) exit");

	return result;
}
AndroidCXX::android_content_ContentProviderOperation_Builder android_content_ContentProviderOperation_Builder::withYieldAllowed(bool const& arg0)
{
	LOGV("AndroidCXX::android_content_ContentProviderOperation_Builder android_content_ContentProviderOperation_Builder::withYieldAllowed(bool const& arg0) enter");

	const char *methodName = "withYieldAllowed";
	const char *methodSignature = "(Z)Landroid/content/ContentProviderOperation$Builder;";
	const char *className = "android/content/ContentProviderOperation$Builder";

	LOGV("android_content_ContentProviderOperation_Builder className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_content_ContentProviderOperation_Builder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_ContentProviderOperation_Builder jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.content.ContentProviderOperation$Builder");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_content_ContentProviderOperation_Builder(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_content_ContentProviderOperation_Builder result((AndroidCXX::android_content_ContentProviderOperation_Builder) *((AndroidCXX::android_content_ContentProviderOperation_Builder *) cxx_value));
	delete ((AndroidCXX::android_content_ContentProviderOperation_Builder *) cxx_value);
		
	LOGV("AndroidCXX::android_content_ContentProviderOperation_Builder android_content_ContentProviderOperation_Builder::withYieldAllowed(bool const& arg0) exit");

	return result;
}

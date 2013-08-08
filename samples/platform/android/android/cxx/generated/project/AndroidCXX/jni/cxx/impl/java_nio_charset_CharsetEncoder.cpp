/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
 		 
 		 
	
 		 
	
 		 
	
	
 		 
 		 
	
 		 
	
	
	
	























// Generated Code 

#include <java_nio_charset_CharsetEncoder.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "java_nio_charset_CharsetEncoder"
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
// 
// 
// 
// 
// 
// 

static long static_obj;
static long static_address = (long) &static_obj;

java_nio_charset_CharsetEncoder::java_nio_charset_CharsetEncoder(const java_nio_charset_CharsetEncoder& cc)
{
	LOGV("java_nio_charset_CharsetEncoder::java_nio_charset_CharsetEncoder(const java_nio_charset_CharsetEncoder& cc) enter");

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

	LOGV("java_nio_charset_CharsetEncoder::java_nio_charset_CharsetEncoder(const java_nio_charset_CharsetEncoder& cc) exit");
}
java_nio_charset_CharsetEncoder::java_nio_charset_CharsetEncoder(Proxy proxy)
{
	LOGV("java_nio_charset_CharsetEncoder::java_nio_charset_CharsetEncoder(Proxy proxy) enter");

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

	LOGV("java_nio_charset_CharsetEncoder::java_nio_charset_CharsetEncoder(Proxy proxy) exit");
}
Proxy java_nio_charset_CharsetEncoder::proxy() const
{	
	LOGV("java_nio_charset_CharsetEncoder::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_nio_charset_CharsetEncoder cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_charset_CharsetEncoder jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("java_nio_charset_CharsetEncoder::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
java_nio_charset_CharsetEncoder::~java_nio_charset_CharsetEncoder()
{
	LOGV("java_nio_charset_CharsetEncoder::~java_nio_charset_CharsetEncoder() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("java_nio_charset_CharsetEncoder::~java_nio_charset_CharsetEncoder() exit");
}
// Functions
AndroidCXX::java_nio_charset_Charset java_nio_charset_CharsetEncoder::charset()
{
	LOGV("AndroidCXX::java_nio_charset_Charset java_nio_charset_CharsetEncoder::charset() enter");

	const char *methodName = "charset";
	const char *methodSignature = "()Ljava/nio/charset/Charset;";
	const char *className = "java/nio/charset/CharsetEncoder";

	LOGV("java_nio_charset_CharsetEncoder className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_nio_charset_CharsetEncoder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_charset_CharsetEncoder jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("java.nio.charset.Charset");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_charset_Charset(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::java_nio_charset_Charset result((AndroidCXX::java_nio_charset_Charset) *((AndroidCXX::java_nio_charset_Charset *) cxx_value));
	delete ((AndroidCXX::java_nio_charset_Charset *) cxx_value);
		
	LOGV("AndroidCXX::java_nio_charset_Charset java_nio_charset_CharsetEncoder::charset() exit");

	return result;
}
AndroidCXX::java_nio_charset_CoderResult java_nio_charset_CharsetEncoder::encode(AndroidCXX::java_nio_CharBuffer const& arg0,AndroidCXX::java_nio_ByteBuffer const& arg1,bool const& arg2)
{
	LOGV("AndroidCXX::java_nio_charset_CoderResult java_nio_charset_CharsetEncoder::encode(AndroidCXX::java_nio_CharBuffer const& arg0,AndroidCXX::java_nio_ByteBuffer const& arg1,bool const& arg2) enter");

	const char *methodName = "encode";
	const char *methodSignature = "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;Z)Ljava/nio/charset/CoderResult;";
	const char *className = "java/nio/charset/CharsetEncoder";

	LOGV("java_nio_charset_CharsetEncoder className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_nio_charset_CharsetEncoder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_charset_CharsetEncoder jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("java.nio.CharBuffer");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_nio_CharBuffer(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
			cxx_type_hierarchy.type_name = std::string("java.nio.ByteBuffer");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_nio_ByteBuffer(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
	}
	jboolean jarg2;
	{
		long cxx_value = (long) & arg2;
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
		jarg2 = convert_jni_boolean_to_jni(java_value);
	}

	jobject jni_result = (jobject) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1,jarg2);
	long cxx_value = (long) 0;
	long java_value = convert_jni_java_lang_Object_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.nio.charset.CoderResult");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_charset_CoderResult(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::java_nio_charset_CoderResult result((AndroidCXX::java_nio_charset_CoderResult) *((AndroidCXX::java_nio_charset_CoderResult *) cxx_value));
	delete ((AndroidCXX::java_nio_charset_CoderResult *) cxx_value);
		
	LOGV("AndroidCXX::java_nio_charset_CoderResult java_nio_charset_CharsetEncoder::encode(AndroidCXX::java_nio_CharBuffer const& arg0,AndroidCXX::java_nio_ByteBuffer const& arg1,bool const& arg2) exit");

	return result;
}
AndroidCXX::java_nio_ByteBuffer java_nio_charset_CharsetEncoder::encode(AndroidCXX::java_nio_CharBuffer const& arg0)
{
	LOGV("AndroidCXX::java_nio_ByteBuffer java_nio_charset_CharsetEncoder::encode(AndroidCXX::java_nio_CharBuffer const& arg0) enter");

	const char *methodName = "encode";
	const char *methodSignature = "(Ljava/nio/CharBuffer;)Ljava/nio/ByteBuffer;";
	const char *className = "java/nio/charset/CharsetEncoder";

	LOGV("java_nio_charset_CharsetEncoder className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_nio_charset_CharsetEncoder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_charset_CharsetEncoder jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("java.nio.CharBuffer");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_nio_CharBuffer(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
			cxx_type_hierarchy.type_name = std::string("java.nio.ByteBuffer");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_ByteBuffer(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::java_nio_ByteBuffer result((AndroidCXX::java_nio_ByteBuffer) *((AndroidCXX::java_nio_ByteBuffer *) cxx_value));
	delete ((AndroidCXX::java_nio_ByteBuffer *) cxx_value);
		
	LOGV("AndroidCXX::java_nio_ByteBuffer java_nio_charset_CharsetEncoder::encode(AndroidCXX::java_nio_CharBuffer const& arg0) exit");

	return result;
}
AndroidCXX::java_nio_charset_CoderResult java_nio_charset_CharsetEncoder::flush(AndroidCXX::java_nio_ByteBuffer const& arg0)
{
	LOGV("AndroidCXX::java_nio_charset_CoderResult java_nio_charset_CharsetEncoder::flush(AndroidCXX::java_nio_ByteBuffer const& arg0) enter");

	const char *methodName = "flush";
	const char *methodSignature = "(Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;";
	const char *className = "java/nio/charset/CharsetEncoder";

	LOGV("java_nio_charset_CharsetEncoder className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_nio_charset_CharsetEncoder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_charset_CharsetEncoder jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("java.nio.ByteBuffer");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_nio_ByteBuffer(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
			cxx_type_hierarchy.type_name = std::string("java.nio.charset.CoderResult");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_charset_CoderResult(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::java_nio_charset_CoderResult result((AndroidCXX::java_nio_charset_CoderResult) *((AndroidCXX::java_nio_charset_CoderResult *) cxx_value));
	delete ((AndroidCXX::java_nio_charset_CoderResult *) cxx_value);
		
	LOGV("AndroidCXX::java_nio_charset_CoderResult java_nio_charset_CharsetEncoder::flush(AndroidCXX::java_nio_ByteBuffer const& arg0) exit");

	return result;
}
AndroidCXX::java_nio_charset_CharsetEncoder java_nio_charset_CharsetEncoder::reset()
{
	LOGV("AndroidCXX::java_nio_charset_CharsetEncoder java_nio_charset_CharsetEncoder::reset() enter");

	const char *methodName = "reset";
	const char *methodSignature = "()Ljava/nio/charset/CharsetEncoder;";
	const char *className = "java/nio/charset/CharsetEncoder";

	LOGV("java_nio_charset_CharsetEncoder className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_nio_charset_CharsetEncoder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_charset_CharsetEncoder jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("java.nio.charset.CharsetEncoder");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_charset_CharsetEncoder(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::java_nio_charset_CharsetEncoder result((AndroidCXX::java_nio_charset_CharsetEncoder) *((AndroidCXX::java_nio_charset_CharsetEncoder *) cxx_value));
	delete ((AndroidCXX::java_nio_charset_CharsetEncoder *) cxx_value);
		
	LOGV("AndroidCXX::java_nio_charset_CharsetEncoder java_nio_charset_CharsetEncoder::reset() exit");

	return result;
}
bool java_nio_charset_CharsetEncoder::canEncode(char const& arg0)
{
	LOGV("bool java_nio_charset_CharsetEncoder::canEncode(char const& arg0) enter");

	const char *methodName = "canEncode";
	const char *methodSignature = "(C)Z";
	const char *className = "java/nio/charset/CharsetEncoder";

	LOGV("java_nio_charset_CharsetEncoder className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_nio_charset_CharsetEncoder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_charset_CharsetEncoder jni address %d", javaObject);

	jchar jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("char");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_char(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_char_to_jni(java_value);
	}

	jboolean jni_result = (jboolean) jni->invokeBooleanMethod(javaObject,className,methodName,methodSignature,jarg0);
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
		
	LOGV("bool java_nio_charset_CharsetEncoder::canEncode(char const& arg0) exit");

	return result;
}
bool java_nio_charset_CharsetEncoder::canEncode(AndroidCXX::java_lang_CharSequence const& arg0)
{
	LOGV("bool java_nio_charset_CharsetEncoder::canEncode(AndroidCXX::java_lang_CharSequence const& arg0) enter");

	const char *methodName = "canEncode";
	const char *methodSignature = "(Ljava/lang/CharSequence;)Z";
	const char *className = "java/nio/charset/CharsetEncoder";

	LOGV("java_nio_charset_CharsetEncoder className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_nio_charset_CharsetEncoder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_charset_CharsetEncoder jni address %d", javaObject);

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

	jboolean jni_result = (jboolean) jni->invokeBooleanMethod(javaObject,className,methodName,methodSignature,jarg0);
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
		
	LOGV("bool java_nio_charset_CharsetEncoder::canEncode(AndroidCXX::java_lang_CharSequence const& arg0) exit");

	return result;
}
AndroidCXX::java_nio_charset_CharsetEncoder java_nio_charset_CharsetEncoder::onMalformedInput(AndroidCXX::java_nio_charset_CodingErrorAction const& arg0)
{
	LOGV("AndroidCXX::java_nio_charset_CharsetEncoder java_nio_charset_CharsetEncoder::onMalformedInput(AndroidCXX::java_nio_charset_CodingErrorAction const& arg0) enter");

	const char *methodName = "onMalformedInput";
	const char *methodSignature = "(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetEncoder;";
	const char *className = "java/nio/charset/CharsetEncoder";

	LOGV("java_nio_charset_CharsetEncoder className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_nio_charset_CharsetEncoder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_charset_CharsetEncoder jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("java.nio.charset.CodingErrorAction");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_nio_charset_CodingErrorAction(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
			cxx_type_hierarchy.type_name = std::string("java.nio.charset.CharsetEncoder");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_charset_CharsetEncoder(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::java_nio_charset_CharsetEncoder result((AndroidCXX::java_nio_charset_CharsetEncoder) *((AndroidCXX::java_nio_charset_CharsetEncoder *) cxx_value));
	delete ((AndroidCXX::java_nio_charset_CharsetEncoder *) cxx_value);
		
	LOGV("AndroidCXX::java_nio_charset_CharsetEncoder java_nio_charset_CharsetEncoder::onMalformedInput(AndroidCXX::java_nio_charset_CodingErrorAction const& arg0) exit");

	return result;
}
AndroidCXX::java_nio_charset_CharsetEncoder java_nio_charset_CharsetEncoder::onUnmappableCharacter(AndroidCXX::java_nio_charset_CodingErrorAction const& arg0)
{
	LOGV("AndroidCXX::java_nio_charset_CharsetEncoder java_nio_charset_CharsetEncoder::onUnmappableCharacter(AndroidCXX::java_nio_charset_CodingErrorAction const& arg0) enter");

	const char *methodName = "onUnmappableCharacter";
	const char *methodSignature = "(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetEncoder;";
	const char *className = "java/nio/charset/CharsetEncoder";

	LOGV("java_nio_charset_CharsetEncoder className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_nio_charset_CharsetEncoder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_charset_CharsetEncoder jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("java.nio.charset.CodingErrorAction");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_nio_charset_CodingErrorAction(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
			cxx_type_hierarchy.type_name = std::string("java.nio.charset.CharsetEncoder");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_charset_CharsetEncoder(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::java_nio_charset_CharsetEncoder result((AndroidCXX::java_nio_charset_CharsetEncoder) *((AndroidCXX::java_nio_charset_CharsetEncoder *) cxx_value));
	delete ((AndroidCXX::java_nio_charset_CharsetEncoder *) cxx_value);
		
	LOGV("AndroidCXX::java_nio_charset_CharsetEncoder java_nio_charset_CharsetEncoder::onUnmappableCharacter(AndroidCXX::java_nio_charset_CodingErrorAction const& arg0) exit");

	return result;
}
float java_nio_charset_CharsetEncoder::maxBytesPerChar()
{
	LOGV("float java_nio_charset_CharsetEncoder::maxBytesPerChar() enter");

	const char *methodName = "maxBytesPerChar";
	const char *methodSignature = "()F";
	const char *className = "java/nio/charset/CharsetEncoder";

	LOGV("java_nio_charset_CharsetEncoder className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_nio_charset_CharsetEncoder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_charset_CharsetEncoder jni address %d", javaObject);


	jfloat jni_result = (jfloat) jni->invokeFloatMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni_float_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("float");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_float(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	float result = (float) *((float *) cxx_value);
	// 
		
	LOGV("float java_nio_charset_CharsetEncoder::maxBytesPerChar() exit");

	return result;
}
bool java_nio_charset_CharsetEncoder::isLegalReplacement(std::vector<byte> const& arg0)
{
	LOGV("bool java_nio_charset_CharsetEncoder::isLegalReplacement(std::vector<byte> const& arg0) enter");

	const char *methodName = "isLegalReplacement";
	const char *methodSignature = "([B)Z";
	const char *className = "java/nio/charset/CharsetEncoder";

	LOGV("java_nio_charset_CharsetEncoder className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_nio_charset_CharsetEncoder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_charset_CharsetEncoder jni address %d", javaObject);

	jbyteArray jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("_byte_array_type");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("byte");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_byte);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert__byte_array_type(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni__byte_array_type_to_jni(java_value);
	}

	jboolean jni_result = (jboolean) jni->invokeBooleanMethod(javaObject,className,methodName,methodSignature,jarg0);
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
		
	LOGV("bool java_nio_charset_CharsetEncoder::isLegalReplacement(std::vector<byte> const& arg0) exit");

	return result;
}
float java_nio_charset_CharsetEncoder::averageBytesPerChar()
{
	LOGV("float java_nio_charset_CharsetEncoder::averageBytesPerChar() enter");

	const char *methodName = "averageBytesPerChar";
	const char *methodSignature = "()F";
	const char *className = "java/nio/charset/CharsetEncoder";

	LOGV("java_nio_charset_CharsetEncoder className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_nio_charset_CharsetEncoder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_charset_CharsetEncoder jni address %d", javaObject);


	jfloat jni_result = (jfloat) jni->invokeFloatMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni_float_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("float");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_float(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	float result = (float) *((float *) cxx_value);
	// 
		
	LOGV("float java_nio_charset_CharsetEncoder::averageBytesPerChar() exit");

	return result;
}
std::vector<byte> java_nio_charset_CharsetEncoder::replacement()
{
	LOGV("std::vector<byte> java_nio_charset_CharsetEncoder::replacement() enter");

	const char *methodName = "replacement";
	const char *methodSignature = "()[B";
	const char *className = "java/nio/charset/CharsetEncoder";

	LOGV("java_nio_charset_CharsetEncoder className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_nio_charset_CharsetEncoder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_charset_CharsetEncoder jni address %d", javaObject);


	jbyteArray jni_result = (jbyteArray) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni__byte_array_type_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("_byte_array_type");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("byte");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_byte);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert__byte_array_type(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	std::vector<byte> result = (std::vector<byte>) *((std::vector<byte> *) cxx_value);
	delete ((std::vector<byte> *) cxx_value);
		
	LOGV("std::vector<byte> java_nio_charset_CharsetEncoder::replacement() exit");

	return result;
}
AndroidCXX::java_nio_charset_CodingErrorAction java_nio_charset_CharsetEncoder::malformedInputAction()
{
	LOGV("AndroidCXX::java_nio_charset_CodingErrorAction java_nio_charset_CharsetEncoder::malformedInputAction() enter");

	const char *methodName = "malformedInputAction";
	const char *methodSignature = "()Ljava/nio/charset/CodingErrorAction;";
	const char *className = "java/nio/charset/CharsetEncoder";

	LOGV("java_nio_charset_CharsetEncoder className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_nio_charset_CharsetEncoder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_charset_CharsetEncoder jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("java.nio.charset.CodingErrorAction");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_charset_CodingErrorAction(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::java_nio_charset_CodingErrorAction result((AndroidCXX::java_nio_charset_CodingErrorAction) *((AndroidCXX::java_nio_charset_CodingErrorAction *) cxx_value));
	delete ((AndroidCXX::java_nio_charset_CodingErrorAction *) cxx_value);
		
	LOGV("AndroidCXX::java_nio_charset_CodingErrorAction java_nio_charset_CharsetEncoder::malformedInputAction() exit");

	return result;
}
AndroidCXX::java_nio_charset_CodingErrorAction java_nio_charset_CharsetEncoder::unmappableCharacterAction()
{
	LOGV("AndroidCXX::java_nio_charset_CodingErrorAction java_nio_charset_CharsetEncoder::unmappableCharacterAction() enter");

	const char *methodName = "unmappableCharacterAction";
	const char *methodSignature = "()Ljava/nio/charset/CodingErrorAction;";
	const char *className = "java/nio/charset/CharsetEncoder";

	LOGV("java_nio_charset_CharsetEncoder className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_nio_charset_CharsetEncoder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_charset_CharsetEncoder jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("java.nio.charset.CodingErrorAction");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_charset_CodingErrorAction(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::java_nio_charset_CodingErrorAction result((AndroidCXX::java_nio_charset_CodingErrorAction) *((AndroidCXX::java_nio_charset_CodingErrorAction *) cxx_value));
	delete ((AndroidCXX::java_nio_charset_CodingErrorAction *) cxx_value);
		
	LOGV("AndroidCXX::java_nio_charset_CodingErrorAction java_nio_charset_CharsetEncoder::unmappableCharacterAction() exit");

	return result;
}
AndroidCXX::java_nio_charset_CharsetEncoder java_nio_charset_CharsetEncoder::replaceWith(std::vector<byte> const& arg0)
{
	LOGV("AndroidCXX::java_nio_charset_CharsetEncoder java_nio_charset_CharsetEncoder::replaceWith(std::vector<byte> const& arg0) enter");

	const char *methodName = "replaceWith";
	const char *methodSignature = "([B)Ljava/nio/charset/CharsetEncoder;";
	const char *className = "java/nio/charset/CharsetEncoder";

	LOGV("java_nio_charset_CharsetEncoder className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_nio_charset_CharsetEncoder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_charset_CharsetEncoder jni address %d", javaObject);

	jbyteArray jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("_byte_array_type");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("byte");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_byte);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert__byte_array_type(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni__byte_array_type_to_jni(java_value);
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
			cxx_type_hierarchy.type_name = std::string("java.nio.charset.CharsetEncoder");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_charset_CharsetEncoder(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::java_nio_charset_CharsetEncoder result((AndroidCXX::java_nio_charset_CharsetEncoder) *((AndroidCXX::java_nio_charset_CharsetEncoder *) cxx_value));
	delete ((AndroidCXX::java_nio_charset_CharsetEncoder *) cxx_value);
		
	LOGV("AndroidCXX::java_nio_charset_CharsetEncoder java_nio_charset_CharsetEncoder::replaceWith(std::vector<byte> const& arg0) exit");

	return result;
}

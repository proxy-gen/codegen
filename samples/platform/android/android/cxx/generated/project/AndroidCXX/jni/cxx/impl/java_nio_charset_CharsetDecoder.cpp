/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
 		 
 		 
	
 		 
	
 		 
	
	
 		 
	
 		 
	
	
	
	
 		 
	
	























// Generated Code 

#include <java_nio_charset_CharsetDecoder.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>
// TODO: FIXME: add include package
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "java_nio_charset_CharsetDecoder"
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
// 
// 
// 
// 
// 
// 

static long static_obj;
static long static_address = (long) &static_obj;


// Default Instance Constructors
java_nio_charset_CharsetDecoder::java_nio_charset_CharsetDecoder(const java_nio_charset_CharsetDecoder& cc)
{
	LOGV("java_nio_charset_CharsetDecoder::java_nio_charset_CharsetDecoder(const java_nio_charset_CharsetDecoder& cc) enter");

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

	LOGV("java_nio_charset_CharsetDecoder::java_nio_charset_CharsetDecoder(const java_nio_charset_CharsetDecoder& cc) exit");
}
java_nio_charset_CharsetDecoder::java_nio_charset_CharsetDecoder(void * proxy)
{
	LOGV("java_nio_charset_CharsetDecoder::java_nio_charset_CharsetDecoder(void * proxy) enter");

	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	LOGV("registerProxyComponent address %d", address);
	jobject proxiedComponent = ctx->findProxyComponent(address);
	LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
	if (proxiedComponent == 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		proxiedComponent = jni->localToGlobalRef((jobject) proxy);
		ctx->registerProxyComponent(address, proxiedComponent);
	}

	LOGV("java_nio_charset_CharsetDecoder::java_nio_charset_CharsetDecoder(void * proxy) exit");
}
java_nio_charset_CharsetDecoder::java_nio_charset_CharsetDecoder()
{
	LOGV("java_nio_charset_CharsetDecoder::java_nio_charset_CharsetDecoder() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "java/nio/charset/CharsetDecoder";

	LOGV("java_nio_charset_CharsetDecoder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_charset_CharsetDecoder cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_charset_CharsetDecoder jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, "<init>", methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("java_nio_charset_CharsetDecoder::java_nio_charset_CharsetDecoder() exit");	
}
// Public Constructors
// Default Instance Destructor
java_nio_charset_CharsetDecoder::~java_nio_charset_CharsetDecoder()
{
	LOGV("java_nio_charset_CharsetDecoder::~java_nio_charset_CharsetDecoder() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("java_nio_charset_CharsetDecoder::~java_nio_charset_CharsetDecoder() exit");
}
// Functions
AndroidCXX::java_nio_charset_Charset java_nio_charset_CharsetDecoder::charset()
{
	LOGV("AndroidCXX::java_nio_charset_Charset java_nio_charset_CharsetDecoder::charset() enter");

	const char *methodName = "charset";
	const char *methodSignature = "()Ljava/nio/charset/Charset;";
	const char *className = "java/nio/charset/CharsetDecoder";

	LOGV("java_nio_charset_CharsetDecoder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_charset_CharsetDecoder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_charset_CharsetDecoder jni address %d", javaObject);


	AndroidCXX::java_nio_charset_Charset result;
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
	result = (AndroidCXX::java_nio_charset_Charset) (AndroidCXX::java_nio_charset_Charset((AndroidCXX::java_nio_charset_Charset *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::java_nio_charset_Charset java_nio_charset_CharsetDecoder::charset() exit");

	return result;
}
AndroidCXX::java_nio_charset_CoderResult java_nio_charset_CharsetDecoder::decode(AndroidCXX::java_nio_ByteBuffer& arg0,AndroidCXX::java_nio_CharBuffer& arg1,bool& arg2)
{
	LOGV("AndroidCXX::java_nio_charset_CoderResult java_nio_charset_CharsetDecoder::decode(AndroidCXX::java_nio_ByteBuffer& arg0,AndroidCXX::java_nio_CharBuffer& arg1,bool& arg2) enter");

	const char *methodName = "decode";
	const char *methodSignature = "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;Z)Ljava/nio/charset/CoderResult;";
	const char *className = "java/nio/charset/CharsetDecoder";

	LOGV("java_nio_charset_CharsetDecoder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_charset_CharsetDecoder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_charset_CharsetDecoder jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("java.nio.CharBuffer");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_nio_CharBuffer(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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

	AndroidCXX::java_nio_charset_CoderResult result;
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
	result = (AndroidCXX::java_nio_charset_CoderResult) (AndroidCXX::java_nio_charset_CoderResult((AndroidCXX::java_nio_charset_CoderResult *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::java_nio_charset_CoderResult java_nio_charset_CharsetDecoder::decode(AndroidCXX::java_nio_ByteBuffer& arg0,AndroidCXX::java_nio_CharBuffer& arg1,bool& arg2) exit");

	return result;
}
AndroidCXX::java_nio_CharBuffer java_nio_charset_CharsetDecoder::decode(AndroidCXX::java_nio_ByteBuffer& arg0)
{
	LOGV("AndroidCXX::java_nio_CharBuffer java_nio_charset_CharsetDecoder::decode(AndroidCXX::java_nio_ByteBuffer& arg0) enter");

	const char *methodName = "decode";
	const char *methodSignature = "(Ljava/nio/ByteBuffer;)Ljava/nio/CharBuffer;";
	const char *className = "java/nio/charset/CharsetDecoder";

	LOGV("java_nio_charset_CharsetDecoder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_charset_CharsetDecoder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_charset_CharsetDecoder jni address %d", javaObject);

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

	AndroidCXX::java_nio_CharBuffer result;
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
			cxx_type_hierarchy.type_name = std::string("java.nio.CharBuffer");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_CharBuffer(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::java_nio_CharBuffer) (AndroidCXX::java_nio_CharBuffer((AndroidCXX::java_nio_CharBuffer *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::java_nio_CharBuffer java_nio_charset_CharsetDecoder::decode(AndroidCXX::java_nio_ByteBuffer& arg0) exit");

	return result;
}
AndroidCXX::java_nio_charset_CoderResult java_nio_charset_CharsetDecoder::flush(AndroidCXX::java_nio_CharBuffer& arg0)
{
	LOGV("AndroidCXX::java_nio_charset_CoderResult java_nio_charset_CharsetDecoder::flush(AndroidCXX::java_nio_CharBuffer& arg0) enter");

	const char *methodName = "flush";
	const char *methodSignature = "(Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;";
	const char *className = "java/nio/charset/CharsetDecoder";

	LOGV("java_nio_charset_CharsetDecoder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_charset_CharsetDecoder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_charset_CharsetDecoder jni address %d", javaObject);

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

	AndroidCXX::java_nio_charset_CoderResult result;
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
	result = (AndroidCXX::java_nio_charset_CoderResult) (AndroidCXX::java_nio_charset_CoderResult((AndroidCXX::java_nio_charset_CoderResult *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::java_nio_charset_CoderResult java_nio_charset_CharsetDecoder::flush(AndroidCXX::java_nio_CharBuffer& arg0) exit");

	return result;
}
AndroidCXX::java_nio_charset_CharsetDecoder java_nio_charset_CharsetDecoder::reset()
{
	LOGV("AndroidCXX::java_nio_charset_CharsetDecoder java_nio_charset_CharsetDecoder::reset() enter");

	const char *methodName = "reset";
	const char *methodSignature = "()Ljava/nio/charset/CharsetDecoder;";
	const char *className = "java/nio/charset/CharsetDecoder";

	LOGV("java_nio_charset_CharsetDecoder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_charset_CharsetDecoder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_charset_CharsetDecoder jni address %d", javaObject);


	AndroidCXX::java_nio_charset_CharsetDecoder result;
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
			cxx_type_hierarchy.type_name = std::string("java.nio.charset.CharsetDecoder");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_charset_CharsetDecoder(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::java_nio_charset_CharsetDecoder) (AndroidCXX::java_nio_charset_CharsetDecoder((AndroidCXX::java_nio_charset_CharsetDecoder *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::java_nio_charset_CharsetDecoder java_nio_charset_CharsetDecoder::reset() exit");

	return result;
}
AndroidCXX::java_nio_charset_CharsetDecoder java_nio_charset_CharsetDecoder::onMalformedInput(AndroidCXX::java_nio_charset_CodingErrorAction& arg0)
{
	LOGV("AndroidCXX::java_nio_charset_CharsetDecoder java_nio_charset_CharsetDecoder::onMalformedInput(AndroidCXX::java_nio_charset_CodingErrorAction& arg0) enter");

	const char *methodName = "onMalformedInput";
	const char *methodSignature = "(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetDecoder;";
	const char *className = "java/nio/charset/CharsetDecoder";

	LOGV("java_nio_charset_CharsetDecoder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_charset_CharsetDecoder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_charset_CharsetDecoder jni address %d", javaObject);

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

	AndroidCXX::java_nio_charset_CharsetDecoder result;
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
			cxx_type_hierarchy.type_name = std::string("java.nio.charset.CharsetDecoder");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_charset_CharsetDecoder(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::java_nio_charset_CharsetDecoder) (AndroidCXX::java_nio_charset_CharsetDecoder((AndroidCXX::java_nio_charset_CharsetDecoder *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::java_nio_charset_CharsetDecoder java_nio_charset_CharsetDecoder::onMalformedInput(AndroidCXX::java_nio_charset_CodingErrorAction& arg0) exit");

	return result;
}
AndroidCXX::java_nio_charset_CharsetDecoder java_nio_charset_CharsetDecoder::onUnmappableCharacter(AndroidCXX::java_nio_charset_CodingErrorAction& arg0)
{
	LOGV("AndroidCXX::java_nio_charset_CharsetDecoder java_nio_charset_CharsetDecoder::onUnmappableCharacter(AndroidCXX::java_nio_charset_CodingErrorAction& arg0) enter");

	const char *methodName = "onUnmappableCharacter";
	const char *methodSignature = "(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetDecoder;";
	const char *className = "java/nio/charset/CharsetDecoder";

	LOGV("java_nio_charset_CharsetDecoder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_charset_CharsetDecoder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_charset_CharsetDecoder jni address %d", javaObject);

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

	AndroidCXX::java_nio_charset_CharsetDecoder result;
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
			cxx_type_hierarchy.type_name = std::string("java.nio.charset.CharsetDecoder");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_charset_CharsetDecoder(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::java_nio_charset_CharsetDecoder) (AndroidCXX::java_nio_charset_CharsetDecoder((AndroidCXX::java_nio_charset_CharsetDecoder *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::java_nio_charset_CharsetDecoder java_nio_charset_CharsetDecoder::onUnmappableCharacter(AndroidCXX::java_nio_charset_CodingErrorAction& arg0) exit");

	return result;
}
AndroidCXX::java_lang_String java_nio_charset_CharsetDecoder::replacement()
{
	LOGV("AndroidCXX::java_lang_String java_nio_charset_CharsetDecoder::replacement() enter");

	const char *methodName = "replacement";
	const char *methodSignature = "()Ljava/lang/String;";
	const char *className = "java/nio/charset/CharsetDecoder";

	LOGV("java_nio_charset_CharsetDecoder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_charset_CharsetDecoder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_charset_CharsetDecoder jni address %d", javaObject);


	AndroidCXX::java_lang_String result;
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
	result = (AndroidCXX::java_lang_String) (AndroidCXX::java_lang_String((AndroidCXX::java_lang_String *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::java_lang_String java_nio_charset_CharsetDecoder::replacement() exit");

	return result;
}
AndroidCXX::java_nio_charset_CodingErrorAction java_nio_charset_CharsetDecoder::malformedInputAction()
{
	LOGV("AndroidCXX::java_nio_charset_CodingErrorAction java_nio_charset_CharsetDecoder::malformedInputAction() enter");

	const char *methodName = "malformedInputAction";
	const char *methodSignature = "()Ljava/nio/charset/CodingErrorAction;";
	const char *className = "java/nio/charset/CharsetDecoder";

	LOGV("java_nio_charset_CharsetDecoder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_charset_CharsetDecoder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_charset_CharsetDecoder jni address %d", javaObject);


	AndroidCXX::java_nio_charset_CodingErrorAction result;
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
	result = (AndroidCXX::java_nio_charset_CodingErrorAction) (AndroidCXX::java_nio_charset_CodingErrorAction((AndroidCXX::java_nio_charset_CodingErrorAction *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::java_nio_charset_CodingErrorAction java_nio_charset_CharsetDecoder::malformedInputAction() exit");

	return result;
}
AndroidCXX::java_nio_charset_CodingErrorAction java_nio_charset_CharsetDecoder::unmappableCharacterAction()
{
	LOGV("AndroidCXX::java_nio_charset_CodingErrorAction java_nio_charset_CharsetDecoder::unmappableCharacterAction() enter");

	const char *methodName = "unmappableCharacterAction";
	const char *methodSignature = "()Ljava/nio/charset/CodingErrorAction;";
	const char *className = "java/nio/charset/CharsetDecoder";

	LOGV("java_nio_charset_CharsetDecoder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_charset_CharsetDecoder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_charset_CharsetDecoder jni address %d", javaObject);


	AndroidCXX::java_nio_charset_CodingErrorAction result;
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
	result = (AndroidCXX::java_nio_charset_CodingErrorAction) (AndroidCXX::java_nio_charset_CodingErrorAction((AndroidCXX::java_nio_charset_CodingErrorAction *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::java_nio_charset_CodingErrorAction java_nio_charset_CharsetDecoder::unmappableCharacterAction() exit");

	return result;
}
AndroidCXX::java_nio_charset_CharsetDecoder java_nio_charset_CharsetDecoder::replaceWith(AndroidCXX::java_lang_String& arg0)
{
	LOGV("AndroidCXX::java_nio_charset_CharsetDecoder java_nio_charset_CharsetDecoder::replaceWith(AndroidCXX::java_lang_String& arg0) enter");

	const char *methodName = "replaceWith";
	const char *methodSignature = "(Ljava/lang/String;)Ljava/nio/charset/CharsetDecoder;";
	const char *className = "java/nio/charset/CharsetDecoder";

	LOGV("java_nio_charset_CharsetDecoder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_charset_CharsetDecoder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_charset_CharsetDecoder jni address %d", javaObject);

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

	AndroidCXX::java_nio_charset_CharsetDecoder result;
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
			cxx_type_hierarchy.type_name = std::string("java.nio.charset.CharsetDecoder");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_charset_CharsetDecoder(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::java_nio_charset_CharsetDecoder) (AndroidCXX::java_nio_charset_CharsetDecoder((AndroidCXX::java_nio_charset_CharsetDecoder *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::java_nio_charset_CharsetDecoder java_nio_charset_CharsetDecoder::replaceWith(AndroidCXX::java_lang_String& arg0) exit");

	return result;
}
float java_nio_charset_CharsetDecoder::maxCharsPerByte()
{
	LOGV("float java_nio_charset_CharsetDecoder::maxCharsPerByte() enter");

	const char *methodName = "maxCharsPerByte";
	const char *methodSignature = "()F";
	const char *className = "java/nio/charset/CharsetDecoder";

	LOGV("java_nio_charset_CharsetDecoder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_charset_CharsetDecoder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_charset_CharsetDecoder jni address %d", javaObject);


	float result;
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
	result = (float) (cxx_value);
		
	jni->popLocalFrame();

	LOGV("float java_nio_charset_CharsetDecoder::maxCharsPerByte() exit");

	return result;
}
float java_nio_charset_CharsetDecoder::averageCharsPerByte()
{
	LOGV("float java_nio_charset_CharsetDecoder::averageCharsPerByte() enter");

	const char *methodName = "averageCharsPerByte";
	const char *methodSignature = "()F";
	const char *className = "java/nio/charset/CharsetDecoder";

	LOGV("java_nio_charset_CharsetDecoder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_charset_CharsetDecoder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_charset_CharsetDecoder jni address %d", javaObject);


	float result;
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
	result = (float) (cxx_value);
		
	jni->popLocalFrame();

	LOGV("float java_nio_charset_CharsetDecoder::averageCharsPerByte() exit");

	return result;
}
bool java_nio_charset_CharsetDecoder::isAutoDetecting()
{
	LOGV("bool java_nio_charset_CharsetDecoder::isAutoDetecting() enter");

	const char *methodName = "isAutoDetecting";
	const char *methodSignature = "()Z";
	const char *className = "java/nio/charset/CharsetDecoder";

	LOGV("java_nio_charset_CharsetDecoder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_charset_CharsetDecoder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_charset_CharsetDecoder jni address %d", javaObject);


	bool result;
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
	result = (bool) (cxx_value);
		
	jni->popLocalFrame();

	LOGV("bool java_nio_charset_CharsetDecoder::isAutoDetecting() exit");

	return result;
}
bool java_nio_charset_CharsetDecoder::isCharsetDetected()
{
	LOGV("bool java_nio_charset_CharsetDecoder::isCharsetDetected() enter");

	const char *methodName = "isCharsetDetected";
	const char *methodSignature = "()Z";
	const char *className = "java/nio/charset/CharsetDecoder";

	LOGV("java_nio_charset_CharsetDecoder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_charset_CharsetDecoder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_charset_CharsetDecoder jni address %d", javaObject);


	bool result;
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
	result = (bool) (cxx_value);
		
	jni->popLocalFrame();

	LOGV("bool java_nio_charset_CharsetDecoder::isCharsetDetected() exit");

	return result;
}
AndroidCXX::java_nio_charset_Charset java_nio_charset_CharsetDecoder::detectedCharset()
{
	LOGV("AndroidCXX::java_nio_charset_Charset java_nio_charset_CharsetDecoder::detectedCharset() enter");

	const char *methodName = "detectedCharset";
	const char *methodSignature = "()Ljava/nio/charset/Charset;";
	const char *className = "java/nio/charset/CharsetDecoder";

	LOGV("java_nio_charset_CharsetDecoder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_charset_CharsetDecoder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_charset_CharsetDecoder jni address %d", javaObject);


	AndroidCXX::java_nio_charset_Charset result;
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
	result = (AndroidCXX::java_nio_charset_Charset) (AndroidCXX::java_nio_charset_Charset((AndroidCXX::java_nio_charset_Charset *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::java_nio_charset_Charset java_nio_charset_CharsetDecoder::detectedCharset() exit");

	return result;
}

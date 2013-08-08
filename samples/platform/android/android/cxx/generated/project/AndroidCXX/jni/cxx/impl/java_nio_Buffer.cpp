/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
	
	
	
	
	
	
	
























// Generated Code 

#include <java_nio_Buffer.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "java_nio_Buffer"
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

java_nio_Buffer::java_nio_Buffer(const java_nio_Buffer& cc)
{
	LOGV("java_nio_Buffer::java_nio_Buffer(const java_nio_Buffer& cc) enter");

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

	LOGV("java_nio_Buffer::java_nio_Buffer(const java_nio_Buffer& cc) exit");
}
java_nio_Buffer::java_nio_Buffer(Proxy proxy)
{
	LOGV("java_nio_Buffer::java_nio_Buffer(Proxy proxy) enter");

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

	LOGV("java_nio_Buffer::java_nio_Buffer(Proxy proxy) exit");
}
Proxy java_nio_Buffer::proxy() const
{	
	LOGV("java_nio_Buffer::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_nio_Buffer cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_Buffer jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("java_nio_Buffer::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
java_nio_Buffer::~java_nio_Buffer()
{
	LOGV("java_nio_Buffer::~java_nio_Buffer() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("java_nio_Buffer::~java_nio_Buffer() exit");
}
// Functions
int java_nio_Buffer::limit()
{
	LOGV("int java_nio_Buffer::limit() enter");

	const char *methodName = "limit";
	const char *methodSignature = "()I";
	const char *className = "java/nio/Buffer";

	LOGV("java_nio_Buffer className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_nio_Buffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_Buffer jni address %d", javaObject);


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
		
	LOGV("int java_nio_Buffer::limit() exit");

	return result;
}
AndroidCXX::java_nio_Buffer java_nio_Buffer::limit(int const& arg0)
{
	LOGV("AndroidCXX::java_nio_Buffer java_nio_Buffer::limit(int const& arg0) enter");

	const char *methodName = "limit";
	const char *methodSignature = "(I)Ljava/nio/Buffer;";
	const char *className = "java/nio/Buffer";

	LOGV("java_nio_Buffer className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_nio_Buffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_Buffer jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("java.nio.Buffer");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_Buffer(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::java_nio_Buffer result((AndroidCXX::java_nio_Buffer) *((AndroidCXX::java_nio_Buffer *) cxx_value));
	delete ((AndroidCXX::java_nio_Buffer *) cxx_value);
		
	LOGV("AndroidCXX::java_nio_Buffer java_nio_Buffer::limit(int const& arg0) exit");

	return result;
}
AndroidCXX::java_nio_Buffer java_nio_Buffer::clear()
{
	LOGV("AndroidCXX::java_nio_Buffer java_nio_Buffer::clear() enter");

	const char *methodName = "clear";
	const char *methodSignature = "()Ljava/nio/Buffer;";
	const char *className = "java/nio/Buffer";

	LOGV("java_nio_Buffer className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_nio_Buffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_Buffer jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("java.nio.Buffer");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_Buffer(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::java_nio_Buffer result((AndroidCXX::java_nio_Buffer) *((AndroidCXX::java_nio_Buffer *) cxx_value));
	delete ((AndroidCXX::java_nio_Buffer *) cxx_value);
		
	LOGV("AndroidCXX::java_nio_Buffer java_nio_Buffer::clear() exit");

	return result;
}
int java_nio_Buffer::remaining()
{
	LOGV("int java_nio_Buffer::remaining() enter");

	const char *methodName = "remaining";
	const char *methodSignature = "()I";
	const char *className = "java/nio/Buffer";

	LOGV("java_nio_Buffer className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_nio_Buffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_Buffer jni address %d", javaObject);


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
		
	LOGV("int java_nio_Buffer::remaining() exit");

	return result;
}
bool java_nio_Buffer::isDirect()
{
	LOGV("bool java_nio_Buffer::isDirect() enter");

	const char *methodName = "isDirect";
	const char *methodSignature = "()Z";
	const char *className = "java/nio/Buffer";

	LOGV("java_nio_Buffer className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_nio_Buffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_Buffer jni address %d", javaObject);


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
		
	LOGV("bool java_nio_Buffer::isDirect() exit");

	return result;
}
bool java_nio_Buffer::hasArray()
{
	LOGV("bool java_nio_Buffer::hasArray() enter");

	const char *methodName = "hasArray";
	const char *methodSignature = "()Z";
	const char *className = "java/nio/Buffer";

	LOGV("java_nio_Buffer className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_nio_Buffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_Buffer jni address %d", javaObject);


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
		
	LOGV("bool java_nio_Buffer::hasArray() exit");

	return result;
}
AndroidCXX::java_lang_Object java_nio_Buffer::array()
{
	LOGV("AndroidCXX::java_lang_Object java_nio_Buffer::array() enter");

	const char *methodName = "array";
	const char *methodSignature = "()Ljava/lang/Object;";
	const char *className = "java/nio/Buffer";

	LOGV("java_nio_Buffer className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_nio_Buffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_Buffer jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("java.lang.Object");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_lang_Object(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::java_lang_Object result((AndroidCXX::java_lang_Object) *((AndroidCXX::java_lang_Object *) cxx_value));
	delete ((AndroidCXX::java_lang_Object *) cxx_value);
		
	LOGV("AndroidCXX::java_lang_Object java_nio_Buffer::array() exit");

	return result;
}
AndroidCXX::java_nio_Buffer java_nio_Buffer::position(int const& arg0)
{
	LOGV("AndroidCXX::java_nio_Buffer java_nio_Buffer::position(int const& arg0) enter");

	const char *methodName = "position";
	const char *methodSignature = "(I)Ljava/nio/Buffer;";
	const char *className = "java/nio/Buffer";

	LOGV("java_nio_Buffer className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_nio_Buffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_Buffer jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("java.nio.Buffer");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_Buffer(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::java_nio_Buffer result((AndroidCXX::java_nio_Buffer) *((AndroidCXX::java_nio_Buffer *) cxx_value));
	delete ((AndroidCXX::java_nio_Buffer *) cxx_value);
		
	LOGV("AndroidCXX::java_nio_Buffer java_nio_Buffer::position(int const& arg0) exit");

	return result;
}
int java_nio_Buffer::position()
{
	LOGV("int java_nio_Buffer::position() enter");

	const char *methodName = "position";
	const char *methodSignature = "()I";
	const char *className = "java/nio/Buffer";

	LOGV("java_nio_Buffer className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_nio_Buffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_Buffer jni address %d", javaObject);


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
		
	LOGV("int java_nio_Buffer::position() exit");

	return result;
}
int java_nio_Buffer::arrayOffset()
{
	LOGV("int java_nio_Buffer::arrayOffset() enter");

	const char *methodName = "arrayOffset";
	const char *methodSignature = "()I";
	const char *className = "java/nio/Buffer";

	LOGV("java_nio_Buffer className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_nio_Buffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_Buffer jni address %d", javaObject);


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
		
	LOGV("int java_nio_Buffer::arrayOffset() exit");

	return result;
}
int java_nio_Buffer::capacity()
{
	LOGV("int java_nio_Buffer::capacity() enter");

	const char *methodName = "capacity";
	const char *methodSignature = "()I";
	const char *className = "java/nio/Buffer";

	LOGV("java_nio_Buffer className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_nio_Buffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_Buffer jni address %d", javaObject);


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
		
	LOGV("int java_nio_Buffer::capacity() exit");

	return result;
}
AndroidCXX::java_nio_Buffer java_nio_Buffer::mark()
{
	LOGV("AndroidCXX::java_nio_Buffer java_nio_Buffer::mark() enter");

	const char *methodName = "mark";
	const char *methodSignature = "()Ljava/nio/Buffer;";
	const char *className = "java/nio/Buffer";

	LOGV("java_nio_Buffer className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_nio_Buffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_Buffer jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("java.nio.Buffer");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_Buffer(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::java_nio_Buffer result((AndroidCXX::java_nio_Buffer) *((AndroidCXX::java_nio_Buffer *) cxx_value));
	delete ((AndroidCXX::java_nio_Buffer *) cxx_value);
		
	LOGV("AndroidCXX::java_nio_Buffer java_nio_Buffer::mark() exit");

	return result;
}
AndroidCXX::java_nio_Buffer java_nio_Buffer::reset()
{
	LOGV("AndroidCXX::java_nio_Buffer java_nio_Buffer::reset() enter");

	const char *methodName = "reset";
	const char *methodSignature = "()Ljava/nio/Buffer;";
	const char *className = "java/nio/Buffer";

	LOGV("java_nio_Buffer className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_nio_Buffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_Buffer jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("java.nio.Buffer");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_Buffer(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::java_nio_Buffer result((AndroidCXX::java_nio_Buffer) *((AndroidCXX::java_nio_Buffer *) cxx_value));
	delete ((AndroidCXX::java_nio_Buffer *) cxx_value);
		
	LOGV("AndroidCXX::java_nio_Buffer java_nio_Buffer::reset() exit");

	return result;
}
AndroidCXX::java_nio_Buffer java_nio_Buffer::flip()
{
	LOGV("AndroidCXX::java_nio_Buffer java_nio_Buffer::flip() enter");

	const char *methodName = "flip";
	const char *methodSignature = "()Ljava/nio/Buffer;";
	const char *className = "java/nio/Buffer";

	LOGV("java_nio_Buffer className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_nio_Buffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_Buffer jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("java.nio.Buffer");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_Buffer(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::java_nio_Buffer result((AndroidCXX::java_nio_Buffer) *((AndroidCXX::java_nio_Buffer *) cxx_value));
	delete ((AndroidCXX::java_nio_Buffer *) cxx_value);
		
	LOGV("AndroidCXX::java_nio_Buffer java_nio_Buffer::flip() exit");

	return result;
}
AndroidCXX::java_nio_Buffer java_nio_Buffer::rewind()
{
	LOGV("AndroidCXX::java_nio_Buffer java_nio_Buffer::rewind() enter");

	const char *methodName = "rewind";
	const char *methodSignature = "()Ljava/nio/Buffer;";
	const char *className = "java/nio/Buffer";

	LOGV("java_nio_Buffer className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_nio_Buffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_Buffer jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("java.nio.Buffer");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_Buffer(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::java_nio_Buffer result((AndroidCXX::java_nio_Buffer) *((AndroidCXX::java_nio_Buffer *) cxx_value));
	delete ((AndroidCXX::java_nio_Buffer *) cxx_value);
		
	LOGV("AndroidCXX::java_nio_Buffer java_nio_Buffer::rewind() exit");

	return result;
}
bool java_nio_Buffer::hasRemaining()
{
	LOGV("bool java_nio_Buffer::hasRemaining() enter");

	const char *methodName = "hasRemaining";
	const char *methodSignature = "()Z";
	const char *className = "java/nio/Buffer";

	LOGV("java_nio_Buffer className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_nio_Buffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_Buffer jni address %d", javaObject);


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
		
	LOGV("bool java_nio_Buffer::hasRemaining() exit");

	return result;
}
bool java_nio_Buffer::isReadOnly()
{
	LOGV("bool java_nio_Buffer::isReadOnly() enter");

	const char *methodName = "isReadOnly";
	const char *methodSignature = "()Z";
	const char *className = "java/nio/Buffer";

	LOGV("java_nio_Buffer className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_nio_Buffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_Buffer jni address %d", javaObject);


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
		
	LOGV("bool java_nio_Buffer::isReadOnly() exit");

	return result;
}

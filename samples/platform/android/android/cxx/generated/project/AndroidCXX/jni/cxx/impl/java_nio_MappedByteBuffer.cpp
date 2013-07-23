/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
	










// Generated Code 

#include <java_nio_MappedByteBuffer.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>
// TODO: FIXME: add include package
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "java_nio_MappedByteBuffer"
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

static long static_obj;
static long static_address = (long) &static_obj;


// Default Instance Constructors
java_nio_MappedByteBuffer::java_nio_MappedByteBuffer(const java_nio_MappedByteBuffer& cc)
{
	LOGV("java_nio_MappedByteBuffer::java_nio_MappedByteBuffer(const java_nio_MappedByteBuffer& cc) enter");

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

	LOGV("java_nio_MappedByteBuffer::java_nio_MappedByteBuffer(const java_nio_MappedByteBuffer& cc) exit");
}
java_nio_MappedByteBuffer::java_nio_MappedByteBuffer(void * proxy)
{
	LOGV("java_nio_MappedByteBuffer::java_nio_MappedByteBuffer(void * proxy) enter");

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

	LOGV("java_nio_MappedByteBuffer::java_nio_MappedByteBuffer(void * proxy) exit");
}
java_nio_MappedByteBuffer::java_nio_MappedByteBuffer()
{
	LOGV("java_nio_MappedByteBuffer::java_nio_MappedByteBuffer() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "java/nio/MappedByteBuffer";

	LOGV("java_nio_MappedByteBuffer className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_MappedByteBuffer cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_MappedByteBuffer jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, "<init>", methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("java_nio_MappedByteBuffer::java_nio_MappedByteBuffer() exit");	
}
// Public Constructors
// Default Instance Destructor
java_nio_MappedByteBuffer::~java_nio_MappedByteBuffer()
{
	LOGV("java_nio_MappedByteBuffer::~java_nio_MappedByteBuffer() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("java_nio_MappedByteBuffer::~java_nio_MappedByteBuffer() exit");
}
// Functions
AndroidCXX::java_nio_MappedByteBuffer java_nio_MappedByteBuffer::load()
{
	LOGV("AndroidCXX::java_nio_MappedByteBuffer java_nio_MappedByteBuffer::load() enter");

	const char *methodName = "load";
	const char *methodSignature = "()Ljava/nio/MappedByteBuffer;";
	const char *className = "java/nio/MappedByteBuffer";

	LOGV("java_nio_MappedByteBuffer className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_MappedByteBuffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_MappedByteBuffer jni address %d", javaObject);


	AndroidCXX::java_nio_MappedByteBuffer result;
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
			cxx_type_hierarchy.type_name = std::string("java.nio.MappedByteBuffer");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_MappedByteBuffer(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::java_nio_MappedByteBuffer) (AndroidCXX::java_nio_MappedByteBuffer((AndroidCXX::java_nio_MappedByteBuffer *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::java_nio_MappedByteBuffer java_nio_MappedByteBuffer::load() exit");

	return result;
}
bool java_nio_MappedByteBuffer::isLoaded()
{
	LOGV("bool java_nio_MappedByteBuffer::isLoaded() enter");

	const char *methodName = "isLoaded";
	const char *methodSignature = "()Z";
	const char *className = "java/nio/MappedByteBuffer";

	LOGV("java_nio_MappedByteBuffer className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_MappedByteBuffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_MappedByteBuffer jni address %d", javaObject);


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

	LOGV("bool java_nio_MappedByteBuffer::isLoaded() exit");

	return result;
}
AndroidCXX::java_nio_MappedByteBuffer java_nio_MappedByteBuffer::force()
{
	LOGV("AndroidCXX::java_nio_MappedByteBuffer java_nio_MappedByteBuffer::force() enter");

	const char *methodName = "force";
	const char *methodSignature = "()Ljava/nio/MappedByteBuffer;";
	const char *className = "java/nio/MappedByteBuffer";

	LOGV("java_nio_MappedByteBuffer className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_MappedByteBuffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_MappedByteBuffer jni address %d", javaObject);


	AndroidCXX::java_nio_MappedByteBuffer result;
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
			cxx_type_hierarchy.type_name = std::string("java.nio.MappedByteBuffer");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_MappedByteBuffer(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::java_nio_MappedByteBuffer) (AndroidCXX::java_nio_MappedByteBuffer((AndroidCXX::java_nio_MappedByteBuffer *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::java_nio_MappedByteBuffer java_nio_MappedByteBuffer::force() exit");

	return result;
}

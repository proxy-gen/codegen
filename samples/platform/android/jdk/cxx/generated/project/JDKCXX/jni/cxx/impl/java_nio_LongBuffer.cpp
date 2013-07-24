/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
	
 		 
	
	
	
	
	
 		 
	
 		 
	
	
	
	
	
	
	
	
































// Generated Code 

#include <java_nio_LongBuffer.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <JDKCXXConverter.hpp>
// TODO: FIXME: add include package
// FIXME: remove after testing

#define LOG_TAG "java_nio_LongBuffer"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace JDKCXX;

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
java_nio_LongBuffer::java_nio_LongBuffer(const java_nio_LongBuffer& cc)
{
	LOGV("java_nio_LongBuffer::java_nio_LongBuffer(const java_nio_LongBuffer& cc) enter");

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

	LOGV("java_nio_LongBuffer::java_nio_LongBuffer(const java_nio_LongBuffer& cc) exit");
}
java_nio_LongBuffer::java_nio_LongBuffer(void * proxy)
{
	LOGV("java_nio_LongBuffer::java_nio_LongBuffer(void * proxy) enter");

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

	LOGV("java_nio_LongBuffer::java_nio_LongBuffer(void * proxy) exit");
}
// TODO: remove
// 
// 
// java_nio_LongBuffer::java_nio_LongBuffer()
// {
// 	LOGV("java_nio_LongBuffer::java_nio_LongBuffer() enter");	

// 	const char *methodName = "<init>";
// 	const char *methodSignature = "()V";
// 	const char *className = "java/nio/LongBuffer";

// 	LOGV("java_nio_LongBuffer className %d methodName %s methodSignature %s", className, methodName, methodSignature);

// 	CXXContext *ctx = CXXContext::sharedInstance();
// 	JNIContext *jni = JNIContext::sharedInstance();

// 	jni->pushLocalFrame();

// 	long cxxAddress = (long) this;
// 	LOGV("java_nio_LongBuffer cxx address %d", cxxAddress);
// 	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
// 	LOGV("java_nio_LongBuffer jni address %d", proxiedComponent);

// 	if (proxiedComponent == 0)
// 	{
// 		jclass clazz = jni->getClassRef(className);

// 		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, "<init>", methodSignature));
// 		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

// 		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
// 	}

// 	jni->popLocalFrame();

// 	LOGV("java_nio_LongBuffer::java_nio_LongBuffer() exit");	
// }
// 
// 
// Public Constructors
// Default Instance Destructor
java_nio_LongBuffer::~java_nio_LongBuffer()
{
	LOGV("java_nio_LongBuffer::~java_nio_LongBuffer() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("java_nio_LongBuffer::~java_nio_LongBuffer() exit");
}
// Functions
long java_nio_LongBuffer::get()
{
	LOGV("long java_nio_LongBuffer::get() enter");

	const char *methodName = "get";
	const char *methodSignature = "()J";
	const char *className = "java/nio/LongBuffer";

	LOGV("java_nio_LongBuffer className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_LongBuffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_LongBuffer jni address %d", javaObject);


	jlong jni_result = (jlong) jni->invokeLongMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni_long_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("long");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_long(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	long result = (long) *((long *) cxx_value);
	// 
		
	jni->popLocalFrame();

	LOGV("long java_nio_LongBuffer::get() exit");

	return result;
}
JDKCXX::java_nio_LongBuffer java_nio_LongBuffer::get(std::vector<long>& arg0)
{
	LOGV("JDKCXX::java_nio_LongBuffer java_nio_LongBuffer::get(std::vector<long>& arg0) enter");

	const char *methodName = "get";
	const char *methodSignature = "([J)Ljava/nio/LongBuffer;";
	const char *className = "java/nio/LongBuffer";

	LOGV("java_nio_LongBuffer className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_LongBuffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_LongBuffer jni address %d", javaObject);

	jlongArray jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("_long_array_type");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("long");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_long);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert__long_array_type(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni__long_array_type_to_jni(java_value);
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
			cxx_type_hierarchy.type_name = std::string("java.nio.LongBuffer");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_LongBuffer(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	JDKCXX::java_nio_LongBuffer result((JDKCXX::java_nio_LongBuffer) *((JDKCXX::java_nio_LongBuffer *) cxx_value));
	delete ((JDKCXX::java_nio_LongBuffer *) cxx_value);
		
	jni->popLocalFrame();

	LOGV("JDKCXX::java_nio_LongBuffer java_nio_LongBuffer::get(std::vector<long>& arg0) exit");

	return result;
}
JDKCXX::java_nio_LongBuffer java_nio_LongBuffer::get(std::vector<long>& arg0,int& arg1,int& arg2)
{
	LOGV("JDKCXX::java_nio_LongBuffer java_nio_LongBuffer::get(std::vector<long>& arg0,int& arg1,int& arg2) enter");

	const char *methodName = "get";
	const char *methodSignature = "([JII)Ljava/nio/LongBuffer;";
	const char *className = "java/nio/LongBuffer";

	LOGV("java_nio_LongBuffer className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_LongBuffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_LongBuffer jni address %d", javaObject);

	jlongArray jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("_long_array_type");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("long");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_long);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert__long_array_type(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni__long_array_type_to_jni(java_value);
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
	jint jarg2;
	{
		long cxx_value = (long) & arg2;
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
		jarg2 = convert_jni_int_to_jni(java_value);
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
			cxx_type_hierarchy.type_name = std::string("java.nio.LongBuffer");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_LongBuffer(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	JDKCXX::java_nio_LongBuffer result((JDKCXX::java_nio_LongBuffer) *((JDKCXX::java_nio_LongBuffer *) cxx_value));
	delete ((JDKCXX::java_nio_LongBuffer *) cxx_value);
		
	jni->popLocalFrame();

	LOGV("JDKCXX::java_nio_LongBuffer java_nio_LongBuffer::get(std::vector<long>& arg0,int& arg1,int& arg2) exit");

	return result;
}
long java_nio_LongBuffer::get(int& arg0)
{
	LOGV("long java_nio_LongBuffer::get(int& arg0) enter");

	const char *methodName = "get";
	const char *methodSignature = "(I)J";
	const char *className = "java/nio/LongBuffer";

	LOGV("java_nio_LongBuffer className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_LongBuffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_LongBuffer jni address %d", javaObject);

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

	jlong jni_result = (jlong) jni->invokeLongMethod(javaObject,className,methodName,methodSignature,jarg0);
	long cxx_value = (long) 0;
	long java_value = convert_jni_long_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("long");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_long(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	long result = (long) *((long *) cxx_value);
	// 
		
	jni->popLocalFrame();

	LOGV("long java_nio_LongBuffer::get(int& arg0) exit");

	return result;
}
JDKCXX::java_nio_LongBuffer java_nio_LongBuffer::put(JDKCXX::java_nio_LongBuffer& arg0)
{
	LOGV("JDKCXX::java_nio_LongBuffer java_nio_LongBuffer::put(JDKCXX::java_nio_LongBuffer& arg0) enter");

	const char *methodName = "put";
	const char *methodSignature = "(Ljava/nio/LongBuffer;)Ljava/nio/LongBuffer;";
	const char *className = "java/nio/LongBuffer";

	LOGV("java_nio_LongBuffer className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_LongBuffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_LongBuffer jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("java.nio.LongBuffer");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_nio_LongBuffer(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
			cxx_type_hierarchy.type_name = std::string("java.nio.LongBuffer");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_LongBuffer(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	JDKCXX::java_nio_LongBuffer result((JDKCXX::java_nio_LongBuffer) *((JDKCXX::java_nio_LongBuffer *) cxx_value));
	delete ((JDKCXX::java_nio_LongBuffer *) cxx_value);
		
	jni->popLocalFrame();

	LOGV("JDKCXX::java_nio_LongBuffer java_nio_LongBuffer::put(JDKCXX::java_nio_LongBuffer& arg0) exit");

	return result;
}
JDKCXX::java_nio_LongBuffer java_nio_LongBuffer::put(long& arg0)
{
	LOGV("JDKCXX::java_nio_LongBuffer java_nio_LongBuffer::put(long& arg0) enter");

	const char *methodName = "put";
	const char *methodSignature = "(J)Ljava/nio/LongBuffer;";
	const char *className = "java/nio/LongBuffer";

	LOGV("java_nio_LongBuffer className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_LongBuffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_LongBuffer jni address %d", javaObject);

	jlong jarg0;
	{
		long cxx_value = (long) & arg0;
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
		jarg0 = convert_jni_long_to_jni(java_value);
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
			cxx_type_hierarchy.type_name = std::string("java.nio.LongBuffer");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_LongBuffer(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	JDKCXX::java_nio_LongBuffer result((JDKCXX::java_nio_LongBuffer) *((JDKCXX::java_nio_LongBuffer *) cxx_value));
	delete ((JDKCXX::java_nio_LongBuffer *) cxx_value);
		
	jni->popLocalFrame();

	LOGV("JDKCXX::java_nio_LongBuffer java_nio_LongBuffer::put(long& arg0) exit");

	return result;
}
JDKCXX::java_nio_LongBuffer java_nio_LongBuffer::put(int& arg0,long& arg1)
{
	LOGV("JDKCXX::java_nio_LongBuffer java_nio_LongBuffer::put(int& arg0,long& arg1) enter");

	const char *methodName = "put";
	const char *methodSignature = "(IJ)Ljava/nio/LongBuffer;";
	const char *className = "java/nio/LongBuffer";

	LOGV("java_nio_LongBuffer className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_LongBuffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_LongBuffer jni address %d", javaObject);

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
	jlong jarg1;
	{
		long cxx_value = (long) & arg1;
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
		jarg1 = convert_jni_long_to_jni(java_value);
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
			cxx_type_hierarchy.type_name = std::string("java.nio.LongBuffer");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_LongBuffer(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	JDKCXX::java_nio_LongBuffer result((JDKCXX::java_nio_LongBuffer) *((JDKCXX::java_nio_LongBuffer *) cxx_value));
	delete ((JDKCXX::java_nio_LongBuffer *) cxx_value);
		
	jni->popLocalFrame();

	LOGV("JDKCXX::java_nio_LongBuffer java_nio_LongBuffer::put(int& arg0,long& arg1) exit");

	return result;
}
JDKCXX::java_nio_LongBuffer java_nio_LongBuffer::put(std::vector<long>& arg0,int& arg1,int& arg2)
{
	LOGV("JDKCXX::java_nio_LongBuffer java_nio_LongBuffer::put(std::vector<long>& arg0,int& arg1,int& arg2) enter");

	const char *methodName = "put";
	const char *methodSignature = "([JII)Ljava/nio/LongBuffer;";
	const char *className = "java/nio/LongBuffer";

	LOGV("java_nio_LongBuffer className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_LongBuffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_LongBuffer jni address %d", javaObject);

	jlongArray jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("_long_array_type");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("long");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_long);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert__long_array_type(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni__long_array_type_to_jni(java_value);
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
	jint jarg2;
	{
		long cxx_value = (long) & arg2;
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
		jarg2 = convert_jni_int_to_jni(java_value);
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
			cxx_type_hierarchy.type_name = std::string("java.nio.LongBuffer");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_LongBuffer(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	JDKCXX::java_nio_LongBuffer result((JDKCXX::java_nio_LongBuffer) *((JDKCXX::java_nio_LongBuffer *) cxx_value));
	delete ((JDKCXX::java_nio_LongBuffer *) cxx_value);
		
	jni->popLocalFrame();

	LOGV("JDKCXX::java_nio_LongBuffer java_nio_LongBuffer::put(std::vector<long>& arg0,int& arg1,int& arg2) exit");

	return result;
}
JDKCXX::java_nio_LongBuffer java_nio_LongBuffer::put(std::vector<long>& arg0)
{
	LOGV("JDKCXX::java_nio_LongBuffer java_nio_LongBuffer::put(std::vector<long>& arg0) enter");

	const char *methodName = "put";
	const char *methodSignature = "([J)Ljava/nio/LongBuffer;";
	const char *className = "java/nio/LongBuffer";

	LOGV("java_nio_LongBuffer className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_LongBuffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_LongBuffer jni address %d", javaObject);

	jlongArray jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("_long_array_type");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("long");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_long);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert__long_array_type(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni__long_array_type_to_jni(java_value);
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
			cxx_type_hierarchy.type_name = std::string("java.nio.LongBuffer");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_LongBuffer(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	JDKCXX::java_nio_LongBuffer result((JDKCXX::java_nio_LongBuffer) *((JDKCXX::java_nio_LongBuffer *) cxx_value));
	delete ((JDKCXX::java_nio_LongBuffer *) cxx_value);
		
	jni->popLocalFrame();

	LOGV("JDKCXX::java_nio_LongBuffer java_nio_LongBuffer::put(std::vector<long>& arg0) exit");

	return result;
}
bool java_nio_LongBuffer::equals(JDKCXX::java_lang_Object& arg0)
{
	LOGV("bool java_nio_LongBuffer::equals(JDKCXX::java_lang_Object& arg0) enter");

	const char *methodName = "equals";
	const char *methodSignature = "(Ljava/lang/Object;)Z";
	const char *className = "java/nio/LongBuffer";

	LOGV("java_nio_LongBuffer className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_LongBuffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_LongBuffer jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("java.lang.Object");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_lang_Object(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
		
	jni->popLocalFrame();

	LOGV("bool java_nio_LongBuffer::equals(JDKCXX::java_lang_Object& arg0) exit");

	return result;
}
JDKCXX::java_lang_String java_nio_LongBuffer::toString()
{
	LOGV("JDKCXX::java_lang_String java_nio_LongBuffer::toString() enter");

	const char *methodName = "toString";
	const char *methodSignature = "()Ljava/lang/String;";
	const char *className = "java/nio/LongBuffer";

	LOGV("java_nio_LongBuffer className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_LongBuffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_LongBuffer jni address %d", javaObject);


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

	JDKCXX::java_lang_String result((JDKCXX::java_lang_String) *((JDKCXX::java_lang_String *) cxx_value));
	delete ((JDKCXX::java_lang_String *) cxx_value);
		
	jni->popLocalFrame();

	LOGV("JDKCXX::java_lang_String java_nio_LongBuffer::toString() exit");

	return result;
}
int java_nio_LongBuffer::hashCode()
{
	LOGV("int java_nio_LongBuffer::hashCode() enter");

	const char *methodName = "hashCode";
	const char *methodSignature = "()I";
	const char *className = "java/nio/LongBuffer";

	LOGV("java_nio_LongBuffer className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_LongBuffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_LongBuffer jni address %d", javaObject);


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
		
	jni->popLocalFrame();

	LOGV("int java_nio_LongBuffer::hashCode() exit");

	return result;
}
int java_nio_LongBuffer::compareTo(JDKCXX::java_nio_LongBuffer& arg0)
{
	LOGV("int java_nio_LongBuffer::compareTo(JDKCXX::java_nio_LongBuffer& arg0) enter");

	const char *methodName = "compareTo";
	const char *methodSignature = "(Ljava/nio/LongBuffer;)I";
	const char *className = "java/nio/LongBuffer";

	LOGV("java_nio_LongBuffer className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_LongBuffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_LongBuffer jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("java.nio.LongBuffer");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_nio_LongBuffer(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jint jni_result = (jint) jni->invokeIntMethod(javaObject,className,methodName,methodSignature,jarg0);
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
		
	jni->popLocalFrame();

	LOGV("int java_nio_LongBuffer::compareTo(JDKCXX::java_nio_LongBuffer& arg0) exit");

	return result;
}
bool java_nio_LongBuffer::isDirect()
{
	LOGV("bool java_nio_LongBuffer::isDirect() enter");

	const char *methodName = "isDirect";
	const char *methodSignature = "()Z";
	const char *className = "java/nio/LongBuffer";

	LOGV("java_nio_LongBuffer className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_LongBuffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_LongBuffer jni address %d", javaObject);


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
		
	jni->popLocalFrame();

	LOGV("bool java_nio_LongBuffer::isDirect() exit");

	return result;
}
bool java_nio_LongBuffer::hasArray()
{
	LOGV("bool java_nio_LongBuffer::hasArray() enter");

	const char *methodName = "hasArray";
	const char *methodSignature = "()Z";
	const char *className = "java/nio/LongBuffer";

	LOGV("java_nio_LongBuffer className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_LongBuffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_LongBuffer jni address %d", javaObject);


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
		
	jni->popLocalFrame();

	LOGV("bool java_nio_LongBuffer::hasArray() exit");

	return result;
}
std::vector<long> java_nio_LongBuffer::array()
{
	LOGV("std::vector<long> java_nio_LongBuffer::array() enter");

	const char *methodName = "array";
	const char *methodSignature = "()[J";
	const char *className = "java/nio/LongBuffer";

	LOGV("java_nio_LongBuffer className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_LongBuffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_LongBuffer jni address %d", javaObject);


	jlongArray jni_result = (jlongArray) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni__long_array_type_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("_long_array_type");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("long");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_long);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert__long_array_type(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	std::vector<long> result = (std::vector<long>) *((std::vector<long> *) cxx_value);
	delete ((std::vector<long> *) cxx_value);
		
	jni->popLocalFrame();

	LOGV("std::vector<long> java_nio_LongBuffer::array() exit");

	return result;
}
int java_nio_LongBuffer::arrayOffset()
{
	LOGV("int java_nio_LongBuffer::arrayOffset() enter");

	const char *methodName = "arrayOffset";
	const char *methodSignature = "()I";
	const char *className = "java/nio/LongBuffer";

	LOGV("java_nio_LongBuffer className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_LongBuffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_LongBuffer jni address %d", javaObject);


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
		
	jni->popLocalFrame();

	LOGV("int java_nio_LongBuffer::arrayOffset() exit");

	return result;
}
JDKCXX::java_nio_LongBuffer java_nio_LongBuffer::wrap(std::vector<long>& arg0,int& arg1,int& arg2)
{
	LOGV("JDKCXX::java_nio_LongBuffer java_nio_LongBuffer::wrap(std::vector<long>& arg0,int& arg1,int& arg2) enter");

	const char *methodName = "wrap";
	const char *methodSignature = "([JII)Ljava/nio/LongBuffer;";
	const char *className = "java/nio/LongBuffer";

	LOGV("java_nio_LongBuffer className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) static_address; // _static function
	LOGV("java_nio_LongBuffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_LongBuffer jni address %d", javaObject);

	jlongArray jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("_long_array_type");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("long");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_long);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert__long_array_type(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni__long_array_type_to_jni(java_value);
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
	jint jarg2;
	{
		long cxx_value = (long) & arg2;
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
		jarg2 = convert_jni_int_to_jni(java_value);
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
			cxx_type_hierarchy.type_name = std::string("java.nio.LongBuffer");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_LongBuffer(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	JDKCXX::java_nio_LongBuffer result((JDKCXX::java_nio_LongBuffer) *((JDKCXX::java_nio_LongBuffer *) cxx_value));
	delete ((JDKCXX::java_nio_LongBuffer *) cxx_value);
		
	jni->popLocalFrame();

	LOGV("JDKCXX::java_nio_LongBuffer java_nio_LongBuffer::wrap(std::vector<long>& arg0,int& arg1,int& arg2) exit");

	return result;
}
JDKCXX::java_nio_LongBuffer java_nio_LongBuffer::wrap(std::vector<long>& arg0)
{
	LOGV("JDKCXX::java_nio_LongBuffer java_nio_LongBuffer::wrap(std::vector<long>& arg0) enter");

	const char *methodName = "wrap";
	const char *methodSignature = "([J)Ljava/nio/LongBuffer;";
	const char *className = "java/nio/LongBuffer";

	LOGV("java_nio_LongBuffer className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) static_address; // _static function
	LOGV("java_nio_LongBuffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_LongBuffer jni address %d", javaObject);

	jlongArray jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("_long_array_type");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("long");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_long);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert__long_array_type(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni__long_array_type_to_jni(java_value);
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
			cxx_type_hierarchy.type_name = std::string("java.nio.LongBuffer");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_LongBuffer(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	JDKCXX::java_nio_LongBuffer result((JDKCXX::java_nio_LongBuffer) *((JDKCXX::java_nio_LongBuffer *) cxx_value));
	delete ((JDKCXX::java_nio_LongBuffer *) cxx_value);
		
	jni->popLocalFrame();

	LOGV("JDKCXX::java_nio_LongBuffer java_nio_LongBuffer::wrap(std::vector<long>& arg0) exit");

	return result;
}
JDKCXX::java_nio_LongBuffer java_nio_LongBuffer::allocate(int& arg0)
{
	LOGV("JDKCXX::java_nio_LongBuffer java_nio_LongBuffer::allocate(int& arg0) enter");

	const char *methodName = "allocate";
	const char *methodSignature = "(I)Ljava/nio/LongBuffer;";
	const char *className = "java/nio/LongBuffer";

	LOGV("java_nio_LongBuffer className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) static_address; // _static function
	LOGV("java_nio_LongBuffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_LongBuffer jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("java.nio.LongBuffer");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_LongBuffer(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	JDKCXX::java_nio_LongBuffer result((JDKCXX::java_nio_LongBuffer) *((JDKCXX::java_nio_LongBuffer *) cxx_value));
	delete ((JDKCXX::java_nio_LongBuffer *) cxx_value);
		
	jni->popLocalFrame();

	LOGV("JDKCXX::java_nio_LongBuffer java_nio_LongBuffer::allocate(int& arg0) exit");

	return result;
}
JDKCXX::java_nio_LongBuffer java_nio_LongBuffer::duplicate()
{
	LOGV("JDKCXX::java_nio_LongBuffer java_nio_LongBuffer::duplicate() enter");

	const char *methodName = "duplicate";
	const char *methodSignature = "()Ljava/nio/LongBuffer;";
	const char *className = "java/nio/LongBuffer";

	LOGV("java_nio_LongBuffer className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_LongBuffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_LongBuffer jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("java.nio.LongBuffer");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_LongBuffer(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	JDKCXX::java_nio_LongBuffer result((JDKCXX::java_nio_LongBuffer) *((JDKCXX::java_nio_LongBuffer *) cxx_value));
	delete ((JDKCXX::java_nio_LongBuffer *) cxx_value);
		
	jni->popLocalFrame();

	LOGV("JDKCXX::java_nio_LongBuffer java_nio_LongBuffer::duplicate() exit");

	return result;
}
JDKCXX::java_nio_LongBuffer java_nio_LongBuffer::slice()
{
	LOGV("JDKCXX::java_nio_LongBuffer java_nio_LongBuffer::slice() enter");

	const char *methodName = "slice";
	const char *methodSignature = "()Ljava/nio/LongBuffer;";
	const char *className = "java/nio/LongBuffer";

	LOGV("java_nio_LongBuffer className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_LongBuffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_LongBuffer jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("java.nio.LongBuffer");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_LongBuffer(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	JDKCXX::java_nio_LongBuffer result((JDKCXX::java_nio_LongBuffer) *((JDKCXX::java_nio_LongBuffer *) cxx_value));
	delete ((JDKCXX::java_nio_LongBuffer *) cxx_value);
		
	jni->popLocalFrame();

	LOGV("JDKCXX::java_nio_LongBuffer java_nio_LongBuffer::slice() exit");

	return result;
}
JDKCXX::java_nio_LongBuffer java_nio_LongBuffer::asReadOnlyBuffer()
{
	LOGV("JDKCXX::java_nio_LongBuffer java_nio_LongBuffer::asReadOnlyBuffer() enter");

	const char *methodName = "asReadOnlyBuffer";
	const char *methodSignature = "()Ljava/nio/LongBuffer;";
	const char *className = "java/nio/LongBuffer";

	LOGV("java_nio_LongBuffer className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_LongBuffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_LongBuffer jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("java.nio.LongBuffer");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_LongBuffer(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	JDKCXX::java_nio_LongBuffer result((JDKCXX::java_nio_LongBuffer) *((JDKCXX::java_nio_LongBuffer *) cxx_value));
	delete ((JDKCXX::java_nio_LongBuffer *) cxx_value);
		
	jni->popLocalFrame();

	LOGV("JDKCXX::java_nio_LongBuffer java_nio_LongBuffer::asReadOnlyBuffer() exit");

	return result;
}
JDKCXX::java_nio_LongBuffer java_nio_LongBuffer::compact()
{
	LOGV("JDKCXX::java_nio_LongBuffer java_nio_LongBuffer::compact() enter");

	const char *methodName = "compact";
	const char *methodSignature = "()Ljava/nio/LongBuffer;";
	const char *className = "java/nio/LongBuffer";

	LOGV("java_nio_LongBuffer className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_LongBuffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_LongBuffer jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("java.nio.LongBuffer");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_LongBuffer(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	JDKCXX::java_nio_LongBuffer result((JDKCXX::java_nio_LongBuffer) *((JDKCXX::java_nio_LongBuffer *) cxx_value));
	delete ((JDKCXX::java_nio_LongBuffer *) cxx_value);
		
	jni->popLocalFrame();

	LOGV("JDKCXX::java_nio_LongBuffer java_nio_LongBuffer::compact() exit");

	return result;
}
JDKCXX::java_nio_ByteOrder java_nio_LongBuffer::order()
{
	LOGV("JDKCXX::java_nio_ByteOrder java_nio_LongBuffer::order() enter");

	const char *methodName = "order";
	const char *methodSignature = "()Ljava/nio/ByteOrder;";
	const char *className = "java/nio/LongBuffer";

	LOGV("java_nio_LongBuffer className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_LongBuffer cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_LongBuffer jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("java.nio.ByteOrder");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_ByteOrder(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	JDKCXX::java_nio_ByteOrder result((JDKCXX::java_nio_ByteOrder) *((JDKCXX::java_nio_ByteOrder *) cxx_value));
	delete ((JDKCXX::java_nio_ByteOrder *) cxx_value);
		
	jni->popLocalFrame();

	LOGV("JDKCXX::java_nio_ByteOrder java_nio_LongBuffer::order() exit");

	return result;
}

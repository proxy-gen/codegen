/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
	
	
 		 
 		 
	
 		 
	
 		 
 		 
	
	
 		 
 		 



























// Generated Code 

#include <java_nio_channels_FileChannel.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "java_nio_channels_FileChannel"
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

static long static_obj;
static long static_address = (long) &static_obj;


// Default Instance Constructors
java_nio_channels_FileChannel::java_nio_channels_FileChannel(const java_nio_channels_FileChannel& cc)
{
	LOGV("java_nio_channels_FileChannel::java_nio_channels_FileChannel(const java_nio_channels_FileChannel& cc) enter");

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

	LOGV("java_nio_channels_FileChannel::java_nio_channels_FileChannel(const java_nio_channels_FileChannel& cc) exit");
}
java_nio_channels_FileChannel::java_nio_channels_FileChannel(void * proxy)
{
	LOGV("java_nio_channels_FileChannel::java_nio_channels_FileChannel(void * proxy) enter");

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

	LOGV("java_nio_channels_FileChannel::java_nio_channels_FileChannel(void * proxy) exit");
}
java_nio_channels_FileChannel::java_nio_channels_FileChannel()
{
	LOGV("java_nio_channels_FileChannel::java_nio_channels_FileChannel() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "java/nio/channels/FileChannel";

	LOGV("java_nio_channels_FileChannel className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_channels_FileChannel cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_channels_FileChannel jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, "<init>", methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("java_nio_channels_FileChannel::java_nio_channels_FileChannel() exit");	
}
// Public Constructors
// Default Instance Destructor
java_nio_channels_FileChannel::~java_nio_channels_FileChannel()
{
	LOGV("java_nio_channels_FileChannel::~java_nio_channels_FileChannel() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("java_nio_channels_FileChannel::~java_nio_channels_FileChannel() exit");
}
// Functions
AndroidCXX::java_nio_channels_FileLock java_nio_channels_FileChannel::lock()
{
	LOGV("AndroidCXX::java_nio_channels_FileLock java_nio_channels_FileChannel::lock() enter");

	const char *methodName = "lock";
	const char *methodSignature = "()Ljava/nio/channels/FileLock;";
	const char *className = "java/nio/channels/FileChannel";

	LOGV("java_nio_channels_FileChannel className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_channels_FileChannel cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_channels_FileChannel jni address %d", javaObject);


	AndroidCXX::java_nio_channels_FileLock result;
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
			cxx_type_hierarchy.type_name = std::string("java.nio.channels.FileLock");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_channels_FileLock(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::java_nio_channels_FileLock) (AndroidCXX::java_nio_channels_FileLock((AndroidCXX::java_nio_channels_FileLock *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::java_nio_channels_FileLock java_nio_channels_FileChannel::lock() exit");

	return result;
}
AndroidCXX::java_nio_channels_FileLock java_nio_channels_FileChannel::lock(long& arg0,long& arg1,bool& arg2)
{
	LOGV("AndroidCXX::java_nio_channels_FileLock java_nio_channels_FileChannel::lock(long& arg0,long& arg1,bool& arg2) enter");

	const char *methodName = "lock";
	const char *methodSignature = "(JJZ)Ljava/nio/channels/FileLock;";
	const char *className = "java/nio/channels/FileChannel";

	LOGV("java_nio_channels_FileChannel className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_channels_FileChannel cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_channels_FileChannel jni address %d", javaObject);

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

	AndroidCXX::java_nio_channels_FileLock result;
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
			cxx_type_hierarchy.type_name = std::string("java.nio.channels.FileLock");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_channels_FileLock(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::java_nio_channels_FileLock) (AndroidCXX::java_nio_channels_FileLock((AndroidCXX::java_nio_channels_FileLock *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::java_nio_channels_FileLock java_nio_channels_FileChannel::lock(long& arg0,long& arg1,bool& arg2) exit");

	return result;
}
long java_nio_channels_FileChannel::size()
{
	LOGV("long java_nio_channels_FileChannel::size() enter");

	const char *methodName = "size";
	const char *methodSignature = "()J";
	const char *className = "java/nio/channels/FileChannel";

	LOGV("java_nio_channels_FileChannel className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_channels_FileChannel cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_channels_FileChannel jni address %d", javaObject);


	long result;
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
	result = (long) (cxx_value);
		
	jni->popLocalFrame();

	LOGV("long java_nio_channels_FileChannel::size() exit");

	return result;
}
long java_nio_channels_FileChannel::position()
{
	LOGV("long java_nio_channels_FileChannel::position() enter");

	const char *methodName = "position";
	const char *methodSignature = "()J";
	const char *className = "java/nio/channels/FileChannel";

	LOGV("java_nio_channels_FileChannel className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_channels_FileChannel cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_channels_FileChannel jni address %d", javaObject);


	long result;
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
	result = (long) (cxx_value);
		
	jni->popLocalFrame();

	LOGV("long java_nio_channels_FileChannel::position() exit");

	return result;
}
AndroidCXX::java_nio_channels_FileChannel java_nio_channels_FileChannel::position(long& arg0)
{
	LOGV("AndroidCXX::java_nio_channels_FileChannel java_nio_channels_FileChannel::position(long& arg0) enter");

	const char *methodName = "position";
	const char *methodSignature = "(J)Ljava/nio/channels/FileChannel;";
	const char *className = "java/nio/channels/FileChannel";

	LOGV("java_nio_channels_FileChannel className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_channels_FileChannel cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_channels_FileChannel jni address %d", javaObject);

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

	AndroidCXX::java_nio_channels_FileChannel result;
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
			cxx_type_hierarchy.type_name = std::string("java.nio.channels.FileChannel");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_channels_FileChannel(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::java_nio_channels_FileChannel) (AndroidCXX::java_nio_channels_FileChannel((AndroidCXX::java_nio_channels_FileChannel *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::java_nio_channels_FileChannel java_nio_channels_FileChannel::position(long& arg0) exit");

	return result;
}
int java_nio_channels_FileChannel::write(AndroidCXX::java_nio_ByteBuffer& arg0)
{
	LOGV("int java_nio_channels_FileChannel::write(AndroidCXX::java_nio_ByteBuffer& arg0) enter");

	const char *methodName = "write";
	const char *methodSignature = "(Ljava/nio/ByteBuffer;)I";
	const char *className = "java/nio/channels/FileChannel";

	LOGV("java_nio_channels_FileChannel className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_channels_FileChannel cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_channels_FileChannel jni address %d", javaObject);

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

	int result;
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
	result = (int) (cxx_value);
		
	jni->popLocalFrame();

	LOGV("int java_nio_channels_FileChannel::write(AndroidCXX::java_nio_ByteBuffer& arg0) exit");

	return result;
}
long java_nio_channels_FileChannel::write(std::vector<java_nio_ByteBuffer >& arg0,int& arg1,int& arg2)
{
	LOGV("long java_nio_channels_FileChannel::write(std::vector<java_nio_ByteBuffer >& arg0,int& arg1,int& arg2) enter");

	const char *methodName = "write";
	const char *methodSignature = "([Ljava/nio/ByteBuffer;II)J";
	const char *className = "java/nio/channels/FileChannel";

	LOGV("java_nio_channels_FileChannel className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_channels_FileChannel cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_channels_FileChannel jni address %d", javaObject);

	jobjectArray jarg0;
	{
		long cxx_value = (long) & arg0;
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
			cxx_type_hierarchy.type_name = std::string("java.nio.ByteBuffer");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_java_nio_ByteBuffer);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert__object_array_type(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni__object_array_type_to_jni(java_value);
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

	long result;
	jlong jni_result = (jlong) jni->invokeLongMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1,jarg2);
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
	result = (long) (cxx_value);
		
	jni->popLocalFrame();

	LOGV("long java_nio_channels_FileChannel::write(std::vector<java_nio_ByteBuffer >& arg0,int& arg1,int& arg2) exit");

	return result;
}
long java_nio_channels_FileChannel::write(std::vector<java_nio_ByteBuffer >& arg0)
{
	LOGV("long java_nio_channels_FileChannel::write(std::vector<java_nio_ByteBuffer >& arg0) enter");

	const char *methodName = "write";
	const char *methodSignature = "([Ljava/nio/ByteBuffer;)J";
	const char *className = "java/nio/channels/FileChannel";

	LOGV("java_nio_channels_FileChannel className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_channels_FileChannel cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_channels_FileChannel jni address %d", javaObject);

	jobjectArray jarg0;
	{
		long cxx_value = (long) & arg0;
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
			cxx_type_hierarchy.type_name = std::string("java.nio.ByteBuffer");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_java_nio_ByteBuffer);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert__object_array_type(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni__object_array_type_to_jni(java_value);
	}

	long result;
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
	result = (long) (cxx_value);
		
	jni->popLocalFrame();

	LOGV("long java_nio_channels_FileChannel::write(std::vector<java_nio_ByteBuffer >& arg0) exit");

	return result;
}
int java_nio_channels_FileChannel::write(AndroidCXX::java_nio_ByteBuffer& arg0,long& arg1)
{
	LOGV("int java_nio_channels_FileChannel::write(AndroidCXX::java_nio_ByteBuffer& arg0,long& arg1) enter");

	const char *methodName = "write";
	const char *methodSignature = "(Ljava/nio/ByteBuffer;J)I";
	const char *className = "java/nio/channels/FileChannel";

	LOGV("java_nio_channels_FileChannel className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_channels_FileChannel cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_channels_FileChannel jni address %d", javaObject);

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

	int result;
	jint jni_result = (jint) jni->invokeIntMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1);
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
	result = (int) (cxx_value);
		
	jni->popLocalFrame();

	LOGV("int java_nio_channels_FileChannel::write(AndroidCXX::java_nio_ByteBuffer& arg0,long& arg1) exit");

	return result;
}
AndroidCXX::java_nio_channels_FileChannel java_nio_channels_FileChannel::truncate(long& arg0)
{
	LOGV("AndroidCXX::java_nio_channels_FileChannel java_nio_channels_FileChannel::truncate(long& arg0) enter");

	const char *methodName = "truncate";
	const char *methodSignature = "(J)Ljava/nio/channels/FileChannel;";
	const char *className = "java/nio/channels/FileChannel";

	LOGV("java_nio_channels_FileChannel className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_channels_FileChannel cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_channels_FileChannel jni address %d", javaObject);

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

	AndroidCXX::java_nio_channels_FileChannel result;
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
			cxx_type_hierarchy.type_name = std::string("java.nio.channels.FileChannel");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_channels_FileChannel(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::java_nio_channels_FileChannel) (AndroidCXX::java_nio_channels_FileChannel((AndroidCXX::java_nio_channels_FileChannel *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::java_nio_channels_FileChannel java_nio_channels_FileChannel::truncate(long& arg0) exit");

	return result;
}
AndroidCXX::java_nio_MappedByteBuffer java_nio_channels_FileChannel::map(AndroidCXX::java_nio_channels_FileChannel_MapMode& arg0,long& arg1,long& arg2)
{
	LOGV("AndroidCXX::java_nio_MappedByteBuffer java_nio_channels_FileChannel::map(AndroidCXX::java_nio_channels_FileChannel_MapMode& arg0,long& arg1,long& arg2) enter");

	const char *methodName = "map";
	const char *methodSignature = "(Ljava/nio/channels/FileChannel$MapMode;JJ)Ljava/nio/MappedByteBuffer;";
	const char *className = "java/nio/channels/FileChannel";

	LOGV("java_nio_channels_FileChannel className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_channels_FileChannel cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_channels_FileChannel jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("java.nio.channels.FileChannel$MapMode");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_nio_channels_FileChannel_MapMode(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
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

	AndroidCXX::java_nio_MappedByteBuffer result;
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
			cxx_type_hierarchy.type_name = std::string("java.nio.MappedByteBuffer");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_MappedByteBuffer(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::java_nio_MappedByteBuffer) (AndroidCXX::java_nio_MappedByteBuffer((AndroidCXX::java_nio_MappedByteBuffer *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::java_nio_MappedByteBuffer java_nio_channels_FileChannel::map(AndroidCXX::java_nio_channels_FileChannel_MapMode& arg0,long& arg1,long& arg2) exit");

	return result;
}
int java_nio_channels_FileChannel::read(AndroidCXX::java_nio_ByteBuffer& arg0)
{
	LOGV("int java_nio_channels_FileChannel::read(AndroidCXX::java_nio_ByteBuffer& arg0) enter");

	const char *methodName = "read";
	const char *methodSignature = "(Ljava/nio/ByteBuffer;)I";
	const char *className = "java/nio/channels/FileChannel";

	LOGV("java_nio_channels_FileChannel className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_channels_FileChannel cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_channels_FileChannel jni address %d", javaObject);

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

	int result;
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
	result = (int) (cxx_value);
		
	jni->popLocalFrame();

	LOGV("int java_nio_channels_FileChannel::read(AndroidCXX::java_nio_ByteBuffer& arg0) exit");

	return result;
}
long java_nio_channels_FileChannel::read(std::vector<java_nio_ByteBuffer >& arg0,int& arg1,int& arg2)
{
	LOGV("long java_nio_channels_FileChannel::read(std::vector<java_nio_ByteBuffer >& arg0,int& arg1,int& arg2) enter");

	const char *methodName = "read";
	const char *methodSignature = "([Ljava/nio/ByteBuffer;II)J";
	const char *className = "java/nio/channels/FileChannel";

	LOGV("java_nio_channels_FileChannel className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_channels_FileChannel cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_channels_FileChannel jni address %d", javaObject);

	jobjectArray jarg0;
	{
		long cxx_value = (long) & arg0;
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
			cxx_type_hierarchy.type_name = std::string("java.nio.ByteBuffer");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_java_nio_ByteBuffer);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert__object_array_type(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni__object_array_type_to_jni(java_value);
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

	long result;
	jlong jni_result = (jlong) jni->invokeLongMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1,jarg2);
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
	result = (long) (cxx_value);
		
	jni->popLocalFrame();

	LOGV("long java_nio_channels_FileChannel::read(std::vector<java_nio_ByteBuffer >& arg0,int& arg1,int& arg2) exit");

	return result;
}
int java_nio_channels_FileChannel::read(AndroidCXX::java_nio_ByteBuffer& arg0,long& arg1)
{
	LOGV("int java_nio_channels_FileChannel::read(AndroidCXX::java_nio_ByteBuffer& arg0,long& arg1) enter");

	const char *methodName = "read";
	const char *methodSignature = "(Ljava/nio/ByteBuffer;J)I";
	const char *className = "java/nio/channels/FileChannel";

	LOGV("java_nio_channels_FileChannel className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_channels_FileChannel cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_channels_FileChannel jni address %d", javaObject);

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

	int result;
	jint jni_result = (jint) jni->invokeIntMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1);
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
	result = (int) (cxx_value);
		
	jni->popLocalFrame();

	LOGV("int java_nio_channels_FileChannel::read(AndroidCXX::java_nio_ByteBuffer& arg0,long& arg1) exit");

	return result;
}
long java_nio_channels_FileChannel::read(std::vector<java_nio_ByteBuffer >& arg0)
{
	LOGV("long java_nio_channels_FileChannel::read(std::vector<java_nio_ByteBuffer >& arg0) enter");

	const char *methodName = "read";
	const char *methodSignature = "([Ljava/nio/ByteBuffer;)J";
	const char *className = "java/nio/channels/FileChannel";

	LOGV("java_nio_channels_FileChannel className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_channels_FileChannel cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_channels_FileChannel jni address %d", javaObject);

	jobjectArray jarg0;
	{
		long cxx_value = (long) & arg0;
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
			cxx_type_hierarchy.type_name = std::string("java.nio.ByteBuffer");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_java_nio_ByteBuffer);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert__object_array_type(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni__object_array_type_to_jni(java_value);
	}

	long result;
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
	result = (long) (cxx_value);
		
	jni->popLocalFrame();

	LOGV("long java_nio_channels_FileChannel::read(std::vector<java_nio_ByteBuffer >& arg0) exit");

	return result;
}
AndroidCXX::java_nio_channels_FileLock java_nio_channels_FileChannel::tryLock()
{
	LOGV("AndroidCXX::java_nio_channels_FileLock java_nio_channels_FileChannel::tryLock() enter");

	const char *methodName = "tryLock";
	const char *methodSignature = "()Ljava/nio/channels/FileLock;";
	const char *className = "java/nio/channels/FileChannel";

	LOGV("java_nio_channels_FileChannel className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_channels_FileChannel cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_channels_FileChannel jni address %d", javaObject);


	AndroidCXX::java_nio_channels_FileLock result;
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
			cxx_type_hierarchy.type_name = std::string("java.nio.channels.FileLock");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_channels_FileLock(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::java_nio_channels_FileLock) (AndroidCXX::java_nio_channels_FileLock((AndroidCXX::java_nio_channels_FileLock *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::java_nio_channels_FileLock java_nio_channels_FileChannel::tryLock() exit");

	return result;
}
AndroidCXX::java_nio_channels_FileLock java_nio_channels_FileChannel::tryLock(long& arg0,long& arg1,bool& arg2)
{
	LOGV("AndroidCXX::java_nio_channels_FileLock java_nio_channels_FileChannel::tryLock(long& arg0,long& arg1,bool& arg2) enter");

	const char *methodName = "tryLock";
	const char *methodSignature = "(JJZ)Ljava/nio/channels/FileLock;";
	const char *className = "java/nio/channels/FileChannel";

	LOGV("java_nio_channels_FileChannel className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_channels_FileChannel cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_channels_FileChannel jni address %d", javaObject);

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

	AndroidCXX::java_nio_channels_FileLock result;
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
			cxx_type_hierarchy.type_name = std::string("java.nio.channels.FileLock");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_nio_channels_FileLock(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::java_nio_channels_FileLock) (AndroidCXX::java_nio_channels_FileLock((AndroidCXX::java_nio_channels_FileLock *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::java_nio_channels_FileLock java_nio_channels_FileChannel::tryLock(long& arg0,long& arg1,bool& arg2) exit");

	return result;
}
void java_nio_channels_FileChannel::force(bool& arg0)
{
	LOGV("void java_nio_channels_FileChannel::force(bool& arg0) enter");

	const char *methodName = "force";
	const char *methodSignature = "(Z)V";
	const char *className = "java/nio/channels/FileChannel";

	LOGV("java_nio_channels_FileChannel className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_channels_FileChannel cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_channels_FileChannel jni address %d", javaObject);

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

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void java_nio_channels_FileChannel::force(bool& arg0) exit");

}
long java_nio_channels_FileChannel::transferTo(long& arg0,long& arg1,AndroidCXX::java_nio_channels_WritableByteChannel& arg2)
{
	LOGV("long java_nio_channels_FileChannel::transferTo(long& arg0,long& arg1,AndroidCXX::java_nio_channels_WritableByteChannel& arg2) enter");

	const char *methodName = "transferTo";
	const char *methodSignature = "(JJLjava/nio/channels/WritableByteChannel;)J";
	const char *className = "java/nio/channels/FileChannel";

	LOGV("java_nio_channels_FileChannel className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_channels_FileChannel cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_channels_FileChannel jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("java.nio.channels.WritableByteChannel");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_nio_channels_WritableByteChannel(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg2 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	long result;
	jlong jni_result = (jlong) jni->invokeLongMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1,jarg2);
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
	result = (long) (cxx_value);
		
	jni->popLocalFrame();

	LOGV("long java_nio_channels_FileChannel::transferTo(long& arg0,long& arg1,AndroidCXX::java_nio_channels_WritableByteChannel& arg2) exit");

	return result;
}
long java_nio_channels_FileChannel::transferFrom(AndroidCXX::java_nio_channels_ReadableByteChannel& arg0,long& arg1,long& arg2)
{
	LOGV("long java_nio_channels_FileChannel::transferFrom(AndroidCXX::java_nio_channels_ReadableByteChannel& arg0,long& arg1,long& arg2) enter");

	const char *methodName = "transferFrom";
	const char *methodSignature = "(Ljava/nio/channels/ReadableByteChannel;JJ)J";
	const char *className = "java/nio/channels/FileChannel";

	LOGV("java_nio_channels_FileChannel className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_nio_channels_FileChannel cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_nio_channels_FileChannel jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("java.nio.channels.ReadableByteChannel");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_nio_channels_ReadableByteChannel(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
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

	long result;
	jlong jni_result = (jlong) jni->invokeLongMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1,jarg2);
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
	result = (long) (cxx_value);
		
	jni->popLocalFrame();

	LOGV("long java_nio_channels_FileChannel::transferFrom(AndroidCXX::java_nio_channels_ReadableByteChannel& arg0,long& arg1,long& arg2) exit");

	return result;
}

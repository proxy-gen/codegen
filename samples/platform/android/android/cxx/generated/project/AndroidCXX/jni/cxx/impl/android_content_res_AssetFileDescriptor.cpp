/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
 		 
	
	
	
	


 		 

















// Generated Code 

#include <android_content_res_AssetFileDescriptor.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "android_content_res_AssetFileDescriptor"
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

static long static_obj;
static long static_address = (long) &static_obj;

android_content_res_AssetFileDescriptor::android_content_res_AssetFileDescriptor(const android_content_res_AssetFileDescriptor& cc)
{
	LOGV("android_content_res_AssetFileDescriptor::android_content_res_AssetFileDescriptor(const android_content_res_AssetFileDescriptor& cc) enter");

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

	LOGV("android_content_res_AssetFileDescriptor::android_content_res_AssetFileDescriptor(const android_content_res_AssetFileDescriptor& cc) exit");
}
android_content_res_AssetFileDescriptor::android_content_res_AssetFileDescriptor(Proxy proxy)
{
	LOGV("android_content_res_AssetFileDescriptor::android_content_res_AssetFileDescriptor(Proxy proxy) enter");

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

	LOGV("android_content_res_AssetFileDescriptor::android_content_res_AssetFileDescriptor(Proxy proxy) exit");
}
Proxy android_content_res_AssetFileDescriptor::proxy() const
{	
	LOGV("android_content_res_AssetFileDescriptor::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_content_res_AssetFileDescriptor cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_res_AssetFileDescriptor jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("android_content_res_AssetFileDescriptor::proxy() exit");	

	return proxy;
}
android_content_res_AssetFileDescriptor::android_content_res_AssetFileDescriptor(AndroidCXX::android_os_ParcelFileDescriptor const& arg0,long const& arg1,long const& arg2)
{
	LOGV("android_content_res_AssetFileDescriptor::android_content_res_AssetFileDescriptor(AndroidCXX::android_os_ParcelFileDescriptor const& arg0,long const& arg1,long const& arg2) enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "(Landroid/os/ParcelFileDescriptor;JJ)V";
	const char *className = "android/content/res/AssetFileDescriptor";

	LOGV("android_content_res_AssetFileDescriptor className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_content_res_AssetFileDescriptor cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_res_AssetFileDescriptor jni address %d", proxiedComponent);

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
				cxx_type_hierarchy.type_name = std::string("android.os.ParcelFileDescriptor");
			}
			std::stack<long> converter_stack;
			converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
			convert_android_os_ParcelFileDescriptor(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
			
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, methodName, methodSignature),jarg0,jarg1,jarg2);
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("android_content_res_AssetFileDescriptor::android_content_res_AssetFileDescriptor(AndroidCXX::android_os_ParcelFileDescriptor const& arg0,long const& arg1,long const& arg2) exit");	
}
// Default Instance Destructor
android_content_res_AssetFileDescriptor::~android_content_res_AssetFileDescriptor()
{
	LOGV("android_content_res_AssetFileDescriptor::~android_content_res_AssetFileDescriptor() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("android_content_res_AssetFileDescriptor::~android_content_res_AssetFileDescriptor() exit");
}
// Functions
AndroidCXX::java_lang_String android_content_res_AssetFileDescriptor::toString()
{
	LOGV("AndroidCXX::java_lang_String android_content_res_AssetFileDescriptor::toString() enter");

	const char *methodName = "toString";
	const char *methodSignature = "()Ljava/lang/String;";
	const char *className = "android/content/res/AssetFileDescriptor";

	LOGV("android_content_res_AssetFileDescriptor className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_content_res_AssetFileDescriptor cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_res_AssetFileDescriptor jni address %d", javaObject);


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

	AndroidCXX::java_lang_String result((AndroidCXX::java_lang_String) *((AndroidCXX::java_lang_String *) cxx_value));
	delete ((AndroidCXX::java_lang_String *) cxx_value);
		
	LOGV("AndroidCXX::java_lang_String android_content_res_AssetFileDescriptor::toString() exit");

	return result;
}
long android_content_res_AssetFileDescriptor::getLength()
{
	LOGV("long android_content_res_AssetFileDescriptor::getLength() enter");

	const char *methodName = "getLength";
	const char *methodSignature = "()J";
	const char *className = "android/content/res/AssetFileDescriptor";

	LOGV("android_content_res_AssetFileDescriptor className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_content_res_AssetFileDescriptor cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_res_AssetFileDescriptor jni address %d", javaObject);


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
		
	LOGV("long android_content_res_AssetFileDescriptor::getLength() exit");

	return result;
}
void android_content_res_AssetFileDescriptor::close()
{
	LOGV("void android_content_res_AssetFileDescriptor::close() enter");

	const char *methodName = "close";
	const char *methodSignature = "()V";
	const char *className = "android/content/res/AssetFileDescriptor";

	LOGV("android_content_res_AssetFileDescriptor className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_content_res_AssetFileDescriptor cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_res_AssetFileDescriptor jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	LOGV("void android_content_res_AssetFileDescriptor::close() exit");

}
int android_content_res_AssetFileDescriptor::describeContents()
{
	LOGV("int android_content_res_AssetFileDescriptor::describeContents() enter");

	const char *methodName = "describeContents";
	const char *methodSignature = "()I";
	const char *className = "android/content/res/AssetFileDescriptor";

	LOGV("android_content_res_AssetFileDescriptor className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_content_res_AssetFileDescriptor cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_res_AssetFileDescriptor jni address %d", javaObject);


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
		
	LOGV("int android_content_res_AssetFileDescriptor::describeContents() exit");

	return result;
}
void android_content_res_AssetFileDescriptor::writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1)
{
	LOGV("void android_content_res_AssetFileDescriptor::writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) enter");

	const char *methodName = "writeToParcel";
	const char *methodSignature = "(Landroid/os/Parcel;I)V";
	const char *className = "android/content/res/AssetFileDescriptor";

	LOGV("android_content_res_AssetFileDescriptor className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_content_res_AssetFileDescriptor cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_res_AssetFileDescriptor jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.os.Parcel");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_os_Parcel(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
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

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1);
		
	LOGV("void android_content_res_AssetFileDescriptor::writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) exit");

}
AndroidCXX::java_io_FileDescriptor android_content_res_AssetFileDescriptor::getFileDescriptor()
{
	LOGV("AndroidCXX::java_io_FileDescriptor android_content_res_AssetFileDescriptor::getFileDescriptor() enter");

	const char *methodName = "getFileDescriptor";
	const char *methodSignature = "()Ljava/io/FileDescriptor;";
	const char *className = "android/content/res/AssetFileDescriptor";

	LOGV("android_content_res_AssetFileDescriptor className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_content_res_AssetFileDescriptor cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_res_AssetFileDescriptor jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("java.io.FileDescriptor");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_io_FileDescriptor(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::java_io_FileDescriptor result((AndroidCXX::java_io_FileDescriptor) *((AndroidCXX::java_io_FileDescriptor *) cxx_value));
	delete ((AndroidCXX::java_io_FileDescriptor *) cxx_value);
		
	LOGV("AndroidCXX::java_io_FileDescriptor android_content_res_AssetFileDescriptor::getFileDescriptor() exit");

	return result;
}
long android_content_res_AssetFileDescriptor::getStartOffset()
{
	LOGV("long android_content_res_AssetFileDescriptor::getStartOffset() enter");

	const char *methodName = "getStartOffset";
	const char *methodSignature = "()J";
	const char *className = "android/content/res/AssetFileDescriptor";

	LOGV("android_content_res_AssetFileDescriptor className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_content_res_AssetFileDescriptor cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_res_AssetFileDescriptor jni address %d", javaObject);


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
		
	LOGV("long android_content_res_AssetFileDescriptor::getStartOffset() exit");

	return result;
}
AndroidCXX::android_os_ParcelFileDescriptor android_content_res_AssetFileDescriptor::getParcelFileDescriptor()
{
	LOGV("AndroidCXX::android_os_ParcelFileDescriptor android_content_res_AssetFileDescriptor::getParcelFileDescriptor() enter");

	const char *methodName = "getParcelFileDescriptor";
	const char *methodSignature = "()Landroid/os/ParcelFileDescriptor;";
	const char *className = "android/content/res/AssetFileDescriptor";

	LOGV("android_content_res_AssetFileDescriptor className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_content_res_AssetFileDescriptor cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_res_AssetFileDescriptor jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("android.os.ParcelFileDescriptor");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_os_ParcelFileDescriptor(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_os_ParcelFileDescriptor result((AndroidCXX::android_os_ParcelFileDescriptor) *((AndroidCXX::android_os_ParcelFileDescriptor *) cxx_value));
	delete ((AndroidCXX::android_os_ParcelFileDescriptor *) cxx_value);
		
	LOGV("AndroidCXX::android_os_ParcelFileDescriptor android_content_res_AssetFileDescriptor::getParcelFileDescriptor() exit");

	return result;
}
long android_content_res_AssetFileDescriptor::getDeclaredLength()
{
	LOGV("long android_content_res_AssetFileDescriptor::getDeclaredLength() enter");

	const char *methodName = "getDeclaredLength";
	const char *methodSignature = "()J";
	const char *className = "android/content/res/AssetFileDescriptor";

	LOGV("android_content_res_AssetFileDescriptor className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_content_res_AssetFileDescriptor cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_res_AssetFileDescriptor jni address %d", javaObject);


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
		
	LOGV("long android_content_res_AssetFileDescriptor::getDeclaredLength() exit");

	return result;
}
AndroidCXX::java_io_FileInputStream android_content_res_AssetFileDescriptor::createInputStream()
{
	LOGV("AndroidCXX::java_io_FileInputStream android_content_res_AssetFileDescriptor::createInputStream() enter");

	const char *methodName = "createInputStream";
	const char *methodSignature = "()Ljava/io/FileInputStream;";
	const char *className = "android/content/res/AssetFileDescriptor";

	LOGV("android_content_res_AssetFileDescriptor className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_content_res_AssetFileDescriptor cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_res_AssetFileDescriptor jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("java.io.FileInputStream");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_io_FileInputStream(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::java_io_FileInputStream result((AndroidCXX::java_io_FileInputStream) *((AndroidCXX::java_io_FileInputStream *) cxx_value));
	delete ((AndroidCXX::java_io_FileInputStream *) cxx_value);
		
	LOGV("AndroidCXX::java_io_FileInputStream android_content_res_AssetFileDescriptor::createInputStream() exit");

	return result;
}
AndroidCXX::java_io_FileOutputStream android_content_res_AssetFileDescriptor::createOutputStream()
{
	LOGV("AndroidCXX::java_io_FileOutputStream android_content_res_AssetFileDescriptor::createOutputStream() enter");

	const char *methodName = "createOutputStream";
	const char *methodSignature = "()Ljava/io/FileOutputStream;";
	const char *className = "android/content/res/AssetFileDescriptor";

	LOGV("android_content_res_AssetFileDescriptor className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_content_res_AssetFileDescriptor cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_res_AssetFileDescriptor jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("java.io.FileOutputStream");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_io_FileOutputStream(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::java_io_FileOutputStream result((AndroidCXX::java_io_FileOutputStream) *((AndroidCXX::java_io_FileOutputStream *) cxx_value));
	delete ((AndroidCXX::java_io_FileOutputStream *) cxx_value);
		
	LOGV("AndroidCXX::java_io_FileOutputStream android_content_res_AssetFileDescriptor::createOutputStream() exit");

	return result;
}

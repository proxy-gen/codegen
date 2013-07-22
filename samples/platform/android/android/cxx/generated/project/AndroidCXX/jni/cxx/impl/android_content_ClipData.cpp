/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
 		 
 		 
 		 
	
 		 
 		 
	
 		 
 		 
 		 
	
 		 
 		 
 		 
	
 		 
 		 
	
	
 		 
	


 		 
 	
 		 
 		 
 		 
 		 
 		 




















// Generated Code 

#include <android_content_ClipData.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "android_content_ClipData"
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
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
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
android_content_ClipData::android_content_ClipData(const android_content_ClipData& cc)
{
	LOGV("android_content_ClipData::android_content_ClipData(const android_content_ClipData& cc) enter");

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

	LOGV("android_content_ClipData::android_content_ClipData(const android_content_ClipData& cc) exit");
}
android_content_ClipData::android_content_ClipData(void * proxy)
{
	LOGV("android_content_ClipData::android_content_ClipData(void * proxy) enter");

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

	LOGV("android_content_ClipData::android_content_ClipData(void * proxy) exit");
}
android_content_ClipData::android_content_ClipData()
{
	LOGV("android_content_ClipData::android_content_ClipData() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "android/content/ClipData";

	LOGV("android_content_ClipData className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_content_ClipData cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_ClipData jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, "<init>", methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("android_content_ClipData::android_content_ClipData() exit");	
}
// Public Constructors
android_content_ClipData::android_content_ClipData(AndroidCXX::java_lang_CharSequence& arg0,std::vector<java_lang_String >& arg1,AndroidCXX::android_content_ClipData_Item& arg2)
{
	LOGV("android_content_ClipData::android_content_ClipData(AndroidCXX::java_lang_CharSequence& arg0,std::vector<java_lang_String >& arg1,AndroidCXX::android_content_ClipData_Item& arg2) enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "(Ljava/lang/CharSequence;[Ljava/lang/String;Landroid/content/ClipData$Item;)V";
	const char *className = "android/content/ClipData";

	LOGV("android_content_ClipData className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_content_ClipData cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_ClipData jni address %d", proxiedComponent);

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
				cxx_type_hierarchy.type_name = std::string("java.lang.CharSequence");
			}
			std::stack<long> converter_stack;
			converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
			convert_java_lang_CharSequence(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

			// Convert to JNI
			jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
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
				cxx_type_hierarchy.type_name = std::string("android.content.ClipData$Item");
			}
			std::stack<long> converter_stack;
			converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
			convert_android_content_ClipData_Item(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

			// Convert to JNI
			jarg2 = convert_jni_java_lang_Object_to_jni(java_value);
		}
			
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, methodName, methodSignature),jarg0,jarg1,jarg2);
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("android_content_ClipData::android_content_ClipData(AndroidCXX::java_lang_CharSequence& arg0,std::vector<java_lang_String >& arg1,AndroidCXX::android_content_ClipData_Item& arg2) exit");	
}
android_content_ClipData::android_content_ClipData(AndroidCXX::android_content_ClipDescription& arg0,AndroidCXX::android_content_ClipData_Item& arg1)
{
	LOGV("android_content_ClipData::android_content_ClipData(AndroidCXX::android_content_ClipDescription& arg0,AndroidCXX::android_content_ClipData_Item& arg1) enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "(Landroid/content/ClipDescription;Landroid/content/ClipData$Item;)V";
	const char *className = "android/content/ClipData";

	LOGV("android_content_ClipData className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_content_ClipData cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_ClipData jni address %d", proxiedComponent);

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
				cxx_type_hierarchy.type_name = std::string("android.content.ClipDescription");
			}
			std::stack<long> converter_stack;
			converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
			convert_android_content_ClipDescription(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
				cxx_type_hierarchy.type_name = std::string("android.content.ClipData$Item");
			}
			std::stack<long> converter_stack;
			converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
			convert_android_content_ClipData_Item(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

			// Convert to JNI
			jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
		}
			
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, methodName, methodSignature),jarg0,jarg1);
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("android_content_ClipData::android_content_ClipData(AndroidCXX::android_content_ClipDescription& arg0,AndroidCXX::android_content_ClipData_Item& arg1) exit");	
}
android_content_ClipData::android_content_ClipData(AndroidCXX::android_content_ClipData& arg0)
{
	LOGV("android_content_ClipData::android_content_ClipData(AndroidCXX::android_content_ClipData& arg0) enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "(Landroid/content/ClipData;)V";
	const char *className = "android/content/ClipData";

	LOGV("android_content_ClipData className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_content_ClipData cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_ClipData jni address %d", proxiedComponent);

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
				cxx_type_hierarchy.type_name = std::string("android.content.ClipData");
			}
			std::stack<long> converter_stack;
			converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
			convert_android_content_ClipData(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

			// Convert to JNI
			jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
		}
			
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, methodName, methodSignature),jarg0);
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("android_content_ClipData::android_content_ClipData(AndroidCXX::android_content_ClipData& arg0) exit");	
}
// Default Instance Destructor
android_content_ClipData::~android_content_ClipData()
{
	LOGV("android_content_ClipData::~android_content_ClipData() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("android_content_ClipData::~android_content_ClipData() exit");
}
// Functions
AndroidCXX::java_lang_String android_content_ClipData::toString()
{
	LOGV("AndroidCXX::java_lang_String android_content_ClipData::toString() enter");

	const char *methodName = "toString";
	const char *methodSignature = "()Ljava/lang/String;";
	const char *className = "android/content/ClipData";

	LOGV("android_content_ClipData className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_content_ClipData cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_ClipData jni address %d", javaObject);


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

	LOGV("AndroidCXX::java_lang_String android_content_ClipData::toString() exit");

	return result;
}
int android_content_ClipData::describeContents()
{
	LOGV("int android_content_ClipData::describeContents() enter");

	const char *methodName = "describeContents";
	const char *methodSignature = "()I";
	const char *className = "android/content/ClipData";

	LOGV("android_content_ClipData className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_content_ClipData cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_ClipData jni address %d", javaObject);


	int result;
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
	result = (int) (cxx_value);
		
	jni->popLocalFrame();

	LOGV("int android_content_ClipData::describeContents() exit");

	return result;
}
void android_content_ClipData::writeToParcel(AndroidCXX::android_os_Parcel& arg0,int& arg1)
{
	LOGV("void android_content_ClipData::writeToParcel(AndroidCXX::android_os_Parcel& arg0,int& arg1) enter");

	const char *methodName = "writeToParcel";
	const char *methodSignature = "(Landroid/os/Parcel;I)V";
	const char *className = "android/content/ClipData";

	LOGV("android_content_ClipData className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_content_ClipData cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_ClipData jni address %d", javaObject);

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
		
	jni->popLocalFrame();

	LOGV("void android_content_ClipData::writeToParcel(AndroidCXX::android_os_Parcel& arg0,int& arg1) exit");

}
AndroidCXX::android_content_ClipData android_content_ClipData::newIntent(AndroidCXX::java_lang_CharSequence& arg0,AndroidCXX::android_content_Intent& arg1)
{
	LOGV("AndroidCXX::android_content_ClipData android_content_ClipData::newIntent(AndroidCXX::java_lang_CharSequence& arg0,AndroidCXX::android_content_Intent& arg1) enter");

	const char *methodName = "newIntent";
	const char *methodSignature = "(Ljava/lang/CharSequence;Landroid/content/Intent;)Landroid/content/ClipData;";
	const char *className = "android/content/ClipData";

	LOGV("android_content_ClipData className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) static_address; // _static function
	LOGV("android_content_ClipData cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_ClipData jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.content.Intent");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_content_Intent(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	AndroidCXX::android_content_ClipData result;
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
			cxx_type_hierarchy.type_name = std::string("android.content.ClipData");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_content_ClipData(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_content_ClipData) (AndroidCXX::android_content_ClipData((AndroidCXX::android_content_ClipData *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_content_ClipData android_content_ClipData::newIntent(AndroidCXX::java_lang_CharSequence& arg0,AndroidCXX::android_content_Intent& arg1) exit");

	return result;
}
AndroidCXX::android_content_ClipData android_content_ClipData::newPlainText(AndroidCXX::java_lang_CharSequence& arg0,AndroidCXX::java_lang_CharSequence& arg1)
{
	LOGV("AndroidCXX::android_content_ClipData android_content_ClipData::newPlainText(AndroidCXX::java_lang_CharSequence& arg0,AndroidCXX::java_lang_CharSequence& arg1) enter");

	const char *methodName = "newPlainText";
	const char *methodSignature = "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Landroid/content/ClipData;";
	const char *className = "android/content/ClipData";

	LOGV("android_content_ClipData className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) static_address; // _static function
	LOGV("android_content_ClipData cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_ClipData jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("java.lang.CharSequence");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_lang_CharSequence(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	AndroidCXX::android_content_ClipData result;
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
			cxx_type_hierarchy.type_name = std::string("android.content.ClipData");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_content_ClipData(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_content_ClipData) (AndroidCXX::android_content_ClipData((AndroidCXX::android_content_ClipData *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_content_ClipData android_content_ClipData::newPlainText(AndroidCXX::java_lang_CharSequence& arg0,AndroidCXX::java_lang_CharSequence& arg1) exit");

	return result;
}
AndroidCXX::android_content_ClipData android_content_ClipData::newHtmlText(AndroidCXX::java_lang_CharSequence& arg0,AndroidCXX::java_lang_CharSequence& arg1,AndroidCXX::java_lang_String& arg2)
{
	LOGV("AndroidCXX::android_content_ClipData android_content_ClipData::newHtmlText(AndroidCXX::java_lang_CharSequence& arg0,AndroidCXX::java_lang_CharSequence& arg1,AndroidCXX::java_lang_String& arg2) enter");

	const char *methodName = "newHtmlText";
	const char *methodSignature = "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Ljava/lang/String;)Landroid/content/ClipData;";
	const char *className = "android/content/ClipData";

	LOGV("android_content_ClipData className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) static_address; // _static function
	LOGV("android_content_ClipData cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_ClipData jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("java.lang.CharSequence");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_lang_CharSequence(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
	}
	jstring jarg2;
	{
		long cxx_value = (long) & arg2;
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
		jarg2 = convert_jni_string_to_jni(java_value);
	}

	AndroidCXX::android_content_ClipData result;
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
			cxx_type_hierarchy.type_name = std::string("android.content.ClipData");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_content_ClipData(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_content_ClipData) (AndroidCXX::android_content_ClipData((AndroidCXX::android_content_ClipData *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_content_ClipData android_content_ClipData::newHtmlText(AndroidCXX::java_lang_CharSequence& arg0,AndroidCXX::java_lang_CharSequence& arg1,AndroidCXX::java_lang_String& arg2) exit");

	return result;
}
AndroidCXX::android_content_ClipData android_content_ClipData::newUri(AndroidCXX::android_content_ContentResolver& arg0,AndroidCXX::java_lang_CharSequence& arg1,AndroidCXX::android_net_Uri& arg2)
{
	LOGV("AndroidCXX::android_content_ClipData android_content_ClipData::newUri(AndroidCXX::android_content_ContentResolver& arg0,AndroidCXX::java_lang_CharSequence& arg1,AndroidCXX::android_net_Uri& arg2) enter");

	const char *methodName = "newUri";
	const char *methodSignature = "(Landroid/content/ContentResolver;Ljava/lang/CharSequence;Landroid/net/Uri;)Landroid/content/ClipData;";
	const char *className = "android/content/ClipData";

	LOGV("android_content_ClipData className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) static_address; // _static function
	LOGV("android_content_ClipData cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_ClipData jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.content.ContentResolver");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_content_ContentResolver(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
			cxx_type_hierarchy.type_name = std::string("java.lang.CharSequence");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_lang_CharSequence(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
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
			cxx_type_hierarchy.type_name = std::string("android.net.Uri");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_net_Uri(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg2 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	AndroidCXX::android_content_ClipData result;
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
			cxx_type_hierarchy.type_name = std::string("android.content.ClipData");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_content_ClipData(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_content_ClipData) (AndroidCXX::android_content_ClipData((AndroidCXX::android_content_ClipData *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_content_ClipData android_content_ClipData::newUri(AndroidCXX::android_content_ContentResolver& arg0,AndroidCXX::java_lang_CharSequence& arg1,AndroidCXX::android_net_Uri& arg2) exit");

	return result;
}
AndroidCXX::android_content_ClipData android_content_ClipData::newRawUri(AndroidCXX::java_lang_CharSequence& arg0,AndroidCXX::android_net_Uri& arg1)
{
	LOGV("AndroidCXX::android_content_ClipData android_content_ClipData::newRawUri(AndroidCXX::java_lang_CharSequence& arg0,AndroidCXX::android_net_Uri& arg1) enter");

	const char *methodName = "newRawUri";
	const char *methodSignature = "(Ljava/lang/CharSequence;Landroid/net/Uri;)Landroid/content/ClipData;";
	const char *className = "android/content/ClipData";

	LOGV("android_content_ClipData className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) static_address; // _static function
	LOGV("android_content_ClipData cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_ClipData jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.net.Uri");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_net_Uri(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	AndroidCXX::android_content_ClipData result;
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
			cxx_type_hierarchy.type_name = std::string("android.content.ClipData");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_content_ClipData(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_content_ClipData) (AndroidCXX::android_content_ClipData((AndroidCXX::android_content_ClipData *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_content_ClipData android_content_ClipData::newRawUri(AndroidCXX::java_lang_CharSequence& arg0,AndroidCXX::android_net_Uri& arg1) exit");

	return result;
}
AndroidCXX::android_content_ClipDescription android_content_ClipData::getDescription()
{
	LOGV("AndroidCXX::android_content_ClipDescription android_content_ClipData::getDescription() enter");

	const char *methodName = "getDescription";
	const char *methodSignature = "()Landroid/content/ClipDescription;";
	const char *className = "android/content/ClipData";

	LOGV("android_content_ClipData className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_content_ClipData cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_ClipData jni address %d", javaObject);


	AndroidCXX::android_content_ClipDescription result;
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
			cxx_type_hierarchy.type_name = std::string("android.content.ClipDescription");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_content_ClipDescription(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_content_ClipDescription) (AndroidCXX::android_content_ClipDescription((AndroidCXX::android_content_ClipDescription *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_content_ClipDescription android_content_ClipData::getDescription() exit");

	return result;
}
void android_content_ClipData::addItem(AndroidCXX::android_content_ClipData_Item& arg0)
{
	LOGV("void android_content_ClipData::addItem(AndroidCXX::android_content_ClipData_Item& arg0) enter");

	const char *methodName = "addItem";
	const char *methodSignature = "(Landroid/content/ClipData$Item;)V";
	const char *className = "android/content/ClipData";

	LOGV("android_content_ClipData className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_content_ClipData cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_ClipData jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.content.ClipData$Item");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_content_ClipData_Item(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void android_content_ClipData::addItem(AndroidCXX::android_content_ClipData_Item& arg0) exit");

}
int android_content_ClipData::getItemCount()
{
	LOGV("int android_content_ClipData::getItemCount() enter");

	const char *methodName = "getItemCount";
	const char *methodSignature = "()I";
	const char *className = "android/content/ClipData";

	LOGV("android_content_ClipData className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_content_ClipData cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_ClipData jni address %d", javaObject);


	int result;
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
	result = (int) (cxx_value);
		
	jni->popLocalFrame();

	LOGV("int android_content_ClipData::getItemCount() exit");

	return result;
}
AndroidCXX::android_content_ClipData_Item android_content_ClipData::getItemAt(int& arg0)
{
	LOGV("AndroidCXX::android_content_ClipData_Item android_content_ClipData::getItemAt(int& arg0) enter");

	const char *methodName = "getItemAt";
	const char *methodSignature = "(I)Landroid/content/ClipData$Item;";
	const char *className = "android/content/ClipData";

	LOGV("android_content_ClipData className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_content_ClipData cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_content_ClipData jni address %d", javaObject);

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

	AndroidCXX::android_content_ClipData_Item result;
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
			cxx_type_hierarchy.type_name = std::string("android.content.ClipData$Item");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_content_ClipData_Item(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_content_ClipData_Item) (AndroidCXX::android_content_ClipData_Item((AndroidCXX::android_content_ClipData_Item *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_content_ClipData_Item android_content_ClipData::getItemAt(int& arg0) exit");

	return result;
}

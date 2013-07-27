/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	
 		 












// Generated Code 

#include <android_database_sqlite_SQLiteCursorDriver.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>
// TODO: FIXME: add include package
// FIXME: remove after testing

#define LOG_TAG "android_database_sqlite_SQLiteCursorDriver"
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

static long static_obj;
static long static_address = (long) &static_obj;

android_database_sqlite_SQLiteCursorDriver::android_database_sqlite_SQLiteCursorDriver(const android_database_sqlite_SQLiteCursorDriver& cc)
{
	LOGV("android_database_sqlite_SQLiteCursorDriver::android_database_sqlite_SQLiteCursorDriver(const android_database_sqlite_SQLiteCursorDriver& cc) enter");

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

	LOGV("android_database_sqlite_SQLiteCursorDriver::android_database_sqlite_SQLiteCursorDriver(const android_database_sqlite_SQLiteCursorDriver& cc) exit");
}
android_database_sqlite_SQLiteCursorDriver::android_database_sqlite_SQLiteCursorDriver(Proxy proxy)
{
	LOGV("android_database_sqlite_SQLiteCursorDriver::android_database_sqlite_SQLiteCursorDriver(Proxy proxy) enter");

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

	LOGV("android_database_sqlite_SQLiteCursorDriver::android_database_sqlite_SQLiteCursorDriver(Proxy proxy) exit");
}
Proxy android_database_sqlite_SQLiteCursorDriver::proxy() const
{	
	LOGV("android_database_sqlite_SQLiteCursorDriver::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_database_sqlite_SQLiteCursorDriver cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("android_database_sqlite_SQLiteCursorDriver jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("android_database_sqlite_SQLiteCursorDriver::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
android_database_sqlite_SQLiteCursorDriver::~android_database_sqlite_SQLiteCursorDriver()
{
	LOGV("android_database_sqlite_SQLiteCursorDriver::~android_database_sqlite_SQLiteCursorDriver() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("android_database_sqlite_SQLiteCursorDriver::~android_database_sqlite_SQLiteCursorDriver() exit");
}
// Functions
AndroidCXX::android_database_Cursor android_database_sqlite_SQLiteCursorDriver::query(AndroidCXX::android_database_sqlite_SQLiteDatabase_CursorFactory const& arg0,std::vector<AndroidCXX::java_lang_String > const& arg1)
{
	LOGV("AndroidCXX::android_database_Cursor android_database_sqlite_SQLiteCursorDriver::query(AndroidCXX::android_database_sqlite_SQLiteDatabase_CursorFactory const& arg0,std::vector<AndroidCXX::java_lang_String > const& arg1) enter");

	const char *methodName = "query";
	const char *methodSignature = "(Landroid/database/sqlite/SQLiteDatabase$CursorFactory;[Ljava/lang/String;)Landroid/database/Cursor;";
	const char *className = "android/database/sqlite/SQLiteCursorDriver";

	LOGV("android_database_sqlite_SQLiteCursorDriver className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_database_sqlite_SQLiteCursorDriver cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_database_sqlite_SQLiteCursorDriver jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.database.sqlite.SQLiteDatabase$CursorFactory");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_database_sqlite_SQLiteDatabase_CursorFactory(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
			cxx_type_hierarchy.type_name = std::string("android.database.Cursor");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_database_Cursor(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::android_database_Cursor result((AndroidCXX::android_database_Cursor) *((AndroidCXX::android_database_Cursor *) cxx_value));
	delete ((AndroidCXX::android_database_Cursor *) cxx_value);
		
	LOGV("AndroidCXX::android_database_Cursor android_database_sqlite_SQLiteCursorDriver::query(AndroidCXX::android_database_sqlite_SQLiteDatabase_CursorFactory const& arg0,std::vector<AndroidCXX::java_lang_String > const& arg1) exit");

	return result;
}
void android_database_sqlite_SQLiteCursorDriver::cursorDeactivated()
{
	LOGV("void android_database_sqlite_SQLiteCursorDriver::cursorDeactivated() enter");

	const char *methodName = "cursorDeactivated";
	const char *methodSignature = "()V";
	const char *className = "android/database/sqlite/SQLiteCursorDriver";

	LOGV("android_database_sqlite_SQLiteCursorDriver className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_database_sqlite_SQLiteCursorDriver cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_database_sqlite_SQLiteCursorDriver jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	LOGV("void android_database_sqlite_SQLiteCursorDriver::cursorDeactivated() exit");

}
void android_database_sqlite_SQLiteCursorDriver::cursorRequeried(AndroidCXX::android_database_Cursor const& arg0)
{
	LOGV("void android_database_sqlite_SQLiteCursorDriver::cursorRequeried(AndroidCXX::android_database_Cursor const& arg0) enter");

	const char *methodName = "cursorRequeried";
	const char *methodSignature = "(Landroid/database/Cursor;)V";
	const char *className = "android/database/sqlite/SQLiteCursorDriver";

	LOGV("android_database_sqlite_SQLiteCursorDriver className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_database_sqlite_SQLiteCursorDriver cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_database_sqlite_SQLiteCursorDriver jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.database.Cursor");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_database_Cursor(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_database_sqlite_SQLiteCursorDriver::cursorRequeried(AndroidCXX::android_database_Cursor const& arg0) exit");

}
void android_database_sqlite_SQLiteCursorDriver::cursorClosed()
{
	LOGV("void android_database_sqlite_SQLiteCursorDriver::cursorClosed() enter");

	const char *methodName = "cursorClosed";
	const char *methodSignature = "()V";
	const char *className = "android/database/sqlite/SQLiteCursorDriver";

	LOGV("android_database_sqlite_SQLiteCursorDriver className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_database_sqlite_SQLiteCursorDriver cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_database_sqlite_SQLiteCursorDriver jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	LOGV("void android_database_sqlite_SQLiteCursorDriver::cursorClosed() exit");

}
void android_database_sqlite_SQLiteCursorDriver::setBindArguments(std::vector<AndroidCXX::java_lang_String > const& arg0)
{
	LOGV("void android_database_sqlite_SQLiteCursorDriver::setBindArguments(std::vector<AndroidCXX::java_lang_String > const& arg0) enter");

	const char *methodName = "setBindArguments";
	const char *methodSignature = "([Ljava/lang/String;)V";
	const char *className = "android/database/sqlite/SQLiteCursorDriver";

	LOGV("android_database_sqlite_SQLiteCursorDriver className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_database_sqlite_SQLiteCursorDriver cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_database_sqlite_SQLiteCursorDriver jni address %d", javaObject);

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
		jarg0 = convert_jni__object_array_type_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_database_sqlite_SQLiteCursorDriver::setBindArguments(std::vector<AndroidCXX::java_lang_String > const& arg0) exit");

}

/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
 		 
 		 
	








// Generated Code 

#include <android_database_sqlite_SQLiteDatabase_CursorFactory.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "android_database_sqlite_SQLiteDatabase_CursorFactory"
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

static long static_obj;
static long static_address = (long) &static_obj;

android_database_sqlite_SQLiteDatabase_CursorFactory::android_database_sqlite_SQLiteDatabase_CursorFactory(const android_database_sqlite_SQLiteDatabase_CursorFactory& cc)
{
	LOGV("android_database_sqlite_SQLiteDatabase_CursorFactory::android_database_sqlite_SQLiteDatabase_CursorFactory(const android_database_sqlite_SQLiteDatabase_CursorFactory& cc) enter");

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

	LOGV("android_database_sqlite_SQLiteDatabase_CursorFactory::android_database_sqlite_SQLiteDatabase_CursorFactory(const android_database_sqlite_SQLiteDatabase_CursorFactory& cc) exit");
}
android_database_sqlite_SQLiteDatabase_CursorFactory::android_database_sqlite_SQLiteDatabase_CursorFactory(Proxy proxy)
{
	LOGV("android_database_sqlite_SQLiteDatabase_CursorFactory::android_database_sqlite_SQLiteDatabase_CursorFactory(Proxy proxy) enter");

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

	LOGV("android_database_sqlite_SQLiteDatabase_CursorFactory::android_database_sqlite_SQLiteDatabase_CursorFactory(Proxy proxy) exit");
}
Proxy android_database_sqlite_SQLiteDatabase_CursorFactory::proxy() const
{	
	LOGV("android_database_sqlite_SQLiteDatabase_CursorFactory::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_database_sqlite_SQLiteDatabase_CursorFactory cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("android_database_sqlite_SQLiteDatabase_CursorFactory jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("android_database_sqlite_SQLiteDatabase_CursorFactory::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
android_database_sqlite_SQLiteDatabase_CursorFactory::~android_database_sqlite_SQLiteDatabase_CursorFactory()
{
	LOGV("android_database_sqlite_SQLiteDatabase_CursorFactory::~android_database_sqlite_SQLiteDatabase_CursorFactory() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("android_database_sqlite_SQLiteDatabase_CursorFactory::~android_database_sqlite_SQLiteDatabase_CursorFactory() exit");
}
// Functions
AndroidCXX::android_database_Cursor android_database_sqlite_SQLiteDatabase_CursorFactory::newCursor(AndroidCXX::android_database_sqlite_SQLiteDatabase const& arg0,AndroidCXX::android_database_sqlite_SQLiteCursorDriver const& arg1,AndroidCXX::java_lang_String const& arg2,AndroidCXX::android_database_sqlite_SQLiteQuery const& arg3)
{
	LOGV("AndroidCXX::android_database_Cursor android_database_sqlite_SQLiteDatabase_CursorFactory::newCursor(AndroidCXX::android_database_sqlite_SQLiteDatabase const& arg0,AndroidCXX::android_database_sqlite_SQLiteCursorDriver const& arg1,AndroidCXX::java_lang_String const& arg2,AndroidCXX::android_database_sqlite_SQLiteQuery const& arg3) enter");

	const char *methodName = "newCursor";
	const char *methodSignature = "(Landroid/database/sqlite/SQLiteDatabase;Landroid/database/sqlite/SQLiteCursorDriver;Ljava/lang/String;Landroid/database/sqlite/SQLiteQuery;)Landroid/database/Cursor;";
	const char *className = "android/database/sqlite/SQLiteDatabase$CursorFactory";

	LOGV("android_database_sqlite_SQLiteDatabase_CursorFactory className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_database_sqlite_SQLiteDatabase_CursorFactory cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_database_sqlite_SQLiteDatabase_CursorFactory jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.database.sqlite.SQLiteDatabase");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_database_sqlite_SQLiteDatabase(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
			cxx_type_hierarchy.type_name = std::string("android.database.sqlite.SQLiteCursorDriver");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_database_sqlite_SQLiteCursorDriver(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
	jobject jarg3;
	{
		long cxx_value = (long) & arg3;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("android.database.sqlite.SQLiteQuery");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_database_sqlite_SQLiteQuery(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg3 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jobject jni_result = (jobject) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1,jarg2,jarg3);
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
		
	LOGV("AndroidCXX::android_database_Cursor android_database_sqlite_SQLiteDatabase_CursorFactory::newCursor(AndroidCXX::android_database_sqlite_SQLiteDatabase const& arg0,AndroidCXX::android_database_sqlite_SQLiteCursorDriver const& arg1,AndroidCXX::java_lang_String const& arg2,AndroidCXX::android_database_sqlite_SQLiteQuery const& arg3) exit");

	return result;
}

/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//












// Generated Code 

#include <android_database_sqlite_SQLiteTransactionListener.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>
// TODO: FIXME: add include package
// FIXME: remove after testing

#define LOG_TAG "android_database_sqlite_SQLiteTransactionListener"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace AndroidCXX;

// 
// 

static long static_obj;
static long static_address = (long) &static_obj;

// Default Instance Constructors
android_database_sqlite_SQLiteTransactionListener::android_database_sqlite_SQLiteTransactionListener(const android_database_sqlite_SQLiteTransactionListener& cc)
{
	LOGV("android_database_sqlite_SQLiteTransactionListener::android_database_sqlite_SQLiteTransactionListener(const android_database_sqlite_SQLiteTransactionListener& cc) enter");

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

	LOGV("android_database_sqlite_SQLiteTransactionListener::android_database_sqlite_SQLiteTransactionListener(const android_database_sqlite_SQLiteTransactionListener& cc) exit");
}
android_database_sqlite_SQLiteTransactionListener::android_database_sqlite_SQLiteTransactionListener(void * proxy)
{
	LOGV("android_database_sqlite_SQLiteTransactionListener::android_database_sqlite_SQLiteTransactionListener(void * proxy) enter");

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

	LOGV("android_database_sqlite_SQLiteTransactionListener::android_database_sqlite_SQLiteTransactionListener(void * proxy) exit");
}
// TODO: remove
// 
// 
// android_database_sqlite_SQLiteTransactionListener::android_database_sqlite_SQLiteTransactionListener()
// {
// 	LOGV("android_database_sqlite_SQLiteTransactionListener::android_database_sqlite_SQLiteTransactionListener() enter");	

// 	const char *methodName = "<init>";
// 	const char *methodSignature = "()V";
// 	const char *className = "android/database/sqlite/SQLiteTransactionListener";

// 	LOGV("android_database_sqlite_SQLiteTransactionListener className %d methodName %s methodSignature %s", className, methodName, methodSignature);

// 	CXXContext *ctx = CXXContext::sharedInstance();
// 	JNIContext *jni = JNIContext::sharedInstance();

// 	jni->pushLocalFrame();

// 	long cxxAddress = (long) this;
// 	LOGV("android_database_sqlite_SQLiteTransactionListener cxx address %d", cxxAddress);
// 	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
// 	LOGV("android_database_sqlite_SQLiteTransactionListener jni address %d", proxiedComponent);

// 	if (proxiedComponent == 0)
// 	{
// 		jclass clazz = jni->getClassRef(className);

// 		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, "<init>", methodSignature));
// 		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

// 		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
// 	}

// 	jni->popLocalFrame();

// 	LOGV("android_database_sqlite_SQLiteTransactionListener::android_database_sqlite_SQLiteTransactionListener() exit");	
// }
// 
// 
// Public Constructors
// Default Instance Destructor
android_database_sqlite_SQLiteTransactionListener::~android_database_sqlite_SQLiteTransactionListener()
{
	LOGV("android_database_sqlite_SQLiteTransactionListener::~android_database_sqlite_SQLiteTransactionListener() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("android_database_sqlite_SQLiteTransactionListener::~android_database_sqlite_SQLiteTransactionListener() exit");
}
// Functions
void android_database_sqlite_SQLiteTransactionListener::onBegin()
{
	LOGV("void android_database_sqlite_SQLiteTransactionListener::onBegin() enter");

	const char *methodName = "onBegin";
	const char *methodSignature = "()V";
	const char *className = "android/database/sqlite/SQLiteTransactionListener";

	LOGV("android_database_sqlite_SQLiteTransactionListener className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_database_sqlite_SQLiteTransactionListener cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_database_sqlite_SQLiteTransactionListener jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	jni->popLocalFrame();

	LOGV("void android_database_sqlite_SQLiteTransactionListener::onBegin() exit");

}
void android_database_sqlite_SQLiteTransactionListener::onCommit()
{
	LOGV("void android_database_sqlite_SQLiteTransactionListener::onCommit() enter");

	const char *methodName = "onCommit";
	const char *methodSignature = "()V";
	const char *className = "android/database/sqlite/SQLiteTransactionListener";

	LOGV("android_database_sqlite_SQLiteTransactionListener className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_database_sqlite_SQLiteTransactionListener cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_database_sqlite_SQLiteTransactionListener jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	jni->popLocalFrame();

	LOGV("void android_database_sqlite_SQLiteTransactionListener::onCommit() exit");

}
void android_database_sqlite_SQLiteTransactionListener::onRollback()
{
	LOGV("void android_database_sqlite_SQLiteTransactionListener::onRollback() enter");

	const char *methodName = "onRollback";
	const char *methodSignature = "()V";
	const char *className = "android/database/sqlite/SQLiteTransactionListener";

	LOGV("android_database_sqlite_SQLiteTransactionListener className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_database_sqlite_SQLiteTransactionListener cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_database_sqlite_SQLiteTransactionListener jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	jni->popLocalFrame();

	LOGV("void android_database_sqlite_SQLiteTransactionListener::onRollback() exit");

}

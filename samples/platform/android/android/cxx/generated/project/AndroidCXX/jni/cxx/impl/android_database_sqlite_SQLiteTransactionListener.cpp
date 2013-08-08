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
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "android_database_sqlite_SQLiteTransactionListener"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace AndroidCXX;

// 
// 

static long static_obj;
static long static_address = (long) &static_obj;

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
android_database_sqlite_SQLiteTransactionListener::android_database_sqlite_SQLiteTransactionListener(Proxy proxy)
{
	LOGV("android_database_sqlite_SQLiteTransactionListener::android_database_sqlite_SQLiteTransactionListener(Proxy proxy) enter");

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

	LOGV("android_database_sqlite_SQLiteTransactionListener::android_database_sqlite_SQLiteTransactionListener(Proxy proxy) exit");
}
Proxy android_database_sqlite_SQLiteTransactionListener::proxy() const
{	
	LOGV("android_database_sqlite_SQLiteTransactionListener::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_database_sqlite_SQLiteTransactionListener cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("android_database_sqlite_SQLiteTransactionListener jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("android_database_sqlite_SQLiteTransactionListener::proxy() exit");	

	return proxy;
}
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

	LOGV("android_database_sqlite_SQLiteTransactionListener className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_database_sqlite_SQLiteTransactionListener cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_database_sqlite_SQLiteTransactionListener jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	LOGV("void android_database_sqlite_SQLiteTransactionListener::onBegin() exit");

}
void android_database_sqlite_SQLiteTransactionListener::onCommit()
{
	LOGV("void android_database_sqlite_SQLiteTransactionListener::onCommit() enter");

	const char *methodName = "onCommit";
	const char *methodSignature = "()V";
	const char *className = "android/database/sqlite/SQLiteTransactionListener";

	LOGV("android_database_sqlite_SQLiteTransactionListener className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_database_sqlite_SQLiteTransactionListener cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_database_sqlite_SQLiteTransactionListener jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	LOGV("void android_database_sqlite_SQLiteTransactionListener::onCommit() exit");

}
void android_database_sqlite_SQLiteTransactionListener::onRollback()
{
	LOGV("void android_database_sqlite_SQLiteTransactionListener::onRollback() enter");

	const char *methodName = "onRollback";
	const char *methodSignature = "()V";
	const char *className = "android/database/sqlite/SQLiteTransactionListener";

	LOGV("android_database_sqlite_SQLiteTransactionListener className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_database_sqlite_SQLiteTransactionListener cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_database_sqlite_SQLiteTransactionListener jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	LOGV("void android_database_sqlite_SQLiteTransactionListener::onRollback() exit");

}

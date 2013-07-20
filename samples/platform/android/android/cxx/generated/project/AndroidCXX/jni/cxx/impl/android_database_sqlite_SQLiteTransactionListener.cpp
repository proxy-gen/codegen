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

#define LOG_TAG "android_database_sqlite_SQLiteTransactionListener"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace AndroidCXX;

static long static_obj;
static long static_address = (long) &static_obj;

void android_database_sqlite_SQLiteTransactionListener::onBegin()
{
	const char *methodName = "onBegin";
	const char *methodSignature = "()V";
	const char *className = "android_database_sqlite_SQLiteTransactionListener";

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

}
void android_database_sqlite_SQLiteTransactionListener::onCommit()
{
	const char *methodName = "onCommit";
	const char *methodSignature = "()V";
	const char *className = "android_database_sqlite_SQLiteTransactionListener";

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

}
void android_database_sqlite_SQLiteTransactionListener::onRollback()
{
	const char *methodName = "onRollback";
	const char *methodSignature = "()V";
	const char *className = "android_database_sqlite_SQLiteTransactionListener";

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

}

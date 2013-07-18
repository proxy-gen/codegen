/*
 * Implementation (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


#include <android_database_sqlite_SQLiteTransactionListener.hpp>
#include <jni.h>

namespace AndroidCXX {

JNIEXPORT void Java_AndroidCXX_android_database_sqlite_SQLiteTransactionListener_onBegin(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_AndroidCXX_android_database_sqlite_SQLiteTransactionListener_onCommit(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_AndroidCXX_android_database_sqlite_SQLiteTransactionListener_onRollback(JNIEnv *jni_env, jobject java_object);
    
}
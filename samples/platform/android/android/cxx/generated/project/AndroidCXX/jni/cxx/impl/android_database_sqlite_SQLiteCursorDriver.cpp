/*
 * Implementation (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


#include <android_database_sqlite_SQLiteCursorDriver.hpp>
#include <jni.h>

namespace AndroidCXX {

JNIEXPORT jobject Java_AndroidCXX_android_database_sqlite_SQLiteCursorDriver_query(JNIEnv *jni_env, jobject java_object,jobject& arg0,jobjectArray& arg1);
JNIEXPORT void Java_AndroidCXX_android_database_sqlite_SQLiteCursorDriver_cursorDeactivated(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_AndroidCXX_android_database_sqlite_SQLiteCursorDriver_cursorRequeried(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT void Java_AndroidCXX_android_database_sqlite_SQLiteCursorDriver_cursorClosed(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_AndroidCXX_android_database_sqlite_SQLiteCursorDriver_setBindArguments(JNIEnv *jni_env, jobject java_object,jobjectArray& arg0);
    
}
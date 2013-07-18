/*
 * Implementation (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


#include <java_util_Map_Entry.hpp>
#include <jni.h>

namespace AndroidCXX {

JNIEXPORT jboolean Java_AndroidCXX_java_util_Map_Entry_equals(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jint Java_AndroidCXX_java_util_Map_Entry_hashCode(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobject Java_AndroidCXX_java_util_Map_Entry_getValue(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobject Java_AndroidCXX_java_util_Map_Entry_getKey(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobject Java_AndroidCXX_java_util_Map_Entry_setValue(JNIEnv *jni_env, jobject java_object,jobject& arg0);
    
}
/*
 * Implementation (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


#include <java_util_Collection.hpp>
#include <jni.h>

namespace AndroidCXX {

JNIEXPORT jboolean Java_AndroidCXX_java_util_Collection_add(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jboolean Java_AndroidCXX_java_util_Collection_equals(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jint Java_AndroidCXX_java_util_Collection_hashCode(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_AndroidCXX_java_util_Collection_clear(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_AndroidCXX_java_util_Collection_isEmpty(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_AndroidCXX_java_util_Collection_contains(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jboolean Java_AndroidCXX_java_util_Collection_addAll(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jint Java_AndroidCXX_java_util_Collection_size(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobjectArray Java_AndroidCXX_java_util_Collection_toArray(JNIEnv *jni_env, jobject java_object,jobjectArray& arg0);
JNIEXPORT jobject Java_AndroidCXX_java_util_Collection_iterator(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_AndroidCXX_java_util_Collection_remove(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jboolean Java_AndroidCXX_java_util_Collection_removeAll(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jboolean Java_AndroidCXX_java_util_Collection_containsAll(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jboolean Java_AndroidCXX_java_util_Collection_retainAll(JNIEnv *jni_env, jobject java_object,jobject& arg0);
    
}
/*
 * Implementation (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


#include <java_util_Set.hpp>
#include <jni.h>

namespace AndroidCXX {

JNIEXPORT jboolean Java_AndroidCXX_java_util_Set_add(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jboolean Java_AndroidCXX_java_util_Set_equals(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jint Java_AndroidCXX_java_util_Set_hashCode(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_AndroidCXX_java_util_Set_clear(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_AndroidCXX_java_util_Set_isEmpty(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_AndroidCXX_java_util_Set_contains(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jboolean Java_AndroidCXX_java_util_Set_addAll(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jint Java_AndroidCXX_java_util_Set_size(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobjectArray Java_AndroidCXX_java_util_Set_toArray(JNIEnv *jni_env, jobject java_object,jobjectArray& arg0);
JNIEXPORT jobject Java_AndroidCXX_java_util_Set_iterator(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_AndroidCXX_java_util_Set_remove(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jboolean Java_AndroidCXX_java_util_Set_removeAll(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jboolean Java_AndroidCXX_java_util_Set_containsAll(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jboolean Java_AndroidCXX_java_util_Set_retainAll(JNIEnv *jni_env, jobject java_object,jobject& arg0);
    
}
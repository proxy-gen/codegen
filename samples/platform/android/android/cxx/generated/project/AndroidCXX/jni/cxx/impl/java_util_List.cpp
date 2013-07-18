/*
 * Implementation (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


#include <java_util_List.hpp>
#include <jni.h>

namespace AndroidCXX {

JNIEXPORT void Java_AndroidCXX_java_util_List_add(JNIEnv *jni_env, jobject java_object,jint& arg0,jobject& arg1);
JNIEXPORT jobject Java_AndroidCXX_java_util_List_get(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jboolean Java_AndroidCXX_java_util_List_equals(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jint Java_AndroidCXX_java_util_List_hashCode(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jint Java_AndroidCXX_java_util_List_indexOf(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT void Java_AndroidCXX_java_util_List_clear(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_AndroidCXX_java_util_List_isEmpty(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jint Java_AndroidCXX_java_util_List_lastIndexOf(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jboolean Java_AndroidCXX_java_util_List_contains(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jboolean Java_AndroidCXX_java_util_List_addAll(JNIEnv *jni_env, jobject java_object,jint& arg0,jobject& arg1);
JNIEXPORT jint Java_AndroidCXX_java_util_List_size(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobjectArray Java_AndroidCXX_java_util_List_toArray(JNIEnv *jni_env, jobject java_object,jobjectArray& arg0);
JNIEXPORT jobject Java_AndroidCXX_java_util_List_iterator(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobject Java_AndroidCXX_java_util_List_remove(JNIEnv *jni_env, jobject java_object,jint& arg0,jobject& arg1);
JNIEXPORT jobject Java_AndroidCXX_java_util_List_set(JNIEnv *jni_env, jobject java_object,jint& arg0,jobject& arg1);
JNIEXPORT jobject Java_AndroidCXX_java_util_List_listIterator(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jobject Java_AndroidCXX_java_util_List_subList(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jboolean Java_AndroidCXX_java_util_List_removeAll(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jboolean Java_AndroidCXX_java_util_List_containsAll(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jboolean Java_AndroidCXX_java_util_List_retainAll(JNIEnv *jni_env, jobject java_object,jobject& arg0);
    
}
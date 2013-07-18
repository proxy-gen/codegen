/*
 * Implementation (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


#include <java_util_ListIterator.hpp>
#include <jni.h>

namespace AndroidCXX {

JNIEXPORT void Java_AndroidCXX_java_util_ListIterator_add(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jboolean Java_AndroidCXX_java_util_ListIterator_hasNext(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobject Java_AndroidCXX_java_util_ListIterator_next(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_AndroidCXX_java_util_ListIterator_remove(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_AndroidCXX_java_util_ListIterator_set(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jint Java_AndroidCXX_java_util_ListIterator_nextIndex(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobject Java_AndroidCXX_java_util_ListIterator_previous(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jint Java_AndroidCXX_java_util_ListIterator_previousIndex(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_AndroidCXX_java_util_ListIterator_hasPrevious(JNIEnv *jni_env, jobject java_object);
    
}
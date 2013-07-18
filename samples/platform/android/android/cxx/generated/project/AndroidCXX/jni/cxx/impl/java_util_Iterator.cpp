/*
 * Implementation (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


#include <java_util_Iterator.hpp>
#include <jni.h>

namespace AndroidCXX {

JNIEXPORT jboolean Java_AndroidCXX_java_util_Iterator_hasNext(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobject Java_AndroidCXX_java_util_Iterator_next(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_AndroidCXX_java_util_Iterator_remove(JNIEnv *jni_env, jobject java_object);
    
}
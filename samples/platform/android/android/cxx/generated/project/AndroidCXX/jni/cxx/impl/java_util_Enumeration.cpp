/*
 * Implementation (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


#include <java_util_Enumeration.hpp>
#include <jni.h>

namespace AndroidCXX {

JNIEXPORT jboolean Java_AndroidCXX_java_util_Enumeration_hasMoreElements(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobject Java_AndroidCXX_java_util_Enumeration_nextElement(JNIEnv *jni_env, jobject java_object);
    
}
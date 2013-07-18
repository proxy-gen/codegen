/*
 * Implementation (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


#include <java_lang_CharSequence.hpp>
#include <jni.h>

namespace AndroidCXX {

JNIEXPORT jobject Java_AndroidCXX_java_lang_CharSequence_toString(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jint Java_AndroidCXX_java_lang_CharSequence_length(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jchar Java_AndroidCXX_java_lang_CharSequence_charAt(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jobject Java_AndroidCXX_java_lang_CharSequence_subSequence(JNIEnv *jni_env, jobject java_object,jint& arg0);
    
}
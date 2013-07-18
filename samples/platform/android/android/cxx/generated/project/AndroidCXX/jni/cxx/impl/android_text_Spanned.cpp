/*
 * Implementation (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


#include <android_text_Spanned.hpp>
#include <jni.h>

namespace AndroidCXX {

JNIEXPORT jobjectArray Java_AndroidCXX_android_text_Spanned_getSpans(JNIEnv *jni_env, jobject java_object,jint& arg0,jobject& arg1);
JNIEXPORT jint Java_AndroidCXX_android_text_Spanned_getSpanStart(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jint Java_AndroidCXX_android_text_Spanned_getSpanEnd(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jint Java_AndroidCXX_android_text_Spanned_getSpanFlags(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jint Java_AndroidCXX_android_text_Spanned_nextSpanTransition(JNIEnv *jni_env, jobject java_object,jint& arg0,jobject& arg1);
    
}
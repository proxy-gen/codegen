/*
 * Implementation (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


#include <android_text_Editable.hpp>
#include <jni.h>

namespace AndroidCXX {

JNIEXPORT jobject Java_AndroidCXX_android_text_Editable_append(JNIEnv *jni_env, jobject java_object,jobject& arg0,jint& arg1,jchar& arg2);
JNIEXPORT void Java_AndroidCXX_android_text_Editable_clear(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobject Java_AndroidCXX_android_text_Editable_replace(JNIEnv *jni_env, jobject java_object,jint& arg0,jobject& arg1);
JNIEXPORT jobject Java_AndroidCXX_android_text_Editable_delete(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jobject Java_AndroidCXX_android_text_Editable_insert(JNIEnv *jni_env, jobject java_object,jint& arg0,jobject& arg1);
JNIEXPORT void Java_AndroidCXX_android_text_Editable_clearSpans(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_AndroidCXX_android_text_Editable_setFilters(JNIEnv *jni_env, jobject java_object,jobjectArray& arg0);
JNIEXPORT jobjectArray Java_AndroidCXX_android_text_Editable_getFilters(JNIEnv *jni_env, jobject java_object);
    
}
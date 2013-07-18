/*
 * Implementation (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


#include <android_text_method_KeyListener.hpp>
#include <jni.h>

namespace AndroidCXX {

JNIEXPORT jboolean Java_AndroidCXX_android_text_method_KeyListener_onKeyDown(JNIEnv *jni_env, jobject java_object,jobject& arg0,jobject& arg1,jint& arg2,jobject& arg3);
JNIEXPORT jboolean Java_AndroidCXX_android_text_method_KeyListener_onKeyUp(JNIEnv *jni_env, jobject java_object,jobject& arg0,jobject& arg1,jint& arg2,jobject& arg3);
JNIEXPORT jint Java_AndroidCXX_android_text_method_KeyListener_getInputType(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_AndroidCXX_android_text_method_KeyListener_onKeyOther(JNIEnv *jni_env, jobject java_object,jobject& arg0,jobject& arg1,jobject& arg2);
JNIEXPORT void Java_AndroidCXX_android_text_method_KeyListener_clearMetaKeyState(JNIEnv *jni_env, jobject java_object,jobject& arg0,jobject& arg1,jint& arg2);
    
}
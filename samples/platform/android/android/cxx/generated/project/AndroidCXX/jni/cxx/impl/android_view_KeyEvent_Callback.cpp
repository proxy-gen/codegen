/*
 * Implementation (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


#include <android_view_KeyEvent_Callback.hpp>
#include <jni.h>

namespace AndroidCXX {

JNIEXPORT jboolean Java_AndroidCXX_android_view_KeyEvent_Callback_onKeyDown(JNIEnv *jni_env, jobject java_object,jint& arg0,jobject& arg1);
JNIEXPORT jboolean Java_AndroidCXX_android_view_KeyEvent_Callback_onKeyLongPress(JNIEnv *jni_env, jobject java_object,jint& arg0,jobject& arg1);
JNIEXPORT jboolean Java_AndroidCXX_android_view_KeyEvent_Callback_onKeyUp(JNIEnv *jni_env, jobject java_object,jint& arg0,jobject& arg1);
JNIEXPORT jboolean Java_AndroidCXX_android_view_KeyEvent_Callback_onKeyMultiple(JNIEnv *jni_env, jobject java_object,jint& arg0,jobject& arg1);
    
}
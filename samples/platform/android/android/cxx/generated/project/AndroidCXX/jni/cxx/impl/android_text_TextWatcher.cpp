/*
 * Implementation (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


#include <android_text_TextWatcher.hpp>
#include <jni.h>

namespace AndroidCXX {

JNIEXPORT void Java_AndroidCXX_android_text_TextWatcher_beforeTextChanged(JNIEnv *jni_env, jobject java_object,jobject& arg0,jint& arg1);
JNIEXPORT void Java_AndroidCXX_android_text_TextWatcher_onTextChanged(JNIEnv *jni_env, jobject java_object,jobject& arg0,jint& arg1);
JNIEXPORT void Java_AndroidCXX_android_text_TextWatcher_afterTextChanged(JNIEnv *jni_env, jobject java_object,jobject& arg0);
    
}
/*
 * Implementation (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


#include <android_content_ServiceConnection.hpp>
#include <jni.h>

namespace AndroidCXX {

JNIEXPORT void Java_AndroidCXX_android_content_ServiceConnection_onServiceConnected(JNIEnv *jni_env, jobject java_object,jobject& arg0,jobject& arg1);
JNIEXPORT void Java_AndroidCXX_android_content_ServiceConnection_onServiceDisconnected(JNIEnv *jni_env, jobject java_object,jobject& arg0);
    
}
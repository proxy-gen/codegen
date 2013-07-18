/*
 * Implementation (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


#include <android_view_WindowManager.hpp>
#include <jni.h>

namespace AndroidCXX {

JNIEXPORT jobject Java_AndroidCXX_android_view_WindowManager_getDefaultDisplay(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_AndroidCXX_android_view_WindowManager_removeViewImmediate(JNIEnv *jni_env, jobject java_object,jobject& arg0);
    
}
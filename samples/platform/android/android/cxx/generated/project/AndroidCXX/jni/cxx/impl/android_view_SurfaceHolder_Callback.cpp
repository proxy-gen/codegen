/*
 * Implementation (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


#include <android_view_SurfaceHolder_Callback.hpp>
#include <jni.h>

namespace AndroidCXX {

JNIEXPORT void Java_AndroidCXX_android_view_SurfaceHolder_Callback_surfaceCreated(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT void Java_AndroidCXX_android_view_SurfaceHolder_Callback_surfaceChanged(JNIEnv *jni_env, jobject java_object,jobject& arg0,jint& arg1);
JNIEXPORT void Java_AndroidCXX_android_view_SurfaceHolder_Callback_surfaceDestroyed(JNIEnv *jni_env, jobject java_object,jobject& arg0);
    
}
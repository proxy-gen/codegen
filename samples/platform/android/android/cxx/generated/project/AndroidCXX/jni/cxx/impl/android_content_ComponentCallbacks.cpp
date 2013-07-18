/*
 * Implementation (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


#include <android_content_ComponentCallbacks.hpp>
#include <jni.h>

namespace AndroidCXX {

JNIEXPORT void Java_AndroidCXX_android_content_ComponentCallbacks_onConfigurationChanged(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT void Java_AndroidCXX_android_content_ComponentCallbacks_onLowMemory(JNIEnv *jni_env, jobject java_object);
    
}
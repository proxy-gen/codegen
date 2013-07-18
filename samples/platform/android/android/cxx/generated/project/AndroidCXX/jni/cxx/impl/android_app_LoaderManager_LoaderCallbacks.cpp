/*
 * Implementation (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


#include <android_app_LoaderManager_LoaderCallbacks.hpp>
#include <jni.h>

namespace AndroidCXX {

JNIEXPORT jobject Java_AndroidCXX_android_app_LoaderManager_LoaderCallbacks_onCreateLoader(JNIEnv *jni_env, jobject java_object,jint& arg0,jobject& arg1);
JNIEXPORT void Java_AndroidCXX_android_app_LoaderManager_LoaderCallbacks_onLoadFinished(JNIEnv *jni_env, jobject java_object,jobject& arg0,jobject& arg1);
JNIEXPORT void Java_AndroidCXX_android_app_LoaderManager_LoaderCallbacks_onLoaderReset(JNIEnv *jni_env, jobject java_object,jobject& arg0);
    
}
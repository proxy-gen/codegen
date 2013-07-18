/*
 * Implementation (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


#include <android_app_Application_ActivityLifecycleCallbacks.hpp>
#include <jni.h>

namespace AndroidCXX {

JNIEXPORT void Java_AndroidCXX_android_app_Application_ActivityLifecycleCallbacks_onActivityCreated(JNIEnv *jni_env, jobject java_object,jobject& arg0,jobject& arg1);
JNIEXPORT void Java_AndroidCXX_android_app_Application_ActivityLifecycleCallbacks_onActivityStarted(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT void Java_AndroidCXX_android_app_Application_ActivityLifecycleCallbacks_onActivityResumed(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT void Java_AndroidCXX_android_app_Application_ActivityLifecycleCallbacks_onActivityPaused(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT void Java_AndroidCXX_android_app_Application_ActivityLifecycleCallbacks_onActivityStopped(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT void Java_AndroidCXX_android_app_Application_ActivityLifecycleCallbacks_onActivitySaveInstanceState(JNIEnv *jni_env, jobject java_object,jobject& arg0,jobject& arg1);
JNIEXPORT void Java_AndroidCXX_android_app_Application_ActivityLifecycleCallbacks_onActivityDestroyed(JNIEnv *jni_env, jobject java_object,jobject& arg0);
    
}
/*
 * Implementation (CXX)
 * Author: cxx-bindings-generator
 */

#include <com_facebook_android_Facebook_DialogListener.hpp>
#include <jni.h>

namespace FacebookCXX {

JNIEXPORT void Java_FacebookCXX_com_facebook_android_Facebook_DialogListener_onComplete(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT void Java_FacebookCXX_com_facebook_android_Facebook_DialogListener_onCancel(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_FacebookCXX_com_facebook_android_Facebook_DialogListener_onFacebookError(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT void Java_FacebookCXX_com_facebook_android_Facebook_DialogListener_onError(JNIEnv *jni_env, jobject java_object,jobject& arg0);
    
}
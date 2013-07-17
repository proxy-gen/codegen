/*
 * Header (CXX)
 * Author: cxx-bindings-generator
 */
namespace FacebookCXX {

JNIEXPORT void Java_FacebookCXX_com_facebook_android_Facebook_DialogListener_onComplete(JNIEnv *jni_env, jobject java_object,android_os_Bundle& arg0);
JNIEXPORT void Java_FacebookCXX_com_facebook_android_Facebook_DialogListener_onCancel(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_FacebookCXX_com_facebook_android_Facebook_DialogListener_onFacebookError(JNIEnv *jni_env, jobject java_object,com_facebook_android_FacebookError& arg0);
JNIEXPORT void Java_FacebookCXX_com_facebook_android_Facebook_DialogListener_onError(JNIEnv *jni_env, jobject java_object,com_facebook_android_DialogError& arg0);
 

}
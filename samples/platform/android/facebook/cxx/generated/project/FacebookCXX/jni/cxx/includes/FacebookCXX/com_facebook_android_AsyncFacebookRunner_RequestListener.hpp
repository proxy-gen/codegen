/*
 * Header (CXX)
 * Author: cxx-bindings-generator
 */
namespace FacebookCXX {

JNIEXPORT void Java_FacebookCXX_com_facebook_android_AsyncFacebookRunner_RequestListener_onComplete(JNIEnv *jni_env, jobject java_object,std::string& arg0,java_lang_Object& arg1);
JNIEXPORT void Java_FacebookCXX_com_facebook_android_AsyncFacebookRunner_RequestListener_onFacebookError(JNIEnv *jni_env, jobject java_object,com_facebook_android_FacebookError& arg0,java_lang_Object& arg1);
JNIEXPORT void Java_FacebookCXX_com_facebook_android_AsyncFacebookRunner_RequestListener_onFileNotFoundException(JNIEnv *jni_env, jobject java_object,java_io_FileNotFoundException& arg0,java_lang_Object& arg1);
JNIEXPORT void Java_FacebookCXX_com_facebook_android_AsyncFacebookRunner_RequestListener_onMalformedURLException(JNIEnv *jni_env, jobject java_object,java_net_MalformedURLException& arg0,java_lang_Object& arg1);
JNIEXPORT void Java_FacebookCXX_com_facebook_android_AsyncFacebookRunner_RequestListener_onIOException(JNIEnv *jni_env, jobject java_object,java_io_IOException& arg0,java_lang_Object& arg1);
 

}
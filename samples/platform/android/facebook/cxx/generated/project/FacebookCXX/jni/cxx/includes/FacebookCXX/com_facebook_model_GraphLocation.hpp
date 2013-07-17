/*
 * Header (CXX)
 * Author: cxx-bindings-generator
 */
namespace FacebookCXX {

JNIEXPORT std::string Java_FacebookCXX_com_facebook_model_GraphLocation_getState(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_FacebookCXX_com_facebook_model_GraphLocation_setState(JNIEnv *jni_env, jobject java_object,std::string& arg0);
JNIEXPORT std::string Java_FacebookCXX_com_facebook_model_GraphLocation_getCountry(JNIEnv *jni_env, jobject java_object);
JNIEXPORT double Java_FacebookCXX_com_facebook_model_GraphLocation_getLatitude(JNIEnv *jni_env, jobject java_object);
JNIEXPORT double Java_FacebookCXX_com_facebook_model_GraphLocation_getLongitude(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_FacebookCXX_com_facebook_model_GraphLocation_setLatitude(JNIEnv *jni_env, jobject java_object,double& arg0);
JNIEXPORT void Java_FacebookCXX_com_facebook_model_GraphLocation_setLongitude(JNIEnv *jni_env, jobject java_object,double& arg0);
JNIEXPORT std::string Java_FacebookCXX_com_facebook_model_GraphLocation_getStreet(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_FacebookCXX_com_facebook_model_GraphLocation_setStreet(JNIEnv *jni_env, jobject java_object,std::string& arg0);
JNIEXPORT std::string Java_FacebookCXX_com_facebook_model_GraphLocation_getCity(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_FacebookCXX_com_facebook_model_GraphLocation_setCity(JNIEnv *jni_env, jobject java_object,std::string& arg0);
JNIEXPORT void Java_FacebookCXX_com_facebook_model_GraphLocation_setCountry(JNIEnv *jni_env, jobject java_object,std::string& arg0);
JNIEXPORT std::string Java_FacebookCXX_com_facebook_model_GraphLocation_getZip(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_FacebookCXX_com_facebook_model_GraphLocation_setZip(JNIEnv *jni_env, jobject java_object,std::string& arg0);
 

}
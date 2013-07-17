/*
 * Header (CXX)
 * Author: cxx-bindings-generator
 */
namespace FacebookCXX {

JNIEXPORT std::string Java_FacebookCXX_com_facebook_model_GraphUser_getName(JNIEnv *jni_env, jobject java_object);
JNIEXPORT com_facebook_model_GraphLocation Java_FacebookCXX_com_facebook_model_GraphUser_getLocation(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_FacebookCXX_com_facebook_model_GraphUser_setName(JNIEnv *jni_env, jobject java_object,std::string& arg0);
JNIEXPORT std::string Java_FacebookCXX_com_facebook_model_GraphUser_getId(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_FacebookCXX_com_facebook_model_GraphUser_setId(JNIEnv *jni_env, jobject java_object,std::string& arg0);
JNIEXPORT std::string Java_FacebookCXX_com_facebook_model_GraphUser_getFirstName(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_FacebookCXX_com_facebook_model_GraphUser_setFirstName(JNIEnv *jni_env, jobject java_object,std::string& arg0);
JNIEXPORT std::string Java_FacebookCXX_com_facebook_model_GraphUser_getMiddleName(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_FacebookCXX_com_facebook_model_GraphUser_setMiddleName(JNIEnv *jni_env, jobject java_object,std::string& arg0);
JNIEXPORT std::string Java_FacebookCXX_com_facebook_model_GraphUser_getLastName(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_FacebookCXX_com_facebook_model_GraphUser_setLastName(JNIEnv *jni_env, jobject java_object,std::string& arg0);
JNIEXPORT std::string Java_FacebookCXX_com_facebook_model_GraphUser_getLink(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_FacebookCXX_com_facebook_model_GraphUser_setLink(JNIEnv *jni_env, jobject java_object,std::string& arg0);
JNIEXPORT std::string Java_FacebookCXX_com_facebook_model_GraphUser_getUsername(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_FacebookCXX_com_facebook_model_GraphUser_setUsername(JNIEnv *jni_env, jobject java_object,std::string& arg0);
JNIEXPORT std::string Java_FacebookCXX_com_facebook_model_GraphUser_getBirthday(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_FacebookCXX_com_facebook_model_GraphUser_setBirthday(JNIEnv *jni_env, jobject java_object,std::string& arg0);
JNIEXPORT void Java_FacebookCXX_com_facebook_model_GraphUser_setLocation(JNIEnv *jni_env, jobject java_object,com_facebook_model_GraphLocation& arg0);
 

}
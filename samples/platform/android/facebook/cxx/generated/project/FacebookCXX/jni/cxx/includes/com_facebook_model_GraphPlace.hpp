/*
 * Header (CXX)
 * Author: cxx-bindings-generator
 */
namespace FacebookCXX {

JNIEXPORT std::string Java_FacebookCXX_com_facebook_model_GraphPlace_getName(JNIEnv *jni_env, jobject java_object);
JNIEXPORT com_facebook_model_GraphLocation Java_FacebookCXX_com_facebook_model_GraphPlace_getLocation(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_FacebookCXX_com_facebook_model_GraphPlace_setName(JNIEnv *jni_env, jobject java_object,std::string& arg0);
JNIEXPORT std::string Java_FacebookCXX_com_facebook_model_GraphPlace_getId(JNIEnv *jni_env, jobject java_object);
JNIEXPORT std::string Java_FacebookCXX_com_facebook_model_GraphPlace_getCategory(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_FacebookCXX_com_facebook_model_GraphPlace_setId(JNIEnv *jni_env, jobject java_object,std::string& arg0);
JNIEXPORT void Java_FacebookCXX_com_facebook_model_GraphPlace_setLocation(JNIEnv *jni_env, jobject java_object,com_facebook_model_GraphLocation& arg0);
JNIEXPORT void Java_FacebookCXX_com_facebook_model_GraphPlace_setCategory(JNIEnv *jni_env, jobject java_object,std::string& arg0);
 

}
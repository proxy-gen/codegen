/*
 * Header (CXX)
 * Author: cxx-bindings-generator
 */
namespace FacebookCXX {

JNIEXPORT std::string Java_FacebookCXX_com_facebook_model_OpenGraphAction_getMessage(JNIEnv *jni_env, jobject java_object);
JNIEXPORT std::string Java_FacebookCXX_com_facebook_model_OpenGraphAction_getId(JNIEnv *jni_env, jobject java_object);
JNIEXPORT std::string Java_FacebookCXX_com_facebook_model_OpenGraphAction_getRef(JNIEnv *jni_env, jobject java_object);
JNIEXPORT com_facebook_model_GraphObject Java_FacebookCXX_com_facebook_model_OpenGraphAction_getApplication(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_FacebookCXX_com_facebook_model_OpenGraphAction_setId(JNIEnv *jni_env, jobject java_object,std::string& arg0);
JNIEXPORT void Java_FacebookCXX_com_facebook_model_OpenGraphAction_setMessage(JNIEnv *jni_env, jobject java_object,std::string& arg0);
JNIEXPORT long Java_FacebookCXX_com_facebook_model_OpenGraphAction_getStartTime(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_FacebookCXX_com_facebook_model_OpenGraphAction_setStartTime(JNIEnv *jni_env, jobject java_object,long& arg0);
JNIEXPORT long Java_FacebookCXX_com_facebook_model_OpenGraphAction_getEndTime(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_FacebookCXX_com_facebook_model_OpenGraphAction_setEndTime(JNIEnv *jni_env, jobject java_object,long& arg0);
JNIEXPORT long Java_FacebookCXX_com_facebook_model_OpenGraphAction_getPublishTime(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_FacebookCXX_com_facebook_model_OpenGraphAction_setPublishTime(JNIEnv *jni_env, jobject java_object,long& arg0);
JNIEXPORT long Java_FacebookCXX_com_facebook_model_OpenGraphAction_getCreatedTime(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_FacebookCXX_com_facebook_model_OpenGraphAction_setCreatedTime(JNIEnv *jni_env, jobject java_object,long& arg0);
JNIEXPORT long Java_FacebookCXX_com_facebook_model_OpenGraphAction_getExpiresTime(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_FacebookCXX_com_facebook_model_OpenGraphAction_setExpiresTime(JNIEnv *jni_env, jobject java_object,long& arg0);
JNIEXPORT void Java_FacebookCXX_com_facebook_model_OpenGraphAction_setRef(JNIEnv *jni_env, jobject java_object,std::string& arg0);
JNIEXPORT com_facebook_model_GraphPlace Java_FacebookCXX_com_facebook_model_OpenGraphAction_getPlace(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_FacebookCXX_com_facebook_model_OpenGraphAction_setPlace(JNIEnv *jni_env, jobject java_object,com_facebook_model_GraphPlace& arg0);
JNIEXPORT std::vector Java_FacebookCXX_com_facebook_model_OpenGraphAction_getTags(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_FacebookCXX_com_facebook_model_OpenGraphAction_setTags(JNIEnv *jni_env, jobject java_object,std::vector& arg0);
JNIEXPORT std::vector Java_FacebookCXX_com_facebook_model_OpenGraphAction_getImage(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_FacebookCXX_com_facebook_model_OpenGraphAction_setImage(JNIEnv *jni_env, jobject java_object,std::vector& arg0);
JNIEXPORT com_facebook_model_GraphUser Java_FacebookCXX_com_facebook_model_OpenGraphAction_getFrom(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_FacebookCXX_com_facebook_model_OpenGraphAction_setFrom(JNIEnv *jni_env, jobject java_object,com_facebook_model_GraphUser& arg0);
JNIEXPORT org_json_JSONObject Java_FacebookCXX_com_facebook_model_OpenGraphAction_getLikes(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_FacebookCXX_com_facebook_model_OpenGraphAction_setLikes(JNIEnv *jni_env, jobject java_object,org_json_JSONObject& arg0);
JNIEXPORT void Java_FacebookCXX_com_facebook_model_OpenGraphAction_setApplication(JNIEnv *jni_env, jobject java_object,com_facebook_model_GraphObject& arg0);
JNIEXPORT org_json_JSONObject Java_FacebookCXX_com_facebook_model_OpenGraphAction_getComments(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_FacebookCXX_com_facebook_model_OpenGraphAction_setComments(JNIEnv *jni_env, jobject java_object,org_json_JSONObject& arg0);
 

}
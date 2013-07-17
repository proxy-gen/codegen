/*
 * Header (CXX)
 * Author: cxx-bindings-generator
 */
namespace FacebookCXX {

JNIEXPORT void Java_FacebookCXX_com_facebook_model_GraphObject_setProperty(JNIEnv *jni_env, jobject java_object,std::string& arg0,java_lang_Object& arg1);
JNIEXPORT java_lang_Object Java_FacebookCXX_com_facebook_model_GraphObject_getProperty(JNIEnv *jni_env, jobject java_object,std::string& arg0);
JNIEXPORT com_facebook_model_GraphObject Java_FacebookCXX_com_facebook_model_GraphObject_cast(JNIEnv *jni_env, jobject java_object,java_lang_Class& arg0);
JNIEXPORT std::map Java_FacebookCXX_com_facebook_model_GraphObject_asMap(JNIEnv *jni_env, jobject java_object);
JNIEXPORT org_json_JSONObject Java_FacebookCXX_com_facebook_model_GraphObject_getInnerJSONObject(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_FacebookCXX_com_facebook_model_GraphObject_removeProperty(JNIEnv *jni_env, jobject java_object,std::string& arg0);
 

}
/*
 * Implementation (CXX)
 * Author: cxx-bindings-generator
 */

#include <com_facebook_model_GraphObject.hpp>
#include <jni.h>

namespace FacebookCXX {

JNIEXPORT void Java_FacebookCXX_com_facebook_model_GraphObject_setProperty(JNIEnv *jni_env, jobject java_object,jobject& arg0,jobject& arg1);
JNIEXPORT jobject Java_FacebookCXX_com_facebook_model_GraphObject_getProperty(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jobject Java_FacebookCXX_com_facebook_model_GraphObject_cast(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jobject Java_FacebookCXX_com_facebook_model_GraphObject_asMap(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobject Java_FacebookCXX_com_facebook_model_GraphObject_getInnerJSONObject(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_FacebookCXX_com_facebook_model_GraphObject_removeProperty(JNIEnv *jni_env, jobject java_object,jobject& arg0);
    
}
/*
 * Header (CXX)
 * Author: cxx-bindings-generator
 */
namespace FacebookCXX {

JNIEXPORT void Java_FacebookCXX_com_facebook_widget_GraphObjectCursor_close(JNIEnv *jni_env, jobject java_object);
JNIEXPORT bool Java_FacebookCXX_com_facebook_widget_GraphObjectCursor_isFirst(JNIEnv *jni_env, jobject java_object);
JNIEXPORT bool Java_FacebookCXX_com_facebook_widget_GraphObjectCursor_isClosed(JNIEnv *jni_env, jobject java_object);
JNIEXPORT int Java_FacebookCXX_com_facebook_widget_GraphObjectCursor_getPosition(JNIEnv *jni_env, jobject java_object);
JNIEXPORT bool Java_FacebookCXX_com_facebook_widget_GraphObjectCursor_isFromCache(JNIEnv *jni_env, jobject java_object);
JNIEXPORT com_facebook_model_GraphObject Java_FacebookCXX_com_facebook_widget_GraphObjectCursor_getGraphObject(JNIEnv *jni_env, jobject java_object);
JNIEXPORT bool Java_FacebookCXX_com_facebook_widget_GraphObjectCursor_moveToFirst(JNIEnv *jni_env, jobject java_object);
JNIEXPORT int Java_FacebookCXX_com_facebook_widget_GraphObjectCursor_getCount(JNIEnv *jni_env, jobject java_object);
JNIEXPORT bool Java_FacebookCXX_com_facebook_widget_GraphObjectCursor_areMoreObjectsAvailable(JNIEnv *jni_env, jobject java_object);
JNIEXPORT bool Java_FacebookCXX_com_facebook_widget_GraphObjectCursor_moveToNext(JNIEnv *jni_env, jobject java_object);
JNIEXPORT bool Java_FacebookCXX_com_facebook_widget_GraphObjectCursor_move(JNIEnv *jni_env, jobject java_object,int& arg0);
JNIEXPORT bool Java_FacebookCXX_com_facebook_widget_GraphObjectCursor_moveToPosition(JNIEnv *jni_env, jobject java_object,int& arg0);
JNIEXPORT bool Java_FacebookCXX_com_facebook_widget_GraphObjectCursor_moveToLast(JNIEnv *jni_env, jobject java_object);
JNIEXPORT bool Java_FacebookCXX_com_facebook_widget_GraphObjectCursor_moveToPrevious(JNIEnv *jni_env, jobject java_object);
JNIEXPORT bool Java_FacebookCXX_com_facebook_widget_GraphObjectCursor_isLast(JNIEnv *jni_env, jobject java_object);
JNIEXPORT bool Java_FacebookCXX_com_facebook_widget_GraphObjectCursor_isBeforeFirst(JNIEnv *jni_env, jobject java_object);
JNIEXPORT bool Java_FacebookCXX_com_facebook_widget_GraphObjectCursor_isAfterLast(JNIEnv *jni_env, jobject java_object);
 

}
/*
 * Implementation (CXX)
 * Author: cxx-bindings-generator
 */

#include <com_facebook_widget_GraphObjectCursor.hpp>
#include <jni.h>

namespace FacebookCXX {

JNIEXPORT void Java_FacebookCXX_com_facebook_widget_GraphObjectCursor_close(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_FacebookCXX_com_facebook_widget_GraphObjectCursor_isFirst(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_FacebookCXX_com_facebook_widget_GraphObjectCursor_isClosed(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jint Java_FacebookCXX_com_facebook_widget_GraphObjectCursor_getPosition(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_FacebookCXX_com_facebook_widget_GraphObjectCursor_isFromCache(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobject Java_FacebookCXX_com_facebook_widget_GraphObjectCursor_getGraphObject(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_FacebookCXX_com_facebook_widget_GraphObjectCursor_moveToFirst(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jint Java_FacebookCXX_com_facebook_widget_GraphObjectCursor_getCount(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_FacebookCXX_com_facebook_widget_GraphObjectCursor_areMoreObjectsAvailable(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_FacebookCXX_com_facebook_widget_GraphObjectCursor_moveToNext(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_FacebookCXX_com_facebook_widget_GraphObjectCursor_move(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jboolean Java_FacebookCXX_com_facebook_widget_GraphObjectCursor_moveToPosition(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jboolean Java_FacebookCXX_com_facebook_widget_GraphObjectCursor_moveToLast(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_FacebookCXX_com_facebook_widget_GraphObjectCursor_moveToPrevious(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_FacebookCXX_com_facebook_widget_GraphObjectCursor_isLast(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_FacebookCXX_com_facebook_widget_GraphObjectCursor_isBeforeFirst(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_FacebookCXX_com_facebook_widget_GraphObjectCursor_isAfterLast(JNIEnv *jni_env, jobject java_object);
    
}
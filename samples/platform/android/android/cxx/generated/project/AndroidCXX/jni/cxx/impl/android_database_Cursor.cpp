/*
 * Implementation (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


#include <android_database_Cursor.hpp>
#include <jni.h>

namespace AndroidCXX {

JNIEXPORT jshort Java_AndroidCXX_android_database_Cursor_getShort(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jint Java_AndroidCXX_android_database_Cursor_getInt(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jlong Java_AndroidCXX_android_database_Cursor_getLong(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jfloat Java_AndroidCXX_android_database_Cursor_getFloat(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jdouble Java_AndroidCXX_android_database_Cursor_getDouble(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT void Java_AndroidCXX_android_database_Cursor_close(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jint Java_AndroidCXX_android_database_Cursor_getType(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jobject Java_AndroidCXX_android_database_Cursor_getString(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jboolean Java_AndroidCXX_android_database_Cursor_isFirst(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_AndroidCXX_android_database_Cursor_isClosed(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jint Java_AndroidCXX_android_database_Cursor_getPosition(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_AndroidCXX_android_database_Cursor_isNull(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jobject Java_AndroidCXX_android_database_Cursor_getExtras(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_AndroidCXX_android_database_Cursor_registerContentObserver(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT void Java_AndroidCXX_android_database_Cursor_unregisterContentObserver(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jint Java_AndroidCXX_android_database_Cursor_getCount(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_AndroidCXX_android_database_Cursor_move(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jboolean Java_AndroidCXX_android_database_Cursor_moveToPosition(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jboolean Java_AndroidCXX_android_database_Cursor_moveToFirst(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_AndroidCXX_android_database_Cursor_moveToLast(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_AndroidCXX_android_database_Cursor_moveToNext(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_AndroidCXX_android_database_Cursor_moveToPrevious(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_AndroidCXX_android_database_Cursor_isLast(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_AndroidCXX_android_database_Cursor_isBeforeFirst(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_AndroidCXX_android_database_Cursor_isAfterLast(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jint Java_AndroidCXX_android_database_Cursor_getColumnIndex(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jint Java_AndroidCXX_android_database_Cursor_getColumnIndexOrThrow(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jobject Java_AndroidCXX_android_database_Cursor_getColumnName(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jobjectArray Java_AndroidCXX_android_database_Cursor_getColumnNames(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jint Java_AndroidCXX_android_database_Cursor_getColumnCount(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jbyteArray Java_AndroidCXX_android_database_Cursor_getBlob(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT void Java_AndroidCXX_android_database_Cursor_copyStringToBuffer(JNIEnv *jni_env, jobject java_object,jint& arg0,jobject& arg1);
JNIEXPORT void Java_AndroidCXX_android_database_Cursor_deactivate(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_AndroidCXX_android_database_Cursor_requery(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_AndroidCXX_android_database_Cursor_registerDataSetObserver(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT void Java_AndroidCXX_android_database_Cursor_unregisterDataSetObserver(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT void Java_AndroidCXX_android_database_Cursor_setNotificationUri(JNIEnv *jni_env, jobject java_object,jobject& arg0,jobject& arg1);
JNIEXPORT jboolean Java_AndroidCXX_android_database_Cursor_getWantsAllOnMoveCalls(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobject Java_AndroidCXX_android_database_Cursor_respond(JNIEnv *jni_env, jobject java_object,jobject& arg0);
    
}
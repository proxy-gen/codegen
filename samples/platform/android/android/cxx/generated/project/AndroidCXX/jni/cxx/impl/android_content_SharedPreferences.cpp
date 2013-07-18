/*
 * Implementation (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


#include <android_content_SharedPreferences.hpp>
#include <jni.h>

namespace AndroidCXX {

JNIEXPORT jboolean Java_AndroidCXX_android_content_SharedPreferences_getBoolean(JNIEnv *jni_env, jobject java_object,jobject& arg0,jboolean& arg1);
JNIEXPORT jint Java_AndroidCXX_android_content_SharedPreferences_getInt(JNIEnv *jni_env, jobject java_object,jobject& arg0,jint& arg1);
JNIEXPORT jlong Java_AndroidCXX_android_content_SharedPreferences_getLong(JNIEnv *jni_env, jobject java_object,jobject& arg0,jlong& arg1);
JNIEXPORT jfloat Java_AndroidCXX_android_content_SharedPreferences_getFloat(JNIEnv *jni_env, jobject java_object,jobject& arg0,jfloat& arg1);
JNIEXPORT jboolean Java_AndroidCXX_android_content_SharedPreferences_contains(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jobject Java_AndroidCXX_android_content_SharedPreferences_getString(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jobject Java_AndroidCXX_android_content_SharedPreferences_getAll(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobject Java_AndroidCXX_android_content_SharedPreferences_getStringSet(JNIEnv *jni_env, jobject java_object,jobject& arg0,jobject& arg1);
JNIEXPORT jobject Java_AndroidCXX_android_content_SharedPreferences_edit(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_AndroidCXX_android_content_SharedPreferences_registerOnSharedPreferenceChangeListener(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT void Java_AndroidCXX_android_content_SharedPreferences_unregisterOnSharedPreferenceChangeListener(JNIEnv *jni_env, jobject java_object,jobject& arg0);
    
}
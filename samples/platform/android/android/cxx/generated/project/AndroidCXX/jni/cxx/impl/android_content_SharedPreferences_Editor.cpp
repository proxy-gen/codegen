/*
 * Implementation (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


#include <android_content_SharedPreferences_Editor.hpp>
#include <jni.h>

namespace AndroidCXX {

JNIEXPORT jobject Java_AndroidCXX_android_content_SharedPreferences_Editor_putBoolean(JNIEnv *jni_env, jobject java_object,jobject& arg0,jboolean& arg1);
JNIEXPORT jobject Java_AndroidCXX_android_content_SharedPreferences_Editor_putInt(JNIEnv *jni_env, jobject java_object,jobject& arg0,jint& arg1);
JNIEXPORT jobject Java_AndroidCXX_android_content_SharedPreferences_Editor_putLong(JNIEnv *jni_env, jobject java_object,jobject& arg0,jlong& arg1);
JNIEXPORT jobject Java_AndroidCXX_android_content_SharedPreferences_Editor_putFloat(JNIEnv *jni_env, jobject java_object,jobject& arg0,jfloat& arg1);
JNIEXPORT jobject Java_AndroidCXX_android_content_SharedPreferences_Editor_clear(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobject Java_AndroidCXX_android_content_SharedPreferences_Editor_remove(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jobject Java_AndroidCXX_android_content_SharedPreferences_Editor_putString(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT void Java_AndroidCXX_android_content_SharedPreferences_Editor_apply(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobject Java_AndroidCXX_android_content_SharedPreferences_Editor_putStringSet(JNIEnv *jni_env, jobject java_object,jobject& arg0,jobject& arg1);
JNIEXPORT jboolean Java_AndroidCXX_android_content_SharedPreferences_Editor_commit(JNIEnv *jni_env, jobject java_object);
    
}
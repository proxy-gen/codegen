/*
 * Implementation (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


#include <android_view_Menu.hpp>
#include <jni.h>

namespace AndroidCXX {

JNIEXPORT jobject Java_AndroidCXX_android_view_Menu_add(JNIEnv *jni_env, jobject java_object,jint& arg0,jobject& arg1);
JNIEXPORT void Java_AndroidCXX_android_view_Menu_clear(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jint Java_AndroidCXX_android_view_Menu_size(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_AndroidCXX_android_view_Menu_close(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_AndroidCXX_android_view_Menu_hasVisibleItems(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobject Java_AndroidCXX_android_view_Menu_addSubMenu(JNIEnv *jni_env, jobject java_object,jint& arg0,jobject& arg1);
JNIEXPORT jint Java_AndroidCXX_android_view_Menu_addIntentOptions(JNIEnv *jni_env, jobject java_object,jint& arg0,jobject& arg1,jobjectArray& arg2,jobject& arg3,jobjectArray& arg4);
JNIEXPORT void Java_AndroidCXX_android_view_Menu_removeItem(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT void Java_AndroidCXX_android_view_Menu_removeGroup(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT void Java_AndroidCXX_android_view_Menu_setGroupCheckable(JNIEnv *jni_env, jobject java_object,jint& arg0,jboolean& arg1);
JNIEXPORT void Java_AndroidCXX_android_view_Menu_setGroupVisible(JNIEnv *jni_env, jobject java_object,jint& arg0,jboolean& arg1);
JNIEXPORT void Java_AndroidCXX_android_view_Menu_setGroupEnabled(JNIEnv *jni_env, jobject java_object,jint& arg0,jboolean& arg1);
JNIEXPORT jobject Java_AndroidCXX_android_view_Menu_findItem(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jobject Java_AndroidCXX_android_view_Menu_getItem(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jboolean Java_AndroidCXX_android_view_Menu_performShortcut(JNIEnv *jni_env, jobject java_object,jint& arg0,jobject& arg1);
JNIEXPORT jboolean Java_AndroidCXX_android_view_Menu_isShortcutKey(JNIEnv *jni_env, jobject java_object,jint& arg0,jobject& arg1);
JNIEXPORT jboolean Java_AndroidCXX_android_view_Menu_performIdentifierAction(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT void Java_AndroidCXX_android_view_Menu_setQwertyMode(JNIEnv *jni_env, jobject java_object,jboolean& arg0);
    
}
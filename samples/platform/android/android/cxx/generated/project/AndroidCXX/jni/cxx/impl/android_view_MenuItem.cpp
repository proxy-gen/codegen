/*
 * Implementation (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


#include <android_view_MenuItem.hpp>
#include <jni.h>

namespace AndroidCXX {

JNIEXPORT jboolean Java_AndroidCXX_android_view_MenuItem_isVisible(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_AndroidCXX_android_view_MenuItem_isEnabled(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobject Java_AndroidCXX_android_view_MenuItem_getIntent(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobject Java_AndroidCXX_android_view_MenuItem_setIntent(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jobject Java_AndroidCXX_android_view_MenuItem_setVisible(JNIEnv *jni_env, jobject java_object,jboolean& arg0);
JNIEXPORT jobject Java_AndroidCXX_android_view_MenuItem_setTitle(JNIEnv *jni_env, jobject java_object,jint& arg0,jobject& arg1);
JNIEXPORT jobject Java_AndroidCXX_android_view_MenuItem_getTitle(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobject Java_AndroidCXX_android_view_MenuItem_setEnabled(JNIEnv *jni_env, jobject java_object,jboolean& arg0);
JNIEXPORT jint Java_AndroidCXX_android_view_MenuItem_getItemId(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jint Java_AndroidCXX_android_view_MenuItem_getGroupId(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jint Java_AndroidCXX_android_view_MenuItem_getOrder(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobject Java_AndroidCXX_android_view_MenuItem_setTitleCondensed(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jobject Java_AndroidCXX_android_view_MenuItem_getTitleCondensed(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobject Java_AndroidCXX_android_view_MenuItem_setIcon(JNIEnv *jni_env, jobject java_object,jobject& arg0,jint& arg1);
JNIEXPORT jobject Java_AndroidCXX_android_view_MenuItem_getIcon(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobject Java_AndroidCXX_android_view_MenuItem_setShortcut(JNIEnv *jni_env, jobject java_object,jchar& arg0);
JNIEXPORT jobject Java_AndroidCXX_android_view_MenuItem_setNumericShortcut(JNIEnv *jni_env, jobject java_object,jchar& arg0);
JNIEXPORT jchar Java_AndroidCXX_android_view_MenuItem_getNumericShortcut(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobject Java_AndroidCXX_android_view_MenuItem_setAlphabeticShortcut(JNIEnv *jni_env, jobject java_object,jchar& arg0);
JNIEXPORT jchar Java_AndroidCXX_android_view_MenuItem_getAlphabeticShortcut(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobject Java_AndroidCXX_android_view_MenuItem_setCheckable(JNIEnv *jni_env, jobject java_object,jboolean& arg0);
JNIEXPORT jboolean Java_AndroidCXX_android_view_MenuItem_isCheckable(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobject Java_AndroidCXX_android_view_MenuItem_setChecked(JNIEnv *jni_env, jobject java_object,jboolean& arg0);
JNIEXPORT jboolean Java_AndroidCXX_android_view_MenuItem_isChecked(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_AndroidCXX_android_view_MenuItem_hasSubMenu(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobject Java_AndroidCXX_android_view_MenuItem_getSubMenu(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobject Java_AndroidCXX_android_view_MenuItem_setOnMenuItemClickListener(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jobject Java_AndroidCXX_android_view_MenuItem_getMenuInfo(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_AndroidCXX_android_view_MenuItem_setShowAsAction(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jobject Java_AndroidCXX_android_view_MenuItem_setShowAsActionFlags(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jobject Java_AndroidCXX_android_view_MenuItem_setActionView(JNIEnv *jni_env, jobject java_object,jobject& arg0,jint& arg1);
JNIEXPORT jobject Java_AndroidCXX_android_view_MenuItem_getActionView(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobject Java_AndroidCXX_android_view_MenuItem_setActionProvider(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jobject Java_AndroidCXX_android_view_MenuItem_getActionProvider(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_AndroidCXX_android_view_MenuItem_expandActionView(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_AndroidCXX_android_view_MenuItem_collapseActionView(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_AndroidCXX_android_view_MenuItem_isActionViewExpanded(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobject Java_AndroidCXX_android_view_MenuItem_setOnActionExpandListener(JNIEnv *jni_env, jobject java_object,jobject& arg0);
    
}
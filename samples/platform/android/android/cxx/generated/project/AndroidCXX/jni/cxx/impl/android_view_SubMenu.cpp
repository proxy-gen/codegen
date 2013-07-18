/*
 * Implementation (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


#include <android_view_SubMenu.hpp>
#include <jni.h>

namespace AndroidCXX {

JNIEXPORT jobject Java_AndroidCXX_android_view_SubMenu_getItem(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobject Java_AndroidCXX_android_view_SubMenu_setIcon(JNIEnv *jni_env, jobject java_object,jobject& arg0,jint& arg1);
JNIEXPORT jobject Java_AndroidCXX_android_view_SubMenu_setHeaderTitle(JNIEnv *jni_env, jobject java_object,jint& arg0,jobject& arg1);
JNIEXPORT jobject Java_AndroidCXX_android_view_SubMenu_setHeaderIcon(JNIEnv *jni_env, jobject java_object,jobject& arg0,jint& arg1);
JNIEXPORT jobject Java_AndroidCXX_android_view_SubMenu_setHeaderView(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT void Java_AndroidCXX_android_view_SubMenu_clearHeader(JNIEnv *jni_env, jobject java_object);
    
}
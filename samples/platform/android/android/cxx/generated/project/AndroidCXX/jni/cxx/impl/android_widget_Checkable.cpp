/*
 * Implementation (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


#include <android_widget_Checkable.hpp>
#include <jni.h>

namespace AndroidCXX {

JNIEXPORT void Java_AndroidCXX_android_widget_Checkable_setChecked(JNIEnv *jni_env, jobject java_object,jboolean& arg0);
JNIEXPORT jboolean Java_AndroidCXX_android_widget_Checkable_isChecked(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_AndroidCXX_android_widget_Checkable_toggle(JNIEnv *jni_env, jobject java_object);
    
}
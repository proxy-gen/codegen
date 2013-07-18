/*
 * Implementation (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


#include <android_widget_Adapter.hpp>
#include <jni.h>

namespace AndroidCXX {

JNIEXPORT jboolean Java_AndroidCXX_android_widget_Adapter_isEmpty(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobject Java_AndroidCXX_android_widget_Adapter_getView(JNIEnv *jni_env, jobject java_object,jint& arg0,jobject& arg1,jobject& arg2);
JNIEXPORT jobject Java_AndroidCXX_android_widget_Adapter_getItem(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jlong Java_AndroidCXX_android_widget_Adapter_getItemId(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jint Java_AndroidCXX_android_widget_Adapter_getCount(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_AndroidCXX_android_widget_Adapter_registerDataSetObserver(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT void Java_AndroidCXX_android_widget_Adapter_unregisterDataSetObserver(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jboolean Java_AndroidCXX_android_widget_Adapter_hasStableIds(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jint Java_AndroidCXX_android_widget_Adapter_getItemViewType(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jint Java_AndroidCXX_android_widget_Adapter_getViewTypeCount(JNIEnv *jni_env, jobject java_object);
    
}
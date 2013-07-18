/*
 * Implementation (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


#include <android_view_ActionMode_Callback.hpp>
#include <jni.h>

namespace AndroidCXX {

JNIEXPORT jboolean Java_AndroidCXX_android_view_ActionMode_Callback_onCreateActionMode(JNIEnv *jni_env, jobject java_object,jobject& arg0,jobject& arg1);
JNIEXPORT jboolean Java_AndroidCXX_android_view_ActionMode_Callback_onPrepareActionMode(JNIEnv *jni_env, jobject java_object,jobject& arg0,jobject& arg1);
JNIEXPORT jboolean Java_AndroidCXX_android_view_ActionMode_Callback_onActionItemClicked(JNIEnv *jni_env, jobject java_object,jobject& arg0,jobject& arg1);
JNIEXPORT void Java_AndroidCXX_android_view_ActionMode_Callback_onDestroyActionMode(JNIEnv *jni_env, jobject java_object,jobject& arg0);
    
}
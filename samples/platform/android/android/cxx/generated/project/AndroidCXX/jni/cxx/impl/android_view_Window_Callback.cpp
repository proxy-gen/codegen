/*
 * Implementation (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


#include <android_view_Window_Callback.hpp>
#include <jni.h>

namespace AndroidCXX {

JNIEXPORT jboolean Java_AndroidCXX_android_view_Window_Callback_onCreatePanelMenu(JNIEnv *jni_env, jobject java_object,jint& arg0,jobject& arg1);
JNIEXPORT jboolean Java_AndroidCXX_android_view_Window_Callback_onMenuItemSelected(JNIEnv *jni_env, jobject java_object,jint& arg0,jobject& arg1);
JNIEXPORT void Java_AndroidCXX_android_view_Window_Callback_onPanelClosed(JNIEnv *jni_env, jobject java_object,jint& arg0,jobject& arg1);
JNIEXPORT jboolean Java_AndroidCXX_android_view_Window_Callback_onPreparePanel(JNIEnv *jni_env, jobject java_object,jint& arg0,jobject& arg1,jobject& arg2);
JNIEXPORT void Java_AndroidCXX_android_view_Window_Callback_onWindowAttributesChanged(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT void Java_AndroidCXX_android_view_Window_Callback_onContentChanged(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_AndroidCXX_android_view_Window_Callback_onWindowFocusChanged(JNIEnv *jni_env, jobject java_object,jboolean& arg0);
JNIEXPORT void Java_AndroidCXX_android_view_Window_Callback_onAttachedToWindow(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_AndroidCXX_android_view_Window_Callback_onDetachedFromWindow(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_AndroidCXX_android_view_Window_Callback_dispatchKeyEvent(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jboolean Java_AndroidCXX_android_view_Window_Callback_dispatchKeyShortcutEvent(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jboolean Java_AndroidCXX_android_view_Window_Callback_dispatchTouchEvent(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jboolean Java_AndroidCXX_android_view_Window_Callback_dispatchTrackballEvent(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jboolean Java_AndroidCXX_android_view_Window_Callback_dispatchGenericMotionEvent(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jboolean Java_AndroidCXX_android_view_Window_Callback_dispatchPopulateAccessibilityEvent(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jobject Java_AndroidCXX_android_view_Window_Callback_onCreatePanelView(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jboolean Java_AndroidCXX_android_view_Window_Callback_onMenuOpened(JNIEnv *jni_env, jobject java_object,jint& arg0,jobject& arg1);
JNIEXPORT jboolean Java_AndroidCXX_android_view_Window_Callback_onSearchRequested(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobject Java_AndroidCXX_android_view_Window_Callback_onWindowStartingActionMode(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT void Java_AndroidCXX_android_view_Window_Callback_onActionModeStarted(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT void Java_AndroidCXX_android_view_Window_Callback_onActionModeFinished(JNIEnv *jni_env, jobject java_object,jobject& arg0);
    
}
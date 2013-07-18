/*
 * Implementation (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


#include <android_view_inputmethod_InputConnection.hpp>
#include <jni.h>

namespace AndroidCXX {

JNIEXPORT jobject Java_AndroidCXX_android_view_inputmethod_InputConnection_getTextBeforeCursor(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jobject Java_AndroidCXX_android_view_inputmethod_InputConnection_getTextAfterCursor(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jobject Java_AndroidCXX_android_view_inputmethod_InputConnection_getSelectedText(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jint Java_AndroidCXX_android_view_inputmethod_InputConnection_getCursorCapsMode(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jobject Java_AndroidCXX_android_view_inputmethod_InputConnection_getExtractedText(JNIEnv *jni_env, jobject java_object,jobject& arg0,jint& arg1);
JNIEXPORT jboolean Java_AndroidCXX_android_view_inputmethod_InputConnection_deleteSurroundingText(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jboolean Java_AndroidCXX_android_view_inputmethod_InputConnection_setComposingText(JNIEnv *jni_env, jobject java_object,jobject& arg0,jint& arg1);
JNIEXPORT jboolean Java_AndroidCXX_android_view_inputmethod_InputConnection_setComposingRegion(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jboolean Java_AndroidCXX_android_view_inputmethod_InputConnection_finishComposingText(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_AndroidCXX_android_view_inputmethod_InputConnection_commitText(JNIEnv *jni_env, jobject java_object,jobject& arg0,jint& arg1);
JNIEXPORT jboolean Java_AndroidCXX_android_view_inputmethod_InputConnection_commitCompletion(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jboolean Java_AndroidCXX_android_view_inputmethod_InputConnection_commitCorrection(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jboolean Java_AndroidCXX_android_view_inputmethod_InputConnection_setSelection(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jboolean Java_AndroidCXX_android_view_inputmethod_InputConnection_performEditorAction(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jboolean Java_AndroidCXX_android_view_inputmethod_InputConnection_performContextMenuAction(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jboolean Java_AndroidCXX_android_view_inputmethod_InputConnection_beginBatchEdit(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_AndroidCXX_android_view_inputmethod_InputConnection_endBatchEdit(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_AndroidCXX_android_view_inputmethod_InputConnection_sendKeyEvent(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jboolean Java_AndroidCXX_android_view_inputmethod_InputConnection_clearMetaKeyStates(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jboolean Java_AndroidCXX_android_view_inputmethod_InputConnection_reportFullscreenMode(JNIEnv *jni_env, jobject java_object,jboolean& arg0);
JNIEXPORT jboolean Java_AndroidCXX_android_view_inputmethod_InputConnection_performPrivateCommand(JNIEnv *jni_env, jobject java_object,jobject& arg0,jobject& arg1);
    
}
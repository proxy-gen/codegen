/*
 * Implementation (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


#include <android_view_ViewParent.hpp>
#include <jni.h>

namespace AndroidCXX {

JNIEXPORT jobject Java_AndroidCXX_android_view_ViewParent_getParent(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_AndroidCXX_android_view_ViewParent_requestChildFocus(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT void Java_AndroidCXX_android_view_ViewParent_focusableViewAvailable(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jboolean Java_AndroidCXX_android_view_ViewParent_showContextMenuForChild(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jobject Java_AndroidCXX_android_view_ViewParent_startActionModeForChild(JNIEnv *jni_env, jobject java_object,jobject& arg0,jobject& arg1);
JNIEXPORT jobject Java_AndroidCXX_android_view_ViewParent_focusSearch(JNIEnv *jni_env, jobject java_object,jobject& arg0,jint& arg1);
JNIEXPORT jboolean Java_AndroidCXX_android_view_ViewParent_requestChildRectangleOnScreen(JNIEnv *jni_env, jobject java_object,jobject& arg0,jobject& arg1,jboolean& arg2);
JNIEXPORT jboolean Java_AndroidCXX_android_view_ViewParent_requestSendAccessibilityEvent(JNIEnv *jni_env, jobject java_object,jobject& arg0,jobject& arg1);
JNIEXPORT void Java_AndroidCXX_android_view_ViewParent_clearChildFocus(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT void Java_AndroidCXX_android_view_ViewParent_recomputeViewAttributes(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT void Java_AndroidCXX_android_view_ViewParent_bringChildToFront(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT void Java_AndroidCXX_android_view_ViewParent_requestDisallowInterceptTouchEvent(JNIEnv *jni_env, jobject java_object,jboolean& arg0);
JNIEXPORT void Java_AndroidCXX_android_view_ViewParent_invalidateChild(JNIEnv *jni_env, jobject java_object,jobject& arg0,jobject& arg1);
JNIEXPORT jobject Java_AndroidCXX_android_view_ViewParent_invalidateChildInParent(JNIEnv *jni_env, jobject java_object,jintArray& arg0,jobject& arg1);
JNIEXPORT jboolean Java_AndroidCXX_android_view_ViewParent_getChildVisibleRect(JNIEnv *jni_env, jobject java_object,jobject& arg0,jobject& arg1,jobject& arg2);
JNIEXPORT void Java_AndroidCXX_android_view_ViewParent_requestTransparentRegion(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT void Java_AndroidCXX_android_view_ViewParent_childDrawableStateChanged(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT void Java_AndroidCXX_android_view_ViewParent_requestLayout(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_AndroidCXX_android_view_ViewParent_isLayoutRequested(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_AndroidCXX_android_view_ViewParent_createContextMenu(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT void Java_AndroidCXX_android_view_ViewParent_requestFitSystemWindows(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobject Java_AndroidCXX_android_view_ViewParent_getParentForAccessibility(JNIEnv *jni_env, jobject java_object);
    
}
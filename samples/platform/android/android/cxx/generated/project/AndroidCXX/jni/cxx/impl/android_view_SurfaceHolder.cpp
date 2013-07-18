/*
 * Implementation (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


#include <android_view_SurfaceHolder.hpp>
#include <jni.h>

namespace AndroidCXX {

JNIEXPORT void Java_AndroidCXX_android_view_SurfaceHolder_setFormat(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT void Java_AndroidCXX_android_view_SurfaceHolder_setType(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT void Java_AndroidCXX_android_view_SurfaceHolder_setKeepScreenOn(JNIEnv *jni_env, jobject java_object,jboolean& arg0);
JNIEXPORT void Java_AndroidCXX_android_view_SurfaceHolder_addCallback(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT void Java_AndroidCXX_android_view_SurfaceHolder_removeCallback(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jboolean Java_AndroidCXX_android_view_SurfaceHolder_isCreating(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_AndroidCXX_android_view_SurfaceHolder_setFixedSize(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT void Java_AndroidCXX_android_view_SurfaceHolder_setSizeFromLayout(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobject Java_AndroidCXX_android_view_SurfaceHolder_lockCanvas(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT void Java_AndroidCXX_android_view_SurfaceHolder_unlockCanvasAndPost(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jobject Java_AndroidCXX_android_view_SurfaceHolder_getSurfaceFrame(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobject Java_AndroidCXX_android_view_SurfaceHolder_getSurface(JNIEnv *jni_env, jobject java_object);
    
}
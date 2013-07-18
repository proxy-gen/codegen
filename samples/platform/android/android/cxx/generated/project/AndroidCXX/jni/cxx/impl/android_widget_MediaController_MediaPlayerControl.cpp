/*
 * Implementation (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


#include <android_widget_MediaController_MediaPlayerControl.hpp>
#include <jni.h>

namespace AndroidCXX {

JNIEXPORT void Java_AndroidCXX_android_widget_MediaController_MediaPlayerControl_start(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jint Java_AndroidCXX_android_widget_MediaController_MediaPlayerControl_getDuration(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_AndroidCXX_android_widget_MediaController_MediaPlayerControl_pause(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jint Java_AndroidCXX_android_widget_MediaController_MediaPlayerControl_getCurrentPosition(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_AndroidCXX_android_widget_MediaController_MediaPlayerControl_seekTo(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jboolean Java_AndroidCXX_android_widget_MediaController_MediaPlayerControl_isPlaying(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jint Java_AndroidCXX_android_widget_MediaController_MediaPlayerControl_getBufferPercentage(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_AndroidCXX_android_widget_MediaController_MediaPlayerControl_canPause(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_AndroidCXX_android_widget_MediaController_MediaPlayerControl_canSeekBackward(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_AndroidCXX_android_widget_MediaController_MediaPlayerControl_canSeekForward(JNIEnv *jni_env, jobject java_object);
    
}
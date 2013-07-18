/*
 * Implementation (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


#include <android_os_IBinder.hpp>
#include <jni.h>

namespace AndroidCXX {

JNIEXPORT void Java_AndroidCXX_android_os_IBinder_dump(JNIEnv *jni_env, jobject java_object,jobject& arg0,jobjectArray& arg1);
JNIEXPORT jobject Java_AndroidCXX_android_os_IBinder_getInterfaceDescriptor(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_AndroidCXX_android_os_IBinder_pingBinder(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_AndroidCXX_android_os_IBinder_isBinderAlive(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobject Java_AndroidCXX_android_os_IBinder_queryLocalInterface(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT void Java_AndroidCXX_android_os_IBinder_dumpAsync(JNIEnv *jni_env, jobject java_object,jobject& arg0,jobjectArray& arg1);
JNIEXPORT jboolean Java_AndroidCXX_android_os_IBinder_transact(JNIEnv *jni_env, jobject java_object,jint& arg0,jobject& arg1);
JNIEXPORT void Java_AndroidCXX_android_os_IBinder_linkToDeath(JNIEnv *jni_env, jobject java_object,jobject& arg0,jint& arg1);
JNIEXPORT jboolean Java_AndroidCXX_android_os_IBinder_unlinkToDeath(JNIEnv *jni_env, jobject java_object,jobject& arg0,jint& arg1);
    
}
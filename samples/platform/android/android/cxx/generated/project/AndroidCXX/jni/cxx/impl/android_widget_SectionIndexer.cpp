/*
 * Implementation (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


#include <android_widget_SectionIndexer.hpp>
#include <jni.h>

namespace AndroidCXX {

JNIEXPORT jobjectArray Java_AndroidCXX_android_widget_SectionIndexer_getSections(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jint Java_AndroidCXX_android_widget_SectionIndexer_getPositionForSection(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jint Java_AndroidCXX_android_widget_SectionIndexer_getSectionForPosition(JNIEnv *jni_env, jobject java_object,jint& arg0);
    
}
/*
 * Implementation (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


#include <android_util_AttributeSet.hpp>
#include <jni.h>

namespace AndroidCXX {

JNIEXPORT jobject Java_AndroidCXX_android_util_AttributeSet_getAttributeValue(JNIEnv *jni_env, jobject java_object,jint& arg0,jobject& arg1);
JNIEXPORT jobject Java_AndroidCXX_android_util_AttributeSet_getPositionDescription(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jint Java_AndroidCXX_android_util_AttributeSet_getAttributeCount(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobject Java_AndroidCXX_android_util_AttributeSet_getAttributeName(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jint Java_AndroidCXX_android_util_AttributeSet_getAttributeNameResource(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jint Java_AndroidCXX_android_util_AttributeSet_getAttributeListValue(JNIEnv *jni_env, jobject java_object,jobject& arg0,jobjectArray& arg1,jint& arg2);
JNIEXPORT jboolean Java_AndroidCXX_android_util_AttributeSet_getAttributeBooleanValue(JNIEnv *jni_env, jobject java_object,jobject& arg0,jboolean& arg1,jint& arg2);
JNIEXPORT jint Java_AndroidCXX_android_util_AttributeSet_getAttributeResourceValue(JNIEnv *jni_env, jobject java_object,jobject& arg0,jint& arg1);
JNIEXPORT jint Java_AndroidCXX_android_util_AttributeSet_getAttributeIntValue(JNIEnv *jni_env, jobject java_object,jint& arg0,jobject& arg1);
JNIEXPORT jint Java_AndroidCXX_android_util_AttributeSet_getAttributeUnsignedIntValue(JNIEnv *jni_env, jobject java_object,jobject& arg0,jint& arg1);
JNIEXPORT jfloat Java_AndroidCXX_android_util_AttributeSet_getAttributeFloatValue(JNIEnv *jni_env, jobject java_object,jobject& arg0,jfloat& arg1,jint& arg2);
JNIEXPORT jobject Java_AndroidCXX_android_util_AttributeSet_getIdAttribute(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobject Java_AndroidCXX_android_util_AttributeSet_getClassAttribute(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jint Java_AndroidCXX_android_util_AttributeSet_getIdAttributeResourceValue(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jint Java_AndroidCXX_android_util_AttributeSet_getStyleAttribute(JNIEnv *jni_env, jobject java_object);
    
}
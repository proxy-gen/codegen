/*
 * com_zynga_sdk_cxx_ExternalContext.h
 * ZyngaCXX
 *
 * Created on: Jan 30, 2013
 * Author: rvergis
 *
 * Copyright (c) 2013 Zynga. All rights reserved.
 */

#ifndef COM_ZYNGA_SDK_CXX_CXXCONTEXT_H_
#define COM_ZYNGA_SDK_CXX_CXXCONTEXT_H_

#include <jni.h>
#include <cstddef>
#include <android/log.h>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

JNIEXPORT jboolean JNICALL Java_com_zynga_sdk_cxx_CXXContext_createNativeContext(JNIEnv *env, jclass classRef, jobject applicationContext);

JNIEXPORT void JNICALL Java_com_zynga_sdk_cxx_CXXContext_destroyNativeContext(JNIEnv *env, jclass classRef);

JNIEXPORT void JNICALL Java_com_zynga_sdk_cxx_CXXContext_setAndroidContext(JNIEnv *env, jclass classRef, jobject applicationContext);

JNIEXPORT jobject JNICALL Java_com_zynga_sdk_cxx_CXXContext_notifyCXX(JNIEnv *env, jobject objectRef, jlong proxiedAddressRef, jlong proxiedCallbackIDRef, jstring methodNameRef, jobjectArray payload);

#ifdef __cplusplus
}
#endif //__cplusplus

#endif /* COM_ZYNGA_SDK_CXX_CXXCONTEXT_H_ */

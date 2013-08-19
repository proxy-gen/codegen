/*
 * com_zynga_sdk_cxx_ExternalContext.h
 * ZyngaCXX
 *
 * Created on: Jan 30, 2013
 * Author: rvergis
 *
 *  Copyright 2013 Zynga Inc.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
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

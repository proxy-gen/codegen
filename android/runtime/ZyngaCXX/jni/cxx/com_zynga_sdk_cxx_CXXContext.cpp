/*
 * com_zynga_sdk_cxx_ExternalContext.cpp
 * ZyngaCXX
 *
 * Created on: Jan 30, 2013
 * Author: rvergis
 *
 * Copyright (c) 2013 Zynga. All rights reserved.
 */

#include <stdarg.h>
#include "com_zynga_sdk_cxx_CXXContext.h"
#include "JNIContext.hpp"
#include "CXXContext.hpp"

#define LOG_TAG "com_zynga_sdk_cxx_CXXContext"
#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__))
#define LOGW(...) ((void)__android_log_print(ANDROID_LOG_WARN, LOG_TAG, __VA_ARGS__))
#define LOGW_V(message, args) ((void)__android_log_print(ANDROID_LOG_WARN, LOG_TAG, message, args))

static jlong objectID;
static jlong methodID;

jboolean Java_com_zynga_sdk_cxx_CXXContext_createNativeContext(JNIEnv *env, jclass classRef, jobject applicationContext)
{
	LOGI("Java_com_zynga_sdk_cxx_CXXContext_createNativeContext applicationContext %ld", (long) applicationContext);
	JavaVM *vm = 0;
	if (env->GetJavaVM(&vm) != JNI_OK)
	{
		LOGW("Java VM failed to initialize");
		return false;
	}
	if (CXXContext::createCXXContext(vm, applicationContext) != CXX_OK)
	{
		LOGW("CXX Context failed to initialize");
		return false;
	}
	return true;
}

void Java_com_zynga_sdk_cxx_CXXContext_destroyNativeContext(JNIEnv *env, jclass classRef)
{
	LOGI("Java_com_zynga_sdk_cxx_CXXContext_destroyNativeContext");
	CXXContext::destroyCXXContext();
}

JNIEXPORT void JNICALL Java_com_zynga_sdk_cxx_CXXContext_setAndroidContext(JNIEnv *env, jclass classRef, jobject androidContext)
{
	LOGI("Java_com_zynga_sdk_cxx_CXXContext_setApplicationContext");
	CXXContext *sharedInstance = CXXContext::sharedInstance();
	sharedInstance->setAndroidContext(androidContext);
}

jobject Java_com_zynga_sdk_cxx_CXXContext_notifyCXX(JNIEnv *env, jobject objectRef, jlong proxiedAddressRef, jlong proxiedCallbackIDRef, jstring methodNameRef, jobjectArray payload)
{
	LOGI("Java_com_zynga_sdk_cxx_CXXContext_notifyCXX enter");
	JNIContext *jni = JNIContext::sharedInstance();
	LOGI("Java_com_zynga_sdk_cxx_CXXContext_notifyCXX getting proxiedAddressRef %ld", (long) proxiedAddressRef);
	LOGI("Java_com_zynga_sdk_cxx_CXXContext_notifyCXX getting proxiedCallbackIDRef %ld", (long) proxiedCallbackIDRef);
	LOGI("Java_com_zynga_sdk_cxx_CXXContext_notifyCXX getting methodName %ld", (long) methodNameRef);
	long proxiedAddress = (long) proxiedAddressRef;
	long proxiedCallbackID = (long) proxiedCallbackIDRef;
	std::string methodName = jni->getUTFString(methodNameRef);
	LOGI("Java_com_zynga_sdk_cxx_CXXContext_notifyMethod proxiedAddress %ld proxiedCallbackID %ld methodName %s", proxiedAddress, proxiedCallbackID, methodName.c_str());
	CXXContext *ctx = CXXContext::sharedInstance();
	return (jobject) ctx->notify(proxiedAddress, proxiedCallbackID, methodName, payload);
}

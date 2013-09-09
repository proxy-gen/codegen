/*
 * SessionLoginSampleCXX.hpp
 *
 *  Created on: Jul 26, 2013
 *      Author: rvergis
 */

#ifndef SESSIONLOGINSAMPLECXX_HPP_
#define SESSIONLOGINSAMPLECXX_HPP_

#include <jni.h>
#include <android/log.h>
#include <java_lang_Object.hpp>
#include <java_lang_Void.hpp>
#include <java_lang_String.hpp>
#include <java_lang_CharSequence.hpp>
#include <java_util_List.hpp>
#include <java_util_Collection.hpp>
#include <java_util_Iterator.hpp>
#include <java_util_ArrayList.hpp>
#include <java_util_Arrays.hpp>
#include <org_json_JSONObject.hpp>
#include <com_facebook_Session.hpp>
#include <com_facebook_Session_Builder.hpp>
#include <com_facebook_Session_OpenRequest.hpp>
#include <com_facebook_Session_StatusCallback.hpp>
#include <com_facebook_SessionState.hpp>
#include <com_facebook_Request.hpp>
#include <com_facebook_Request_Callback.hpp>
#include <com_facebook_Request_GraphUserCallback.hpp>
#include <com_facebook_Request_GraphUserListCallback.hpp>
#include <com_facebook_RequestAsyncTask.hpp>
#include <com_facebook_SharedPreferencesTokenCachingStrategy.hpp>
#include <com_facebook_TokenCachingStrategy.hpp>
#include <com_facebook_model_GraphUser.hpp>
#include <com_facebook_Session_NewPermissionsRequest.hpp>
#include <com_facebook_FacebookRequestError.hpp>
#include <com_facebook_HttpMethod.hpp>
#include <android_widget_Toast.hpp>
#include <android_content_Context.hpp>
#include <android_content_Intent.hpp>
#include <android_os_Bundle.hpp>
#include <CXXTypes.hpp>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

using namespace AndroidCXX;
using namespace FacebookCXX;

// Typedefs
typedef java_lang_Object Object;
typedef java_lang_Void Void;
typedef java_lang_String String;
typedef java_lang_Exception Exception;
typedef java_lang_CharSequence CharSequence;
typedef java_util_Collection Collection;
typedef java_util_List List;
typedef java_util_ArrayList ArrayList;
typedef java_util_Arrays Arrays;
typedef java_util_Iterator Iterator;
typedef org_json_JSONObject JSONObject;
typedef android_app_Activity Activity;
typedef android_content_Context Context;
typedef android_content_Intent Intent;
typedef android_widget_Toast Toast;
typedef android_os_Bundle Bundle;
typedef com_facebook_Session Session;
typedef com_facebook_Session_Builder Session_Builder;
typedef com_facebook_Session_StatusCallback Session_StatusCallback;
typedef com_facebook_Session_OpenRequest Session_OpenRequest;
typedef com_facebook_Session_NewPermissionsRequest Session_NewPermissionsRequest;
typedef com_facebook_SessionState::com_facebook_SessionState SessionState;
typedef com_facebook_Request Request;
typedef com_facebook_Request_Callback Request_Callback;
typedef com_facebook_Request_GraphUserCallback Request_GraphUserCallback;
typedef com_facebook_Request_GraphUserListCallback Request_GraphUserListCallback;
typedef com_facebook_RequestAsyncTask RequestAsyncTask;
typedef com_facebook_Response Response;
typedef com_facebook_SharedPreferencesTokenCachingStrategy SharedPreferencesTokenCachingStrategy;
typedef com_facebook_FacebookRequestError FacebookRequestError;
typedef com_facebook_model_GraphUser GraphUser;

class MySessionStatusCallback : public Session_StatusCallback
{

public:
	MySessionStatusCallback();
	virtual void call(Session const& arg0,SessionState const& arg1,Exception const& arg2);
};

class MyRequestGraphUserCallback : public Request_GraphUserCallback
{

public:
	MyRequestGraphUserCallback();
	virtual void onCompleted(GraphUser const &user, Response const &response);
};

class MyRequestGraphUserListCallback : public Request_GraphUserListCallback
{

public:
	MyRequestGraphUserListCallback();
	virtual void onCompleted(List const&list,Response const&response);
};

class MyRequestCallback : public Request_Callback
{
public:
	MyRequestCallback();
	void onCompleted(Response const&response);
};

JNIEXPORT void JNICALL Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativeSetup(JNIEnv *env, jobject objectRef, jobject androidContext, jobject savedInstanceState);
JNIEXPORT void JNICALL Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativeLogin(JNIEnv *env, jobject objectRef, jobject androidContext);
JNIEXPORT void JNICALL Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativeMyAttributes(JNIEnv *env, jobject objectRef, jobject androidContext);
JNIEXPORT void JNICALL Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativeLogout(JNIEnv *env, jobject objectRef, jobject androidContext);
JNIEXPORT void JNICALL Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativeGetFriends(JNIEnv *env, jobject objectRef, jobject androidContext);
JNIEXPORT void JNICALL Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativePublishStory(JNIEnv *env, jobject objectRef, jobject androidContext);
JNIEXPORT void JNICALL Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativeRunFQLQuery(JNIEnv *env, jobject object, jobject androidContext);
JNIEXPORT void JNICALL Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativeGetUserAttr(JNIEnv *env, jobject object, jobject androidContext);
JNIEXPORT void JNICALL Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativeShareDialog(JNIEnv *env, jobject object, jobject androidContext);
JNIEXPORT void JNICALL Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativeOnActivityResult(JNIEnv *env, jobject objectRef, int requestCode, int resultCode, jobject data);

#ifdef __cplusplus
}
#endif //__cplusplus

#endif /* SESSIONLOGINSAMPLECXX_HPP_ */

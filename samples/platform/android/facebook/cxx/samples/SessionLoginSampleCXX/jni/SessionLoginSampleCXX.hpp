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
#include <com_facebook_Session.hpp>
#include <com_facebook_Session_StatusCallback.hpp>
#include <com_facebook_SessionState.hpp>
#include <com_facebook_Request.hpp>
#include <com_facebook_Request_GraphUserListCallback.hpp>
#include <com_facebook_Response.hpp>
#include <com_facebook_model_GraphUser.hpp>
#include <java_util_List.hpp>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

class MySessionStatusCallback : public FacebookCXX::com_facebook_Session_StatusCallback
{

public:
	MySessionStatusCallback();
	virtual void call(FacebookCXX::com_facebook_Session const& arg0,com_facebook_SessionState::com_facebook_SessionState const& arg1,AndroidCXX::java_lang_Exception const& arg2);
};

class MyRequestGraphUserListCallback : public FacebookCXX::com_facebook_Request_GraphUserListCallback
{

public:
	MyRequestGraphUserListCallback();
	virtual void onCompleted(AndroidCXX::java_util_List const& arg0,FacebookCXX::com_facebook_Response const& arg1);
};


JNIEXPORT void JNICALL Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativeLogin(JNIEnv *env, jobject objectRef, jobject androidContext);
JNIEXPORT void JNICALL Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativeLogout(JNIEnv *env, jobject objectRef, jobject androidContext);
JNIEXPORT void JNICALL Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativeGetFriends(JNIEnv *env, jobject objectRef, jobject androidContext);

#ifdef __cplusplus
}
#endif //__cplusplus

#endif /* SESSIONLOGINSAMPLECXX_HPP_ */

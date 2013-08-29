#include <SessionLoginSampleCXX.hpp>

#include <com_facebook_Session.hpp>
#include <com_facebook_SessionState.hpp>
#include <com_facebook_Request.hpp>
#include <com_facebook_Request_GraphUserListCallback.hpp>
#include <com_facebook_model_GraphUser.hpp>
#include <android_widget_Toast.hpp>
#include <android_content_Context.hpp>
#include <java_util_Collection.hpp>
#include <java_util_List.hpp>
#include <java_lang_Object.hpp>
#include <CXXTypes.hpp>
#include <string>
#include <iostream>
#include <sstream>

#define LOG_TAG "SessionLoginSampleCXX"
#define LOGV(...) ((void)__android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__))
#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__))
#define LOGW(...) ((void)__android_log_print(ANDROID_LOG_WARN, LOG_TAG, __VA_ARGS__))
#define LOGW_V(message, args) ((void)__android_log_print(ANDROID_LOG_WARN, LOG_TAG, message, args))

FacebookCXX::com_facebook_Session_StatusCallback *callback;
FacebookCXX::com_facebook_Request_GraphUserListCallback *callbackGraphUserList;
AndroidCXX::android_app_Activity *activity;
AndroidCXX::android_content_Context *context;

std::vector<char> to_std_vector(const char * str);

std::string to_std_string(std::vector<signed char> vec);

void toast(const char * str);

MySessionStatusCallback::MySessionStatusCallback() : FacebookCXX::com_facebook_Session_StatusCallback()
{
	
}

void MySessionStatusCallback::call(FacebookCXX::com_facebook_Session const& arg0,com_facebook_SessionState::com_facebook_SessionState const& arg1,AndroidCXX::java_lang_Exception const& arg2)
{
	LOGV("MySessionStatusCallback::call invoked");
//	FacebookCXX::com_facebook_Session session = FacebookCXX::com_facebook_Session::getActiveSession();
//	if (session.isOpened())
//	{
//		LOGV("MySessionStatusCallback::call Session has been opened.");
//		toast("Session has been opened.");
//	}
//	else if (session.isClosed())
//	{
//		LOGV("MySessionStatusCallback::call Session has been closed.");
//		toast("Session has been closed.");
//	}
}

MyRequestGraphUserListCallback::MyRequestGraphUserListCallback() : FacebookCXX::com_facebook_Request_GraphUserListCallback()
{
	
}

void MyRequestGraphUserListCallback::onCompleted(AndroidCXX::java_util_List const& arg0,FacebookCXX::com_facebook_Response const& arg1)
{
	LOGV("MyRequestGraphUserListCallback::onCompleted invoked");
//	AndroidCXX::java_util_List l(arg0.proxy());
//	int count = l.size();
//
//	std::stringstream strStream;
//	strStream << "You have " << count << " friends on Facebook :)";
//
//	toast(strStream.str().c_str());
}

void Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativeLogin(JNIEnv *env, jobject objectRef, jobject androidContext)
{
	LOGV("Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativeLogin enter");
	Proxy *proxy = new Proxy();
	proxy->address = (long) androidContext;
	context = new AndroidCXX::android_content_Context(proxy);
	LOGV("androidContext %ld", (long) androidContext);
	toast("Native Login...");
//	callback = (FacebookCXX::com_facebook_Session_StatusCallback *) new MySessionStatusCallback();;
//	LOGV("CALLBACK address %ld", (long) callback);
//	activity = new AndroidCXX::android_app_Activity(proxy);
//	bool allowLoginUI = true;
//	FacebookCXX::com_facebook_Session::openActiveSession(*activity, allowLoginUI, *callback);

}

void Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativeLogout(JNIEnv *env, jobject objectRef, jobject androidContext)
{
	LOGV("Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativeLogout enter");
//	LOGV("androidContext %ld", (long) androidContext);
//	callback = (FacebookCXX::com_facebook_Session_StatusCallback *) new MySessionStatusCallback();;
//	LOGV("CALLBACK address %ld", (long) callback);
//	FacebookCXX::com_facebook_Session session = FacebookCXX::com_facebook_Session::getActiveSession();
//	session.closeAndClearTokenInformation();
}

void Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativeGetFriends(JNIEnv *env, jobject objectRef, jobject androidContext)
{
	LOGV("Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativeGetFriends enter");
//	LOGV("androidContext %ld", (long) androidContext);
//	FacebookCXX::com_facebook_Session session = FacebookCXX::com_facebook_Session::getActiveSession();
//	callbackGraphUserList = (FacebookCXX::com_facebook_Request_GraphUserListCallback *) new MyRequestGraphUserListCallback();
//	LOGV("CALLBACK address %ld", (long) callbackGraphUserList);
//	FacebookCXX::com_facebook_Request request = FacebookCXX::com_facebook_Request::newMyFriendsRequest(session, *callbackGraphUserList);
//	AndroidCXX::java_util_ArrayList collection;
//	collection.add(AndroidCXX::java_lang_Object(request.proxy()));
//	FacebookCXX::com_facebook_Request::executeBatchAsync(AndroidCXX::java_util_Collection(collection.proxy()));
}

std::vector<char> to_std_vector(const char * str)
{
	std::vector<char> vec;
	int len = strlen(str);
	vec.assign(str, str + len);
	return vec;
}

std::string to_std_string(std::vector<signed char> vec)
{
	char * str = (char *) reinterpret_cast<char*> (&vec[0]);
	return std::string(str);
}

void toast(const char * toastStr)
{
	AndroidCXX::java_lang_String *str = new AndroidCXX::java_lang_String(to_std_vector(toastStr));
	AndroidCXX::android_widget_Toast *toast = AndroidCXX::android_widget_Toast::makeText(*context, *str, 2000);
	toast->show(); // :)
}


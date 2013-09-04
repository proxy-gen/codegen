#include <SessionLoginSampleCXX.hpp>
#include <com_facebook_android_Facebook.hpp>
#include <com_facebook_Session.hpp>
#include <com_facebook_Session_Builder.hpp>
#include <com_facebook_Session_OpenRequest.hpp>
#include <com_facebook_SessionState.hpp>
#include <com_facebook_Request.hpp>
#include <com_facebook_Request_GraphUserListCallback.hpp>
#include <com_facebook_SharedPreferencesTokenCachingStrategy.hpp>
#include <com_facebook_Session_StatusCallback.hpp>
#include <com_facebook_model_GraphUser.hpp>
#include <android_widget_Toast.hpp>
#include <android_content_Context.hpp>
#include <java_util_Collection.hpp>
#include <java_util_List.hpp>
#include <java_lang_Object.hpp>
#include <java_lang_String.hpp>
#include <CXXTypes.hpp>
#include <string>
#include <iostream>
#include <sstream>

#define LOG_TAG "SessionLoginSampleCXX"
#define LOGV(...) ((void)__android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__))
#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__))
#define LOGW(...) ((void)__android_log_print(ANDROID_LOG_WARN, LOG_TAG, __VA_ARGS__))
#define LOGW_V(message, args) ((void)__android_log_print(ANDROID_LOG_WARN, LOG_TAG, message, args))

std::vector<char> to_std_vector(const char * str);
std::string to_std_string(std::vector<signed char> vec);

FacebookCXX::com_facebook_Session_StatusCallback *callback;
FacebookCXX::com_facebook_Request_GraphUserListCallback *callbackGraphUserList;
AndroidCXX::android_app_Activity *activity;
AndroidCXX::android_content_Context *context;
AndroidCXX::java_lang_String * fbAppId;

void toast(const char * str);

MySessionStatusCallback::MySessionStatusCallback() : FacebookCXX::com_facebook_Session_StatusCallback()
{
	setCXXCallbackPtr((void *)this);
}

void MySessionStatusCallback::call(FacebookCXX::com_facebook_Session const& arg0,com_facebook_SessionState::com_facebook_SessionState const& arg1,AndroidCXX::java_lang_Exception const& arg2)
{
	LOGV("MySessionStatusCallback::call invoked");
	FacebookCXX::com_facebook_Session *session = FacebookCXX::com_facebook_Session::getActiveSession();
	if (session->isOpened())
	{
		LOGV("MySessionStatusCallback::call Session has been opened.");
		toast("Session has been opened.");
	}
	else if (session->isClosed())
	{
		LOGV("MySessionStatusCallback::call Session has been closed.");
		toast("Session has been closed.");
	}
}

MyRequestGraphUserListCallback::MyRequestGraphUserListCallback() : FacebookCXX::com_facebook_Request_GraphUserListCallback()
{
	setCXXCallbackPtr((void *) this);
}

void MyRequestGraphUserListCallback::onCompleted(AndroidCXX::java_util_List const& arg0,FacebookCXX::com_facebook_Response const& arg1)
{
	LOGV("MyRequestGraphUserListCallback::onCompleted invoked");
	int count = ((AndroidCXX::java_util_List) arg0).size();

	std::stringstream strStream;
	strStream << "You have " << count << " friends on Facebook :)";

	toast(strStream.str().c_str());
}

void Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativeLogin(JNIEnv *env, jobject objectRef, jobject androidContext)
{
	LOGV("Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativeLogin enter");
	Proxy *proxy = new Proxy();
	proxy->address = (long) androidContext;
	context = new AndroidCXX::android_content_Context(proxy);
	LOGV("androidContext %ld", (long) androidContext);

	activity = new AndroidCXX::android_app_Activity(proxy);
	fbAppId = new AndroidCXX::java_lang_String(to_std_vector("285658401505558"));

	toast("Logging In...");

	callback = (FacebookCXX::com_facebook_Session_StatusCallback *) new MySessionStatusCallback();
	LOGV("CALLBACK address %ld", (long) callback);

	FacebookCXX::com_facebook_SharedPreferencesTokenCachingStrategy *sharedPreferencesTokenCachingStrategy = new FacebookCXX::com_facebook_SharedPreferencesTokenCachingStrategy(*context);
	FacebookCXX::com_facebook_Session_Builder *bldr = new FacebookCXX::com_facebook_Session_Builder(*context);
	bldr->setApplicationId(*fbAppId);
	bldr->setTokenCachingStrategy(*sharedPreferencesTokenCachingStrategy);

	FacebookCXX::com_facebook_Session *session = bldr->build();
	FacebookCXX::com_facebook_Session::setActiveSession(*session);

	FacebookCXX::com_facebook_Session_OpenRequest *openRequest = new FacebookCXX::com_facebook_Session_OpenRequest(*activity);
	openRequest->setCallback(*callback);
	session->openForRead(*openRequest);
}

void Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativeLogout(JNIEnv *env, jobject objectRef, jobject androidContext)
{
	LOGV("Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativeLogout enter");
	toast("Logging Out...");

	FacebookCXX::com_facebook_Session *session = FacebookCXX::com_facebook_Session::getActiveSession();
	if (session != 0)
	{
		session->closeAndClearTokenInformation();
	}
}

void Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativeGetFriends(JNIEnv *env, jobject objectRef, jobject androidContext)
{
	LOGV("Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativeGetFriends enter");
	toast("Getting Friends..");

	FacebookCXX::com_facebook_Session *session = FacebookCXX::com_facebook_Session::getActiveSession();
	callbackGraphUserList = (FacebookCXX::com_facebook_Request_GraphUserListCallback *) new MyRequestGraphUserListCallback();
	LOGV("CALLBACK address %ld", (long) callbackGraphUserList);
	FacebookCXX::com_facebook_Request *request = FacebookCXX::com_facebook_Request::newMyFriendsRequest(*session, *callbackGraphUserList);
	AndroidCXX::java_util_List *requestBatch = new AndroidCXX::java_util_ArrayList();
	requestBatch->add(*request);
	FacebookCXX::com_facebook_Request::executeBatchAsync(*requestBatch);
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


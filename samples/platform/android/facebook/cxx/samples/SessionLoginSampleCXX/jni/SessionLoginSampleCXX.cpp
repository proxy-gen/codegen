#include <SessionLoginSampleCXX.hpp>
#include <string>
#include <iostream>
#include <sstream>

#define LOG_TAG "SessionLoginSampleCXX"
#define LOGV(...) ((void)__android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__))
#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__))
#define LOGW(...) ((void)__android_log_print(ANDROID_LOG_WARN, LOG_TAG, __VA_ARGS__))
#define LOGW_V(message, args) ((void)__android_log_print(ANDROID_LOG_WARN, LOG_TAG, message, args))


// Utilities
String to_string(const char * str);
std::vector<char> to_std_vector(const char * str);
std::string to_std_string(std::vector<signed char> vec);
void toastString(String const &str);
void toastChars(const char * str);
bool isSubsetOf(Collection &subset, Collection &superset);

// Statics
static Session_StatusCallback *statusCallback = 0;
static Request_GraphUserListCallback *requestListCallback = 0;
static Request_GraphUserCallback *requestUserCallback = 0;
static Request_Callback *requestCallback = 0;
static Activity *activity = 0;
static Bundle *savedState = 0;
static Toast *toast = 0;
static Context *context = 0;
static String * fbAppId = 0;
static List * PERMISSIONS = 0;
static bool pendingPublishReauthorization = false;
static bool pendingBirthdayReauthorization = false;

void publish_story();
void get_user_birthday();
void run_fql_query(const char * query);

MySessionStatusCallback::MySessionStatusCallback() : Session_StatusCallback()
{
	LOGV("MySessionStatusCallback::MySessionStatusCallback enter");
	setCXXCallbackPtr((void *)this);
	LOGV("MySessionStatusCallback::MySessionStatusCallback exit");
}

void MySessionStatusCallback::call(Session const& arg0,SessionState const& arg1,Exception const& arg2)
{
	LOGV("MySessionStatusCallback::call invoked");
	if (pendingPublishReauthorization)
	{
		pendingPublishReauthorization = false;
		publish_story();
	}
	else if (pendingBirthdayReauthorization)
	{
		pendingBirthdayReauthorization = false;
		get_user_birthday();
	}
	else
	{
		Session *session = (Session *) &arg0;
		if (session->isOpened())
		{
			LOGV("MySessionStatusCallback::call Session has been opened.");
			toastChars("Session has been opened.");
		}
		else if (session->isClosed())
		{
			LOGV("MySessionStatusCallback::call Session has been closed.");
			toastChars("Session has been closed.");
		}
	}
}

MyRequestGraphUserCallback::MyRequestGraphUserCallback() : Request_GraphUserCallback()
{
	LOGV("MyRequestGraphUserCallback::MyRequestGraphUserCallback enter");
	setCXXCallbackPtr((void *) this);
	LOGV("MyRequestGraphUserCallback::MyRequestGraphUserCallback exit");
}

void MyRequestGraphUserCallback::onCompleted(GraphUser const&arg0,Response const& arg1)
{
	LOGV("MyRequestGraphUserCallback::onCompleted invoked");
	GraphUser *user = (GraphUser *) &arg0;
	toastString(*user->getBirthday());
}

MyRequestGraphUserListCallback::MyRequestGraphUserListCallback() : Request_GraphUserListCallback()
{
	LOGV("MyRequestGraphUserListCallback::MyRequestGraphUserListCallback enter");
	setCXXCallbackPtr((void *) this);
	LOGV("MyRequestGraphUserListCallback::MyRequestGraphUserListCallback exit");
}

void MyRequestGraphUserListCallback::onCompleted(List const&arg0,Response const& arg1)
{
	LOGV("MyRequestGraphUserListCallback::onCompleted invoked");
	int count = ((List) arg0).size();

	std::stringstream strStream;
	strStream << "You have " << count << " friends on Facebook :)";

	toastChars(strStream.str().c_str());
}

MyRequestCallback::MyRequestCallback() : Request_Callback()
{
	LOGV("MyRequestCallback::MyRequestCallback enter");
	setCXXCallbackPtr((void *) this);
	LOGV("MyRequestCallback::MyRequestCallback exit");
}

void MyRequestCallback::onCompleted(Response const&arg0)
{
	LOGV("MyRequestCallback::onCompleted invoked");	
	Response *response = (Response *) &arg0;
	FacebookRequestError *error = response->getError();
	if (error->getErrorCode() != 0)
	{
		LOGV("MyRequestCallback::onCompleted error %d", error->getErrorCode());
		toastString(to_string("Got an error"));
	}
	else
	{
		toastString(*(response->toString()));
	}
}

void Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativeOnActivityResult(JNIEnv *env, jobject objectRef, int requestCode, int resultCode, jobject data)
{
	Proxy *intentProxy = new Proxy();
	intentProxy->address = (long) data;
	Intent *intent = new Intent(intentProxy);

	Session::getActiveSession()->onActivityResult(*activity, requestCode, resultCode, *intent);
}

void Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativeSetup(JNIEnv *env, jobject objectRef, jobject androidContext, jobject savedInstanceState)
{
	LOGV("Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativeSetup enter");

	Proxy *contextProxy = new Proxy();
	contextProxy->address = (long) androidContext;
	context = new Context(contextProxy);
	LOGV("androidContext %ld", (long) androidContext);

	activity = new Activity(contextProxy);

	Proxy *savedStateProxy = new Proxy();
	savedStateProxy->address = (long) savedInstanceState;
	savedState = new Bundle(savedStateProxy);

	fbAppId = new String(to_std_vector("285658401505558"));

	toast = Toast::makeText(*context, to_string("Native Setup"), 4000);

	statusCallback = (Session_StatusCallback *) new MySessionStatusCallback();
	LOGV("statusCallback address %ld", (long) statusCallback);

	requestListCallback = (Request_GraphUserListCallback *) new MyRequestGraphUserListCallback();
	LOGV("requestListCallback address %ld", (long) requestListCallback);

	requestUserCallback = (Request_GraphUserCallback *) new MyRequestGraphUserCallback();
	LOGV("requestUserCallback address %ld", (long) requestUserCallback);

	requestCallback = (Request_Callback *) new MyRequestCallback();
	LOGV("requestCallback address %ld", (long) requestCallback);

	LOGV("Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativeSetup exit");
}

void Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativeLogin(JNIEnv *env, jobject objectRef, jobject androidContext)
{
	LOGV("Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativeLogin enter");

	toastChars("Logging In...");

	SharedPreferencesTokenCachingStrategy *sharedPreferencesTokenCachingStrategy = new SharedPreferencesTokenCachingStrategy(*context);
	Session_Builder *bldr = new Session_Builder(*context);
	bldr->setApplicationId(*fbAppId);
	bldr->setTokenCachingStrategy(*sharedPreferencesTokenCachingStrategy);

	Session *session = bldr->build();
	Session::setActiveSession(*session);

	Session_OpenRequest *openRequest = new Session_OpenRequest(*activity);
	openRequest->setCallback(*statusCallback);
	session->openForRead(*openRequest);

	delete openRequest;
	delete session;
	delete bldr;
	delete sharedPreferencesTokenCachingStrategy;

	LOGV("Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativeLogin exit");
}

void Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativeLogout(JNIEnv *env, jobject objectRef, jobject androidContext)
{
	LOGV("Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativeLogout enter");
	toastChars("Logging Out...");

	Session *session = Session::getActiveSession();
	if (session != 0)
	{
		session->closeAndClearTokenInformation();
	}
	delete session;
	LOGV("Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativeLogout exit");
}

void Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativeGetUserAttr(JNIEnv *env, jobject objectRef, jobject androidContext)
{
	LOGV("Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativeGetUserAttr enter");
	toastChars("Getting Bithday...");

	std::vector<Object *> permissions_list;
	Object *birthday_permission = (Object *) ((CharSequence *) new String(to_std_vector("user_birthday")));
	permissions_list.push_back(birthday_permission);

	LOGV("Invoking asList");
	PERMISSIONS = Arrays::asList(permissions_list);

	Session *session = Session::getActiveSession();
	List *permissions = session->getPermissions();

	if (!isSubsetOf(*PERMISSIONS, *permissions))
	{
		pendingBirthdayReauthorization = true;
		Session_NewPermissionsRequest *newPermissionsRequest = new Session_NewPermissionsRequest(*activity, *PERMISSIONS);
		session->requestNewReadPermissions(*newPermissionsRequest);
		delete newPermissionsRequest;
	}
	else 
	{
		pendingBirthdayReauthorization = false;
		get_user_birthday();
	}

	delete permissions;
	delete session;
	delete PERMISSIONS;
	delete birthday_permission;

	LOGV("Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativeGetUserAttr exit");
}


void Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativeGetFriends(JNIEnv *env, jobject objectRef, jobject androidContext)
{
	LOGV("Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativeGetFriends enter");
	toastChars("Getting Friends...");

	Session *session = Session::getActiveSession();
	Request *request = Request::newMyFriendsRequest(*session, *requestListCallback);
	List *requestBatch = new ArrayList();
	requestBatch->add(*request);
	Request::executeBatchAsync(*requestBatch);
	delete requestBatch;
	delete request;
	delete session;
	LOGV("Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativeGetFriends exit");
}

void Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativePublishStory(JNIEnv *env, jobject objectRef, jobject androidContext)
{
	LOGV("Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativePublishStory enter");
	toastChars("Publishing Story...");
	std::vector<Object *> permissions_list;
	Object *publish_permission = (Object *) ((CharSequence *) new String(to_std_vector("publish_actions")));
	permissions_list.push_back(publish_permission);
	LOGV("Invoking asList");
	PERMISSIONS = Arrays::asList(permissions_list);
	Session *session = Session::getActiveSession();
	List *permissions = session->getPermissions();
	if (!isSubsetOf(*PERMISSIONS, *permissions))
	{
		pendingPublishReauthorization = true;
		Session_NewPermissionsRequest *newPermissionsRequest = new Session_NewPermissionsRequest(*activity, *PERMISSIONS);
		session->requestNewPublishPermissions(*newPermissionsRequest);
		delete newPermissionsRequest;
	}
	else 
	{
		pendingPublishReauthorization = false;
		publish_story();
	}
	delete permissions;
	delete session;
	delete PERMISSIONS;
	delete publish_permission;
	LOGV("Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativePublishStory exit");
}

void Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativeRunFQLQuery(JNIEnv *env, jobject objectRef, jobject androidContext)
{
	LOGV("Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativeRunFQLQuery enter");
	toastChars("Fetching Friend profiles ...");

	const char *fqlQuery = "SELECT uid, name, pic_square FROM user WHERE uid IN (SELECT uid2 FROM friend WHERE uid1 = me() LIMIT 25)";
	run_fql_query(fqlQuery);
}

void Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativeShareDialog(JNIEnv *env, jobject objectRef, jobject androidContext)
{
	LOGV("Java_com_facebook_samples_sessionlogin_SessionLoginSampleActivity_nativeRunFQLQuery enter");
	toastChars("Sharing Dialog ...");
}

void get_user_birthday()
{
	Session *session = Session::getActiveSession();
	Request::executeMeRequestAsync(*session, *requestUserCallback);
	delete session;
}

void publish_story()
{
	LOGV("publish_story enter");
	Session *session = Session::getActiveSession();
	Bundle *postParams = new Bundle();
	postParams->putString(to_string("name"), to_string("Facebook SDK for Android"));
	postParams->putString(to_string("caption"), to_string("Build great social apps and get more installs."));
	postParams->putString(to_string("description"), to_string("The Facebook SDK for Android makes it easier and faster to develop Facebook integrated Android apps."));
    postParams->putString(to_string("link"), to_string("https://developers.facebook.com/android"));
    postParams->putString(to_string("picture"), to_string("https://raw.github.com/fbsamples/ios-3.x-howtos/master/Images/iossdk_logo.png"));
    Request *request = new Request(*session, to_string("me/feed"), *postParams, com_facebook_HttpMethod::POST, *requestCallback);
    std::vector<Request*> requests;
    requests.push_back(request); 
    RequestAsyncTask *task = new RequestAsyncTask(requests);
    std::vector<Object*> *args = 0;
    task->execute(*args);
    delete task;
    delete request;
    delete postParams;
    delete session;
    LOGV("publish_story exit");
}

void run_fql_query(const char * query)
{
	LOGV("run_fql_query enter");
	String fqlQuery = to_string(query);
	Bundle *params = new Bundle();
	params->putString(to_string("q"), fqlQuery);
	Session *session = Session::getActiveSession();
	Request *request = new Request(*session, to_string("/fql"), *params, com_facebook_HttpMethod::GET, *requestCallback);
	List *requestBatch = new ArrayList();
	requestBatch->add(*request);
	Request::executeBatchAsync(*requestBatch);
	delete requestBatch;
	delete request;
	delete session;
	delete params;
	LOGV("run_fql_query exit");
}

String to_string(const char * str)
{
	return String(to_std_vector(str));
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

void toastString(String const &str)
{
	toast->setText(str);
	toast->show();	
}

void toastChars(const char * chars)
{
	toastString(to_string(chars));
}

bool isSubsetOf(Collection &subset, Collection &superset)
{
	bool isSubset = false;
	Iterator *iter = subset.iterator();
	while (iter->hasNext())
	{	
		Object *str = iter->next();
		if (!superset.contains(*str))
		{
			isSubset = false;
			delete str;
			break;
		}
		delete str;
	}
	delete iter;
	return isSubset;
}


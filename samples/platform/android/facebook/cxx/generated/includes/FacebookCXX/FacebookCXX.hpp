/*
 * FacebookCXX.hpp
 *
 * Author: cxx-bindings-generator
 */


#ifndef FACEBOOKCXX_HPP_
#define FACEBOOKCXX_HPP_

#include <map>
#include <string>


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace ZDK {

class FacebookSession;
class FacebookSessionStatusCallback;
class FacebookSessionOpenRequest;
class FacebookSessionNewPermissionRequest;

namespace FacebookSessionState {

	enum FacebookSessionState
	{
		CREATED,
		CREATED_TOKEN_LOADED,
		OPENING,
		OPENED,
		OPENED_TOKEN_UPDATED,
		CLOSED_LOGIN_FAILED,
		CLOSED
    };

}



class FacebookSessionStatusCallback
{

public:

	void * userData;
	virtual ~FacebookSessionStatusCallback();	
	virtual void call(FacebookSession* arg0, FacebookSessionState::FacebookSessionState arg1, long arg2,void * userData) = 0;



};

namespace FacebookAccessTokenSource {

	enum FacebookAccessTokenSource
	{
		NONE,
		FACEBOOK_APPLICATION_WEB,
		FACEBOOK_APPLICATION_NATIVE,
		FACEBOOK_APPLICATION_SERVICE,
		WEB_VIEW,
		TEST_USER,
		CLIENT_TOKEN
  };

}


namespace FacebookSessionLoginBehavior {

	enum FacebookSessionLoginBehavior
	{
		SSO_WITH_FALLBACK,
		SSO_ONLY,
		SUPPRESS_SSO
  };

}



class FacebookTokenCachingStrategy
{

public:
	FacebookTokenCachingStrategy(const FacebookTokenCachingStrategy& cc);
	FacebookTokenCachingStrategy(void * proxy);
	virtual ~FacebookTokenCachingStrategy();

 	
 	 void clear();

 	
 	 long load();

 	
 	static long getPermissions(long arg0);

 	
 	 void save(long arg0);

 	
 	static bool hasTokenInformation(long arg0);

 	
 	static std::string getToken(long arg0);

 	
 	static void putToken(long arg0, std::string& arg1);

 	
 	static long getExpirationDate(long arg0);

 	
 	static void putExpirationDate(long arg0, long arg1);

 	
 	static long getExpirationMilliseconds(long arg0);

 	
 	static void putExpirationMilliseconds(long arg0, long arg1);

 	
 	static void putPermissions(long arg0, long arg1);

 	
 	static FacebookAccessTokenSource::FacebookAccessTokenSource getSource(long arg0);

 	
 	static void putSource(long arg0, FacebookAccessTokenSource::FacebookAccessTokenSource arg1);

 	
 	static long getLastRefreshDate(long arg0);

 	
 	static void putLastRefreshDate(long arg0, long arg1);

 	
 	static long getLastRefreshMilliseconds(long arg0);

 	
 	static void putLastRefreshMilliseconds(long arg0, long arg1);
protected:
	FacebookTokenCachingStrategy();

private:
void * self;

};

class FacebookNonCachingTokenCachingStrategy : public FacebookTokenCachingStrategy
{

public:
	FacebookNonCachingTokenCachingStrategy();
	FacebookNonCachingTokenCachingStrategy(const FacebookNonCachingTokenCachingStrategy& cc);
	FacebookNonCachingTokenCachingStrategy(void * proxy);
	virtual ~FacebookNonCachingTokenCachingStrategy();

 	
 	 void clear();

 	
 	 long load();

 	
 	 void save(long arg0);
protected:

private:
void * self;

};

class FacebookSharedPreferencesTokenCachingStrategy : public FacebookTokenCachingStrategy
{

public:
	FacebookSharedPreferencesTokenCachingStrategy();
	FacebookSharedPreferencesTokenCachingStrategy(std::string arg1);
	FacebookSharedPreferencesTokenCachingStrategy(const FacebookSharedPreferencesTokenCachingStrategy& cc);
	FacebookSharedPreferencesTokenCachingStrategy(void * proxy);
	virtual ~FacebookSharedPreferencesTokenCachingStrategy();

 	
 	 void clear();

 	
 	 long load();

 	
 	 void save(long arg0);
protected:

private:
void * self;

};
namespace FacebookSessionDefaultAudience {

	enum FacebookSessionDefaultAudience
	{
		NONE,
		ONLY_ME,
		FRIENDS,
		EVERYONE
  };

}



class FacebookAccessToken
{

public:
	FacebookAccessToken(const FacebookAccessToken& cc);
	FacebookAccessToken(void * proxy);
	virtual ~FacebookAccessToken();

 	
 	 long getPermissions();

 	
 	 std::string getToken();

 	
 	 FacebookAccessTokenSource::FacebookAccessTokenSource getSource();

 	
 	 long getExpires();

 	
 	 long getLastRefresh();

 	
 	static FacebookAccessToken* createFromExistingAccessToken(std::string& arg0, long arg1, long arg2, FacebookAccessTokenSource::FacebookAccessTokenSource arg3, long arg4);

 	
 	static FacebookAccessToken* createFromNativeLinkingIntent(long arg0);
protected:
	FacebookAccessToken();

private:
void * self;

};

class DialogError
{

public:
	DialogError(std::string arg0, int arg1, std::string arg2);
	DialogError(const DialogError& cc);
	DialogError(void * proxy);
	virtual ~DialogError();

 	
 	 int getErrorCode();

 	
 	 std::string getFailingUrl();
protected:

private:
void * self;

};

class FacebookError
{

public:
	FacebookError(std::string arg0);
	FacebookError(std::string arg0, std::string arg1, int arg2);
	FacebookError(const FacebookError& cc);
	FacebookError(void * proxy);
	virtual ~FacebookError();

 	
 	 int getErrorCode();

 	
 	 std::string getErrorType();
protected:

private:
void * self;

};

class FacebookDialogListener
{

public:

	void * userData;
	virtual ~FacebookDialogListener();	
	virtual void onComplete(long arg0,void * userData) = 0;

	
	virtual void onFacebookError(FacebookError* arg0,void * userData) = 0;

	
	virtual void onError(DialogError* arg0,void * userData) = 0;

	
	virtual void onCancel(void * userData) = 0;



};


class FacebookServiceListener
{

public:

	void * userData;
	virtual ~FacebookServiceListener();	
	virtual void onComplete(long arg0,void * userData) = 0;

	
	virtual void onFacebookError(FacebookError* arg0,void * userData) = 0;

	
	virtual void onError(long arg0,void * userData) = 0;



};


class FacebookSession
{

public:
	FacebookSession();
	FacebookSession(const FacebookSession& cc);
	FacebookSession(void * proxy);
	virtual ~FacebookSession();

 	
 	 bool equals(long arg0);

 	
 	 int hashCode();

 	
 	 long getPermissions();

 	
 	 FacebookSessionState::FacebookSessionState getState();

 	
 	 void close();

 	
 	 void open(FacebookAccessToken& arg0, FacebookSessionStatusCallback& arg1);

 	
 	 bool isClosed();

 	
 	 bool isOpened();

 	
 	 long getExpirationDate();

 	
 	 long getAuthorizationBundle();

 	
 	 std::string getApplicationId();

 	
 	 std::string getAccessToken();

 	
 	 void openForRead(FacebookSessionOpenRequest& arg0);

 	
 	 void openForPublish(FacebookSessionOpenRequest& arg0);

 	
 	 void addCallback(FacebookSessionStatusCallback& arg0);

 	
 	 void requestNewReadPermissions(FacebookSessionNewPermissionRequest& arg0);

 	
 	 void requestNewPublishPermissions(FacebookSessionNewPermissionRequest& arg0);

 	
 	 bool onActivityResult(int arg1, int arg2, long arg3);

 	
 	 void closeAndClearTokenInformation();

 	
 	 void removeCallback(FacebookSessionStatusCallback& arg0);

 	
 	static void saveSession(FacebookSession& arg0, long arg1);

 	
 	static FacebookSession* restoreSession(FacebookTokenCachingStrategy& arg1, FacebookSessionStatusCallback& arg2, long arg3);

 	
 	static FacebookSession* getActiveSession();

 	
 	static void setActiveSession(FacebookSession& arg0);

 	
 	static FacebookSession* openActiveSessionFromCache();

 	
 	static FacebookSession* openActiveSession(long arg1, bool arg2, FacebookSessionStatusCallback& arg3);

 	
 	static FacebookSession* openActiveSession(bool arg1, FacebookSessionStatusCallback& arg2);

 	
 	static FacebookSession* openActiveSessionWithAccessToken(FacebookAccessToken& arg1, FacebookSessionStatusCallback& arg2);
protected:

private:
void * self;

};

class Facebook
{

public:
	Facebook(std::string arg0);
	Facebook(const Facebook& cc);
	Facebook(void * proxy);
	virtual ~Facebook();

 	
 	 std::string getAccessToken();

 	
 	 void authorize(std::string& arg1, int arg2, FacebookDialogListener& arg3);

 	
 	 void authorize(std::string& arg1, int arg2, int arg3, FacebookDialogListener& arg4);

 	
 	 void authorize(FacebookDialogListener& arg1);

 	
 	 std::string request(std::string& arg0, long arg1);

 	
 	 std::string request(std::string& arg0);

 	
 	 std::string request(long arg0);

 	
 	 std::string request(std::string& arg0, long arg1, std::string& arg2);

 	
 	 bool extendAccessTokenIfNeeded(FacebookServiceListener& arg1);

 	
 	 bool shouldExtendAccessToken();

 	
 	 bool extendAccessToken(FacebookServiceListener& arg1);

 	
 	 bool getShouldAutoPublishInstall();

 	
 	 void dialog(std::string& arg1, FacebookDialogListener& arg2);

 	
 	 void dialog(std::string& arg1, long arg2, FacebookDialogListener& arg3);

 	
 	 void authorizeCallback(int arg0, int arg1, long arg2);

 	
 	 bool isSessionValid();

 	
 	 std::string logout();

 	
 	 long getAccessExpires();

 	
 	 void setSession(FacebookSession& arg0);

 	
 	 FacebookSession* getSession();

 	
 	 long getLastAccessUpdate();

 	
 	 void setTokenFromCache(std::string& arg0, long arg1, long arg2);

 	
 	 void setAccessToken(std::string& arg0);

 	
 	 void setAccessExpires(long arg0);

 	
 	 void setAccessExpiresIn(std::string& arg0);

 	
 	 std::string getAppId();

 	
 	 void setAppId(std::string& arg0);

 	
 	static std::string getAttributionId(long arg0);

 	
 	 void setShouldAutoPublishInstall(bool arg0);

 	
 	 bool publishInstall();
protected:

private:
void * self;

};

class AsyncFacebookRunnerRequestListener
{

public:

	void * userData;
	virtual ~AsyncFacebookRunnerRequestListener();	
	virtual void onComplete(std::string arg0, long arg1,void * userData) = 0;

	
	virtual void onFacebookError(FacebookError* arg0, long arg1,void * userData) = 0;

	
	virtual void onIOException(long arg0, long arg1,void * userData) = 0;

	
	virtual void onFileNotFoundException(long arg0, long arg1,void * userData) = 0;

	
	virtual void onMalformedURLException(long arg0, long arg1,void * userData) = 0;



};


class AsyncFacebookRunner
{

public:
	AsyncFacebookRunner(Facebook arg0);
	AsyncFacebookRunner(const AsyncFacebookRunner& cc);
	AsyncFacebookRunner(void * proxy);
	virtual ~AsyncFacebookRunner();

 	
 	 void request(std::string& arg0, long arg1, std::string& arg2, AsyncFacebookRunnerRequestListener& arg3, long arg4);

 	
 	 void request(std::string& arg0, long arg1, AsyncFacebookRunnerRequestListener& arg2, long arg3);

 	
 	 void request(std::string& arg0, long arg1, AsyncFacebookRunnerRequestListener& arg2);

 	
 	 void request(long arg0, AsyncFacebookRunnerRequestListener& arg1, long arg2);

 	
 	 void request(long arg0, AsyncFacebookRunnerRequestListener& arg1);

 	
 	 void request(std::string& arg0, AsyncFacebookRunnerRequestListener& arg1, long arg2);

 	
 	 void request(std::string& arg0, AsyncFacebookRunnerRequestListener& arg1);

 	
 	 void logout(AsyncFacebookRunnerRequestListener& arg1);

 	
 	 void logout(AsyncFacebookRunnerRequestListener& arg1, long arg2);
protected:

private:
void * self;

};

class FacebookSessionAuthorizationRequest
{

public:
	FacebookSessionAuthorizationRequest(const FacebookSessionAuthorizationRequest& cc);
	FacebookSessionAuthorizationRequest(void * proxy);
	virtual ~FacebookSessionAuthorizationRequest();

 	
 	 void setIsLegacy(bool arg0);
protected:
	FacebookSessionAuthorizationRequest();

private:
void * self;

};

class FacebookSessionOpenRequest : public FacebookSessionAuthorizationRequest
{

public:
	FacebookSessionOpenRequest();
	FacebookSessionOpenRequest(long arg0);
	FacebookSessionOpenRequest(const FacebookSessionOpenRequest& cc);
	FacebookSessionOpenRequest(void * proxy);
	virtual ~FacebookSessionOpenRequest();

 	
 	 FacebookSessionOpenRequest* setCallback(FacebookSessionStatusCallback& arg0);

 	
 	 FacebookSessionOpenRequest* setLoginBehavior(FacebookSessionLoginBehavior::FacebookSessionLoginBehavior arg0);

 	
 	 FacebookSessionOpenRequest* setRequestCode(int arg0);

 	
 	 FacebookSessionOpenRequest* setPermissions(long arg0);

 	
 	 FacebookSessionOpenRequest* setDefaultAudience(FacebookSessionDefaultAudience::FacebookSessionDefaultAudience arg0);
protected:

private:
void * self;

};

class FacebookSessionNewPermissionRequest : public FacebookSessionAuthorizationRequest
{

public:
	FacebookSessionNewPermissionRequest(long arg1);
	FacebookSessionNewPermissionRequest(long arg0, long arg1);
	FacebookSessionNewPermissionRequest(const FacebookSessionNewPermissionRequest& cc);
	FacebookSessionNewPermissionRequest(void * proxy);
	virtual ~FacebookSessionNewPermissionRequest();

 	
 	 FacebookSessionNewPermissionRequest* setCallback(FacebookSessionStatusCallback& arg0);

 	
 	 FacebookSessionNewPermissionRequest* setLoginBehavior(FacebookSessionLoginBehavior::FacebookSessionLoginBehavior arg0);

 	
 	 FacebookSessionNewPermissionRequest* setRequestCode(int arg0);

 	
 	 FacebookSessionNewPermissionRequest* setDefaultAudience(FacebookSessionDefaultAudience::FacebookSessionDefaultAudience arg0);
protected:

private:
void * self;

};
}

#ifdef __cplusplus
}
#endif //__cplusplus

#endif /* FACEBOOKCXX_HPP_ */
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
	
	virtual void onComplete(long arg0,void * userData) = 0;

	
	virtual void onFacebookError(FacebookError* arg0,void * userData) = 0;

	
	virtual void onError(DialogError* arg0,void * userData) = 0;

	
	virtual void onCancel(void * userData) = 0;



};


class FacebookServiceListener
{

public:

	void * userData;
	
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

 	
 	 bool isOpened();
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

 	
 	 void authorize(FacebookDialogListener& arg1);

 	
 	 void authorize(std::string& arg1, int arg2, FacebookDialogListener& arg3);

 	
 	 void authorize(std::string& arg1, int arg2, int arg3, FacebookDialogListener& arg4);

 	
 	 std::string request(long arg0);

 	
 	 std::string request(std::string& arg0, long arg1);

 	
 	 std::string request(std::string& arg0);

 	
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
}

#ifdef __cplusplus
}
#endif //__cplusplus

#endif /* FACEBOOKCXX_HPP_ */
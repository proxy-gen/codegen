/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */


// Generated Code 

#ifndef _FBSession
#define _FBSession

#include "FBSessionTokenCachingStrategy.hpp"
#include "FBSessionState.hpp"
#include "FBSessionLoginType.hpp"

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations
class FBSessionTokenCachingStrategy;
class FBSession;

class FBSession
{
public:
	//Public Constructors
	FBSession(const FBSession& cc);
	FBSession(void * proxy);

	// Default Destructor
	virtual ~FBSession();

	// Retreive proxy object
	void* getProxy();

	// Functions

	 void * init();

	 void * initWithPermissions(std::vector<void *>& arg0);

	 void * initWithAppID_permissions_urlSchemeSuffix_tokenCacheStrategy(std::string& arg0,std::vector<void *>& arg1,std::string& arg2,FacebookCXX::FBSessionTokenCachingStrategy * arg3);

	 void * initWithAppID_permissions_defaultAudience_urlSchemeSuffix_tokenCacheStrategy(std::string& arg0,std::vector<void *>& arg1,FacebookCXX::FBSessionDefaultAudience& arg2,std::string& arg3,FacebookCXX::FBSessionTokenCachingStrategy * arg4);

	 void openWithCompletionHandler(void(*arg0)(FacebookCXX::FBSession *barg0, FacebookCXX::FBSessionState &barg1, std::string &barg2));

	 void openWithBehavior_completionHandler(FacebookCXX::FBSessionLoginBehavior& arg0,void(*arg1)(FacebookCXX::FBSession *barg0, FacebookCXX::FBSessionState &barg1, std::string &barg2));

	 void close();

	 void closeAndClearTokenInformation();

	 void reauthorizeWithPermissions_behavior_completionHandler(std::vector<void *>& arg0,FacebookCXX::FBSessionLoginBehavior& arg1,void(*arg2)(FacebookCXX::FBSession *barg0, std::string &barg1));

	 void reauthorizeWithReadPermissions_completionHandler(std::vector<void *>& arg0,void(*arg1)(FacebookCXX::FBSession *barg0, std::string &barg1));

	 void reauthorizeWithPublishPermissions_defaultAudience_completionHandler(std::vector<void *>& arg0,FacebookCXX::FBSessionDefaultAudience& arg1,void(*arg2)(FacebookCXX::FBSession *barg0, std::string &barg1));

	 signed char handleOpenURL(void *& arg0);

	 void handleDidBecomeActive();

	static signed char openActiveSessionWithAllowLoginUI(signed char& arg0);

	static signed char openActiveSessionWithPermissions_allowLoginUI_completionHandler(std::vector<void *>& arg0,signed char& arg1,void(*arg2)(FacebookCXX::FBSession *barg0, FacebookCXX::FBSessionState &barg1, std::string &barg2));

	static signed char openActiveSessionWithReadPermissions_allowLoginUI_completionHandler(std::vector<void *>& arg0,signed char& arg1,void(*arg2)(FacebookCXX::FBSession *barg0, FacebookCXX::FBSessionState &barg1, std::string &barg2));

	static signed char openActiveSessionWithPublishPermissions_defaultAudience_allowLoginUI_completionHandler(std::vector<void *>& arg0,FacebookCXX::FBSessionDefaultAudience& arg1,signed char& arg2,void(*arg3)(FacebookCXX::FBSession *barg0, FacebookCXX::FBSessionState &barg1, std::string &barg2));

	static FacebookCXX::FBSession * activeSession();

	static FacebookCXX::FBSession * setActiveSession(FacebookCXX::FBSession * arg0);

	static void setDefaultAppID(std::string& arg0);

	static std::string defaultAppID();

	 signed char isOpen();

	 FacebookCXX::FBSessionState state();

	 std::string appID();

	 std::string urlSchemeSuffix();

	 std::string accessToken();

	 double expirationDate();

	 std::vector<void *> permissions();

	 FacebookCXX::FBSessionLoginType loginType();

	 void setLoginType(FacebookCXX::FBSessionLoginType& arg0);

	 signed char useSafariForLogin();

	 void setUseSafariForLogin(signed char& arg0);
};
private:
	void* _proxy;

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _FBSession

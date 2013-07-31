/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */


// Generated Code 

#ifndef _FBSessionCxx
#define _FBSessionCxx

#include <FacebookCXX/proxies/FBSessionTokenCachingStrategyCxx.hpp>
#include <FacebookCXX/proxies/FBAccessTokenDataCxx.hpp>
#include <FacebookCXX/enums/FBSessionDefaultAudienceCxx.hpp>
#include <FacebookCXX/enums/FBSessionStateCxx.hpp>
#include <FacebookCXX/enums/FBSessionLoginBehaviorCxx.hpp>
#include <FacebookCXX/enums/FBSessionLoginTypeCxx.hpp>

#include <vector>
#include <map>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations
class FBSessionTokenCachingStrategyCxx;
class FBSessionCxx;
class FBAccessTokenDataCxx;

class FBSessionCxx
{
public:
	//Public Constructors
	FBSessionCxx(const FBSessionCxx* cc);
	FBSessionCxx(const void * proxy);

	// Default Destructor
	~FBSessionCxx();

	// Retrieve proxy object
	void* getProxy() const;

	// Functions

	 void * init();

	 void * initWithPermissions(std::vector<void *>& arg0);

	 void * initWithAppID_permissions_urlSchemeSuffix_tokenCacheStrategy(std::string& arg0,std::vector<void *>& arg1,std::string& arg2,FacebookCXX::FBSessionTokenCachingStrategyCxx * arg3);

	 void * initWithAppID_permissions_defaultAudience_urlSchemeSuffix_tokenCacheStrategy(std::string& arg0,std::vector<void *>& arg1,FacebookCXX::FBSessionDefaultAudienceCxx& arg2,std::string& arg3,FacebookCXX::FBSessionTokenCachingStrategyCxx * arg4);

	 void openWithCompletionHandler(void(*arg0)(FacebookCXX::FBSessionCxx *, FacebookCXX::FBSessionStateCxx &, std::string &));

	 void openWithBehavior_completionHandler(FacebookCXX::FBSessionLoginBehaviorCxx& arg0,void(*arg1)(FacebookCXX::FBSessionCxx *, FacebookCXX::FBSessionStateCxx &, std::string &));

	 signed char openFromAccessTokenData_completionHandler(FacebookCXX::FBAccessTokenDataCxx * arg0,void(*arg1)(FacebookCXX::FBSessionCxx *, FacebookCXX::FBSessionStateCxx &, std::string &));

	 void close();

	 void closeAndClearTokenInformation();

	 void reauthorizeWithPermissions_behavior_completionHandler(std::vector<void *>& arg0,FacebookCXX::FBSessionLoginBehaviorCxx& arg1,void(*arg2)(FacebookCXX::FBSessionCxx *, std::string &));

	 void reauthorizeWithReadPermissions_completionHandler(std::vector<void *>& arg0,void(*arg1)(FacebookCXX::FBSessionCxx *, std::string &));

	 void reauthorizeWithPublishPermissions_defaultAudience_completionHandler(std::vector<void *>& arg0,FacebookCXX::FBSessionDefaultAudienceCxx& arg1,void(*arg2)(FacebookCXX::FBSessionCxx *, std::string &));

	 void requestNewReadPermissions_completionHandler(std::vector<void *>& arg0,void(*arg1)(FacebookCXX::FBSessionCxx *, std::string &));

	 void requestNewPublishPermissions_defaultAudience_completionHandler(std::vector<void *>& arg0,FacebookCXX::FBSessionDefaultAudienceCxx& arg1,void(*arg2)(FacebookCXX::FBSessionCxx *, std::string &));

	 signed char handleOpenURL(void *& arg0);

	 void handleDidBecomeActive();

	static signed char openActiveSessionWithAllowLoginUI(signed char& arg0);

	static signed char openActiveSessionWithPermissions_allowLoginUI_completionHandler(std::vector<void *>& arg0,signed char& arg1,void(*arg2)(FacebookCXX::FBSessionCxx *, FacebookCXX::FBSessionStateCxx &, std::string &));

	static signed char openActiveSessionWithReadPermissions_allowLoginUI_completionHandler(std::vector<void *>& arg0,signed char& arg1,void(*arg2)(FacebookCXX::FBSessionCxx *, FacebookCXX::FBSessionStateCxx &, std::string &));

	static signed char openActiveSessionWithPublishPermissions_defaultAudience_allowLoginUI_completionHandler(std::vector<void *>& arg0,FacebookCXX::FBSessionDefaultAudienceCxx& arg1,signed char& arg2,void(*arg3)(FacebookCXX::FBSessionCxx *, FacebookCXX::FBSessionStateCxx &, std::string &));

	static FacebookCXX::FBSessionCxx * activeSession();

	static FacebookCXX::FBSessionCxx * setActiveSession(FacebookCXX::FBSessionCxx * arg0);

	static void setDefaultAppID(std::string& arg0);

	static std::string defaultAppID();

	static void setDefaultUrlSchemeSuffix(std::string& arg0);

	static std::string defaultUrlSchemeSuffix();

	 signed char isOpen();

	 FacebookCXX::FBSessionStateCxx state();

	 std::string appID();

	 std::string urlSchemeSuffix();

	 std::string accessToken();

	 double expirationDate();

	 std::vector<void *> permissions();

	 FacebookCXX::FBSessionLoginTypeCxx loginType();

	 FacebookCXX::FBAccessTokenDataCxx * accessTokenData();
private:
	void* _proxy;
};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _FBSessionCxx

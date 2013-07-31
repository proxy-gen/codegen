/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */


// Generated Code 

#ifndef _FBAppCallCxx
#define _FBAppCallCxx

#include <FacebookCXX/proxies/FBSessionCxx.hpp>
#include <FacebookCXX/proxies/FBDialogsDataCxx.hpp>
#include <FacebookCXX/proxies/FBAppLinkDataCxx.hpp>
#include <FacebookCXX/proxies/FBAccessTokenDataCxx.hpp>

#include <vector>
#include <map>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations
class FBAppCallCxx;
class FBSessionCxx;
class FBDialogsDataCxx;
class FBAppLinkDataCxx;
class FBAccessTokenDataCxx;

class FBAppCallCxx
{
public:
	//Public Constructors
	FBAppCallCxx(const FBAppCallCxx* cc);
	FBAppCallCxx(const void * proxy);

	// Default Destructor
	~FBAppCallCxx();

	// Retrieve proxy object
	void* getProxy() const;

	// Functions

	static FacebookCXX::FBAppCallCxx * appCallFromURL(void *& arg0);

	 signed char isEqualToAppCall(FacebookCXX::FBAppCallCxx * arg0);

	static signed char handleOpenURL_sourceApplication(void *& arg0,std::string& arg1);

	static signed char handleOpenURL_sourceApplication_fallbackHandler(void *& arg0,std::string& arg1,void(*arg2)(FacebookCXX::FBAppCallCxx *));

	static signed char handleOpenURL_sourceApplication_withSession(void *& arg0,std::string& arg1,FacebookCXX::FBSessionCxx * arg2);

	static signed char handleOpenURL_sourceApplication_withSession_fallbackHandler(void *& arg0,std::string& arg1,FacebookCXX::FBSessionCxx * arg2,void(*arg3)(FacebookCXX::FBAppCallCxx *));

	static void handleDidBecomeActive();

	static void handleDidBecomeActiveWithSession(FacebookCXX::FBSessionCxx * arg0);

	static void openDeferredAppLink(void(*arg0)(std::string &));

	 std::string ID();

	 std::string error();

	 FacebookCXX::FBDialogsDataCxx * dialogData();

	 FacebookCXX::FBAppLinkDataCxx * appLinkData();

	 FacebookCXX::FBAccessTokenDataCxx * accessTokenData();
private:
	void* _proxy;
};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _FBAppCallCxx

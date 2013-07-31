/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */


// Generated Code 

#ifndef _FBAccessTokenDataCxx
#define _FBAccessTokenDataCxx

#include <FacebookCXX/enums/FBSessionLoginTypeCxx.hpp>

#include <vector>
#include <map>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations
class FBAccessTokenDataCxx;

class FBAccessTokenDataCxx
{
public:
	//Public Constructors
	FBAccessTokenDataCxx(const FBAccessTokenDataCxx* cc);
	FBAccessTokenDataCxx(const void * proxy);

	// Default Destructor
	~FBAccessTokenDataCxx();

	// Retrieve proxy object
	void* getProxy() const;

	// Functions

	static FacebookCXX::FBAccessTokenDataCxx * createTokenFromFacebookURL_appID_urlSchemeSuffix(void *& arg0,std::string& arg1,std::string& arg2);

	static FacebookCXX::FBAccessTokenDataCxx * createTokenFromDictionary(std::map<void *, void *>& arg0);

	static FacebookCXX::FBAccessTokenDataCxx * createTokenFromString_permissions_expirationDate_loginType_refreshDate(std::string& arg0,std::vector<void *>& arg1,double& arg2,FacebookCXX::FBSessionLoginTypeCxx& arg3,double& arg4);

	 void * dictionary();

	 signed char isEqualToAccessTokenData(FacebookCXX::FBAccessTokenDataCxx * arg0);

	 std::string accessToken();

	 std::vector<void *> permissions();

	 double expirationDate();

	 FacebookCXX::FBSessionLoginTypeCxx loginType();

	 double refreshDate();
private:
	void* _proxy;
};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _FBAccessTokenDataCxx

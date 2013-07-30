/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */


// Generated Code 

#ifndef _FBSessionTokenCachingStrategyCxx
#define _FBSessionTokenCachingStrategyCxx

#include "FBAccessTokenDataCxx.hpp"

#include <vector>
#include <map>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations
class FBAccessTokenDataCxx;
class FBSessionTokenCachingStrategyCxx;

class FBSessionTokenCachingStrategyCxx
{
public:
	//Public Constructors
	FBSessionTokenCachingStrategyCxx(const FBSessionTokenCachingStrategyCxx* cc);
	FBSessionTokenCachingStrategyCxx(const void * proxy);

	// Default Destructor
	~FBSessionTokenCachingStrategyCxx();

	// Retrieve proxy object
	void* getProxy() const;

	// Functions

	 void * init();

	 void * initWithUserDefaultTokenInformationKeyName(std::string& arg0);

	 void cacheTokenInformation(std::map<void *, void *>& arg0);

	 void cacheFBAccessTokenData(FacebookCXX::FBAccessTokenDataCxx * arg0);

	 std::map<void *, void *> fetchTokenInformation();

	 FacebookCXX::FBAccessTokenDataCxx * fetchFBAccessTokenData();

	 void clearToken();

	static FacebookCXX::FBSessionTokenCachingStrategyCxx * defaultInstance();

	static FacebookCXX::FBSessionTokenCachingStrategyCxx * nullCacheInstance();

	static signed char isValidTokenInformation(std::map<void *, void *>& arg0);
private:
	void* _proxy;
};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _FBSessionTokenCachingStrategyCxx

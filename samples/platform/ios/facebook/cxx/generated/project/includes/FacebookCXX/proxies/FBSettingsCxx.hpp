/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */


// Generated Code 

#ifndef _FBSettingsCxx
#define _FBSettingsCxx

#include "FBGraphObjectCxx.hpp"
#include "FBBetaFeaturesCxx.hpp"

#include <vector>
#include <map>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations
class FBGraphObjectCxx;

class FBSettingsCxx
{
public:
	//Public Constructors
	FBSettingsCxx(const FBSettingsCxx* cc);
	FBSettingsCxx(const void * proxy);

	// Default Destructor
	~FBSettingsCxx();

	// Retrieve proxy object
	void* getProxy() const;

	// Functions

	static std::string sdkVersion();

	static void * loggingBehavior();

	static void setLoggingBehavior(void *& arg0);

	static signed char shouldAutoPublishInstall();

	static void setShouldAutoPublishInstall(signed char& arg0);

	static void publishInstall(std::string& arg0);

	static void publishInstall_withHandler(std::string& arg0,void(*arg1)(FacebookCXX::FBGraphObjectCxx *, std::string &));

	static std::string appVersion();

	static void setAppVersion(std::string& arg0);

	static std::string clientToken();

	static void setClientToken(std::string& arg0);

	static void setDefaultDisplayName(std::string& arg0);

	static std::string defaultDisplayName();

	static void setDefaultAppID(std::string& arg0);

	static std::string defaultAppID();

	static void setDefaultUrlSchemeSuffix(std::string& arg0);

	static std::string defaultUrlSchemeSuffix();

	static void setResourceBundleName(std::string& arg0);

	static std::string resourceBundleName();

	static void setFacebookDomainPart(std::string& arg0);

	static std::string facebookDomainPart();

	static void enableBetaFeatures(unsigned int& arg0);

	static void enableBetaFeature(FacebookCXX::FBBetaFeaturesCxx& arg0);

	static void disableBetaFeature(FacebookCXX::FBBetaFeaturesCxx& arg0);

	static signed char isBetaFeatureEnabled(FacebookCXX::FBBetaFeaturesCxx& arg0);
private:
	void* _proxy;
};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _FBSettingsCxx

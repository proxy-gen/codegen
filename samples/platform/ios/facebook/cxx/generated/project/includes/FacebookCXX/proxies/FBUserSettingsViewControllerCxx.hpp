/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */


// Generated Code 

#ifndef _FBUserSettingsViewControllerCxx
#define _FBUserSettingsViewControllerCxx

#include <FacebookCXX/enums/FBSessionDefaultAudienceCxx.hpp>

#include <vector>
#include <map>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations

class FBUserSettingsViewControllerCxx
{
public:
	//Public Constructors
	FBUserSettingsViewControllerCxx(const FBUserSettingsViewControllerCxx* cc);
	FBUserSettingsViewControllerCxx(const void * proxy);

	// Default Destructor
	~FBUserSettingsViewControllerCxx();

	// Retrieve proxy object
	void* getProxy() const;

	// Functions

	 std::vector<void *> permissions();

	 void setPermissions(std::vector<void *>& arg0);

	 std::vector<void *> readPermissions();

	 void setReadPermissions(std::vector<void *>& arg0);

	 std::vector<void *> publishPermissions();

	 void setPublishPermissions(std::vector<void *>& arg0);

	 FacebookCXX::FBSessionDefaultAudienceCxx defaultAudience();

	 void setDefaultAudience(FacebookCXX::FBSessionDefaultAudienceCxx& arg0);
private:
	void* _proxy;
};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _FBUserSettingsViewControllerCxx

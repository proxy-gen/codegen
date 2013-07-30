/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */


// Generated Code 

#ifndef _FBLoginViewCxx
#define _FBLoginViewCxx

#include "FBLoginViewDelegateProtocolCxx.hpp"
#include "FBLoginViewDelegateConformerCxx.hpp"
#include "FBSessionDefaultAudienceCxx.hpp"

#include <vector>
#include <map>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations
class FBLoginViewDelegateProtocolCxx;
class FBLoginViewDelegateConformerCxx;

class FBLoginViewCxx
{
public:
	//Public Constructors
	FBLoginViewCxx(const FBLoginViewCxx* cc);
	FBLoginViewCxx(const void * proxy);

	// Default Destructor
	~FBLoginViewCxx();

	// Retrieve proxy object
	void* getProxy() const;

	// Functions

	 void * init();

	 void * initWithPermissions(std::vector<void *>& arg0);

	 void * initWithReadPermissions(std::vector<void *>& arg0);

	 void * initWithPublishPermissions_defaultAudience(std::vector<void *>& arg0,FacebookCXX::FBSessionDefaultAudienceCxx& arg1);

	 std::vector<void *> permissions();

	 void setPermissions(std::vector<void *>& arg0);

	 std::vector<void *> readPermissions();

	 void setReadPermissions(std::vector<void *>& arg0);

	 std::vector<void *> publishPermissions();

	 void setPublishPermissions(std::vector<void *>& arg0);

	 FacebookCXX::FBSessionDefaultAudienceCxx defaultAudience();

	 void setDefaultAudience(FacebookCXX::FBSessionDefaultAudienceCxx& arg0);

	 FacebookCXX::FBLoginViewDelegateProtocolCxx * delegate();

	 void setDelegate(FacebookCXX::FBLoginViewDelegateConformerCxx * arg0);
private:
	void* _proxy;
};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _FBLoginViewCxx

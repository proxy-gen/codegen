/*
 * Header (Abstract Protocol Callback Class)
 * Author: cxx-bindings-generator
 */


#ifndef _FBLoginViewDelegateConformerCxx
#define _FBLoginViewDelegateConformerCxx

#include "FBLoginViewCxx.hpp"
#include "FBGraphUserConformerCxx.hpp"

#include <vector>
#include <map>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

class FBLoginViewCxx;
class FBGraphUserConformerCxx;

class FBLoginViewDelegateConformerCxx
{
public:
	//Public Constructor
	FBLoginViewDelegateConformerCxx();

	// Default Destructor
	~FBLoginViewDelegateConformerCxx();

	// Retrieve proxy
	void * getProxy() const;

	// Functions

	virtual  void loginViewShowingLoggedInUser(FacebookCXX::FBLoginViewCxx *) = 0;

	virtual  void loginViewFetchedUserInfo_user(FacebookCXX::FBLoginViewCxx *,FacebookCXX::FBGraphUserConformerCxx *) = 0;

	virtual  void loginViewShowingLoggedOutUser(FacebookCXX::FBLoginViewCxx *) = 0;
private:
	void* _proxy;
};

} // namespace
#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _FBLoginViewDelegateConformerCxx

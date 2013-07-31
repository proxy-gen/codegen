/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */


// Generated Code 

#ifndef _FBCacheDescriptorCxx
#define _FBCacheDescriptorCxx

#include <FacebookCXX/proxies/FBSessionCxx.hpp>

#include <vector>
#include <map>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations
class FBSessionCxx;

class FBCacheDescriptorCxx
{
public:
	//Public Constructors
	FBCacheDescriptorCxx(const FBCacheDescriptorCxx* cc);
	FBCacheDescriptorCxx(const void * proxy);

	// Default Destructor
	~FBCacheDescriptorCxx();

	// Retrieve proxy object
	void* getProxy() const;

	// Functions

	 void prefetchAndCacheForSession(FacebookCXX::FBSessionCxx * arg0);
private:
	void* _proxy;
};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _FBCacheDescriptorCxx

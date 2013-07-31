/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */


// Generated Code 

#ifndef _FBFrictionlessRecipientCacheCxx
#define _FBFrictionlessRecipientCacheCxx

#include <FacebookCXX/proxies/FBSessionCxx.hpp>
#include <FacebookCXX/proxies/FBRequestConnectionCxx.hpp>

#include <vector>
#include <map>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations
class FBSessionCxx;
class FBRequestConnectionCxx;

class FBFrictionlessRecipientCacheCxx
{
public:
	//Public Constructors
	FBFrictionlessRecipientCacheCxx(const FBFrictionlessRecipientCacheCxx* cc);
	FBFrictionlessRecipientCacheCxx(const void * proxy);

	// Default Destructor
	~FBFrictionlessRecipientCacheCxx();

	// Retrieve proxy object
	void* getProxy() const;

	// Functions

	 void * init();

	 signed char isFrictionlessRecipient(void *& arg0);

	 signed char areFrictionlessRecipients(std::vector<void *>& arg0);

	 void prefetchAndCacheForSession(FacebookCXX::FBSessionCxx * arg0);

	 void prefetchAndCacheForSession_completionHandler(FacebookCXX::FBSessionCxx * arg0,void(*arg1)(FacebookCXX::FBRequestConnectionCxx *, void * &, std::string &));

	 std::vector<void *> recipientIDs();

	 void setRecipientIDs(std::vector<void *>& arg0);

	 void webDialogsWillPresentDialog_parameters_session(std::string& arg0,void *& arg1,FacebookCXX::FBSessionCxx * arg2);

	 signed char webDialogsDialog_parameters_session_shouldAutoHandleURL(std::string& arg0,std::map<void *, void *>& arg1,FacebookCXX::FBSessionCxx * arg2,void *& arg3);
private:
	void* _proxy;
};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _FBFrictionlessRecipientCacheCxx

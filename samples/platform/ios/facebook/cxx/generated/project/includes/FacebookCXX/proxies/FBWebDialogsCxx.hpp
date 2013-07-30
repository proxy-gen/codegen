/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */


// Generated Code 

#ifndef _FBWebDialogsCxx
#define _FBWebDialogsCxx

#include "FBSessionCxx.hpp"
#include "FBWebDialogsDelegateConformerCxx.hpp"
#include "FBFrictionlessRecipientCacheCxx.hpp"
#include "FBWebDialogResultCxx.hpp"

#include <vector>
#include <map>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations
class FBSessionCxx;
class FBWebDialogsDelegateConformerCxx;
class FBFrictionlessRecipientCacheCxx;

class FBWebDialogsCxx
{
public:
	//Public Constructors
	FBWebDialogsCxx(const FBWebDialogsCxx* cc);
	FBWebDialogsCxx(const void * proxy);

	// Default Destructor
	~FBWebDialogsCxx();

	// Retrieve proxy object
	void* getProxy() const;

	// Functions

	static void presentDialogModallyWithSession_dialog_parameters_handler(FacebookCXX::FBSessionCxx * arg0,std::string& arg1,std::map<void *, void *>& arg2,void(*arg3)(FacebookCXX::FBWebDialogResultCxx &, void * &, std::string &));

	static void presentDialogModallyWithSession_dialog_parameters_handler_delegate(FacebookCXX::FBSessionCxx * arg0,std::string& arg1,std::map<void *, void *>& arg2,void(*arg3)(FacebookCXX::FBWebDialogResultCxx &, void * &, std::string &),FacebookCXX::FBWebDialogsDelegateConformerCxx * arg4);

	static void presentRequestsDialogModallyWithSession_message_title_parameters_handler(FacebookCXX::FBSessionCxx * arg0,std::string& arg1,std::string& arg2,std::map<void *, void *>& arg3,void(*arg4)(FacebookCXX::FBWebDialogResultCxx &, void * &, std::string &));

	static void presentRequestsDialogModallyWithSession_message_title_parameters_handler_friendCache(FacebookCXX::FBSessionCxx * arg0,std::string& arg1,std::string& arg2,std::map<void *, void *>& arg3,void(*arg4)(FacebookCXX::FBWebDialogResultCxx &, void * &, std::string &),FacebookCXX::FBFrictionlessRecipientCacheCxx * arg5);

	static void presentFeedDialogModallyWithSession_parameters_handler(FacebookCXX::FBSessionCxx * arg0,std::map<void *, void *>& arg1,void(*arg2)(FacebookCXX::FBWebDialogResultCxx &, void * &, std::string &));
private:
	void* _proxy;
};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _FBWebDialogsCxx

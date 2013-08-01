/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */


// Generated Code 

#ifndef _FBWebDialogsDelegateProtocolCxx
#define _FBWebDialogsDelegateProtocolCxx

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

class FBWebDialogsDelegateProtocolCxx
{
public:
	//Public Constructors
	FBWebDialogsDelegateProtocolCxx(const FBWebDialogsDelegateProtocolCxx* cc);
	FBWebDialogsDelegateProtocolCxx(const void * proxy);

	// Default Destructor
	~FBWebDialogsDelegateProtocolCxx();

	// Retrieve proxy object
	void* getProxy() const;

	// Functions

	 void webDialogsWillPresentDialog_parameters_session(std::string& arg0,void *& arg1,FacebookCXX::FBSessionCxx * arg2);

	 signed char webDialogsDialog_parameters_session_shouldAutoHandleURL(std::string& arg0,std::map<void *, void *>& arg1,FacebookCXX::FBSessionCxx * arg2,std::string& arg3);
private:
	void* _proxy;
};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _FBWebDialogsDelegateProtocolCxx

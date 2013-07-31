/*
 * Header (Abstract Protocol Callback Class)
 * Author: cxx-bindings-generator
 */


#ifndef _FBWebDialogsDelegateConformerCxx
#define _FBWebDialogsDelegateConformerCxx

#include <FacebookCXX/proxies/FBSessionCxx.hpp>

#include <vector>
#include <map>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

class FBSessionCxx;

class FBWebDialogsDelegateConformerCxx
{
public:
	//Public Constructor
	FBWebDialogsDelegateConformerCxx();

	// Default Destructor
	~FBWebDialogsDelegateConformerCxx();

	// Retrieve proxy
	void * getProxy() const;

	// Functions

	virtual  void webDialogsWillPresentDialog_parameters_session(std::string&,void *&,FacebookCXX::FBSessionCxx *) = 0;

	virtual  signed char webDialogsDialog_parameters_session_shouldAutoHandleURL(std::string&,std::map<void *, void *>&,FacebookCXX::FBSessionCxx *,void *&) = 0;
private:
	void* _proxy;
};

} // namespace
#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _FBWebDialogsDelegateConformerCxx

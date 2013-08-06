/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */


// Generated Code 

#ifndef _FBViewControllerCxx
#define _FBViewControllerCxx

#include <FacebookCXX/proxies/FBViewControllerDelegateProtocolCxx.hpp>
#include <FacebookCXX/conformers/FBViewControllerDelegateConformerCxx.hpp>

#include <vector>
#include <map>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations
class FBViewControllerCxx;
class FBViewControllerDelegateProtocolCxx;
class FBViewControllerDelegateConformerCxx;

class FBViewControllerCxx
{
public:
	//Public Constructors
	FBViewControllerCxx(const FBViewControllerCxx* cc);
	FBViewControllerCxx(const void * proxy);

	// Default Destructor
	~FBViewControllerCxx();

	// Retrieve proxy object
	void* getProxy() const;

	// Functions

	 void presentModallyFromViewController_animated_handler(void *& arg0,signed char& arg1,void(*arg2)(FacebookCXX::FBViewControllerCxx *, signed char &));

	 void * cancelButton();

	 void setCancelButton(void *& arg0);

	 void * doneButton();

	 void setDoneButton(void *& arg0);

	 FacebookCXX::FBViewControllerDelegateProtocolCxx * delegate();

	 void setDelegate(FacebookCXX::FBViewControllerDelegateConformerCxx * arg0);

	 void * canvasView();
private:
	void* _proxy;
};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _FBViewControllerCxx

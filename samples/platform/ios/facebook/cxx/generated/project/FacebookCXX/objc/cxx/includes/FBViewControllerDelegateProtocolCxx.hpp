/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */


// Generated Code 

#ifndef _FBViewControllerDelegateProtocolCxx
#define _FBViewControllerDelegateProtocolCxx


#include <vector>
#include <map>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations

class FBViewControllerDelegateProtocolCxx
{
public:
	//Public Constructors
	FBViewControllerDelegateProtocolCxx(const FBViewControllerDelegateProtocolCxx* cc);
	FBViewControllerDelegateProtocolCxx(const void * proxy);

	// Default Destructor
	~FBViewControllerDelegateProtocolCxx();

	// Retrieve proxy object
	void* getProxy() const;

	// Functions

	 void facebookViewControllerCancelWasPressed(void *& arg0);

	 void facebookViewControllerDoneWasPressed(void *& arg0);
private:
	void* _proxy;
};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _FBViewControllerDelegateProtocolCxx

/*
 * Header (Abstract Protocol Callback Class)
 * Author: cxx-bindings-generator
 */


#ifndef _FBViewControllerDelegateConformerCxx
#define _FBViewControllerDelegateConformerCxx


#include <vector>
#include <map>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {


class FBViewControllerDelegateConformerCxx
{
public:
	//Public Constructor
	FBViewControllerDelegateConformerCxx();

	// Default Destructor
	~FBViewControllerDelegateConformerCxx();

	// Retrieve proxy
	void * getProxy() const;

	// Functions

	virtual  void facebookViewControllerCancelWasPressed(void *&) = 0;

	virtual  void facebookViewControllerDoneWasPressed(void *&) = 0;
private:
	void* _proxy;
};

} // namespace
#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _FBViewControllerDelegateConformerCxx

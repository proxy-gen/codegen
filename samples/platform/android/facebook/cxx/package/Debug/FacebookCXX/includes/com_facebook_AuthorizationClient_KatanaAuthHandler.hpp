/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//










// Generated Code 

#ifndef _com_facebook_AuthorizationClient_KatanaAuthHandler
#define _com_facebook_AuthorizationClient_KatanaAuthHandler
//
// Scroll Down 
//



#include <com_facebook_AuthorizationClient_AuthHandler.hpp>

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>
#include <CXXTypes.hpp>


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations

class com_facebook_AuthorizationClient_KatanaAuthHandler : public FacebookCXX::com_facebook_AuthorizationClient_AuthHandler
{
public:

	com_facebook_AuthorizationClient_KatanaAuthHandler(const com_facebook_AuthorizationClient_KatanaAuthHandler& cc);
	com_facebook_AuthorizationClient_KatanaAuthHandler(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_AuthorizationClient_KatanaAuthHandler();
	// Functions

protected:
	com_facebook_AuthorizationClient_KatanaAuthHandler();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_AuthorizationClient_KatanaAuthHandler
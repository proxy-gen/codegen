/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//










// Generated Code 

#ifndef _com_facebook_AuthorizationClient_WebViewAuthHandler
#define _com_facebook_AuthorizationClient_WebViewAuthHandler
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

class com_facebook_AuthorizationClient_WebViewAuthHandler : public FacebookCXX::com_facebook_AuthorizationClient_AuthHandler
{
public:

	// Public Constructor
	com_facebook_AuthorizationClient_WebViewAuthHandler(const com_facebook_AuthorizationClient_WebViewAuthHandler& cc);
	com_facebook_AuthorizationClient_WebViewAuthHandler(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_AuthorizationClient_WebViewAuthHandler();
	// Functions

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_AuthorizationClient_WebViewAuthHandler
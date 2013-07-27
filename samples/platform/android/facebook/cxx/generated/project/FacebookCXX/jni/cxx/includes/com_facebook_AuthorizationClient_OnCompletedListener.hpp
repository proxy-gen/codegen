/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 








// Generated Code 

#ifndef _com_facebook_AuthorizationClient_OnCompletedListener
#define _com_facebook_AuthorizationClient_OnCompletedListener
//
// Scroll Down 
//


#include <com_facebook_AuthorizationClient_Result.hpp>

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

class com_facebook_AuthorizationClient_Result;

class com_facebook_AuthorizationClient_OnCompletedListener
{
public:

	com_facebook_AuthorizationClient_OnCompletedListener(const com_facebook_AuthorizationClient_OnCompletedListener& cc);
	com_facebook_AuthorizationClient_OnCompletedListener(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_AuthorizationClient_OnCompletedListener();
	// Functions
	 void onCompleted(FacebookCXX::com_facebook_AuthorizationClient_Result const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_AuthorizationClient_OnCompletedListener
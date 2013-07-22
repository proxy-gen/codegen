/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 








// Generated Code 

#ifndef _com_facebook_Request_GraphUserCallback
#define _com_facebook_Request_GraphUserCallback
//
// Scroll Down 
//


#include <com_facebook_model_GraphUser.hpp>

#include <com_facebook_Response.hpp>

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

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class com_facebook_model_GraphUser;

class com_facebook_Response;

class com_facebook_Request_GraphUserCallback
{
public:

	com_facebook_Request_GraphUserCallback(const com_facebook_Request_GraphUserCallback& cc);
	com_facebook_Request_GraphUserCallback(void * proxy);
	// Public Constructors
	com_facebook_Request_GraphUserCallback();
	// Default Destructor
	virtual ~com_facebook_Request_GraphUserCallback();
	// Functions
	 void onCompleted(FacebookCXX::com_facebook_model_GraphUser& arg0,FacebookCXX::com_facebook_Response& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_Request_GraphUserCallback
/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 	
 		 
 		 








// Generated Code 

#ifndef _com_facebook_Request_GraphUserListCallback
#define _com_facebook_Request_GraphUserListCallback
//
// Scroll Down 
//


#include <java_util_List.hpp>

#include <com_facebook_Response.hpp>

#include <com_facebook_model_GraphUser.hpp>

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
// 
// 
// 

// Forward Declarations

class java_util_List;

class com_facebook_Response;

class com_facebook_model_GraphUser;

class com_facebook_Request_GraphUserListCallback
{
public:

	com_facebook_Request_GraphUserListCallback(const com_facebook_Request_GraphUserListCallback& cc);
	com_facebook_Request_GraphUserListCallback(void * proxy);
	// Public Constructors
	com_facebook_Request_GraphUserListCallback();
	// Default Destructor
	virtual ~com_facebook_Request_GraphUserListCallback();
	// Functions
	 void onCompleted(FacebookCXX::java_util_List& arg0,FacebookCXX::com_facebook_Response& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_Request_GraphUserListCallback
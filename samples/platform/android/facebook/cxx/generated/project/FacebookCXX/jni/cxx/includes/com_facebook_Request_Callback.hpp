/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 








// Generated Code 

#ifndef _com_facebook_Request_Callback
#define _com_facebook_Request_Callback
//
// Scroll Down 
//


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

// Forward Declarations

class com_facebook_Response;

class com_facebook_Request_Callback
{
public:

	com_facebook_Request_Callback(const com_facebook_Request_Callback& cc);
	com_facebook_Request_Callback(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// com_facebook_Request_Callback();
	// 
	// Default Destructor
	virtual ~com_facebook_Request_Callback();
	// Functions
	 void onCompleted(FacebookCXX::com_facebook_Response& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_Request_Callback
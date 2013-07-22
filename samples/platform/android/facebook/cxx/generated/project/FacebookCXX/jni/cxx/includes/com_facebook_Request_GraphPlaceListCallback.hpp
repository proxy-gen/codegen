/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 	
 		 
 		 








// Generated Code 

#ifndef _com_facebook_Request_GraphPlaceListCallback
#define _com_facebook_Request_GraphPlaceListCallback
//
// Scroll Down 
//


#include <java_util_List.hpp>

#include <com_facebook_Response.hpp>

#include <com_facebook_model_GraphPlace.hpp>

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

class com_facebook_model_GraphPlace;

class com_facebook_Request_GraphPlaceListCallback
{
public:

	com_facebook_Request_GraphPlaceListCallback(const com_facebook_Request_GraphPlaceListCallback& cc);
	com_facebook_Request_GraphPlaceListCallback(void * proxy);
	// Public Constructors
	com_facebook_Request_GraphPlaceListCallback();
	// Default Destructor
	virtual ~com_facebook_Request_GraphPlaceListCallback();
	// Functions
	 void onCompleted(FacebookCXX::java_util_List& arg0,FacebookCXX::com_facebook_Response& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_Request_GraphPlaceListCallback
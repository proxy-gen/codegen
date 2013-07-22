/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	









// Generated Code 

#ifndef _com_facebook_Session_StartActivityDelegate
#define _com_facebook_Session_StartActivityDelegate
//
// Scroll Down 
//


#include <android_content_Intent.hpp>

#include <android_app_Activity.hpp>

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

class android_content_Intent;

class android_app_Activity;

class com_facebook_Session_StartActivityDelegate
{
public:

	com_facebook_Session_StartActivityDelegate(const com_facebook_Session_StartActivityDelegate& cc);
	com_facebook_Session_StartActivityDelegate(void * proxy);
	// Public Constructors
	com_facebook_Session_StartActivityDelegate();
	// Default Destructor
	virtual ~com_facebook_Session_StartActivityDelegate();
	// Functions
	 void startActivityForResult(FacebookCXX::android_content_Intent& arg0,int& arg1);
	 FacebookCXX::android_app_Activity getActivityContext();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_Session_StartActivityDelegate
/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 








// Generated Code 

#ifndef _com_facebook_widget_LoginButton_UserInfoChangedCallback
#define _com_facebook_widget_LoginButton_UserInfoChangedCallback
//
// Scroll Down 
//


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

// Forward Declarations

class com_facebook_model_GraphUser;

class com_facebook_widget_LoginButton_UserInfoChangedCallback
{
public:

	com_facebook_widget_LoginButton_UserInfoChangedCallback(const com_facebook_widget_LoginButton_UserInfoChangedCallback& cc);
	com_facebook_widget_LoginButton_UserInfoChangedCallback(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// com_facebook_widget_LoginButton_UserInfoChangedCallback();
	// 
	// Default Destructor
	virtual ~com_facebook_widget_LoginButton_UserInfoChangedCallback();
	// Functions
	 void onUserInfoFetched(FacebookCXX::com_facebook_model_GraphUser& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_LoginButton_UserInfoChangedCallback
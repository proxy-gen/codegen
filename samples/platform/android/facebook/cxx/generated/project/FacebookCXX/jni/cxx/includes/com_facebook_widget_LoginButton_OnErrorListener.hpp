/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 








// Generated Code 

#ifndef _com_facebook_widget_LoginButton_OnErrorListener
#define _com_facebook_widget_LoginButton_OnErrorListener
//
// Scroll Down 
//


#include <com_facebook_FacebookException.hpp>

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

// Forward Declarations

class com_facebook_FacebookException;

class com_facebook_widget_LoginButton_OnErrorListener
{
public:

	com_facebook_widget_LoginButton_OnErrorListener(const com_facebook_widget_LoginButton_OnErrorListener& cc);
	com_facebook_widget_LoginButton_OnErrorListener(void * proxy);
	// Public Constructors
	com_facebook_widget_LoginButton_OnErrorListener();
	// Default Destructor
	virtual ~com_facebook_widget_LoginButton_OnErrorListener();
	// Functions
	 void onError(FacebookCXX::com_facebook_FacebookException& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_LoginButton_OnErrorListener
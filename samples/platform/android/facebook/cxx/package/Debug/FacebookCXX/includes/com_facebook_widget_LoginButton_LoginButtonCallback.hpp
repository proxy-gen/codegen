/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
 		 








// Generated Code 

#ifndef _com_facebook_widget_LoginButton_LoginButtonCallback
#define _com_facebook_widget_LoginButton_LoginButtonCallback
//
// Scroll Down 
//


#include <com_facebook_Session.hpp>

#include <com_facebook_SessionState.hpp>

#include <java_lang_Exception.hpp>

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

class com_facebook_Session;



class com_facebook_widget_LoginButton_LoginButtonCallback
{
public:

	com_facebook_widget_LoginButton_LoginButtonCallback(const com_facebook_widget_LoginButton_LoginButtonCallback& cc);
	com_facebook_widget_LoginButton_LoginButtonCallback(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_widget_LoginButton_LoginButtonCallback();
	// Functions
	 void call(FacebookCXX::com_facebook_Session const& arg0,com_facebook_SessionState::com_facebook_SessionState const& arg1,AndroidCXX::java_lang_Exception const& arg2);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_LoginButton_LoginButtonCallback
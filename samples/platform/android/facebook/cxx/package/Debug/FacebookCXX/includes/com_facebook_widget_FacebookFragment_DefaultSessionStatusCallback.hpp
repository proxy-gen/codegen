/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 








// Generated Code 

#ifndef _com_facebook_widget_FacebookFragment_DefaultSessionStatusCallback
#define _com_facebook_widget_FacebookFragment_DefaultSessionStatusCallback
//
// Scroll Down 
//


#include <com_facebook_Session.hpp>

#include <com_facebook_SessionState.hpp>

#include <java_lang_Exception.hpp>


#include <com_facebook_Session_StatusCallback.hpp>

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



class com_facebook_widget_FacebookFragment_DefaultSessionStatusCallback : public FacebookCXX::com_facebook_Session_StatusCallback
{
public:

	// Public ConstrucXXX
	com_facebook_widget_FacebookFragment_DefaultSessionStatusCallback(const com_facebook_widget_FacebookFragment_DefaultSessionStatusCallback& cc);
	com_facebook_widget_FacebookFragment_DefaultSessionStatusCallback(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_widget_FacebookFragment_DefaultSessionStatusCallback();
	// Functions
	virtual void  call(FacebookCXX::com_facebook_Session const& arg0,com_facebook_SessionState::com_facebook_SessionState const& arg1,AndroidCXX::java_lang_Exception const& arg2) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_FacebookFragment_DefaultSessionStatusCallback
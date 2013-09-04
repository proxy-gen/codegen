/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
	
	
	
 		 
 		 
 		 
 		 
 	
 		 
 		 
 		 
 	
 		 
 		 
 		 


















// Generated Code 

#ifndef _com_facebook_widget_LoginButton_LoginButtonProperties
#define _com_facebook_widget_LoginButton_LoginButtonProperties
//
// Scroll Down 
//


#include <com_facebook_SessionDefaultAudience.hpp>

#include <com_facebook_SessionLoginBehavior.hpp>

#include <com_facebook_widget_LoginButton_OnErrorListener.hpp>

#include <com_facebook_Session_StatusCallback.hpp>

#include <java_util_List.hpp>

#include <com_facebook_Session.hpp>

#include <java_lang_String.hpp>


#include <java_lang_Object.hpp>

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



class com_facebook_widget_LoginButton_OnErrorListener;

class com_facebook_Session_StatusCallback;


class com_facebook_Session;


class com_facebook_widget_LoginButton_LoginButtonProperties : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	com_facebook_widget_LoginButton_LoginButtonProperties(const com_facebook_widget_LoginButton_LoginButtonProperties& cc);
	com_facebook_widget_LoginButton_LoginButtonProperties(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_widget_LoginButton_LoginButtonProperties();
	// Functions
	virtual void  clearPermissions() ;
	virtual com_facebook_SessionDefaultAudience::com_facebook_SessionDefaultAudience  getDefaultAudience() ;
	virtual com_facebook_SessionLoginBehavior::com_facebook_SessionLoginBehavior  getLoginBehavior() ;
	virtual FacebookCXX::com_facebook_widget_LoginButton_OnErrorListener * getOnErrorListener() ;
	virtual FacebookCXX::com_facebook_Session_StatusCallback * getSessionStatusCallback() ;
	virtual void  setDefaultAudience(com_facebook_SessionDefaultAudience::com_facebook_SessionDefaultAudience const& arg0) ;
	virtual void  setLoginBehavior(com_facebook_SessionLoginBehavior::com_facebook_SessionLoginBehavior const& arg0) ;
	virtual void  setOnErrorListener(FacebookCXX::com_facebook_widget_LoginButton_OnErrorListener const& arg0) ;
	virtual void  setPublishPermissions(AndroidCXX::java_util_List const& arg0,FacebookCXX::com_facebook_Session const& arg1) ;
	virtual void  setReadPermissions(AndroidCXX::java_util_List const& arg0,FacebookCXX::com_facebook_Session const& arg1) ;
	virtual void  setSessionStatusCallback(FacebookCXX::com_facebook_Session_StatusCallback const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_LoginButton_LoginButtonProperties
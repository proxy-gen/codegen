/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <com_facebook_SessionLoginBehavior.hpp>

#include <com_facebook_SessionDefaultAudience.hpp>

#include <com_facebook_widget_LoginButton_OnErrorListener.hpp>

#include <java_util_List.hpp>

#include <com_facebook_Session.hpp>

#include <java_lang_String.hpp>

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



class com_facebook_widget_LoginButton_OnErrorListener;


class com_facebook_Session;


class com_facebook_Session_StatusCallback;

class com_facebook_widget_LoginButton_LoginButtonProperties
{
public:

	com_facebook_widget_LoginButton_LoginButtonProperties(const com_facebook_widget_LoginButton_LoginButtonProperties& cc);
	com_facebook_widget_LoginButton_LoginButtonProperties(void * proxy);
	// Public Constructors
	com_facebook_widget_LoginButton_LoginButtonProperties();
	// Default Destructor
	virtual ~com_facebook_widget_LoginButton_LoginButtonProperties();
	// Functions
	 COM_FACEBOOK_SESSIONLOGINBEHAVIOR::com_facebook_SessionLoginBehavior getLoginBehavior();
	 void setLoginBehavior(COM_FACEBOOK_SESSIONLOGINBEHAVIOR::com_facebook_SessionLoginBehavior& arg0);
	 void setDefaultAudience(COM_FACEBOOK_SESSIONDEFAULTAUDIENCE::com_facebook_SessionDefaultAudience& arg0);
	 COM_FACEBOOK_SESSIONDEFAULTAUDIENCE::com_facebook_SessionDefaultAudience getDefaultAudience();
	 FacebookCXX::com_facebook_widget_LoginButton_OnErrorListener getOnErrorListener();
	 void setOnErrorListener(FacebookCXX::com_facebook_widget_LoginButton_OnErrorListener& arg0);
	 void setReadPermissions(AndroidCXX::java_util_List& arg0,FacebookCXX::com_facebook_Session& arg1);
	 void setPublishPermissions(AndroidCXX::java_util_List& arg0,FacebookCXX::com_facebook_Session& arg1);
	 void clearPermissions();
	 void setSessionStatusCallback(FacebookCXX::com_facebook_Session_StatusCallback& arg0);
	 FacebookCXX::com_facebook_Session_StatusCallback getSessionStatusCallback();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_LoginButton_LoginButtonProperties
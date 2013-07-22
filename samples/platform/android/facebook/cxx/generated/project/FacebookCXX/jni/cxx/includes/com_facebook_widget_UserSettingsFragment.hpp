/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
	
	
 		 
 		 
 		 
	
	
 		 
 		 
 	
 		 
 		 
 	
 		 
 		 
	























// Generated Code 

#ifndef _com_facebook_widget_UserSettingsFragment
#define _com_facebook_widget_UserSettingsFragment
//
// Scroll Down 
//


#include <android_os_Bundle.hpp>

#include <android_view_LayoutInflater.hpp>

#include <android_view_ViewGroup.hpp>

#include <android_view_View.hpp>

#include <com_facebook_SessionLoginBehavior.hpp>

#include <com_facebook_Session.hpp>

#include <com_facebook_SessionDefaultAudience.hpp>

#include <com_facebook_widget_LoginButton_OnErrorListener.hpp>

#include <java_util_List.hpp>

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






class com_facebook_Session;


class com_facebook_widget_LoginButton_OnErrorListener;



class com_facebook_Session_StatusCallback;

class com_facebook_widget_UserSettingsFragment
{
public:

	com_facebook_widget_UserSettingsFragment(const com_facebook_widget_UserSettingsFragment& cc);
	com_facebook_widget_UserSettingsFragment(void * proxy);
	// Public Constructors
	com_facebook_widget_UserSettingsFragment();
	// Default Destructor
	virtual ~com_facebook_widget_UserSettingsFragment();
	// Functions
	 void onCreate(AndroidCXX::android_os_Bundle& arg0);
	 void onResume();
	 AndroidCXX::android_view_View onCreateView(AndroidCXX::android_view_LayoutInflater& arg0,AndroidCXX::android_view_ViewGroup& arg1,AndroidCXX::android_os_Bundle& arg2);
	 COM_FACEBOOK_SESSIONLOGINBEHAVIOR::com_facebook_SessionLoginBehavior getLoginBehavior();
	 void setSession(FacebookCXX::com_facebook_Session& arg0);
	 void setLoginBehavior(COM_FACEBOOK_SESSIONLOGINBEHAVIOR::com_facebook_SessionLoginBehavior& arg0);
	 void setDefaultAudience(COM_FACEBOOK_SESSIONDEFAULTAUDIENCE::com_facebook_SessionDefaultAudience& arg0);
	 COM_FACEBOOK_SESSIONDEFAULTAUDIENCE::com_facebook_SessionDefaultAudience getDefaultAudience();
	 FacebookCXX::com_facebook_widget_LoginButton_OnErrorListener getOnErrorListener();
	 void setOnErrorListener(FacebookCXX::com_facebook_widget_LoginButton_OnErrorListener& arg0);
	 void setReadPermissions(AndroidCXX::java_util_List& arg0);
	 void setPublishPermissions(AndroidCXX::java_util_List& arg0);
	 void clearPermissions();
	 void setSessionStatusCallback(FacebookCXX::com_facebook_Session_StatusCallback& arg0);
	 FacebookCXX::com_facebook_Session_StatusCallback getSessionStatusCallback();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_UserSettingsFragment
/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	
 		 
 		 
 		 
 		 
	
	
 		 
 		 
 	
 		 
 		 
 	
 		 
	
 		 
 		 
	
 		 


 		 
 		 
 		 
 		 
 		 


























// Generated Code 

#ifndef _com_facebook_widget_LoginButton
#define _com_facebook_widget_LoginButton
//
// Scroll Down 
//


#include <android_content_Intent.hpp>

#include <com_facebook_SessionLoginBehavior.hpp>

#include <com_facebook_Session.hpp>

#include <java_lang_String.hpp>

#include <com_facebook_SessionDefaultAudience.hpp>

#include <com_facebook_widget_LoginButton_OnErrorListener.hpp>

#include <java_util_List.hpp>

#include <com_facebook_widget_LoginButton_UserInfoChangedCallback.hpp>

#include <com_facebook_Session_StatusCallback.hpp>

#include <android_support_v4_app_Fragment.hpp>

#include <android_content_Context.hpp>

#include <android_util_AttributeSet.hpp>

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


class com_facebook_widget_LoginButton_UserInfoChangedCallback;

class com_facebook_Session_StatusCallback;




class com_facebook_widget_LoginButton
{
public:

	com_facebook_widget_LoginButton(const com_facebook_widget_LoginButton& cc);
	com_facebook_widget_LoginButton(void * proxy);
	// Public Constructors
	com_facebook_widget_LoginButton(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1,int& arg2);
	com_facebook_widget_LoginButton(AndroidCXX::android_content_Context& arg0);
	com_facebook_widget_LoginButton(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1);
	// TODO: remove
	// 
	// com_facebook_widget_LoginButton();
	// 
	// Default Destructor
	virtual ~com_facebook_widget_LoginButton();
	// Functions
	 bool onActivityResult(int& arg0,int& arg1,AndroidCXX::android_content_Intent& arg2);
	 COM_FACEBOOK_SESSIONLOGINBEHAVIOR::com_facebook_SessionLoginBehavior getLoginBehavior();
	 void setSession(FacebookCXX::com_facebook_Session& arg0);
	 void setApplicationId(AndroidCXX::java_lang_String& arg0);
	 void setLoginBehavior(COM_FACEBOOK_SESSIONLOGINBEHAVIOR::com_facebook_SessionLoginBehavior& arg0);
	 void setDefaultAudience(COM_FACEBOOK_SESSIONDEFAULTAUDIENCE::com_facebook_SessionDefaultAudience& arg0);
	 COM_FACEBOOK_SESSIONDEFAULTAUDIENCE::com_facebook_SessionDefaultAudience getDefaultAudience();
	 void onFinishInflate();
	 FacebookCXX::com_facebook_widget_LoginButton_OnErrorListener getOnErrorListener();
	 void setOnErrorListener(FacebookCXX::com_facebook_widget_LoginButton_OnErrorListener& arg0);
	 void setReadPermissions(AndroidCXX::java_util_List& arg0);
	 void setPublishPermissions(AndroidCXX::java_util_List& arg0);
	 void clearPermissions();
	 FacebookCXX::com_facebook_widget_LoginButton_UserInfoChangedCallback getUserInfoChangedCallback();
	 void setUserInfoChangedCallback(FacebookCXX::com_facebook_widget_LoginButton_UserInfoChangedCallback& arg0);
	 void setSessionStatusCallback(FacebookCXX::com_facebook_Session_StatusCallback& arg0);
	 FacebookCXX::com_facebook_Session_StatusCallback getSessionStatusCallback();
	 void setFragment(AndroidCXX::android_support_v4_app_Fragment& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_LoginButton
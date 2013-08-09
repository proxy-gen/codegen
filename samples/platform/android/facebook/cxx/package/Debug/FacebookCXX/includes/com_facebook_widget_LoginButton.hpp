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
	com_facebook_widget_LoginButton(Proxy proxy);
	// Public Constructors
	com_facebook_widget_LoginButton(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	com_facebook_widget_LoginButton(AndroidCXX::android_content_Context const& arg0);
	com_facebook_widget_LoginButton(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_widget_LoginButton();
	// Functions
	 bool onActivityResult(int const& arg0,int const& arg1,AndroidCXX::android_content_Intent const& arg2);
	 com_facebook_SessionLoginBehavior::com_facebook_SessionLoginBehavior getLoginBehavior();
	 void setSession(FacebookCXX::com_facebook_Session const& arg0);
	 void setApplicationId(AndroidCXX::java_lang_String const& arg0);
	 void setLoginBehavior(com_facebook_SessionLoginBehavior::com_facebook_SessionLoginBehavior const& arg0);
	 void setDefaultAudience(com_facebook_SessionDefaultAudience::com_facebook_SessionDefaultAudience const& arg0);
	 com_facebook_SessionDefaultAudience::com_facebook_SessionDefaultAudience getDefaultAudience();
	 void onFinishInflate();
	 FacebookCXX::com_facebook_widget_LoginButton_OnErrorListener getOnErrorListener();
	 void setOnErrorListener(FacebookCXX::com_facebook_widget_LoginButton_OnErrorListener const& arg0);
	 void setReadPermissions(AndroidCXX::java_util_List const& arg0);
	 void setPublishPermissions(AndroidCXX::java_util_List const& arg0);
	 void clearPermissions();
	 FacebookCXX::com_facebook_widget_LoginButton_UserInfoChangedCallback getUserInfoChangedCallback();
	 void setUserInfoChangedCallback(FacebookCXX::com_facebook_widget_LoginButton_UserInfoChangedCallback const& arg0);
	 void setSessionStatusCallback(FacebookCXX::com_facebook_Session_StatusCallback const& arg0);
	 FacebookCXX::com_facebook_Session_StatusCallback getSessionStatusCallback();
	 void setFragment(AndroidCXX::android_support_v4_app_Fragment const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_LoginButton
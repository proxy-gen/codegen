/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <com_facebook_SessionDefaultAudience.hpp>

#include <com_facebook_SessionLoginBehavior.hpp>

#include <com_facebook_widget_LoginButton_OnErrorListener.hpp>

#include <com_facebook_Session_StatusCallback.hpp>

#include <com_facebook_widget_LoginButton_UserInfoChangedCallback.hpp>

#include <android_content_Intent.hpp>

#include <java_lang_String.hpp>

#include <android_support_v4_app_Fragment.hpp>

#include <java_util_List.hpp>

#include <com_facebook_Session.hpp>

#include <android_content_Context.hpp>

#include <android_util_AttributeSet.hpp>


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

class com_facebook_widget_LoginButton_UserInfoChangedCallback;





class com_facebook_Session;



class com_facebook_widget_LoginButton : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	com_facebook_widget_LoginButton(AndroidCXX::android_content_Context const& arg0,Proxy * aProxy = new Proxy());
	com_facebook_widget_LoginButton(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,Proxy * aProxy = new Proxy());
	com_facebook_widget_LoginButton(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2,Proxy * aProxy = new Proxy());
	com_facebook_widget_LoginButton(const com_facebook_widget_LoginButton& cc);
	com_facebook_widget_LoginButton(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_widget_LoginButton();
	// Functions
	virtual void  clearPermissions() ;
	virtual com_facebook_SessionDefaultAudience::com_facebook_SessionDefaultAudience  getDefaultAudience() ;
	virtual com_facebook_SessionLoginBehavior::com_facebook_SessionLoginBehavior  getLoginBehavior() ;
	virtual FacebookCXX::com_facebook_widget_LoginButton_OnErrorListener * getOnErrorListener() ;
	virtual FacebookCXX::com_facebook_Session_StatusCallback * getSessionStatusCallback() ;
	virtual FacebookCXX::com_facebook_widget_LoginButton_UserInfoChangedCallback * getUserInfoChangedCallback() ;
	virtual bool  onActivityResult(int const& arg0,int const& arg1,AndroidCXX::android_content_Intent const& arg2) ;
	virtual void  onFinishInflate() ;
	virtual void  setApplicationId(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setDefaultAudience(com_facebook_SessionDefaultAudience::com_facebook_SessionDefaultAudience const& arg0) ;
	virtual void  setFragment(AndroidCXX::android_support_v4_app_Fragment const& arg0) ;
	virtual void  setLoginBehavior(com_facebook_SessionLoginBehavior::com_facebook_SessionLoginBehavior const& arg0) ;
	virtual void  setOnErrorListener(FacebookCXX::com_facebook_widget_LoginButton_OnErrorListener const& arg0) ;
	virtual void  setPublishPermissions(AndroidCXX::java_util_List const& arg0) ;
	virtual void  setReadPermissions(AndroidCXX::java_util_List const& arg0) ;
	virtual void  setSession(FacebookCXX::com_facebook_Session const& arg0) ;
	virtual void  setSessionStatusCallback(FacebookCXX::com_facebook_Session_StatusCallback const& arg0) ;
	virtual void  setUserInfoChangedCallback(FacebookCXX::com_facebook_widget_LoginButton_UserInfoChangedCallback const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_LoginButton
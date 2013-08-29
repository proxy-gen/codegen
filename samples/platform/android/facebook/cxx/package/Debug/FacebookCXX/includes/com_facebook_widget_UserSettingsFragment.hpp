/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <com_facebook_SessionDefaultAudience.hpp>

#include <com_facebook_SessionLoginBehavior.hpp>

#include <com_facebook_widget_LoginButton_OnErrorListener.hpp>

#include <com_facebook_Session_StatusCallback.hpp>

#include <android_os_Bundle.hpp>

#include <android_view_LayoutInflater.hpp>

#include <android_view_ViewGroup.hpp>

#include <android_view_View.hpp>

#include <java_util_List.hpp>

#include <java_lang_String.hpp>

#include <com_facebook_Session.hpp>


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

class com_facebook_widget_UserSettingsFragment : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	com_facebook_widget_UserSettingsFragment(Proxy * aProxy = new Proxy());
	com_facebook_widget_UserSettingsFragment(const com_facebook_widget_UserSettingsFragment& cc);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_widget_UserSettingsFragment();
	// Functions
	virtual void  clearPermissions() ;
	virtual com_facebook_SessionDefaultAudience::com_facebook_SessionDefaultAudience  getDefaultAudience() ;
	virtual com_facebook_SessionLoginBehavior::com_facebook_SessionLoginBehavior  getLoginBehavior() ;
	virtual FacebookCXX::com_facebook_widget_LoginButton_OnErrorListener * getOnErrorListener() ;
	virtual FacebookCXX::com_facebook_Session_StatusCallback * getSessionStatusCallback() ;
	virtual void  onCreate(AndroidCXX::android_os_Bundle const& arg0) ;
	virtual AndroidCXX::android_view_View * onCreateView(AndroidCXX::android_view_LayoutInflater const& arg0,AndroidCXX::android_view_ViewGroup const& arg1,AndroidCXX::android_os_Bundle const& arg2) ;
	virtual void  onResume() ;
	virtual void  setDefaultAudience(com_facebook_SessionDefaultAudience::com_facebook_SessionDefaultAudience const& arg0) ;
	virtual void  setLoginBehavior(com_facebook_SessionLoginBehavior::com_facebook_SessionLoginBehavior const& arg0) ;
	virtual void  setOnErrorListener(FacebookCXX::com_facebook_widget_LoginButton_OnErrorListener const& arg0) ;
	virtual void  setPublishPermissions(AndroidCXX::java_util_List const& arg0) ;
	virtual void  setReadPermissions(AndroidCXX::java_util_List const& arg0) ;
	virtual void  setSession(FacebookCXX::com_facebook_Session const& arg0) ;
	virtual void  setSessionStatusCallback(FacebookCXX::com_facebook_Session_StatusCallback const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_UserSettingsFragment
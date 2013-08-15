/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
	
 		 
	
	
	
 		 
	
 		 
	


 		 


















// Generated Code 

#ifndef _android_app_LocalActivityManager
#define _android_app_LocalActivityManager
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <android_content_Intent.hpp>

#include <android_view_Window.hpp>

#include <android_app_Activity.hpp>

#include <android_os_Bundle.hpp>


#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>
#include <CXXTypes.hpp>


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class java_lang_String;

class android_content_Intent;

class android_view_Window;

class android_app_Activity;

class android_os_Bundle;

class android_app_LocalActivityManager 
{
public:

	// Public ConstrucXXX
	android_app_LocalActivityManager(AndroidCXX::android_app_Activity const& arg0,bool const& arg1);
	android_app_LocalActivityManager(const android_app_LocalActivityManager& cc);
	android_app_LocalActivityManager(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_app_LocalActivityManager();
	// Functions
	virtual AndroidCXX::android_view_Window * startActivity(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_content_Intent const& arg1) ;
	virtual AndroidCXX::android_view_Window * destroyActivity(AndroidCXX::java_lang_String const& arg0,bool const& arg1) ;
	virtual AndroidCXX::android_app_Activity * getCurrentActivity() ;
	virtual AndroidCXX::java_lang_String * getCurrentId() ;
	virtual AndroidCXX::android_app_Activity * getActivity(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  dispatchCreate(AndroidCXX::android_os_Bundle const& arg0) ;
	virtual AndroidCXX::android_os_Bundle * saveInstanceState() ;
	virtual void  dispatchResume() ;
	virtual void  dispatchPause(bool const& arg0) ;
	virtual void  dispatchStop() ;
	virtual void  removeAllActivities() ;
	virtual void  dispatchDestroy(bool const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_LocalActivityManager
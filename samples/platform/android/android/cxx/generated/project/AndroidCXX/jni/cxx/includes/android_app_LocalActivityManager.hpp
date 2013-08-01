/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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

#include <android_app_Activity.hpp>

#include <android_content_Intent.hpp>

#include <android_view_Window.hpp>

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

class android_app_Activity;

class android_content_Intent;

class android_view_Window;

class android_os_Bundle;

class android_app_LocalActivityManager
{
public:

	android_app_LocalActivityManager(const android_app_LocalActivityManager& cc);
	android_app_LocalActivityManager(Proxy proxy);
	// Public Constructors
	android_app_LocalActivityManager(AndroidCXX::android_app_Activity const& arg0,bool const& arg1);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_app_LocalActivityManager();
	// Functions
	 AndroidCXX::android_app_Activity getActivity(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::android_view_Window startActivity(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_content_Intent const& arg1);
	 void dispatchResume();
	 void dispatchCreate(AndroidCXX::android_os_Bundle const& arg0);
	 void dispatchPause(bool const& arg0);
	 void dispatchStop();
	 void dispatchDestroy(bool const& arg0);
	 AndroidCXX::android_view_Window destroyActivity(AndroidCXX::java_lang_String const& arg0,bool const& arg1);
	 AndroidCXX::android_app_Activity getCurrentActivity();
	 AndroidCXX::java_lang_String getCurrentId();
	 AndroidCXX::android_os_Bundle saveInstanceState();
	 void removeAllActivities();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_LocalActivityManager
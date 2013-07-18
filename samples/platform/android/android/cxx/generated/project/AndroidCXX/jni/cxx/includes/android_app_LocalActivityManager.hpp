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
 android_app_Activity getActivity(java_lang_String& arg0);
 android_view_Window startActivity(java_lang_String& arg0,android_content_Intent& arg1);
 void dispatchResume();
 void dispatchCreate(android_os_Bundle& arg0);
 void dispatchPause(bool& arg0);
 void dispatchStop();
 void dispatchDestroy(bool& arg0);
 android_view_Window destroyActivity(java_lang_String& arg0,bool& arg1);
 android_app_Activity getCurrentActivity();
 java_lang_String getCurrentId();
 android_os_Bundle saveInstanceState();
 void removeAllActivities();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_LocalActivityManager
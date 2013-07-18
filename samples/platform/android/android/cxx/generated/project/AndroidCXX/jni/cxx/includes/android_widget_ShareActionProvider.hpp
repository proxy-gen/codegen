/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
 			
 			
 			
 			

// Generated Code 

#ifndef _android_widget_ShareActionProvider
#define _android_widget_ShareActionProvider
//
// Scroll Down 
//









#include <android_view_View.hpp>

#include <android_view_SubMenu.hpp>

#include <android_widget_ShareActionProvider_OnShareTargetSelectedListener.hpp>

#include <java_lang_String.hpp>

#include <android_content_Intent.hpp>

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

class android_view_View;

class android_view_SubMenu;

class android_widget_ShareActionProvider_OnShareTargetSelectedListener;

class java_lang_String;

class android_content_Intent;

class android_widget_ShareActionProvider
{
public:
 bool hasSubMenu();
 android_view_View onCreateActionView();
 void onPrepareSubMenu(android_view_SubMenu& arg0);
 void setOnShareTargetSelectedListener(android_widget_ShareActionProvider_OnShareTargetSelectedListener& arg0);
 void setShareHistoryFileName(java_lang_String& arg0);
 void setShareIntent(android_content_Intent& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ShareActionProvider
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

#include <android_content_Context.hpp>

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

class android_view_View;

class android_view_SubMenu;

class android_widget_ShareActionProvider_OnShareTargetSelectedListener;

class java_lang_String;

class android_content_Intent;

class android_content_Context;

class android_widget_ShareActionProvider
{
public:

	android_widget_ShareActionProvider(const android_widget_ShareActionProvider& cc);
	android_widget_ShareActionProvider(void * proxy);
	// Public Constructors
	android_widget_ShareActionProvider(AndroidCXX::android_content_Context& arg0);
	// TODO: remove
	// 
	// android_widget_ShareActionProvider();
	// 
	// Default Destructor
	virtual ~android_widget_ShareActionProvider();
	// Functions
	 bool hasSubMenu();
	 AndroidCXX::android_view_View onCreateActionView();
	 void onPrepareSubMenu(AndroidCXX::android_view_SubMenu& arg0);
	 void setOnShareTargetSelectedListener(AndroidCXX::android_widget_ShareActionProvider_OnShareTargetSelectedListener& arg0);
	 void setShareHistoryFileName(AndroidCXX::java_lang_String& arg0);
	 void setShareIntent(AndroidCXX::android_content_Intent& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ShareActionProvider
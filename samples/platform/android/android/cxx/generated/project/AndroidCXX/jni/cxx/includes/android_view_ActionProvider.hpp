/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
 		 
 		 

// Generated Code 

#ifndef _android_view_ActionProvider
#define _android_view_ActionProvider
//
// Scroll Down 
//











#include <android_view_MenuItem.hpp>

#include <android_view_View.hpp>

#include <android_view_SubMenu.hpp>

#include <android_view_ActionProvider_VisibilityListener.hpp>

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

class android_view_MenuItem;

class android_view_View;

class android_view_SubMenu;

class android_view_ActionProvider_VisibilityListener;

class android_view_ActionProvider
{
public:
	 bool isVisible();
	 bool hasSubMenu();
	 android_view_View *  onCreateActionView(android_view_MenuItem& arg0);
	 bool overridesItemVisibility();
	 void refreshVisibility();
	 bool onPerformDefaultAction();
	 void onPrepareSubMenu(android_view_SubMenu& arg0);
	 void setVisibilityListener(android_view_ActionProvider_VisibilityListener& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_ActionProvider
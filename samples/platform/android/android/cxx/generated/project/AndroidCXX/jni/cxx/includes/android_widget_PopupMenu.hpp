/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
 			
		
 			

// Generated Code 

#ifndef _android_widget_PopupMenu
#define _android_widget_PopupMenu
//
// Scroll Down 
//










#include <android_view_MenuInflater.hpp>

#include <android_widget_PopupMenu_OnMenuItemClickListener.hpp>

#include <android_view_Menu.hpp>

#include <android_widget_PopupMenu_OnDismissListener.hpp>

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

class android_view_MenuInflater;

class android_widget_PopupMenu_OnMenuItemClickListener;

class android_view_Menu;

class android_widget_PopupMenu_OnDismissListener;

class android_widget_PopupMenu
{
public:
 void inflate(int& arg0);
 void show();
 android_view_MenuInflater getMenuInflater();
 void setOnMenuItemClickListener(android_widget_PopupMenu_OnMenuItemClickListener& arg0);
 android_view_Menu getMenu();
 void dismiss();
 void setOnDismissListener(android_widget_PopupMenu_OnDismissListener& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_PopupMenu
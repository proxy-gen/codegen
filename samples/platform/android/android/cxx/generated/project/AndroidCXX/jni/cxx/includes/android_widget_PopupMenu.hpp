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

#include <android_content_Context.hpp>

#include <android_view_View.hpp>

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

class android_view_MenuInflater;

class android_widget_PopupMenu_OnMenuItemClickListener;

class android_view_Menu;

class android_widget_PopupMenu_OnDismissListener;

class android_content_Context;

class android_view_View;

class android_widget_PopupMenu
{
public:

	android_widget_PopupMenu(const android_widget_PopupMenu& cc);
	android_widget_PopupMenu(void * proxy);
	// Public Constructors
	android_widget_PopupMenu(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_view_View& arg1);
	android_widget_PopupMenu();
	// Default Destructor
	virtual ~android_widget_PopupMenu();
	// Functions
	 void inflate(int& arg0);
	 void show();
	 AndroidCXX::android_view_MenuInflater getMenuInflater();
	 void setOnMenuItemClickListener(AndroidCXX::android_widget_PopupMenu_OnMenuItemClickListener& arg0);
	 AndroidCXX::android_view_Menu getMenu();
	 void dismiss();
	 void setOnDismissListener(AndroidCXX::android_widget_PopupMenu_OnDismissListener& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_PopupMenu
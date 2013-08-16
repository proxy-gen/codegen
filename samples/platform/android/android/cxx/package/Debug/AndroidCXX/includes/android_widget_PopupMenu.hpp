/*
 * Header (Instance CXX)
 * Author: codegen
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

#include <android_view_Menu.hpp>

#include <android_widget_PopupMenu_OnDismissListener.hpp>

#include <android_widget_PopupMenu_OnMenuItemClickListener.hpp>

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

class android_view_Menu;

class android_widget_PopupMenu_OnDismissListener;

class android_widget_PopupMenu_OnMenuItemClickListener;

class android_content_Context;

class android_view_View;

class android_widget_PopupMenu 
{
public:

	// Public ConstrucXXX
	android_widget_PopupMenu(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_view_View const& arg1);
	android_widget_PopupMenu(const android_widget_PopupMenu& cc);
	android_widget_PopupMenu(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_PopupMenu();
	// Functions
	virtual void  dismiss() ;
	virtual AndroidCXX::android_view_MenuInflater * getMenuInflater() ;
	virtual AndroidCXX::android_view_Menu * getMenu() ;
	virtual void  inflate(int const& arg0) ;
	virtual void  setOnDismissListener(AndroidCXX::android_widget_PopupMenu_OnDismissListener const& arg0) ;
	virtual void  setOnMenuItemClickListener(AndroidCXX::android_widget_PopupMenu_OnMenuItemClickListener const& arg0) ;
	virtual void  show() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_PopupMenu
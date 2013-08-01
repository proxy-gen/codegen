/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
 		 
	
	
	
 		 
	
	
	
 		 
	
	
 		 
	
	
	
	
	
	
	
	
	
 		 
	
	
	
 		 
	
	
	
 		 
	
	
 		 
	
















































// Generated Code 

#ifndef _android_view_MenuItem
#define _android_view_MenuItem
//
// Scroll Down 
//


#include <android_content_Intent.hpp>


#include <java_lang_CharSequence.hpp>

#include <android_graphics_drawable_Drawable.hpp>

#include <android_view_SubMenu.hpp>

#include <android_view_MenuItem_OnMenuItemClickListener.hpp>

#include <android_view_ContextMenu_ContextMenuInfo.hpp>

#include <android_view_View.hpp>

#include <android_view_ActionProvider.hpp>

#include <android_view_MenuItem_OnActionExpandListener.hpp>

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

class android_content_Intent;

class android_view_MenuItem;

class java_lang_CharSequence;

class android_graphics_drawable_Drawable;

class android_view_SubMenu;

class android_view_MenuItem_OnMenuItemClickListener;

class android_view_ContextMenu_ContextMenuInfo;

class android_view_View;

class android_view_ActionProvider;

class android_view_MenuItem_OnActionExpandListener;

class android_view_MenuItem
{
public:

	android_view_MenuItem(const android_view_MenuItem& cc);
	android_view_MenuItem(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_MenuItem();
	// Functions
	 bool isVisible();
	 bool isEnabled();
	 AndroidCXX::android_content_Intent getIntent();
	 AndroidCXX::android_view_MenuItem setIntent(AndroidCXX::android_content_Intent const& arg0);
	 AndroidCXX::android_view_MenuItem setVisible(bool const& arg0);
	 AndroidCXX::android_view_MenuItem setTitle(int const& arg0);
	 AndroidCXX::android_view_MenuItem setTitle(AndroidCXX::java_lang_CharSequence const& arg0);
	 AndroidCXX::java_lang_CharSequence getTitle();
	 AndroidCXX::android_view_MenuItem setEnabled(bool const& arg0);
	 int getItemId();
	 int getGroupId();
	 int getOrder();
	 AndroidCXX::android_view_MenuItem setTitleCondensed(AndroidCXX::java_lang_CharSequence const& arg0);
	 AndroidCXX::java_lang_CharSequence getTitleCondensed();
	 AndroidCXX::android_view_MenuItem setIcon(AndroidCXX::android_graphics_drawable_Drawable const& arg0);
	 AndroidCXX::android_view_MenuItem setIcon(int const& arg0);
	 AndroidCXX::android_graphics_drawable_Drawable getIcon();
	 AndroidCXX::android_view_MenuItem setShortcut(char const& arg0,char const& arg1);
	 AndroidCXX::android_view_MenuItem setNumericShortcut(char const& arg0);
	 char getNumericShortcut();
	 AndroidCXX::android_view_MenuItem setAlphabeticShortcut(char const& arg0);
	 char getAlphabeticShortcut();
	 AndroidCXX::android_view_MenuItem setCheckable(bool const& arg0);
	 bool isCheckable();
	 AndroidCXX::android_view_MenuItem setChecked(bool const& arg0);
	 bool isChecked();
	 bool hasSubMenu();
	 AndroidCXX::android_view_SubMenu getSubMenu();
	 AndroidCXX::android_view_MenuItem setOnMenuItemClickListener(AndroidCXX::android_view_MenuItem_OnMenuItemClickListener const& arg0);
	 AndroidCXX::android_view_ContextMenu_ContextMenuInfo getMenuInfo();
	 void setShowAsAction(int const& arg0);
	 AndroidCXX::android_view_MenuItem setShowAsActionFlags(int const& arg0);
	 AndroidCXX::android_view_MenuItem setActionView(AndroidCXX::android_view_View const& arg0);
	 AndroidCXX::android_view_MenuItem setActionView(int const& arg0);
	 AndroidCXX::android_view_View getActionView();
	 AndroidCXX::android_view_MenuItem setActionProvider(AndroidCXX::android_view_ActionProvider const& arg0);
	 AndroidCXX::android_view_ActionProvider getActionProvider();
	 bool expandActionView();
	 bool collapseActionView();
	 bool isActionViewExpanded();
	 AndroidCXX::android_view_MenuItem setOnActionExpandListener(AndroidCXX::android_view_MenuItem_OnActionExpandListener const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_MenuItem
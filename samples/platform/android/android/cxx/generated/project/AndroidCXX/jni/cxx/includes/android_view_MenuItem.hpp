/*
 * Header (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
 			
		
		
 			
		
		
		
 			
		
		
 			
		
		
		
		
		
		
		
		
 			
		
		
		
 			
		
		
 			
		
		
 			
		


#ifndef _android_view_MenuItem
#define _android_view_MenuItem








































#include <android_view_ActionProvider.hpp>
#include <android_content_Intent.hpp>
#include <android_view_MenuItem_OnActionExpandListener.hpp>
#include <android_graphics_drawable_Drawable.hpp>
#include <android_view_SubMenu.hpp>
#include <android_view_ContextMenu_ContextMenuInfo.hpp>
#include <android_view_MenuItem_OnMenuItemClickListener.hpp>
#include <android_view_View.hpp>
#include <java_lang_CharSequence.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_view_MenuItem
{
public:
	bool isVisible();
	bool isEnabled();
	android_content_Intent getIntent();
	android_view_MenuItem setIntent(android_content_Intent& arg0);
	android_view_MenuItem setVisible(bool& arg0);
	android_view_MenuItem setTitle(int& arg0,java_lang_CharSequence& arg1);
	java_lang_CharSequence getTitle();
	android_view_MenuItem setEnabled(bool& arg0);
	int getItemId();
	int getGroupId();
	int getOrder();
	android_view_MenuItem setTitleCondensed(java_lang_CharSequence& arg0);
	java_lang_CharSequence getTitleCondensed();
	android_view_MenuItem setIcon(android_graphics_drawable_Drawable& arg0,int& arg1);
	android_graphics_drawable_Drawable getIcon();
	android_view_MenuItem setShortcut(char& arg0);
	android_view_MenuItem setNumericShortcut(char& arg0);
	char getNumericShortcut();
	android_view_MenuItem setAlphabeticShortcut(char& arg0);
	char getAlphabeticShortcut();
	android_view_MenuItem setCheckable(bool& arg0);
	bool isCheckable();
	android_view_MenuItem setChecked(bool& arg0);
	bool isChecked();
	bool hasSubMenu();
	android_view_SubMenu getSubMenu();
	android_view_MenuItem setOnMenuItemClickListener(android_view_MenuItem_OnMenuItemClickListener& arg0);
	android_view_ContextMenu_ContextMenuInfo getMenuInfo();
	void setShowAsAction(int& arg0);
	android_view_MenuItem setShowAsActionFlags(int& arg0);
	android_view_MenuItem setActionView(android_view_View& arg0,int& arg1);
	android_view_View getActionView();
	android_view_MenuItem setActionProvider(android_view_ActionProvider& arg0);
	android_view_ActionProvider getActionProvider();
	bool expandActionView();
	bool collapseActionView();
	bool isActionViewExpanded();
	android_view_MenuItem setOnActionExpandListener(android_view_MenuItem_OnActionExpandListener& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_MenuItem
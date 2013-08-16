/*
 * Header (Instance CXX)
 * Author: codegen
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



#include <java_lang_Object.hpp>

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

class android_view_ActionProvider;

class android_view_View;

class android_graphics_drawable_Drawable;

class android_content_Intent;

class android_view_ContextMenu_ContextMenuInfo;

class android_view_SubMenu;

class java_lang_CharSequence;


class android_view_MenuItem_OnActionExpandListener;

class android_view_MenuItem_OnMenuItemClickListener;

class android_view_MenuItem : public java_lang_Object
{
public:

	android_view_MenuItem(const android_view_MenuItem& cc);
	android_view_MenuItem(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_MenuItem();
	// Functions
	virtual bool  collapseActionView() ;
	virtual bool  expandActionView() ;
	virtual AndroidCXX::android_view_ActionProvider * getActionProvider() ;
	virtual AndroidCXX::android_view_View * getActionView() ;
	virtual char  getAlphabeticShortcut() ;
	virtual int  getGroupId() ;
	virtual AndroidCXX::android_graphics_drawable_Drawable * getIcon() ;
	virtual AndroidCXX::android_content_Intent * getIntent() ;
	virtual int  getItemId() ;
	virtual AndroidCXX::android_view_ContextMenu_ContextMenuInfo * getMenuInfo() ;
	virtual char  getNumericShortcut() ;
	virtual int  getOrder() ;
	virtual AndroidCXX::android_view_SubMenu * getSubMenu() ;
	virtual AndroidCXX::java_lang_CharSequence * getTitleCondensed() ;
	virtual AndroidCXX::java_lang_CharSequence * getTitle() ;
	virtual bool  hasSubMenu() ;
	virtual bool  isActionViewExpanded() ;
	virtual bool  isCheckable() ;
	virtual bool  isChecked() ;
	virtual bool  isEnabled() ;
	virtual bool  isVisible() ;
	virtual AndroidCXX::android_view_MenuItem * setActionProvider(AndroidCXX::android_view_ActionProvider const& arg0) ;
	virtual AndroidCXX::android_view_MenuItem * setActionView(AndroidCXX::android_view_View const& arg0) ;
	virtual AndroidCXX::android_view_MenuItem * setActionView(int const& arg0) ;
	virtual AndroidCXX::android_view_MenuItem * setAlphabeticShortcut(char const& arg0) ;
	virtual AndroidCXX::android_view_MenuItem * setCheckable(bool const& arg0) ;
	virtual AndroidCXX::android_view_MenuItem * setChecked(bool const& arg0) ;
	virtual AndroidCXX::android_view_MenuItem * setEnabled(bool const& arg0) ;
	virtual AndroidCXX::android_view_MenuItem * setIcon(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual AndroidCXX::android_view_MenuItem * setIcon(int const& arg0) ;
	virtual AndroidCXX::android_view_MenuItem * setIntent(AndroidCXX::android_content_Intent const& arg0) ;
	virtual AndroidCXX::android_view_MenuItem * setNumericShortcut(char const& arg0) ;
	virtual AndroidCXX::android_view_MenuItem * setOnActionExpandListener(AndroidCXX::android_view_MenuItem_OnActionExpandListener const& arg0) ;
	virtual AndroidCXX::android_view_MenuItem * setOnMenuItemClickListener(AndroidCXX::android_view_MenuItem_OnMenuItemClickListener const& arg0) ;
	virtual AndroidCXX::android_view_MenuItem * setShortcut(char const& arg0,char const& arg1) ;
	virtual AndroidCXX::android_view_MenuItem * setShowAsActionFlags(int const& arg0) ;
	virtual void  setShowAsAction(int const& arg0) ;
	virtual AndroidCXX::android_view_MenuItem * setTitleCondensed(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual AndroidCXX::android_view_MenuItem * setTitle(int const& arg0) ;
	virtual AndroidCXX::android_view_MenuItem * setTitle(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual AndroidCXX::android_view_MenuItem * setVisible(bool const& arg0) ;

protected:
	android_view_MenuItem();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_MenuItem
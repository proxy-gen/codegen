/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 		 
	
	
	
	
	
	
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 































































// Generated Code 

#ifndef _android_app_ActionBar
#define _android_app_ActionBar
//
// Scroll Down 
//



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

class android_app_ActionBar_OnMenuVisibilityListener;

class android_app_ActionBar_Tab;

class android_view_View;

class java_lang_CharSequence;

class android_content_Context;

class android_graphics_drawable_Drawable;

class android_app_ActionBar_LayoutParams;

class android_widget_SpinnerAdapter;

class android_app_ActionBar_OnNavigationListener;

class android_app_ActionBar 
{
public:

	android_app_ActionBar(const android_app_ActionBar& cc);
	android_app_ActionBar(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_app_ActionBar();
	// Functions
	virtual void  addOnMenuVisibilityListener(AndroidCXX::android_app_ActionBar_OnMenuVisibilityListener const& arg0) ;
	virtual void  addTab(AndroidCXX::android_app_ActionBar_Tab const& arg0,bool const& arg1) ;
	virtual void  addTab(AndroidCXX::android_app_ActionBar_Tab const& arg0,int const& arg1,bool const& arg2) ;
	virtual void  addTab(AndroidCXX::android_app_ActionBar_Tab const& arg0,int const& arg1) ;
	virtual void  addTab(AndroidCXX::android_app_ActionBar_Tab const& arg0) ;
	virtual AndroidCXX::android_view_View * getCustomView() ;
	virtual int  getDisplayOptions() ;
	virtual int  getHeight() ;
	virtual int  getNavigationItemCount() ;
	virtual int  getNavigationMode() ;
	virtual int  getSelectedNavigationIndex() ;
	virtual AndroidCXX::android_app_ActionBar_Tab * getSelectedTab() ;
	virtual AndroidCXX::java_lang_CharSequence * getSubtitle() ;
	virtual AndroidCXX::android_app_ActionBar_Tab * getTabAt(int const& arg0) ;
	virtual int  getTabCount() ;
	virtual AndroidCXX::android_content_Context * getThemedContext() ;
	virtual AndroidCXX::java_lang_CharSequence * getTitle() ;
	virtual void  hide() ;
	virtual bool  isShowing() ;
	virtual AndroidCXX::android_app_ActionBar_Tab * newTab() ;
	virtual void  removeAllTabs() ;
	virtual void  removeOnMenuVisibilityListener(AndroidCXX::android_app_ActionBar_OnMenuVisibilityListener const& arg0) ;
	virtual void  removeTabAt(int const& arg0) ;
	virtual void  removeTab(AndroidCXX::android_app_ActionBar_Tab const& arg0) ;
	virtual void  selectTab(AndroidCXX::android_app_ActionBar_Tab const& arg0) ;
	virtual void  setBackgroundDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual void  setCustomView(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_app_ActionBar_LayoutParams const& arg1) ;
	virtual void  setCustomView(AndroidCXX::android_view_View const& arg0) ;
	virtual void  setCustomView(int const& arg0) ;
	virtual void  setDisplayHomeAsUpEnabled(bool const& arg0) ;
	virtual void  setDisplayOptions(int const& arg0,int const& arg1) ;
	virtual void  setDisplayOptions(int const& arg0) ;
	virtual void  setDisplayShowCustomEnabled(bool const& arg0) ;
	virtual void  setDisplayShowHomeEnabled(bool const& arg0) ;
	virtual void  setDisplayShowTitleEnabled(bool const& arg0) ;
	virtual void  setDisplayUseLogoEnabled(bool const& arg0) ;
	virtual void  setHomeActionContentDescription(int const& arg0) ;
	virtual void  setHomeActionContentDescription(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual void  setHomeAsUpIndicator(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual void  setHomeAsUpIndicator(int const& arg0) ;
	virtual void  setHomeButtonEnabled(bool const& arg0) ;
	virtual void  setIcon(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual void  setIcon(int const& arg0) ;
	virtual void  setListNavigationCallbacks(AndroidCXX::android_widget_SpinnerAdapter const& arg0,AndroidCXX::android_app_ActionBar_OnNavigationListener const& arg1) ;
	virtual void  setLogo(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual void  setLogo(int const& arg0) ;
	virtual void  setNavigationMode(int const& arg0) ;
	virtual void  setSelectedNavigationItem(int const& arg0) ;
	virtual void  setSplitBackgroundDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual void  setStackedBackgroundDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual void  setSubtitle(int const& arg0) ;
	virtual void  setSubtitle(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual void  setTitle(int const& arg0) ;
	virtual void  setTitle(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual void  show() ;

protected:
	android_app_ActionBar();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_ActionBar
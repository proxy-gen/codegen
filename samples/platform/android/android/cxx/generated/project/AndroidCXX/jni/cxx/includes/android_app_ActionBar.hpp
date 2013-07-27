/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <java_lang_CharSequence.hpp>

#include <android_graphics_drawable_Drawable.hpp>

#include <android_view_View.hpp>

#include <android_app_ActionBar_LayoutParams.hpp>

#include <android_widget_SpinnerAdapter.hpp>

#include <android_app_ActionBar_OnNavigationListener.hpp>

#include <android_app_ActionBar_Tab.hpp>

#include <android_app_ActionBar_OnMenuVisibilityListener.hpp>

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

class java_lang_CharSequence;

class android_graphics_drawable_Drawable;

class android_view_View;

class android_app_ActionBar_LayoutParams;

class android_widget_SpinnerAdapter;

class android_app_ActionBar_OnNavigationListener;

class android_app_ActionBar_Tab;

class android_app_ActionBar_OnMenuVisibilityListener;

class android_content_Context;

class android_app_ActionBar
{
public:

	android_app_ActionBar(const android_app_ActionBar& cc);
	android_app_ActionBar(Proxy proxy);
	// Public Constructors
	android_app_ActionBar();
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_app_ActionBar();
	// Functions
	 void show();
	 void setTitle(AndroidCXX::java_lang_CharSequence const& arg0);
	 void setTitle(int const& arg0);
	 AndroidCXX::java_lang_CharSequence getTitle();
	 int getHeight();
	 void setBackgroundDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0);
	 void setIcon(AndroidCXX::android_graphics_drawable_Drawable const& arg0);
	 void setIcon(int const& arg0);
	 void setSubtitle(int const& arg0);
	 void setSubtitle(AndroidCXX::java_lang_CharSequence const& arg0);
	 void setCustomView(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_app_ActionBar_LayoutParams const& arg1);
	 void setCustomView(int const& arg0);
	 void setCustomView(AndroidCXX::android_view_View const& arg0);
	 AndroidCXX::java_lang_CharSequence getSubtitle();
	 AndroidCXX::android_view_View getCustomView();
	 void hide();
	 void setLogo(int const& arg0);
	 void setLogo(AndroidCXX::android_graphics_drawable_Drawable const& arg0);
	 void setListNavigationCallbacks(AndroidCXX::android_widget_SpinnerAdapter const& arg0,AndroidCXX::android_app_ActionBar_OnNavigationListener const& arg1);
	 void setSelectedNavigationItem(int const& arg0);
	 int getSelectedNavigationIndex();
	 int getNavigationItemCount();
	 void setDisplayOptions(int const& arg0);
	 void setDisplayOptions(int const& arg0,int const& arg1);
	 void setDisplayUseLogoEnabled(bool const& arg0);
	 void setDisplayShowHomeEnabled(bool const& arg0);
	 void setDisplayHomeAsUpEnabled(bool const& arg0);
	 void setDisplayShowTitleEnabled(bool const& arg0);
	 void setDisplayShowCustomEnabled(bool const& arg0);
	 void setStackedBackgroundDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0);
	 void setSplitBackgroundDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0);
	 int getNavigationMode();
	 void setNavigationMode(int const& arg0);
	 int getDisplayOptions();
	 AndroidCXX::android_app_ActionBar_Tab newTab();
	 void addTab(AndroidCXX::android_app_ActionBar_Tab const& arg0,int const& arg1,bool const& arg2);
	 void addTab(AndroidCXX::android_app_ActionBar_Tab const& arg0,int const& arg1);
	 void addTab(AndroidCXX::android_app_ActionBar_Tab const& arg0,bool const& arg1);
	 void addTab(AndroidCXX::android_app_ActionBar_Tab const& arg0);
	 void removeTab(AndroidCXX::android_app_ActionBar_Tab const& arg0);
	 void removeTabAt(int const& arg0);
	 void removeAllTabs();
	 void selectTab(AndroidCXX::android_app_ActionBar_Tab const& arg0);
	 AndroidCXX::android_app_ActionBar_Tab getSelectedTab();
	 AndroidCXX::android_app_ActionBar_Tab getTabAt(int const& arg0);
	 int getTabCount();
	 bool isShowing();
	 void addOnMenuVisibilityListener(AndroidCXX::android_app_ActionBar_OnMenuVisibilityListener const& arg0);
	 void removeOnMenuVisibilityListener(AndroidCXX::android_app_ActionBar_OnMenuVisibilityListener const& arg0);
	 void setHomeButtonEnabled(bool const& arg0);
	 AndroidCXX::android_content_Context getThemedContext();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_ActionBar
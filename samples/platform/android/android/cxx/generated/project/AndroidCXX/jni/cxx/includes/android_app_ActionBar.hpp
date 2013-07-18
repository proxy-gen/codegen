/*
 * Header (Abstract CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
 			
 			
 			
 			
 			
		
		
 			
 			
 			
 			
 			
		
 			
 			
 			
		
		
 			
 			
		


#ifndef _android_app_ActionBar
#define _android_app_ActionBar











































#include <android_content_Context.hpp>
#include <android_app_ActionBar_LayoutParams.hpp>
#include <android_graphics_drawable_Drawable.hpp>
#include <android_app_ActionBar_OnMenuVisibilityListener.hpp>
#include <android_app_ActionBar_OnNavigationListener.hpp>
#include <android_view_View.hpp>
#include <android_widget_SpinnerAdapter.hpp>
#include <java_lang_CharSequence.hpp>
#include <android_app_ActionBar_Tab.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_app_ActionBar
{
public:
 void show();
 void setTitle(java_lang_CharSequence& arg0,int& arg1);
 java_lang_CharSequence getTitle();
 int getHeight();
 void setBackgroundDrawable(android_graphics_drawable_Drawable& arg0);
 void setIcon(android_graphics_drawable_Drawable& arg0,int& arg1);
 void setSubtitle(int& arg0,java_lang_CharSequence& arg1);
 void setCustomView(android_view_View& arg0,android_app_ActionBar_LayoutParams& arg1,int& arg2);
 java_lang_CharSequence getSubtitle();
 android_view_View getCustomView();
 void hide();
 void setLogo(int& arg0,android_graphics_drawable_Drawable& arg1);
 void setListNavigationCallbacks(android_widget_SpinnerAdapter& arg0,android_app_ActionBar_OnNavigationListener& arg1);
 void setSelectedNavigationItem(int& arg0);
 int getSelectedNavigationIndex();
 int getNavigationItemCount();
 void setDisplayOptions(int& arg0);
 void setDisplayUseLogoEnabled(bool& arg0);
 void setDisplayShowHomeEnabled(bool& arg0);
 void setDisplayHomeAsUpEnabled(bool& arg0);
 void setDisplayShowTitleEnabled(bool& arg0);
 void setDisplayShowCustomEnabled(bool& arg0);
 void setStackedBackgroundDrawable(android_graphics_drawable_Drawable& arg0);
 void setSplitBackgroundDrawable(android_graphics_drawable_Drawable& arg0);
 int getNavigationMode();
 void setNavigationMode(int& arg0);
 int getDisplayOptions();
 android_app_ActionBar_Tab newTab();
 void addTab(android_app_ActionBar_Tab& arg0,int& arg1,bool& arg2);
 void removeTab(android_app_ActionBar_Tab& arg0);
 void removeTabAt(int& arg0);
 void removeAllTabs();
 void selectTab(android_app_ActionBar_Tab& arg0);
 android_app_ActionBar_Tab getSelectedTab();
 android_app_ActionBar_Tab getTabAt(int& arg0);
 int getTabCount();
 bool isShowing();
 void addOnMenuVisibilityListener(android_app_ActionBar_OnMenuVisibilityListener& arg0);
 void removeOnMenuVisibilityListener(android_app_ActionBar_OnMenuVisibilityListener& arg0);
 void setHomeButtonEnabled(bool& arg0);
 android_content_Context getThemedContext();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_ActionBar
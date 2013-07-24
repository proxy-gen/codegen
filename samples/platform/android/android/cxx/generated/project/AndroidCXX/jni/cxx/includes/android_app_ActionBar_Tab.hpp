/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
 		 
	
	
	
 		 
	
	
 		 
	
	
	
 		 
	
	
 		 
	
	
	
 		 
	

























// Generated Code 

#ifndef _android_app_ActionBar_Tab
#define _android_app_ActionBar_Tab
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <java_lang_CharSequence.hpp>


#include <android_graphics_drawable_Drawable.hpp>

#include <android_view_View.hpp>

#include <android_app_ActionBar_TabListener.hpp>

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

class java_lang_Object;

class java_lang_CharSequence;

class android_app_ActionBar_Tab;

class android_graphics_drawable_Drawable;

class android_view_View;

class android_app_ActionBar_TabListener;

class android_app_ActionBar_Tab
{
public:

	android_app_ActionBar_Tab(const android_app_ActionBar_Tab& cc);
	android_app_ActionBar_Tab(void * proxy);
	// Public Constructors
	android_app_ActionBar_Tab();
	// TODO: remove
	// 
	// Default Destructor
	virtual ~android_app_ActionBar_Tab();
	// Functions
	 AndroidCXX::java_lang_Object getTag();
	 int getPosition();
	 AndroidCXX::android_app_ActionBar_Tab setText(AndroidCXX::java_lang_CharSequence& arg0);
	 AndroidCXX::android_app_ActionBar_Tab setText(int& arg0);
	 AndroidCXX::java_lang_CharSequence getText();
	 AndroidCXX::android_app_ActionBar_Tab setTag(AndroidCXX::java_lang_Object& arg0);
	 AndroidCXX::java_lang_CharSequence getContentDescription();
	 AndroidCXX::android_app_ActionBar_Tab setContentDescription(AndroidCXX::java_lang_CharSequence& arg0);
	 AndroidCXX::android_app_ActionBar_Tab setContentDescription(int& arg0);
	 AndroidCXX::android_app_ActionBar_Tab setIcon(int& arg0);
	 AndroidCXX::android_app_ActionBar_Tab setIcon(AndroidCXX::android_graphics_drawable_Drawable& arg0);
	 AndroidCXX::android_graphics_drawable_Drawable getIcon();
	 AndroidCXX::android_app_ActionBar_Tab setCustomView(AndroidCXX::android_view_View& arg0);
	 AndroidCXX::android_app_ActionBar_Tab setCustomView(int& arg0);
	 AndroidCXX::android_view_View getCustomView();
	 AndroidCXX::android_app_ActionBar_Tab setTabListener(AndroidCXX::android_app_ActionBar_TabListener& arg0);
	 void select();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_ActionBar_Tab
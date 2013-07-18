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

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class java_lang_Object;

class java_lang_CharSequence;


class android_graphics_drawable_Drawable;

class android_view_View;

class android_app_ActionBar_TabListener;

class android_app_ActionBar_Tab
{
public:
 java_lang_Object getTag();
 int getPosition();
 android_app_ActionBar_Tab setText(java_lang_CharSequence& arg0,int& arg1);
 java_lang_CharSequence getText();
 android_app_ActionBar_Tab setTag(java_lang_Object& arg0);
 java_lang_CharSequence getContentDescription();
 android_app_ActionBar_Tab setContentDescription(java_lang_CharSequence& arg0,int& arg1);
 android_app_ActionBar_Tab setIcon(int& arg0,android_graphics_drawable_Drawable& arg1);
 android_graphics_drawable_Drawable getIcon();
 android_app_ActionBar_Tab setCustomView(android_view_View& arg0,int& arg1);
 android_view_View getCustomView();
 android_app_ActionBar_Tab setTabListener(android_app_ActionBar_TabListener& arg0);
 void select();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_ActionBar_Tab
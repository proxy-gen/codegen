/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
 			
 			
 			
		
 			
 			
		

// Generated Code 

#ifndef _android_widget_TabHost_TabSpec
#define _android_widget_TabHost_TabSpec
//
// Scroll Down 
//






#include <java_lang_String.hpp>

#include <java_lang_CharSequence.hpp>

#include <android_graphics_drawable_Drawable.hpp>

#include <android_view_View.hpp>


#include <android_widget_TabHost_TabContentFactory.hpp>

#include <android_content_Intent.hpp>

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

class java_lang_String;

class java_lang_CharSequence;

class android_graphics_drawable_Drawable;

class android_view_View;


class android_widget_TabHost_TabContentFactory;

class android_content_Intent;

class android_widget_TabHost_TabSpec
{
public:
 java_lang_String getTag();
 android_widget_TabHost_TabSpec setIndicator(java_lang_CharSequence& arg0,android_graphics_drawable_Drawable& arg1,android_view_View& arg2);
 android_widget_TabHost_TabSpec setContent(int& arg0,android_widget_TabHost_TabContentFactory& arg1,android_content_Intent& arg2);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_TabHost_TabSpec
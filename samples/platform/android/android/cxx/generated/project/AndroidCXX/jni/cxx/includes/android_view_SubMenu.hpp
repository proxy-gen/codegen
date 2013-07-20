/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
 		 
	
 		 
	
 		 
	
 		 
	

// Generated Code 

#ifndef _android_view_SubMenu
#define _android_view_SubMenu
//
// Scroll Down 
//









#include <android_view_MenuItem.hpp>

#include <android_graphics_drawable_Drawable.hpp>


#include <java_lang_CharSequence.hpp>

#include <android_view_View.hpp>

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

class android_view_MenuItem;

class android_graphics_drawable_Drawable;

class android_view_SubMenu;

class java_lang_CharSequence;

class android_view_View;

class android_view_SubMenu
{
public:
	 android_view_MenuItem *  getItem();
	 android_view_SubMenu *  setIcon(android_graphics_drawable_Drawable& arg0,int& arg1);
	 android_view_SubMenu *  setHeaderTitle(int& arg0,java_lang_CharSequence& arg1);
	 android_view_SubMenu *  setHeaderIcon(android_graphics_drawable_Drawable& arg0,int& arg1);
	 android_view_SubMenu *  setHeaderView(android_view_View& arg0);
	 void clearHeader();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_SubMenu
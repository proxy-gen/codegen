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
#include <CXXTypes.hpp>


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class android_view_MenuItem;

class android_graphics_drawable_Drawable;

class android_view_SubMenu;

class java_lang_CharSequence;

class android_view_View;

class android_view_SubMenu
{
public:

	android_view_SubMenu(const android_view_SubMenu& cc);
	android_view_SubMenu(void * proxy);
	// Public Constructors
	android_view_SubMenu();
	// Default Destructor
	virtual ~android_view_SubMenu();
	// Functions
	 AndroidCXX::android_view_MenuItem getItem();
	 AndroidCXX::android_view_SubMenu setIcon(AndroidCXX::android_graphics_drawable_Drawable& arg0);
	 AndroidCXX::android_view_SubMenu setIcon(int& arg0);
	 AndroidCXX::android_view_SubMenu setHeaderTitle(int& arg0);
	 AndroidCXX::android_view_SubMenu setHeaderTitle(AndroidCXX::java_lang_CharSequence& arg0);
	 AndroidCXX::android_view_SubMenu setHeaderIcon(AndroidCXX::android_graphics_drawable_Drawable& arg0);
	 AndroidCXX::android_view_SubMenu setHeaderIcon(int& arg0);
	 AndroidCXX::android_view_SubMenu setHeaderView(AndroidCXX::android_view_View& arg0);
	 void clearHeader();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_SubMenu
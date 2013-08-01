/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
 		 
	
	
 		 
	
 		 
	













// Generated Code 

#ifndef _android_view_ContextMenu
#define _android_view_ContextMenu
//
// Scroll Down 
//



#include <java_lang_CharSequence.hpp>

#include <android_graphics_drawable_Drawable.hpp>

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

// Forward Declarations

class android_view_ContextMenu;

class java_lang_CharSequence;

class android_graphics_drawable_Drawable;

class android_view_View;

class android_view_ContextMenu
{
public:

	android_view_ContextMenu(const android_view_ContextMenu& cc);
	android_view_ContextMenu(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_ContextMenu();
	// Functions
	 AndroidCXX::android_view_ContextMenu setHeaderTitle(int const& arg0);
	 AndroidCXX::android_view_ContextMenu setHeaderTitle(AndroidCXX::java_lang_CharSequence const& arg0);
	 AndroidCXX::android_view_ContextMenu setHeaderIcon(int const& arg0);
	 AndroidCXX::android_view_ContextMenu setHeaderIcon(AndroidCXX::android_graphics_drawable_Drawable const& arg0);
	 AndroidCXX::android_view_ContextMenu setHeaderView(AndroidCXX::android_view_View const& arg0);
	 void clearHeader();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_ContextMenu
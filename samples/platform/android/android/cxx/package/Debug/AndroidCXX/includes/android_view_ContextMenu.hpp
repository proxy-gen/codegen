/*
 * Header (Instance CXX)
 * Author: codegen
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



#include <android_view_Menu.hpp>

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

class android_graphics_drawable_Drawable;


class java_lang_CharSequence;

class android_view_View;

class android_view_ContextMenu : public android_view_Menu
{
public:

	android_view_ContextMenu(const android_view_ContextMenu& cc);
	android_view_ContextMenu(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_ContextMenu();
	// Functions
	virtual void  clearHeader() ;
	virtual AndroidCXX::android_view_ContextMenu * setHeaderIcon(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual AndroidCXX::android_view_ContextMenu * setHeaderIcon(int const& arg0) ;
	virtual AndroidCXX::android_view_ContextMenu * setHeaderTitle(int const& arg0) ;
	virtual AndroidCXX::android_view_ContextMenu * setHeaderTitle(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual AndroidCXX::android_view_ContextMenu * setHeaderView(AndroidCXX::android_view_View const& arg0) ;

protected:
	android_view_ContextMenu();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_ContextMenu
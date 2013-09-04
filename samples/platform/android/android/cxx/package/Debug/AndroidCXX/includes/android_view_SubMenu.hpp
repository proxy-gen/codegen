/*
 * Header (Instance CXX)
 * Author: codegen
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

class android_view_MenuItem;

class android_graphics_drawable_Drawable;


class java_lang_CharSequence;

class android_view_View;

class android_view_SubMenu : public AndroidCXX::android_view_Menu
{
public:

	android_view_SubMenu(const android_view_SubMenu& cc);
	android_view_SubMenu(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_view_SubMenu();
	// Functions
	virtual void  clearHeader() ;
	virtual AndroidCXX::android_view_MenuItem * getItem() ;
	virtual AndroidCXX::android_view_SubMenu * setHeaderIcon(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual AndroidCXX::android_view_SubMenu * setHeaderIcon(int const& arg0) ;
	virtual AndroidCXX::android_view_SubMenu * setHeaderTitle(int const& arg0) ;
	virtual AndroidCXX::android_view_SubMenu * setHeaderTitle(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual AndroidCXX::android_view_SubMenu * setHeaderView(AndroidCXX::android_view_View const& arg0) ;
	virtual AndroidCXX::android_view_SubMenu * setIcon(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual AndroidCXX::android_view_SubMenu * setIcon(int const& arg0) ;

protected:
	android_view_SubMenu();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_SubMenu
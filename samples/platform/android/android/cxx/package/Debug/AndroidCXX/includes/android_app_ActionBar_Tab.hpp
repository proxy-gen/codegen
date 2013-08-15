/*
 * Header (Instance CXX)
 * Author: codegen
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


class android_graphics_drawable_Drawable;

class android_view_View;

class android_app_ActionBar_TabListener;

class android_app_ActionBar_Tab 
{
public:

	android_app_ActionBar_Tab(const android_app_ActionBar_Tab& cc);
	android_app_ActionBar_Tab(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_app_ActionBar_Tab();
	// Functions
	virtual AndroidCXX::java_lang_Object * getTag() ;
	virtual int  getPosition() ;
	virtual AndroidCXX::android_app_ActionBar_Tab * setText(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual AndroidCXX::android_app_ActionBar_Tab * setText(int const& arg0) ;
	virtual AndroidCXX::java_lang_CharSequence * getContentDescription() ;
	virtual AndroidCXX::android_app_ActionBar_Tab * setContentDescription(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual AndroidCXX::android_app_ActionBar_Tab * setContentDescription(int const& arg0) ;
	virtual AndroidCXX::android_app_ActionBar_Tab * setTag(AndroidCXX::java_lang_Object const& arg0) ;
	virtual void  select() ;
	virtual AndroidCXX::java_lang_CharSequence * getText() ;
	virtual AndroidCXX::android_app_ActionBar_Tab * setIcon(int const& arg0) ;
	virtual AndroidCXX::android_app_ActionBar_Tab * setIcon(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual AndroidCXX::android_graphics_drawable_Drawable * getIcon() ;
	virtual AndroidCXX::android_app_ActionBar_Tab * setCustomView(int const& arg0) ;
	virtual AndroidCXX::android_app_ActionBar_Tab * setCustomView(AndroidCXX::android_view_View const& arg0) ;
	virtual AndroidCXX::android_view_View * getCustomView() ;
	virtual AndroidCXX::android_app_ActionBar_Tab * setTabListener(AndroidCXX::android_app_ActionBar_TabListener const& arg0) ;

protected:
	android_app_ActionBar_Tab();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_ActionBar_Tab
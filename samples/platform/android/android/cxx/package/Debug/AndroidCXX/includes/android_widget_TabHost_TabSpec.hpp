/*
 * Header (Instance CXX)
 * Author: codegen
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

#include <android_content_Intent.hpp>

#include <android_widget_TabHost_TabContentFactory.hpp>

#include <android_view_View.hpp>

#include <java_lang_CharSequence.hpp>

#include <android_graphics_drawable_Drawable.hpp>


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

class java_lang_String;

class android_content_Intent;


class android_widget_TabHost_TabContentFactory;

class android_view_View;

class java_lang_CharSequence;

class android_graphics_drawable_Drawable;

class android_widget_TabHost_TabSpec 
{
public:

	// Public ConstrucXXX
	android_widget_TabHost_TabSpec(const android_widget_TabHost_TabSpec& cc);
	android_widget_TabHost_TabSpec(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_TabHost_TabSpec();
	// Functions
	virtual AndroidCXX::java_lang_String * getTag() ;
	virtual AndroidCXX::android_widget_TabHost_TabSpec * setContent(AndroidCXX::android_content_Intent const& arg0) ;
	virtual AndroidCXX::android_widget_TabHost_TabSpec * setContent(AndroidCXX::android_widget_TabHost_TabContentFactory const& arg0) ;
	virtual AndroidCXX::android_widget_TabHost_TabSpec * setContent(int const& arg0) ;
	virtual AndroidCXX::android_widget_TabHost_TabSpec * setIndicator(AndroidCXX::android_view_View const& arg0) ;
	virtual AndroidCXX::android_widget_TabHost_TabSpec * setIndicator(AndroidCXX::java_lang_CharSequence const& arg0,AndroidCXX::android_graphics_drawable_Drawable const& arg1) ;
	virtual AndroidCXX::android_widget_TabHost_TabSpec * setIndicator(AndroidCXX::java_lang_CharSequence const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_TabHost_TabSpec
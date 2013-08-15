/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	
 		 
 		 
 		 
	
 		 
	


 		 























// Generated Code 

#ifndef _android_widget_Toast
#define _android_widget_Toast
//
// Scroll Down 
//


#include <java_lang_CharSequence.hpp>

#include <android_view_View.hpp>

#include <android_content_Context.hpp>


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

class java_lang_CharSequence;

class android_view_View;

class android_content_Context;


class android_widget_Toast 
{
public:

	// Public ConstrucXXX
	android_widget_Toast(AndroidCXX::android_content_Context const& arg0);
	android_widget_Toast(const android_widget_Toast& cc);
	android_widget_Toast(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_Toast();
	// Functions
	virtual void  setText(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual void  setText(int const& arg0) ;
	virtual void  show() ;
	virtual void  setGravity(int const& arg0,int const& arg1,int const& arg2) ;
	virtual void  setDuration(int const& arg0) ;
	virtual int  getDuration() ;
	virtual void  cancel() ;
	virtual AndroidCXX::android_view_View * getView() ;
	virtual int  getGravity() ;
	virtual void  setView(AndroidCXX::android_view_View const& arg0) ;
	virtual void  setMargin(float const& arg0,float const& arg1) ;
	virtual float  getHorizontalMargin() ;
	virtual float  getVerticalMargin() ;
	virtual int  getXOffset() ;
	virtual int  getYOffset() ;
	static AndroidCXX::android_widget_Toast * makeText(AndroidCXX::android_content_Context const& arg0,AndroidCXX::java_lang_CharSequence const& arg1,int const& arg2) ;
	static AndroidCXX::android_widget_Toast * makeText(AndroidCXX::android_content_Context const& arg0,int const& arg1,int const& arg2) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_Toast
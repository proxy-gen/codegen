/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 


 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
























































// Generated Code 

#ifndef _android_widget_PopupWindow
#define _android_widget_PopupWindow
//
// Scroll Down 
//


#include <android_graphics_drawable_Drawable.hpp>

#include <android_view_View.hpp>

#include <android_widget_PopupWindow_OnDismissListener.hpp>

#include <android_view_View_OnTouchListener.hpp>

#include <android_content_Context.hpp>

#include <android_util_AttributeSet.hpp>


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

class android_view_View;

class android_widget_PopupWindow_OnDismissListener;

class android_view_View_OnTouchListener;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_PopupWindow 
{
public:

	// Public ConstrucXXX
	android_widget_PopupWindow();
	android_widget_PopupWindow(AndroidCXX::android_content_Context const& arg0);
	android_widget_PopupWindow(AndroidCXX::android_view_View const& arg0);
	android_widget_PopupWindow(int const& arg0,int const& arg1);
	android_widget_PopupWindow(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_PopupWindow(AndroidCXX::android_view_View const& arg0,int const& arg1,int const& arg2);
	android_widget_PopupWindow(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	android_widget_PopupWindow(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2,int const& arg3);
	android_widget_PopupWindow(AndroidCXX::android_view_View const& arg0,int const& arg1,int const& arg2,bool const& arg3);
	android_widget_PopupWindow(const android_widget_PopupWindow& cc);
	android_widget_PopupWindow(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_PopupWindow();
	// Functions
	virtual void  dismiss() ;
	virtual int  getAnimationStyle() ;
	virtual AndroidCXX::android_graphics_drawable_Drawable * getBackground() ;
	virtual AndroidCXX::android_view_View * getContentView() ;
	virtual int  getHeight() ;
	virtual int  getInputMethodMode() ;
	virtual int  getMaxAvailableHeight(AndroidCXX::android_view_View const& arg0,int const& arg1) ;
	virtual int  getMaxAvailableHeight(AndroidCXX::android_view_View const& arg0) ;
	virtual int  getSoftInputMode() ;
	virtual int  getWidth() ;
	virtual bool  isAboveAnchor() ;
	virtual bool  isClippingEnabled() ;
	virtual bool  isFocusable() ;
	virtual bool  isOutsideTouchable() ;
	virtual bool  isShowing() ;
	virtual bool  isSplitTouchEnabled() ;
	virtual bool  isTouchable() ;
	virtual void  setAnimationStyle(int const& arg0) ;
	virtual void  setBackgroundDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual void  setClippingEnabled(bool const& arg0) ;
	virtual void  setContentView(AndroidCXX::android_view_View const& arg0) ;
	virtual void  setFocusable(bool const& arg0) ;
	virtual void  setHeight(int const& arg0) ;
	virtual void  setIgnoreCheekPress() ;
	virtual void  setInputMethodMode(int const& arg0) ;
	virtual void  setOnDismissListener(AndroidCXX::android_widget_PopupWindow_OnDismissListener const& arg0) ;
	virtual void  setOutsideTouchable(bool const& arg0) ;
	virtual void  setSoftInputMode(int const& arg0) ;
	virtual void  setSplitTouchEnabled(bool const& arg0) ;
	virtual void  setTouchInterceptor(AndroidCXX::android_view_View_OnTouchListener const& arg0) ;
	virtual void  setTouchable(bool const& arg0) ;
	virtual void  setWidth(int const& arg0) ;
	virtual void  setWindowLayoutMode(int const& arg0,int const& arg1) ;
	virtual void  showAsDropDown(AndroidCXX::android_view_View const& arg0) ;
	virtual void  showAsDropDown(AndroidCXX::android_view_View const& arg0,int const& arg1,int const& arg2) ;
	virtual void  showAtLocation(AndroidCXX::android_view_View const& arg0,int const& arg1,int const& arg2,int const& arg3) ;
	virtual void  update(int const& arg0,int const& arg1) ;
	virtual void  update() ;
	virtual void  update(AndroidCXX::android_view_View const& arg0,int const& arg1,int const& arg2,int const& arg3,int const& arg4) ;
	virtual void  update(AndroidCXX::android_view_View const& arg0,int const& arg1,int const& arg2) ;
	virtual void  update(int const& arg0,int const& arg1,int const& arg2,int const& arg3,bool const& arg4) ;
	virtual void  update(int const& arg0,int const& arg1,int const& arg2,int const& arg3) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_PopupWindow
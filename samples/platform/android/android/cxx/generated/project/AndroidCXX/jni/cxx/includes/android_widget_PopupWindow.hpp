/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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






































#include <android_view_View.hpp>

#include <android_graphics_drawable_Drawable.hpp>

#include <android_widget_PopupWindow_OnDismissListener.hpp>

#include <android_view_View_OnTouchListener.hpp>

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

class android_view_View;

class android_graphics_drawable_Drawable;

class android_widget_PopupWindow_OnDismissListener;

class android_view_View_OnTouchListener;

class android_widget_PopupWindow
{
public:
 void update(int& arg0,android_view_View& arg1,bool& arg2);
 bool isFocusable();
 void setContentView(android_view_View& arg0);
 void setFocusable(bool& arg0);
 int getWidth();
 int getHeight();
 void setBackgroundDrawable(android_graphics_drawable_Drawable& arg0);
 android_graphics_drawable_Drawable getBackground();
 void setSoftInputMode(int& arg0);
 bool isShowing();
 void dismiss();
 void setOnDismissListener(android_widget_PopupWindow_OnDismissListener& arg0);
 void setHeight(int& arg0);
 void setWidth(int& arg0);
 int getSoftInputMode();
 void setAnimationStyle(int& arg0);
 int getAnimationStyle();
 void setInputMethodMode(int& arg0);
 int getInputMethodMode();
 void setIgnoreCheekPress();
 android_view_View getContentView();
 void setTouchInterceptor(android_view_View_OnTouchListener& arg0);
 bool isTouchable();
 void setTouchable(bool& arg0);
 bool isOutsideTouchable();
 void setOutsideTouchable(bool& arg0);
 bool isClippingEnabled();
 void setClippingEnabled(bool& arg0);
 bool isSplitTouchEnabled();
 void setSplitTouchEnabled(bool& arg0);
 void setWindowLayoutMode(int& arg0);
 void showAtLocation(android_view_View& arg0,int& arg1);
 void showAsDropDown(android_view_View& arg0,int& arg1);
 bool isAboveAnchor();
 int getMaxAvailableHeight(android_view_View& arg0,int& arg1);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_PopupWindow
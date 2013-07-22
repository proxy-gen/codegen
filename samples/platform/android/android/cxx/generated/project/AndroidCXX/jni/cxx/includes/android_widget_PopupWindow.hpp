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

class android_view_View;

class android_graphics_drawable_Drawable;

class android_widget_PopupWindow_OnDismissListener;

class android_view_View_OnTouchListener;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_PopupWindow
{
public:

	android_widget_PopupWindow(const android_widget_PopupWindow& cc);
	android_widget_PopupWindow(void * proxy);
	// Public Constructors
	android_widget_PopupWindow(AndroidCXX::android_view_View& arg0,int& arg1,int& arg2,bool& arg3);
	android_widget_PopupWindow(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1);
	android_widget_PopupWindow(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1,int& arg2);
	android_widget_PopupWindow(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1,int& arg2,int& arg3);
	android_widget_PopupWindow();
	android_widget_PopupWindow(AndroidCXX::android_view_View& arg0);
	android_widget_PopupWindow(int& arg0,int& arg1);
	android_widget_PopupWindow(AndroidCXX::android_view_View& arg0,int& arg1,int& arg2);
	android_widget_PopupWindow(AndroidCXX::android_content_Context& arg0);
	// Default Destructor
	virtual ~android_widget_PopupWindow();
	// Functions
	 void update(int& arg0,int& arg1,int& arg2,int& arg3);
	 void update();
	 void update(AndroidCXX::android_view_View& arg0,int& arg1,int& arg2,int& arg3,int& arg4);
	 void update(AndroidCXX::android_view_View& arg0,int& arg1,int& arg2);
	 void update(int& arg0,int& arg1,int& arg2,int& arg3,bool& arg4);
	 void update(int& arg0,int& arg1);
	 bool isFocusable();
	 void setContentView(AndroidCXX::android_view_View& arg0);
	 void setFocusable(bool& arg0);
	 int getWidth();
	 int getHeight();
	 void setBackgroundDrawable(AndroidCXX::android_graphics_drawable_Drawable& arg0);
	 AndroidCXX::android_graphics_drawable_Drawable getBackground();
	 void setSoftInputMode(int& arg0);
	 bool isShowing();
	 void dismiss();
	 void setOnDismissListener(AndroidCXX::android_widget_PopupWindow_OnDismissListener& arg0);
	 void setHeight(int& arg0);
	 void setWidth(int& arg0);
	 int getSoftInputMode();
	 void setAnimationStyle(int& arg0);
	 int getAnimationStyle();
	 void setInputMethodMode(int& arg0);
	 int getInputMethodMode();
	 void setIgnoreCheekPress();
	 AndroidCXX::android_view_View getContentView();
	 void setTouchInterceptor(AndroidCXX::android_view_View_OnTouchListener& arg0);
	 bool isTouchable();
	 void setTouchable(bool& arg0);
	 bool isOutsideTouchable();
	 void setOutsideTouchable(bool& arg0);
	 bool isClippingEnabled();
	 void setClippingEnabled(bool& arg0);
	 bool isSplitTouchEnabled();
	 void setSplitTouchEnabled(bool& arg0);
	 void setWindowLayoutMode(int& arg0,int& arg1);
	 void showAtLocation(AndroidCXX::android_view_View& arg0,int& arg1,int& arg2,int& arg3);
	 void showAsDropDown(AndroidCXX::android_view_View& arg0);
	 void showAsDropDown(AndroidCXX::android_view_View& arg0,int& arg1,int& arg2);
	 bool isAboveAnchor();
	 int getMaxAvailableHeight(AndroidCXX::android_view_View& arg0,int& arg1);
	 int getMaxAvailableHeight(AndroidCXX::android_view_View& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_PopupWindow
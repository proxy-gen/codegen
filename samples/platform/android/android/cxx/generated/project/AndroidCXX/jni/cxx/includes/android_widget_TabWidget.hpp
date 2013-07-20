/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 

// Generated Code 

#ifndef _android_widget_TabWidget
#define _android_widget_TabWidget
//
// Scroll Down 
//






















#include <android_view_View.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_graphics_Canvas.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_graphics_drawable_Drawable.hpp>

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

class android_view_accessibility_AccessibilityEvent;

class android_graphics_Canvas;

class android_view_accessibility_AccessibilityNodeInfo;

class android_graphics_drawable_Drawable;

class android_widget_TabWidget
{
public:
	android_widget_TabWidget(const android_widget_TabWidget& cc);
	android_widget_TabWidget(void * proxy);
	virtual ~android_widget_TabWidget();
	 void addView(android_view_View& arg0);
	 bool dispatchPopulateAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
	 void dispatchDraw(android_graphics_Canvas& arg0);
	 void removeAllViews();
	 void childDrawableStateChanged(android_view_View& arg0);
	 void sendAccessibilityEventUnchecked(android_view_accessibility_AccessibilityEvent& arg0);
	 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
	 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
	 void setEnabled(bool& arg0);
	 void onFocusChange(android_view_View& arg0,bool& arg1);
	 int getTabCount();
	 void setDividerDrawable(int& arg0,android_graphics_drawable_Drawable& arg1);
	 void setCurrentTab(int& arg0);
	 android_view_View *  getChildTabViewAt(int& arg0);
	 void setLeftStripDrawable(android_graphics_drawable_Drawable& arg0,int& arg1);
	 void setRightStripDrawable(android_graphics_drawable_Drawable& arg0,int& arg1);
	 void setStripEnabled(bool& arg0);
	 bool isStripEnabled();
	 void focusCurrentTab(int& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_TabWidget
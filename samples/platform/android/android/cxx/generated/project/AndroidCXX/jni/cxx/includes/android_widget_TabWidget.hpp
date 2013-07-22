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

class android_view_View;

class android_view_accessibility_AccessibilityEvent;

class android_graphics_Canvas;

class android_view_accessibility_AccessibilityNodeInfo;

class android_graphics_drawable_Drawable;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_TabWidget
{
public:

	android_widget_TabWidget(const android_widget_TabWidget& cc);
	android_widget_TabWidget(void * proxy);
	// Public Constructors
	android_widget_TabWidget(AndroidCXX::android_content_Context& arg0);
	android_widget_TabWidget(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1);
	android_widget_TabWidget(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1,int& arg2);
	android_widget_TabWidget();
	// Default Destructor
	virtual ~android_widget_TabWidget();
	// Functions
	 void addView(AndroidCXX::android_view_View& arg0);
	 bool dispatchPopulateAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent& arg0);
	 void dispatchDraw(AndroidCXX::android_graphics_Canvas& arg0);
	 void removeAllViews();
	 void childDrawableStateChanged(AndroidCXX::android_view_View& arg0);
	 void sendAccessibilityEventUnchecked(AndroidCXX::android_view_accessibility_AccessibilityEvent& arg0);
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo& arg0);
	 void setEnabled(bool& arg0);
	 void onFocusChange(AndroidCXX::android_view_View& arg0,bool& arg1);
	 int getTabCount();
	 void setDividerDrawable(int& arg0);
	 void setDividerDrawable(AndroidCXX::android_graphics_drawable_Drawable& arg0);
	 void setCurrentTab(int& arg0);
	 AndroidCXX::android_view_View getChildTabViewAt(int& arg0);
	 void setLeftStripDrawable(AndroidCXX::android_graphics_drawable_Drawable& arg0);
	 void setLeftStripDrawable(int& arg0);
	 void setRightStripDrawable(AndroidCXX::android_graphics_drawable_Drawable& arg0);
	 void setRightStripDrawable(int& arg0);
	 void setStripEnabled(bool& arg0);
	 bool isStripEnabled();
	 void focusCurrentTab(int& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_TabWidget
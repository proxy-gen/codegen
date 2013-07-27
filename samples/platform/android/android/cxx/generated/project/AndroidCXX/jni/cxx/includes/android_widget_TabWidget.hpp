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
	android_widget_TabWidget(Proxy proxy);
	// Public Constructors
	android_widget_TabWidget(AndroidCXX::android_content_Context const& arg0);
	android_widget_TabWidget(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_TabWidget(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_TabWidget();
	// Functions
	 void addView(AndroidCXX::android_view_View const& arg0);
	 bool dispatchPopulateAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0);
	 void dispatchDraw(AndroidCXX::android_graphics_Canvas const& arg0);
	 void removeAllViews();
	 void childDrawableStateChanged(AndroidCXX::android_view_View const& arg0);
	 void sendAccessibilityEventUnchecked(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0);
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0);
	 void setEnabled(bool const& arg0);
	 void onFocusChange(AndroidCXX::android_view_View const& arg0,bool const& arg1);
	 int getTabCount();
	 void setDividerDrawable(int const& arg0);
	 void setDividerDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0);
	 void setCurrentTab(int const& arg0);
	 AndroidCXX::android_view_View getChildTabViewAt(int const& arg0);
	 void setLeftStripDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0);
	 void setLeftStripDrawable(int const& arg0);
	 void setRightStripDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0);
	 void setRightStripDrawable(int const& arg0);
	 void setStripEnabled(bool const& arg0);
	 bool isStripEnabled();
	 void focusCurrentTab(int const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_TabWidget
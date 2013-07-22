/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 		 


 		 
 		 
 		 


















// Generated Code 

#ifndef _android_widget_ZoomControls
#define _android_widget_ZoomControls
//
// Scroll Down 
//


#include <android_view_MotionEvent.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_view_View_OnClickListener.hpp>

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

// Forward Declarations

class android_view_MotionEvent;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_view_View_OnClickListener;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_ZoomControls
{
public:

	android_widget_ZoomControls(const android_widget_ZoomControls& cc);
	android_widget_ZoomControls(void * proxy);
	// Public Constructors
	android_widget_ZoomControls(AndroidCXX::android_content_Context& arg0);
	android_widget_ZoomControls(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1);
	android_widget_ZoomControls();
	// Default Destructor
	virtual ~android_widget_ZoomControls();
	// Functions
	 void show();
	 bool onTouchEvent(AndroidCXX::android_view_MotionEvent& arg0);
	 bool hasFocus();
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo& arg0);
	 void hide();
	 void setZoomSpeed(long& arg0);
	 void setOnZoomInClickListener(AndroidCXX::android_view_View_OnClickListener& arg0);
	 void setOnZoomOutClickListener(AndroidCXX::android_view_View_OnClickListener& arg0);
	 void setIsZoomInEnabled(bool& arg0);
	 void setIsZoomOutEnabled(bool& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ZoomControls
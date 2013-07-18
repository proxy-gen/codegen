/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
 			
 			


#ifndef _android_widget_ZoomControls
#define _android_widget_ZoomControls













#include <android_view_accessibility_AccessibilityNodeInfo.hpp>
#include <android_view_View_OnClickListener.hpp>
#include <android_view_accessibility_AccessibilityEvent.hpp>
#include <android_view_MotionEvent.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_widget_ZoomControls
{
public:
 void show();
 bool onTouchEvent(android_view_MotionEvent& arg0);
 bool hasFocus();
 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
 void hide();
 void setZoomSpeed(long& arg0);
 void setOnZoomInClickListener(android_view_View_OnClickListener& arg0);
 void setOnZoomOutClickListener(android_view_View_OnClickListener& arg0);
 void setIsZoomInEnabled(bool& arg0);
 void setIsZoomOutEnabled(bool& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ZoomControls
/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
 			
 			
 			
		
 			
 			
 			
 			
 			
 			
 			
 			
 			


#ifndef _android_widget_Gallery
#define _android_widget_Gallery
























#include <android_os_Bundle.hpp>
#include <android_util_AttributeSet.hpp>
#include <android_view_MotionEvent.hpp>
#include <android_view_ViewGroup_LayoutParams.hpp>
#include <android_view_accessibility_AccessibilityEvent.hpp>
#include <android_view_accessibility_AccessibilityNodeInfo.hpp>
#include <android_view_View.hpp>
#include <android_view_KeyEvent.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_widget_Gallery
{
public:
 bool onKeyDown(int& arg0,android_view_KeyEvent& arg1);
 bool onKeyUp(int& arg0,android_view_KeyEvent& arg1);
 bool onTouchEvent(android_view_MotionEvent& arg0);
 bool dispatchKeyEvent(android_view_KeyEvent& arg0);
 bool showContextMenuForChild(android_view_View& arg0);
 void dispatchSetSelected(bool& arg0);
 android_view_ViewGroup_LayoutParams generateLayoutParams(android_util_AttributeSet& arg0);
 bool showContextMenu();
 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
 bool performAccessibilityAction(int& arg0,android_os_Bundle& arg1);
 void setGravity(int& arg0);
 bool onScroll(android_view_MotionEvent& arg0,float& arg1);
 void setCallbackDuringFling(bool& arg0);
 void setAnimationDuration(int& arg0);
 void setSpacing(int& arg0);
 void setUnselectedAlpha(float& arg0);
 bool onSingleTapUp(android_view_MotionEvent& arg0);
 bool onFling(android_view_MotionEvent& arg0,float& arg1);
 bool onDown(android_view_MotionEvent& arg0);
 void onLongPress(android_view_MotionEvent& arg0);
 void onShowPress(android_view_MotionEvent& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_Gallery
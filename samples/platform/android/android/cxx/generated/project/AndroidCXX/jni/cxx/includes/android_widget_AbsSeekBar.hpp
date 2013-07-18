/*
 * Header (Abstract CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
 			
 			
 			
		


#ifndef _android_widget_AbsSeekBar
#define _android_widget_AbsSeekBar
















#include <android_os_Bundle.hpp>
#include <android_view_MotionEvent.hpp>
#include <android_view_accessibility_AccessibilityEvent.hpp>
#include <android_view_accessibility_AccessibilityNodeInfo.hpp>
#include <android_graphics_drawable_Drawable.hpp>
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

class android_widget_AbsSeekBar
{
public:
 bool onKeyDown(int& arg0,android_view_KeyEvent& arg1);
 bool onTouchEvent(android_view_MotionEvent& arg0);
 void jumpDrawablesToCurrentState();
 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
 bool performAccessibilityAction(int& arg0,android_os_Bundle& arg1);
 void onRtlPropertiesChanged(int& arg0);
 void setMax(int& arg0);
 void setThumb(android_graphics_drawable_Drawable& arg0);
 android_graphics_drawable_Drawable getThumb();
 int getThumbOffset();
 void setThumbOffset(int& arg0);
 void setKeyProgressIncrement(int& arg0);
 int getKeyProgressIncrement();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_AbsSeekBar
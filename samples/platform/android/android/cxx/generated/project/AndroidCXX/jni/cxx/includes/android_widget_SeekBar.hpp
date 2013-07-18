/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			


#ifndef _android_widget_SeekBar
#define _android_widget_SeekBar





#include <android_view_accessibility_AccessibilityNodeInfo.hpp>
#include <android_view_accessibility_AccessibilityEvent.hpp>
#include <android_widget_SeekBar_OnSeekBarChangeListener.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_widget_SeekBar
{
public:
 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
 void setOnSeekBarChangeListener(android_widget_SeekBar_OnSeekBarChangeListener& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_SeekBar
/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
 			


#ifndef _android_widget_ImageSwitcher
#define _android_widget_ImageSwitcher







#include <android_view_accessibility_AccessibilityNodeInfo.hpp>
#include <android_net_Uri.hpp>
#include <android_graphics_drawable_Drawable.hpp>
#include <android_view_accessibility_AccessibilityEvent.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_widget_ImageSwitcher
{
public:
 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
 void setImageResource(int& arg0);
 void setImageURI(android_net_Uri& arg0);
 void setImageDrawable(android_graphics_drawable_Drawable& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ImageSwitcher
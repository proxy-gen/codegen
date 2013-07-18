/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
		
 			
 			


#ifndef _android_view_View_AccessibilityDelegate
#define _android_view_View_AccessibilityDelegate











#include <android_os_Bundle.hpp>
#include <android_view_accessibility_AccessibilityEvent.hpp>
#include <android_view_ViewGroup.hpp>
#include <android_view_accessibility_AccessibilityNodeInfo.hpp>
#include <android_view_View.hpp>
#include <android_view_accessibility_AccessibilityNodeProvider.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_view_View_AccessibilityDelegate
{
public:
 bool dispatchPopulateAccessibilityEvent(android_view_View& arg0,android_view_accessibility_AccessibilityEvent& arg1);
 bool onRequestSendAccessibilityEvent(android_view_ViewGroup& arg0,android_view_View& arg1,android_view_accessibility_AccessibilityEvent& arg2);
 void sendAccessibilityEvent(android_view_View& arg0,int& arg1);
 void sendAccessibilityEventUnchecked(android_view_View& arg0,android_view_accessibility_AccessibilityEvent& arg1);
 void onPopulateAccessibilityEvent(android_view_View& arg0,android_view_accessibility_AccessibilityEvent& arg1);
 void onInitializeAccessibilityEvent(android_view_View& arg0,android_view_accessibility_AccessibilityEvent& arg1);
 void onInitializeAccessibilityNodeInfo(android_view_View& arg0,android_view_accessibility_AccessibilityNodeInfo& arg1);
 android_view_accessibility_AccessibilityNodeProvider getAccessibilityNodeProvider(android_view_View& arg0);
 bool performAccessibilityAction(android_view_View& arg0,int& arg1,android_os_Bundle& arg2);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_View_AccessibilityDelegate
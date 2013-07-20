/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 

// Generated Code 

#ifndef _android_view_View_AccessibilityDelegate
#define _android_view_View_AccessibilityDelegate
//
// Scroll Down 
//












#include <android_view_View.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_ViewGroup.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_view_accessibility_AccessibilityNodeProvider.hpp>

#include <android_os_Bundle.hpp>

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

class android_view_ViewGroup;

class android_view_accessibility_AccessibilityNodeInfo;

class android_view_accessibility_AccessibilityNodeProvider;

class android_os_Bundle;

class android_view_View_AccessibilityDelegate
{
public:
	android_view_View_AccessibilityDelegate(const android_view_View_AccessibilityDelegate& cc);
	android_view_View_AccessibilityDelegate(void * proxy);
	virtual ~android_view_View_AccessibilityDelegate();
	 bool dispatchPopulateAccessibilityEvent(android_view_View& arg0,android_view_accessibility_AccessibilityEvent& arg1);
	 bool onRequestSendAccessibilityEvent(android_view_ViewGroup& arg0,android_view_View& arg1,android_view_accessibility_AccessibilityEvent& arg2);
	 void sendAccessibilityEvent(android_view_View& arg0,int& arg1);
	 void sendAccessibilityEventUnchecked(android_view_View& arg0,android_view_accessibility_AccessibilityEvent& arg1);
	 void onPopulateAccessibilityEvent(android_view_View& arg0,android_view_accessibility_AccessibilityEvent& arg1);
	 void onInitializeAccessibilityEvent(android_view_View& arg0,android_view_accessibility_AccessibilityEvent& arg1);
	 void onInitializeAccessibilityNodeInfo(android_view_View& arg0,android_view_accessibility_AccessibilityNodeInfo& arg1);
	 android_view_accessibility_AccessibilityNodeProvider *  getAccessibilityNodeProvider(android_view_View& arg0);
	 bool performAccessibilityAction(android_view_View& arg0,int& arg1,android_os_Bundle& arg2);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_View_AccessibilityDelegate
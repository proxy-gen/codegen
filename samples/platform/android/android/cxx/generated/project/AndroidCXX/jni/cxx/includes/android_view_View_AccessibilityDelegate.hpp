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
#include <CXXTypes.hpp>


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
	// Public Constructors
	android_view_View_AccessibilityDelegate();
	// TODO: remove
	// 
	// Default Destructor
	virtual ~android_view_View_AccessibilityDelegate();
	// Functions
	 bool dispatchPopulateAccessibilityEvent(AndroidCXX::android_view_View& arg0,AndroidCXX::android_view_accessibility_AccessibilityEvent& arg1);
	 bool onRequestSendAccessibilityEvent(AndroidCXX::android_view_ViewGroup& arg0,AndroidCXX::android_view_View& arg1,AndroidCXX::android_view_accessibility_AccessibilityEvent& arg2);
	 void sendAccessibilityEvent(AndroidCXX::android_view_View& arg0,int& arg1);
	 void sendAccessibilityEventUnchecked(AndroidCXX::android_view_View& arg0,AndroidCXX::android_view_accessibility_AccessibilityEvent& arg1);
	 void onPopulateAccessibilityEvent(AndroidCXX::android_view_View& arg0,AndroidCXX::android_view_accessibility_AccessibilityEvent& arg1);
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_View& arg0,AndroidCXX::android_view_accessibility_AccessibilityEvent& arg1);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_View& arg0,AndroidCXX::android_view_accessibility_AccessibilityNodeInfo& arg1);
	 AndroidCXX::android_view_accessibility_AccessibilityNodeProvider getAccessibilityNodeProvider(AndroidCXX::android_view_View& arg0);
	 bool performAccessibilityAction(AndroidCXX::android_view_View& arg0,int& arg1,AndroidCXX::android_os_Bundle& arg2);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_View_AccessibilityDelegate
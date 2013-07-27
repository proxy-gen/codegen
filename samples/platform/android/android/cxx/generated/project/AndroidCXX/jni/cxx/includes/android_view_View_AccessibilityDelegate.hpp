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
	android_view_View_AccessibilityDelegate(Proxy proxy);
	// Public Constructors
	android_view_View_AccessibilityDelegate();
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_View_AccessibilityDelegate();
	// Functions
	 bool dispatchPopulateAccessibilityEvent(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg1);
	 bool onRequestSendAccessibilityEvent(AndroidCXX::android_view_ViewGroup const& arg0,AndroidCXX::android_view_View const& arg1,AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg2);
	 void sendAccessibilityEvent(AndroidCXX::android_view_View const& arg0,int const& arg1);
	 void sendAccessibilityEventUnchecked(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg1);
	 void onPopulateAccessibilityEvent(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg1);
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg1);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg1);
	 AndroidCXX::android_view_accessibility_AccessibilityNodeProvider getAccessibilityNodeProvider(AndroidCXX::android_view_View const& arg0);
	 bool performAccessibilityAction(AndroidCXX::android_view_View const& arg0,int const& arg1,AndroidCXX::android_os_Bundle const& arg2);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_View_AccessibilityDelegate
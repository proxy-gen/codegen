/*
 * Header (Instance CXX)
 * Author: codegen
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

#include <android_view_accessibility_AccessibilityNodeProvider.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_view_ViewGroup.hpp>

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

class android_view_accessibility_AccessibilityNodeProvider;

class android_view_accessibility_AccessibilityNodeInfo;

class android_view_ViewGroup;

class android_os_Bundle;

class android_view_View_AccessibilityDelegate 
{
public:

	// Public Constructor
	android_view_View_AccessibilityDelegate(Proxy * aProxy = new Proxy());
	android_view_View_AccessibilityDelegate(const android_view_View_AccessibilityDelegate& cc);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_view_View_AccessibilityDelegate();
	// Functions
	virtual bool  dispatchPopulateAccessibilityEvent(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg1) ;
	virtual AndroidCXX::android_view_accessibility_AccessibilityNodeProvider * getAccessibilityNodeProvider(AndroidCXX::android_view_View const& arg0) ;
	virtual void  onInitializeAccessibilityEvent(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg1) ;
	virtual void  onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg1) ;
	virtual void  onPopulateAccessibilityEvent(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg1) ;
	virtual bool  onRequestSendAccessibilityEvent(AndroidCXX::android_view_ViewGroup const& arg0,AndroidCXX::android_view_View const& arg1,AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg2) ;
	virtual bool  performAccessibilityAction(AndroidCXX::android_view_View const& arg0,int const& arg1,AndroidCXX::android_os_Bundle const& arg2) ;
	virtual void  sendAccessibilityEvent(AndroidCXX::android_view_View const& arg0,int const& arg1) ;
	virtual void  sendAccessibilityEventUnchecked(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg1) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_View_AccessibilityDelegate
/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
 		 


 		 
 		 
 		 




















// Generated Code 

#ifndef _android_widget_AdapterViewFlipper
#define _android_widget_AdapterViewFlipper
//
// Scroll Down 
//


#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_widget_Adapter.hpp>

#include <android_content_Context.hpp>

#include <android_util_AttributeSet.hpp>

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

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_widget_Adapter;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_AdapterViewFlipper
{
public:

	android_widget_AdapterViewFlipper(const android_widget_AdapterViewFlipper& cc);
	android_widget_AdapterViewFlipper(Proxy proxy);
	// Public Constructors
	android_widget_AdapterViewFlipper(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_AdapterViewFlipper(AndroidCXX::android_content_Context const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_AdapterViewFlipper();
	// Functions
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0);
	 void setAdapter(AndroidCXX::android_widget_Adapter const& arg0);
	 void fyiWillBeAdvancedByHostKThx();
	 void showNext();
	 void showPrevious();
	 int getFlipInterval();
	 void setFlipInterval(int const& arg0);
	 void startFlipping();
	 void stopFlipping();
	 bool isFlipping();
	 void setAutoStart(bool const& arg0);
	 bool isAutoStart();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_AdapterViewFlipper
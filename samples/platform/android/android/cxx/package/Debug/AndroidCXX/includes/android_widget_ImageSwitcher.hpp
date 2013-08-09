/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
 		 
 		 


 		 
 		 
 		 












// Generated Code 

#ifndef _android_widget_ImageSwitcher
#define _android_widget_ImageSwitcher
//
// Scroll Down 
//


#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_net_Uri.hpp>

#include <android_graphics_drawable_Drawable.hpp>

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

class android_net_Uri;

class android_graphics_drawable_Drawable;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_ImageSwitcher
{
public:

	android_widget_ImageSwitcher(const android_widget_ImageSwitcher& cc);
	android_widget_ImageSwitcher(Proxy proxy);
	// Public Constructors
	android_widget_ImageSwitcher(AndroidCXX::android_content_Context const& arg0);
	android_widget_ImageSwitcher(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_ImageSwitcher();
	// Functions
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0);
	 void setImageResource(int const& arg0);
	 void setImageURI(AndroidCXX::android_net_Uri const& arg0);
	 void setImageDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ImageSwitcher
/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
 		 
 		 
 		 
 		 
 	
 		 


 		 
 		 
 		 
 		 
 		 

















// Generated Code 

#ifndef _android_widget_QuickContactBadge
#define _android_widget_QuickContactBadge
//
// Scroll Down 
//


#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_view_View.hpp>

#include <android_net_Uri.hpp>

#include <java_lang_String.hpp>

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

class android_view_View;

class android_net_Uri;

class java_lang_String;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_QuickContactBadge
{
public:

	android_widget_QuickContactBadge(const android_widget_QuickContactBadge& cc);
	android_widget_QuickContactBadge(Proxy proxy);
	// Public Constructors
	android_widget_QuickContactBadge(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_QuickContactBadge(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	android_widget_QuickContactBadge(AndroidCXX::android_content_Context const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_QuickContactBadge();
	// Functions
	 void setMode(int const& arg0);
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0);
	 void onClick(AndroidCXX::android_view_View const& arg0);
	 void setImageToDefault();
	 void assignContactUri(AndroidCXX::android_net_Uri const& arg0);
	 void assignContactFromEmail(AndroidCXX::java_lang_String const& arg0,bool const& arg1);
	 void assignContactFromPhone(AndroidCXX::java_lang_String const& arg0,bool const& arg1);
	 void setExcludeMimes(std::vector<AndroidCXX::java_lang_String > const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_QuickContactBadge
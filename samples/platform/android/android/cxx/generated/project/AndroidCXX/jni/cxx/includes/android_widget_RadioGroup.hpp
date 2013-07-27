/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
 		 
 		 
	
 		 
 		 
 		 


 		 
 		 
 		 
















// Generated Code 

#ifndef _android_widget_RadioGroup
#define _android_widget_RadioGroup
//
// Scroll Down 
//


#include <android_view_View.hpp>

#include <android_view_ViewGroup_LayoutParams.hpp>

#include <android_view_ViewGroup_OnHierarchyChangeListener.hpp>

#include <android_util_AttributeSet.hpp>

#include <android_widget_RadioGroup_LayoutParams.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_widget_RadioGroup_OnCheckedChangeListener.hpp>

#include <android_content_Context.hpp>

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

class android_view_ViewGroup_LayoutParams;

class android_view_ViewGroup_OnHierarchyChangeListener;

class android_util_AttributeSet;

class android_widget_RadioGroup_LayoutParams;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_widget_RadioGroup_OnCheckedChangeListener;

class android_content_Context;

class android_widget_RadioGroup
{
public:

	android_widget_RadioGroup(const android_widget_RadioGroup& cc);
	android_widget_RadioGroup(Proxy proxy);
	// Public Constructors
	android_widget_RadioGroup(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_RadioGroup(AndroidCXX::android_content_Context const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_RadioGroup();
	// Functions
	 void check(int const& arg0);
	 void addView(AndroidCXX::android_view_View const& arg0,int const& arg1,AndroidCXX::android_view_ViewGroup_LayoutParams const& arg2);
	 void setOnHierarchyChangeListener(AndroidCXX::android_view_ViewGroup_OnHierarchyChangeListener const& arg0);
	 AndroidCXX::android_widget_RadioGroup_LayoutParams generateLayoutParams(AndroidCXX::android_util_AttributeSet const& arg0);
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0);
	 void setOnCheckedChangeListener(AndroidCXX::android_widget_RadioGroup_OnCheckedChangeListener const& arg0);
	 int getCheckedRadioButtonId();
	 void clearCheck();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_RadioGroup
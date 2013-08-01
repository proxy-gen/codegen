/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	
	
 		 
	
 		 
	
	
 		 
 		 


 		 
 		 
 		 
 		 
 		 






























// Generated Code 

#ifndef _android_widget_GridLayout
#define _android_widget_GridLayout
//
// Scroll Down 
//


#include <android_util_AttributeSet.hpp>

#include <android_widget_GridLayout_LayoutParams.hpp>

#include <android_widget_GridLayout_Spec.hpp>

#include <android_widget_GridLayout_Alignment.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

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

class android_util_AttributeSet;

class android_widget_GridLayout_LayoutParams;

class android_widget_GridLayout_Spec;

class android_widget_GridLayout_Alignment;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_content_Context;

class android_widget_GridLayout
{
public:

	android_widget_GridLayout(const android_widget_GridLayout& cc);
	android_widget_GridLayout(Proxy proxy);
	// Public Constructors
	android_widget_GridLayout(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	android_widget_GridLayout(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_GridLayout(AndroidCXX::android_content_Context const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_GridLayout();
	// Functions
	 AndroidCXX::android_widget_GridLayout_LayoutParams generateLayoutParams(AndroidCXX::android_util_AttributeSet const& arg0);
	static AndroidCXX::android_widget_GridLayout_Spec spec(int const& arg0);
	static AndroidCXX::android_widget_GridLayout_Spec spec(int const& arg0,AndroidCXX::android_widget_GridLayout_Alignment const& arg1);
	static AndroidCXX::android_widget_GridLayout_Spec spec(int const& arg0,int const& arg1,AndroidCXX::android_widget_GridLayout_Alignment const& arg2);
	static AndroidCXX::android_widget_GridLayout_Spec spec(int const& arg0,int const& arg1);
	 void requestLayout();
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0);
	 int getOrientation();
	 int getColumnCount();
	 void setOrientation(int const& arg0);
	 int getRowCount();
	 void setRowCount(int const& arg0);
	 void setColumnCount(int const& arg0);
	 bool getUseDefaultMargins();
	 void setUseDefaultMargins(bool const& arg0);
	 int getAlignmentMode();
	 void setAlignmentMode(int const& arg0);
	 bool isRowOrderPreserved();
	 void setRowOrderPreserved(bool const& arg0);
	 bool isColumnOrderPreserved();
	 void setColumnOrderPreserved(bool const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_GridLayout
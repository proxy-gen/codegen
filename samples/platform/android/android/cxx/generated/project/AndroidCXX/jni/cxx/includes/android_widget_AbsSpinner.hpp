/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
 		 
 		 
 		 
 		 
	
	


 		 
 		 
 		 
 		 
 		 




















// Generated Code 

#ifndef _android_widget_AbsSpinner
#define _android_widget_AbsSpinner
//
// Scroll Down 
//


#include <android_os_Parcelable.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_widget_SpinnerAdapter.hpp>

#include <android_view_View.hpp>

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

class android_os_Parcelable;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_widget_SpinnerAdapter;

class android_view_View;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_AbsSpinner
{
public:

	android_widget_AbsSpinner(const android_widget_AbsSpinner& cc);
	android_widget_AbsSpinner(void * proxy);
	// Public Constructors
	android_widget_AbsSpinner(AndroidCXX::android_content_Context& arg0);
	android_widget_AbsSpinner(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1);
	android_widget_AbsSpinner(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1,int& arg2);
	// TODO: remove
	// 
	// android_widget_AbsSpinner();
	// 
	// Default Destructor
	virtual ~android_widget_AbsSpinner();
	// Functions
	 AndroidCXX::android_os_Parcelable onSaveInstanceState();
	 void onRestoreInstanceState(AndroidCXX::android_os_Parcelable& arg0);
	 void requestLayout();
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo& arg0);
	 int getCount();
	 void setSelection(int& arg0);
	 void setSelection(int& arg0,bool& arg1);
	 void setAdapter(AndroidCXX::android_widget_SpinnerAdapter& arg0);
	 AndroidCXX::android_view_View getSelectedView();
	 int pointToPosition(int& arg0,int& arg1);
	 AndroidCXX::android_widget_SpinnerAdapter getAdapter();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_AbsSpinner
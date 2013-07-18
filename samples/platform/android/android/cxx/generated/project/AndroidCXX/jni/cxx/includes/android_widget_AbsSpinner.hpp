/*
 * Header (Abstract CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
 			
 			
 			
 			
		
		


#ifndef _android_widget_AbsSpinner
#define _android_widget_AbsSpinner













#include <android_os_Parcelable.hpp>
#include <android_view_View.hpp>
#include <android_widget_SpinnerAdapter.hpp>
#include <android_view_accessibility_AccessibilityEvent.hpp>
#include <android_view_accessibility_AccessibilityNodeInfo.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_widget_AbsSpinner
{
public:
 android_os_Parcelable onSaveInstanceState();
 void onRestoreInstanceState(android_os_Parcelable& arg0);
 void requestLayout();
 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
 int getCount();
 void setSelection(int& arg0,bool& arg1);
 void setAdapter(android_widget_SpinnerAdapter& arg0);
 android_view_View getSelectedView();
 int pointToPosition(int& arg0);
 android_widget_SpinnerAdapter getAdapter();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_AbsSpinner
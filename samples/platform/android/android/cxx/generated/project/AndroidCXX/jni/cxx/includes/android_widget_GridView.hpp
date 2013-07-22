/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 		 
 		 
 		 
	


 		 
 		 
 		 
 		 
 		 

































// Generated Code 

#ifndef _android_widget_GridView
#define _android_widget_GridView
//
// Scroll Down 
//


#include <android_view_KeyEvent.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_widget_ListAdapter.hpp>

#include <android_content_Intent.hpp>

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

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class android_view_KeyEvent;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_widget_ListAdapter;

class android_content_Intent;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_GridView
{
public:

	android_widget_GridView(const android_widget_GridView& cc);
	android_widget_GridView(void * proxy);
	// Public Constructors
	android_widget_GridView(AndroidCXX::android_content_Context& arg0);
	android_widget_GridView(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1,int& arg2);
	android_widget_GridView(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1);
	android_widget_GridView();
	// Default Destructor
	virtual ~android_widget_GridView();
	// Functions
	 bool onKeyDown(int& arg0,AndroidCXX::android_view_KeyEvent& arg1);
	 bool onKeyUp(int& arg0,AndroidCXX::android_view_KeyEvent& arg1);
	 bool onKeyMultiple(int& arg0,int& arg1,AndroidCXX::android_view_KeyEvent& arg2);
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo& arg0);
	 void setSelection(int& arg0);
	 void setGravity(int& arg0);
	 void setAdapter(AndroidCXX::android_widget_ListAdapter& arg0);
	 void smoothScrollToPosition(int& arg0);
	 void setRemoteViewsAdapter(AndroidCXX::android_content_Intent& arg0);
	 AndroidCXX::android_widget_ListAdapter getAdapter();
	 int getGravity();
	 void smoothScrollByOffset(int& arg0);
	 void setHorizontalSpacing(int& arg0);
	 int getHorizontalSpacing();
	 int getRequestedHorizontalSpacing();
	 void setVerticalSpacing(int& arg0);
	 int getVerticalSpacing();
	 void setStretchMode(int& arg0);
	 int getStretchMode();
	 void setColumnWidth(int& arg0);
	 int getColumnWidth();
	 int getRequestedColumnWidth();
	 void setNumColumns(int& arg0);
	 int getNumColumns();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_GridView
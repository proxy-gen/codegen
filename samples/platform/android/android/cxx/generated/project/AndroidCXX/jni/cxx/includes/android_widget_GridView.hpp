/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
 			
 			
 			
 			
		


#ifndef _android_widget_GridView
#define _android_widget_GridView



























#include <android_widget_ListAdapter.hpp>
#include <android_view_accessibility_AccessibilityNodeInfo.hpp>
#include <android_content_Intent.hpp>
#include <android_view_accessibility_AccessibilityEvent.hpp>
#include <android_view_KeyEvent.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_widget_GridView
{
public:
 bool onKeyDown(int& arg0,android_view_KeyEvent& arg1);
 bool onKeyUp(int& arg0,android_view_KeyEvent& arg1);
 bool onKeyMultiple(int& arg0,android_view_KeyEvent& arg1);
 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
 void setSelection(int& arg0);
 void setGravity(int& arg0);
 void setAdapter(android_widget_ListAdapter& arg0);
 void smoothScrollToPosition(int& arg0);
 void setRemoteViewsAdapter(android_content_Intent& arg0);
 android_widget_ListAdapter getAdapter();
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
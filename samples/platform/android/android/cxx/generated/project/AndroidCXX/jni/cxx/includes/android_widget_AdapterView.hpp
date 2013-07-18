/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
		
 			
		
 			
		
 			
		
		
		
 			
 			
		
		

// Generated Code 

#ifndef _android_widget_AdapterView
#define _android_widget_AdapterView
//
// Scroll Down 
//




































#include <android_view_View.hpp>

#include <android_view_ViewGroup_LayoutParams.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_View_OnClickListener.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_widget_Adapter.hpp>

#include <android_widget_AdapterView_OnItemClickListener.hpp>

#include <android_widget_AdapterView_OnItemLongClickListener.hpp>

#include <android_widget_AdapterView_OnItemSelectedListener.hpp>

#include <java_lang_Object.hpp>

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class android_view_View;

class android_view_ViewGroup_LayoutParams;

class android_view_accessibility_AccessibilityEvent;

class android_view_View_OnClickListener;

class android_view_accessibility_AccessibilityNodeInfo;

class android_widget_Adapter;

class android_widget_AdapterView_OnItemClickListener;

class android_widget_AdapterView_OnItemLongClickListener;

class android_widget_AdapterView_OnItemSelectedListener;

class java_lang_Object;

class android_widget_AdapterView
{
public:
 void addView(android_view_View& arg0,int& arg1,android_view_ViewGroup_LayoutParams& arg2);
 void removeView(android_view_View& arg0);
 bool dispatchPopulateAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 bool onRequestSendAccessibilityEvent(android_view_View& arg0,android_view_accessibility_AccessibilityEvent& arg1);
 void removeViewAt(int& arg0);
 void removeAllViews();
 void setOnClickListener(android_view_View_OnClickListener& arg0);
 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
 void setFocusable(bool& arg0);
 void setFocusableInTouchMode(bool& arg0);
 int getCount();
 void setSelection(int& arg0);
 void setAdapter(android_widget_Adapter& arg0);
 bool performItemClick(android_view_View& arg0,int& arg1,long& arg2);
 android_view_View getSelectedView();
 void setOnItemClickListener(android_widget_AdapterView_OnItemClickListener& arg0);
 android_widget_AdapterView_OnItemClickListener getOnItemClickListener();
 void setOnItemLongClickListener(android_widget_AdapterView_OnItemLongClickListener& arg0);
 android_widget_AdapterView_OnItemLongClickListener getOnItemLongClickListener();
 void setOnItemSelectedListener(android_widget_AdapterView_OnItemSelectedListener& arg0);
 android_widget_AdapterView_OnItemSelectedListener getOnItemSelectedListener();
 android_widget_Adapter getAdapter();
 int getSelectedItemPosition();
 long getSelectedItemId();
 java_lang_Object getSelectedItem();
 int getPositionForView(android_view_View& arg0);
 int getFirstVisiblePosition();
 int getLastVisiblePosition();
 void setEmptyView(android_view_View& arg0);
 android_view_View getEmptyView();
 java_lang_Object getItemAtPosition(int& arg0);
 long getItemIdAtPosition(int& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_AdapterView
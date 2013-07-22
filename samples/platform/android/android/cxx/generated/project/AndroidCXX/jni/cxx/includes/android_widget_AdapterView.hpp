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

class android_content_Context;

class android_util_AttributeSet;

class android_widget_AdapterView
{
public:

	android_widget_AdapterView(const android_widget_AdapterView& cc);
	android_widget_AdapterView(void * proxy);
	// Public Constructors
	android_widget_AdapterView(AndroidCXX::android_content_Context& arg0);
	android_widget_AdapterView(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1);
	android_widget_AdapterView(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1,int& arg2);
	android_widget_AdapterView();
	// Default Destructor
	virtual ~android_widget_AdapterView();
	// Functions
	 void addView(AndroidCXX::android_view_View& arg0,int& arg1);
	 void addView(AndroidCXX::android_view_View& arg0,int& arg1,AndroidCXX::android_view_ViewGroup_LayoutParams& arg2);
	 void addView(AndroidCXX::android_view_View& arg0,AndroidCXX::android_view_ViewGroup_LayoutParams& arg1);
	 void addView(AndroidCXX::android_view_View& arg0);
	 void removeView(AndroidCXX::android_view_View& arg0);
	 bool dispatchPopulateAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent& arg0);
	 bool onRequestSendAccessibilityEvent(AndroidCXX::android_view_View& arg0,AndroidCXX::android_view_accessibility_AccessibilityEvent& arg1);
	 void removeViewAt(int& arg0);
	 void removeAllViews();
	 void setOnClickListener(AndroidCXX::android_view_View_OnClickListener& arg0);
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo& arg0);
	 void setFocusable(bool& arg0);
	 void setFocusableInTouchMode(bool& arg0);
	 int getCount();
	 void setSelection(int& arg0);
	 void setAdapter(AndroidCXX::android_widget_Adapter& arg0);
	 bool performItemClick(AndroidCXX::android_view_View& arg0,int& arg1,long& arg2);
	 AndroidCXX::android_view_View getSelectedView();
	 void setOnItemClickListener(AndroidCXX::android_widget_AdapterView_OnItemClickListener& arg0);
	 AndroidCXX::android_widget_AdapterView_OnItemClickListener getOnItemClickListener();
	 void setOnItemLongClickListener(AndroidCXX::android_widget_AdapterView_OnItemLongClickListener& arg0);
	 AndroidCXX::android_widget_AdapterView_OnItemLongClickListener getOnItemLongClickListener();
	 void setOnItemSelectedListener(AndroidCXX::android_widget_AdapterView_OnItemSelectedListener& arg0);
	 AndroidCXX::android_widget_AdapterView_OnItemSelectedListener getOnItemSelectedListener();
	 AndroidCXX::android_widget_Adapter getAdapter();
	 int getSelectedItemPosition();
	 long getSelectedItemId();
	 AndroidCXX::java_lang_Object getSelectedItem();
	 int getPositionForView(AndroidCXX::android_view_View& arg0);
	 int getFirstVisiblePosition();
	 int getLastVisiblePosition();
	 void setEmptyView(AndroidCXX::android_view_View& arg0);
	 AndroidCXX::android_view_View getEmptyView();
	 AndroidCXX::java_lang_Object getItemAtPosition(int& arg0);
	 long getItemIdAtPosition(int& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_AdapterView
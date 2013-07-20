/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 
	
 		 
	
 	

// Generated Code 

#ifndef _android_widget_ListView
#define _android_widget_ListView
//
// Scroll Down 
//








































#include <android_view_KeyEvent.hpp>

#include <android_view_View.hpp>

#include <android_graphics_Rect.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_widget_ListAdapter.hpp>

#include <android_content_Intent.hpp>

#include <java_lang_Object.hpp>

#include <android_graphics_drawable_Drawable.hpp>

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

class android_view_KeyEvent;

class android_view_View;

class android_graphics_Rect;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_widget_ListAdapter;

class android_content_Intent;

class java_lang_Object;

class android_graphics_drawable_Drawable;

class android_widget_ListView
{
public:
	 bool isOpaque();
	 bool onKeyDown(int& arg0,android_view_KeyEvent& arg1);
	 bool onKeyUp(int& arg0,android_view_KeyEvent& arg1);
	 bool onKeyMultiple(int& arg0,android_view_KeyEvent& arg1);
	 bool dispatchKeyEvent(android_view_KeyEvent& arg0);
	 bool requestChildRectangleOnScreen(android_view_View& arg0,android_graphics_Rect& arg1,bool& arg2);
	 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
	 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
	 void setSelection(int& arg0);
	 void setAdapter(android_widget_ListAdapter& arg0);
	 void smoothScrollToPosition(int& arg0);
	 void setCacheColorHint(int& arg0);
	 void setRemoteViewsAdapter(android_content_Intent& arg0);
	 android_widget_ListAdapter *  getAdapter();
	 int getMaxScrollAmount();
	 void addHeaderView(android_view_View& arg0,java_lang_Object& arg1,bool& arg2);
	 int getHeaderViewsCount();
	 bool removeHeaderView(android_view_View& arg0);
	 void addFooterView(android_view_View& arg0,java_lang_Object& arg1,bool& arg2);
	 int getFooterViewsCount();
	 bool removeFooterView(android_view_View& arg0);
	 void smoothScrollByOffset(int& arg0);
	 void setSelectionFromTop(int& arg0);
	 void setSelectionAfterHeaderView();
	 void setItemsCanFocus(bool& arg0);
	 bool getItemsCanFocus();
	 android_graphics_drawable_Drawable *  getDivider();
	 void setDivider(android_graphics_drawable_Drawable& arg0);
	 int getDividerHeight();
	 void setDividerHeight(int& arg0);
	 void setHeaderDividersEnabled(bool& arg0);
	 void setFooterDividersEnabled(bool& arg0);
	 void setOverscrollHeader(android_graphics_drawable_Drawable& arg0);
	 android_graphics_drawable_Drawable *  getOverscrollHeader();
	 void setOverscrollFooter(android_graphics_drawable_Drawable& arg0);
	 android_graphics_drawable_Drawable *  getOverscrollFooter();
	 std::vector<long> getCheckItemIds();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ListView
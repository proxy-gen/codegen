/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
 			
 			
 			
 			
 			
		
 			
		
		
		
 			
 			
		
 			
 			

// Generated Code 

#ifndef _android_widget_AdapterViewAnimator
#define _android_widget_AdapterViewAnimator
//
// Scroll Down 
//





























#include <android_os_Parcelable.hpp>

#include <android_view_MotionEvent.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_widget_Adapter.hpp>

#include <android_view_View.hpp>

#include <android_content_Intent.hpp>

#include <android_animation_ObjectAnimator.hpp>

#include <android_content_Context.hpp>

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

class android_os_Parcelable;

class android_view_MotionEvent;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_widget_Adapter;

class android_view_View;

class android_content_Intent;

class android_animation_ObjectAnimator;

class android_content_Context;

class android_widget_AdapterViewAnimator
{
public:
 void advance();
 android_os_Parcelable onSaveInstanceState();
 void onRestoreInstanceState(android_os_Parcelable& arg0);
 bool onTouchEvent(android_view_MotionEvent& arg0);
 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
 int getBaseline();
 void setSelection(int& arg0);
 void setAdapter(android_widget_Adapter& arg0);
 android_view_View getSelectedView();
 void setRemoteViewsAdapter(android_content_Intent& arg0);
 void deferNotifyDataSetChanged();
 bool onRemoteAdapterConnected();
 void onRemoteAdapterDisconnected();
 android_widget_Adapter getAdapter();
 void fyiWillBeAdvancedByHostKThx();
 void showNext();
 void showPrevious();
 void setDisplayedChild(int& arg0);
 int getDisplayedChild();
 android_view_View getCurrentView();
 android_animation_ObjectAnimator getInAnimation();
 void setInAnimation(android_animation_ObjectAnimator& arg0,android_content_Context& arg1,int& arg2);
 android_animation_ObjectAnimator getOutAnimation();
 void setOutAnimation(android_animation_ObjectAnimator& arg0,android_content_Context& arg1,int& arg2);
 void setAnimateFirstView(bool& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_AdapterViewAnimator
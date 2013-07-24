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

class android_view_MotionEvent;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_widget_Adapter;

class android_view_View;

class android_content_Intent;

class android_animation_ObjectAnimator;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_AdapterViewAnimator
{
public:

	android_widget_AdapterViewAnimator(const android_widget_AdapterViewAnimator& cc);
	android_widget_AdapterViewAnimator(void * proxy);
	// Public Constructors
	android_widget_AdapterViewAnimator(AndroidCXX::android_content_Context& arg0);
	android_widget_AdapterViewAnimator(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1);
	android_widget_AdapterViewAnimator(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1,int& arg2);
	// TODO: remove
	// 
	// android_widget_AdapterViewAnimator();
	// 
	// Default Destructor
	virtual ~android_widget_AdapterViewAnimator();
	// Functions
	 void advance();
	 AndroidCXX::android_os_Parcelable onSaveInstanceState();
	 void onRestoreInstanceState(AndroidCXX::android_os_Parcelable& arg0);
	 bool onTouchEvent(AndroidCXX::android_view_MotionEvent& arg0);
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo& arg0);
	 int getBaseline();
	 void setSelection(int& arg0);
	 void setAdapter(AndroidCXX::android_widget_Adapter& arg0);
	 AndroidCXX::android_view_View getSelectedView();
	 void setRemoteViewsAdapter(AndroidCXX::android_content_Intent& arg0);
	 void deferNotifyDataSetChanged();
	 bool onRemoteAdapterConnected();
	 void onRemoteAdapterDisconnected();
	 AndroidCXX::android_widget_Adapter getAdapter();
	 void fyiWillBeAdvancedByHostKThx();
	 void showNext();
	 void showPrevious();
	 void setDisplayedChild(int& arg0);
	 int getDisplayedChild();
	 AndroidCXX::android_view_View getCurrentView();
	 AndroidCXX::android_animation_ObjectAnimator getInAnimation();
	 void setInAnimation(AndroidCXX::android_animation_ObjectAnimator& arg0);
	 void setInAnimation(AndroidCXX::android_content_Context& arg0,int& arg1);
	 AndroidCXX::android_animation_ObjectAnimator getOutAnimation();
	 void setOutAnimation(AndroidCXX::android_animation_ObjectAnimator& arg0);
	 void setOutAnimation(AndroidCXX::android_content_Context& arg0,int& arg1);
	 void setAnimateFirstView(bool& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_AdapterViewAnimator
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
	android_widget_AdapterViewAnimator(Proxy proxy);
	// Public Constructors
	android_widget_AdapterViewAnimator(AndroidCXX::android_content_Context const& arg0);
	android_widget_AdapterViewAnimator(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_AdapterViewAnimator(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_AdapterViewAnimator();
	// Functions
	 void advance();
	 AndroidCXX::android_os_Parcelable onSaveInstanceState();
	 void onRestoreInstanceState(AndroidCXX::android_os_Parcelable const& arg0);
	 bool onTouchEvent(AndroidCXX::android_view_MotionEvent const& arg0);
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0);
	 int getBaseline();
	 void setSelection(int const& arg0);
	 void setAdapter(AndroidCXX::android_widget_Adapter const& arg0);
	 AndroidCXX::android_view_View getSelectedView();
	 void setRemoteViewsAdapter(AndroidCXX::android_content_Intent const& arg0);
	 void deferNotifyDataSetChanged();
	 bool onRemoteAdapterConnected();
	 void onRemoteAdapterDisconnected();
	 AndroidCXX::android_widget_Adapter getAdapter();
	 void fyiWillBeAdvancedByHostKThx();
	 void showNext();
	 void showPrevious();
	 void setDisplayedChild(int const& arg0);
	 int getDisplayedChild();
	 AndroidCXX::android_view_View getCurrentView();
	 AndroidCXX::android_animation_ObjectAnimator getInAnimation();
	 void setInAnimation(AndroidCXX::android_animation_ObjectAnimator const& arg0);
	 void setInAnimation(AndroidCXX::android_content_Context const& arg0,int const& arg1);
	 AndroidCXX::android_animation_ObjectAnimator getOutAnimation();
	 void setOutAnimation(AndroidCXX::android_animation_ObjectAnimator const& arg0);
	 void setOutAnimation(AndroidCXX::android_content_Context const& arg0,int const& arg1);
	 void setAnimateFirstView(bool const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_AdapterViewAnimator
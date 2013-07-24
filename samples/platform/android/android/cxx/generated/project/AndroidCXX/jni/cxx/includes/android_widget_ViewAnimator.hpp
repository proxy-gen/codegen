/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
 		 
 		 
 		 
 		 
	
	
 		 
 		 
	
 		 
 		 


 		 
 		 
 		 






























// Generated Code 

#ifndef _android_widget_ViewAnimator
#define _android_widget_ViewAnimator
//
// Scroll Down 
//


#include <android_view_View.hpp>

#include <android_view_ViewGroup_LayoutParams.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_view_animation_Animation.hpp>

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

class android_view_View;

class android_view_ViewGroup_LayoutParams;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_view_animation_Animation;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_ViewAnimator
{
public:

	android_widget_ViewAnimator(const android_widget_ViewAnimator& cc);
	android_widget_ViewAnimator(void * proxy);
	// Public Constructors
	android_widget_ViewAnimator(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1);
	android_widget_ViewAnimator(AndroidCXX::android_content_Context& arg0);
	// TODO: remove
	// 
	// android_widget_ViewAnimator();
	// 
	// Default Destructor
	virtual ~android_widget_ViewAnimator();
	// Functions
	 void addView(AndroidCXX::android_view_View& arg0,int& arg1,AndroidCXX::android_view_ViewGroup_LayoutParams& arg2);
	 void removeView(AndroidCXX::android_view_View& arg0);
	 void removeViewInLayout(AndroidCXX::android_view_View& arg0);
	 void removeViewsInLayout(int& arg0,int& arg1);
	 void removeViewAt(int& arg0);
	 void removeViews(int& arg0,int& arg1);
	 void removeAllViews();
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo& arg0);
	 int getBaseline();
	 void showNext();
	 void showPrevious();
	 void setDisplayedChild(int& arg0);
	 int getDisplayedChild();
	 AndroidCXX::android_view_View getCurrentView();
	 AndroidCXX::android_view_animation_Animation getInAnimation();
	 void setInAnimation(AndroidCXX::android_view_animation_Animation& arg0);
	 void setInAnimation(AndroidCXX::android_content_Context& arg0,int& arg1);
	 AndroidCXX::android_view_animation_Animation getOutAnimation();
	 void setOutAnimation(AndroidCXX::android_content_Context& arg0,int& arg1);
	 void setOutAnimation(AndroidCXX::android_view_animation_Animation& arg0);
	 void setAnimateFirstView(bool& arg0);
	 bool getAnimateFirstView();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ViewAnimator
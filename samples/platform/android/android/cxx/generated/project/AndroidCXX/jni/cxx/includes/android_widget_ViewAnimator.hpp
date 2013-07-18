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

class android_view_accessibility_AccessibilityNodeInfo;

class android_view_animation_Animation;

class android_content_Context;

class android_widget_ViewAnimator
{
public:
 void addView(android_view_View& arg0,int& arg1,android_view_ViewGroup_LayoutParams& arg2);
 void removeView(android_view_View& arg0);
 void removeViewInLayout(android_view_View& arg0);
 void removeViewsInLayout(int& arg0);
 void removeViewAt(int& arg0);
 void removeViews(int& arg0);
 void removeAllViews();
 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
 int getBaseline();
 void showNext();
 void showPrevious();
 void setDisplayedChild(int& arg0);
 int getDisplayedChild();
 android_view_View getCurrentView();
 android_view_animation_Animation getInAnimation();
 void setInAnimation(android_view_animation_Animation& arg0,android_content_Context& arg1,int& arg2);
 android_view_animation_Animation getOutAnimation();
 void setOutAnimation(android_content_Context& arg0,int& arg1,android_view_animation_Animation& arg2);
 void setAnimateFirstView(bool& arg0);
 bool getAnimateFirstView();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ViewAnimator
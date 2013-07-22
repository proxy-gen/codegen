/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 


 		 
 		 
 		 
 		 
 		 






























// Generated Code 

#ifndef _android_widget_Gallery
#define _android_widget_Gallery
//
// Scroll Down 
//


#include <android_view_KeyEvent.hpp>

#include <android_view_MotionEvent.hpp>

#include <android_view_View.hpp>

#include <android_util_AttributeSet.hpp>

#include <android_view_ViewGroup_LayoutParams.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_os_Bundle.hpp>

#include <android_content_Context.hpp>

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

class android_view_KeyEvent;

class android_view_MotionEvent;

class android_view_View;

class android_util_AttributeSet;

class android_view_ViewGroup_LayoutParams;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_os_Bundle;

class android_content_Context;

class android_widget_Gallery
{
public:

	android_widget_Gallery(const android_widget_Gallery& cc);
	android_widget_Gallery(void * proxy);
	// Public Constructors
	android_widget_Gallery(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1);
	android_widget_Gallery(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1,int& arg2);
	android_widget_Gallery(AndroidCXX::android_content_Context& arg0);
	android_widget_Gallery();
	// Default Destructor
	virtual ~android_widget_Gallery();
	// Functions
	 bool onKeyDown(int& arg0,AndroidCXX::android_view_KeyEvent& arg1);
	 bool onKeyUp(int& arg0,AndroidCXX::android_view_KeyEvent& arg1);
	 bool onTouchEvent(AndroidCXX::android_view_MotionEvent& arg0);
	 bool dispatchKeyEvent(AndroidCXX::android_view_KeyEvent& arg0);
	 bool showContextMenuForChild(AndroidCXX::android_view_View& arg0);
	 void dispatchSetSelected(bool& arg0);
	 AndroidCXX::android_view_ViewGroup_LayoutParams generateLayoutParams(AndroidCXX::android_util_AttributeSet& arg0);
	 bool showContextMenu();
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo& arg0);
	 bool performAccessibilityAction(int& arg0,AndroidCXX::android_os_Bundle& arg1);
	 void setGravity(int& arg0);
	 bool onScroll(AndroidCXX::android_view_MotionEvent& arg0,AndroidCXX::android_view_MotionEvent& arg1,float& arg2,float& arg3);
	 void setCallbackDuringFling(bool& arg0);
	 void setAnimationDuration(int& arg0);
	 void setSpacing(int& arg0);
	 void setUnselectedAlpha(float& arg0);
	 bool onSingleTapUp(AndroidCXX::android_view_MotionEvent& arg0);
	 bool onFling(AndroidCXX::android_view_MotionEvent& arg0,AndroidCXX::android_view_MotionEvent& arg1,float& arg2,float& arg3);
	 bool onDown(AndroidCXX::android_view_MotionEvent& arg0);
	 void onLongPress(AndroidCXX::android_view_MotionEvent& arg0);
	 void onShowPress(AndroidCXX::android_view_MotionEvent& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_Gallery
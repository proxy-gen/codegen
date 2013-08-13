/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 		 
 		 


 		 
 		 
 		 
 		 
 		 

















// Generated Code 

#ifndef _android_widget_StackView
#define _android_widget_StackView
//
// Scroll Down 
//


#include <android_view_MotionEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_os_Bundle.hpp>

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

class android_view_MotionEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_view_accessibility_AccessibilityEvent;

class android_os_Bundle;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_StackView 
{
public:

	// Public ConstrucXXX
	android_widget_StackView(AndroidCXX::android_content_Context const& arg0);
	android_widget_StackView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_StackView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	android_widget_StackView(const android_widget_StackView& cc);
	android_widget_StackView(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_StackView();
	// Functions
	virtual bool  onTouchEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual bool  onGenericMotionEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual void  onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) ;
	virtual void  onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual bool  performAccessibilityAction(int const& arg0,AndroidCXX::android_os_Bundle const& arg1) ;
	virtual bool  onInterceptTouchEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual void  advance() ;
	virtual void  showNext() ;
	virtual void  showPrevious() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_StackView
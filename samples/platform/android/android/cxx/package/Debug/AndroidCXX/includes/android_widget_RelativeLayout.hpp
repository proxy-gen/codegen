/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 


 		 
 		 
 		 
 		 
 		 



















// Generated Code 

#ifndef _android_widget_RelativeLayout
#define _android_widget_RelativeLayout
//
// Scroll Down 
//


#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_content_Context.hpp>

#include <android_util_AttributeSet.hpp>


#include <android_view_ViewGroup.hpp>

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

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_RelativeLayout : public AndroidCXX::android_view_ViewGroup
{
public:

	// Public Constructor
	android_widget_RelativeLayout(AndroidCXX::android_content_Context const& arg0,Proxy * aProxy = new Proxy());
	android_widget_RelativeLayout(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,Proxy * aProxy = new Proxy());
	android_widget_RelativeLayout(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2,Proxy * aProxy = new Proxy());
	android_widget_RelativeLayout(const android_widget_RelativeLayout& cc);
	android_widget_RelativeLayout(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_widget_RelativeLayout();
	// Functions
	virtual bool  dispatchPopulateAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual int  getBaseline() ;
	virtual int  getGravity() ;
	virtual void  onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) ;
	virtual void  requestLayout() ;
	virtual void  setGravity(int const& arg0) ;
	virtual void  setHorizontalGravity(int const& arg0) ;
	virtual void  setIgnoreGravity(int const& arg0) ;
	virtual void  setVerticalGravity(int const& arg0) ;
	virtual bool  shouldDelayChildPressedState() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_RelativeLayout
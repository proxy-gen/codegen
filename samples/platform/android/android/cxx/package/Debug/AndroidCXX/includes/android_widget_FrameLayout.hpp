/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
	
 		 
 		 
 		 


 		 
 		 
 		 
 		 
 		 





















// Generated Code 

#ifndef _android_widget_FrameLayout
#define _android_widget_FrameLayout
//
// Scroll Down 
//


#include <android_graphics_Canvas.hpp>

#include <android_graphics_Region.hpp>

#include <android_graphics_drawable_Drawable.hpp>

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

class android_graphics_Canvas;

class android_graphics_Region;

class android_graphics_drawable_Drawable;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_FrameLayout : public AndroidCXX::android_view_ViewGroup
{
public:

	// Public Constructor
	android_widget_FrameLayout(AndroidCXX::android_content_Context const& arg0,Proxy * aProxy = new Proxy());
	android_widget_FrameLayout(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,Proxy * aProxy = new Proxy());
	android_widget_FrameLayout(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2,Proxy * aProxy = new Proxy());
	android_widget_FrameLayout(const android_widget_FrameLayout& cc);
	android_widget_FrameLayout(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_widget_FrameLayout();
	// Functions
	virtual void  draw(AndroidCXX::android_graphics_Canvas const& arg0) ;
	virtual bool  gatherTransparentRegion(AndroidCXX::android_graphics_Region const& arg0) ;
	virtual bool  getConsiderGoneChildrenWhenMeasuring() ;
	virtual int  getForegroundGravity() ;
	virtual AndroidCXX::android_graphics_drawable_Drawable * getForeground() ;
	virtual bool  getMeasureAllChildren() ;
	virtual void  jumpDrawablesToCurrentState() ;
	virtual void  onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) ;
	virtual void  setForegroundGravity(int const& arg0) ;
	virtual void  setForeground(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual void  setMeasureAllChildren(bool const& arg0) ;
	virtual bool  shouldDelayChildPressedState() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_FrameLayout
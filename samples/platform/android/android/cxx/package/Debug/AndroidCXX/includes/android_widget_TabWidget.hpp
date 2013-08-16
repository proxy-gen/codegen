/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 


 		 
 		 
 		 
 		 
 		 






























// Generated Code 

#ifndef _android_widget_TabWidget
#define _android_widget_TabWidget
//
// Scroll Down 
//


#include <android_view_View.hpp>

#include <android_graphics_Canvas.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_graphics_drawable_Drawable.hpp>

#include <android_content_Context.hpp>

#include <android_util_AttributeSet.hpp>


#include <android_view_View_OnFocusChangeListener.hpp>

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

class android_graphics_Canvas;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_graphics_drawable_Drawable;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_TabWidget : public android_view_View_OnFocusChangeListener
{
public:

	// Public ConstrucXXX
	android_widget_TabWidget(AndroidCXX::android_content_Context const& arg0);
	android_widget_TabWidget(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_TabWidget(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	android_widget_TabWidget(const android_widget_TabWidget& cc);
	android_widget_TabWidget(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_TabWidget();
	// Functions
	virtual void  addView(AndroidCXX::android_view_View const& arg0) ;
	virtual void  childDrawableStateChanged(AndroidCXX::android_view_View const& arg0) ;
	virtual void  dispatchDraw(AndroidCXX::android_graphics_Canvas const& arg0) ;
	virtual bool  dispatchPopulateAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  focusCurrentTab(int const& arg0) ;
	virtual AndroidCXX::android_view_View * getChildTabViewAt(int const& arg0) ;
	virtual int  getTabCount() ;
	virtual bool  isStripEnabled() ;
	virtual void  onFocusChange(AndroidCXX::android_view_View const& arg0,bool const& arg1) ;
	virtual void  onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) ;
	virtual void  removeAllViews() ;
	virtual void  sendAccessibilityEventUnchecked(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  setCurrentTab(int const& arg0) ;
	virtual void  setDividerDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual void  setDividerDrawable(int const& arg0) ;
	virtual void  setEnabled(bool const& arg0) ;
	virtual void  setLeftStripDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual void  setLeftStripDrawable(int const& arg0) ;
	virtual void  setRightStripDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual void  setRightStripDrawable(int const& arg0) ;
	virtual void  setStripEnabled(bool const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_TabWidget
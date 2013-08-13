/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 
	
	
 		 


 		 
 		 
 		 
 		 
 		 
































// Generated Code 

#ifndef _android_widget_LinearLayout
#define _android_widget_LinearLayout
//
// Scroll Down 
//


#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_util_AttributeSet.hpp>

#include <android_widget_LinearLayout_LayoutParams.hpp>

#include <android_graphics_drawable_Drawable.hpp>

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

class android_view_accessibility_AccessibilityNodeInfo;

class android_view_accessibility_AccessibilityEvent;

class android_util_AttributeSet;

class android_widget_LinearLayout_LayoutParams;

class android_graphics_drawable_Drawable;

class android_content_Context;

class android_widget_LinearLayout 
{
public:

	// Public ConstrucXXX
	android_widget_LinearLayout(AndroidCXX::android_content_Context const& arg0);
	android_widget_LinearLayout(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_LinearLayout(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	android_widget_LinearLayout(const android_widget_LinearLayout& cc);
	android_widget_LinearLayout(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_LinearLayout();
	// Functions
	virtual bool  shouldDelayChildPressedState() ;
	virtual void  onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) ;
	virtual void  onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual AndroidCXX::android_widget_LinearLayout_LayoutParams * generateLayoutParams(AndroidCXX::android_util_AttributeSet const& arg0) ;
	virtual int  getBaseline() ;
	virtual void  setGravity(int const& arg0) ;
	virtual void  setHorizontalGravity(int const& arg0) ;
	virtual void  setVerticalGravity(int const& arg0) ;
	virtual int  getOrientation() ;
	virtual void  setOrientation(int const& arg0) ;
	virtual void  setShowDividers(int const& arg0) ;
	virtual int  getShowDividers() ;
	virtual AndroidCXX::android_graphics_drawable_Drawable * getDividerDrawable() ;
	virtual void  setDividerDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual void  setDividerPadding(int const& arg0) ;
	virtual int  getDividerPadding() ;
	virtual bool  isBaselineAligned() ;
	virtual void  setBaselineAligned(bool const& arg0) ;
	virtual bool  isMeasureWithLargestChildEnabled() ;
	virtual void  setMeasureWithLargestChildEnabled(bool const& arg0) ;
	virtual int  getBaselineAlignedChildIndex() ;
	virtual void  setBaselineAlignedChildIndex(int const& arg0) ;
	virtual float  getWeightSum() ;
	virtual void  setWeightSum(float const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_LinearLayout
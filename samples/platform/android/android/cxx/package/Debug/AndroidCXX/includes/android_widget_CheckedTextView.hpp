/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 		 
 		 
 		 


 		 
 		 
 		 
 		 
 		 

















// Generated Code 

#ifndef _android_widget_CheckedTextView
#define _android_widget_CheckedTextView
//
// Scroll Down 
//


#include <android_graphics_drawable_Drawable.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_content_Context.hpp>

#include <android_util_AttributeSet.hpp>


#include <android_widget_Checkable.hpp>

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

class android_graphics_drawable_Drawable;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_CheckedTextView : public AndroidCXX::android_widget_Checkable
{
public:

	// Public ConstrucXXX
	android_widget_CheckedTextView(AndroidCXX::android_content_Context const& arg0);
	android_widget_CheckedTextView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_CheckedTextView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	android_widget_CheckedTextView(const android_widget_CheckedTextView& cc);
	android_widget_CheckedTextView(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_CheckedTextView();
	// Functions
	virtual AndroidCXX::android_graphics_drawable_Drawable * getCheckMarkDrawable() ;
	virtual bool  isChecked() ;
	virtual void  onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) ;
	virtual void  onRtlPropertiesChanged(int const& arg0) ;
	virtual void  setCheckMarkDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual void  setCheckMarkDrawable(int const& arg0) ;
	virtual void  setChecked(bool const& arg0) ;
	virtual void  toggle() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_CheckedTextView
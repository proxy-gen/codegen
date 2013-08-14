/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
	
	
 		 
	
 		 


 		 
 		 
 		 
 		 
 		 




































// Generated Code 

#ifndef _android_widget_Switch
#define _android_widget_Switch
//
// Scroll Down 
//


#include <android_view_MotionEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_content_Context.hpp>

#include <android_graphics_Typeface.hpp>

#include <android_graphics_drawable_Drawable.hpp>

#include <java_lang_CharSequence.hpp>

#include <android_util_AttributeSet.hpp>


#include <java_lang_Object.hpp>

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

class android_content_Context;

class android_graphics_Typeface;

class android_graphics_drawable_Drawable;

class java_lang_CharSequence;

class android_util_AttributeSet;

class android_widget_Switch : public java_lang_Object
{
public:

	// Public ConstrucXXX
	android_widget_Switch(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_Switch(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	android_widget_Switch(AndroidCXX::android_content_Context const& arg0);
	android_widget_Switch(const android_widget_Switch& cc);
	android_widget_Switch(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_Switch();
	// Functions
	virtual bool  onTouchEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual void  onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) ;
	virtual void  onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  onMeasure(int const& arg0,int const& arg1) ;
	virtual void  jumpDrawablesToCurrentState() ;
	virtual void  onPopulateAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  setChecked(bool const& arg0) ;
	virtual int  getCompoundPaddingLeft() ;
	virtual int  getCompoundPaddingRight() ;
	virtual void  setSwitchTextAppearance(AndroidCXX::android_content_Context const& arg0,int const& arg1) ;
	virtual void  setSwitchTypeface(AndroidCXX::android_graphics_Typeface const& arg0) ;
	virtual void  setSwitchTypeface(AndroidCXX::android_graphics_Typeface const& arg0,int const& arg1) ;
	virtual void  setSwitchPadding(int const& arg0) ;
	virtual int  getSwitchPadding() ;
	virtual void  setSwitchMinWidth(int const& arg0) ;
	virtual int  getSwitchMinWidth() ;
	virtual void  setThumbTextPadding(int const& arg0) ;
	virtual int  getThumbTextPadding() ;
	virtual void  setTrackDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual void  setTrackResource(int const& arg0) ;
	virtual AndroidCXX::android_graphics_drawable_Drawable * getTrackDrawable() ;
	virtual void  setThumbDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual void  setThumbResource(int const& arg0) ;
	virtual AndroidCXX::android_graphics_drawable_Drawable * getThumbDrawable() ;
	virtual AndroidCXX::java_lang_CharSequence * getTextOn() ;
	virtual void  setTextOn(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual AndroidCXX::java_lang_CharSequence * getTextOff() ;
	virtual void  setTextOff(AndroidCXX::java_lang_CharSequence const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_Switch
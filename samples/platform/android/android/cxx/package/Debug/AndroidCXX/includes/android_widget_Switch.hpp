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


#include <java_lang_CharSequence.hpp>

#include <android_graphics_drawable_Drawable.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_view_MotionEvent.hpp>

#include <android_content_Context.hpp>

#include <android_graphics_Typeface.hpp>

#include <android_util_AttributeSet.hpp>


#include <android_widget_CompoundButton.hpp>

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

class java_lang_CharSequence;

class android_graphics_drawable_Drawable;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_view_MotionEvent;

class android_content_Context;

class android_graphics_Typeface;

class android_util_AttributeSet;

class android_widget_Switch : public AndroidCXX::android_widget_CompoundButton
{
public:

	// Public Constructor
	android_widget_Switch(AndroidCXX::android_content_Context const& arg0,Proxy * aProxy = new Proxy());
	android_widget_Switch(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,Proxy * aProxy = new Proxy());
	android_widget_Switch(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2,Proxy * aProxy = new Proxy());
	android_widget_Switch(const android_widget_Switch& cc);
	android_widget_Switch(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_widget_Switch();
	// Functions
	virtual int  getCompoundPaddingLeft() ;
	virtual int  getCompoundPaddingRight() ;
	virtual int  getSwitchMinWidth() ;
	virtual int  getSwitchPadding() ;
	virtual AndroidCXX::java_lang_CharSequence * getTextOff() ;
	virtual AndroidCXX::java_lang_CharSequence * getTextOn() ;
	virtual AndroidCXX::android_graphics_drawable_Drawable * getThumbDrawable() ;
	virtual int  getThumbTextPadding() ;
	virtual AndroidCXX::android_graphics_drawable_Drawable * getTrackDrawable() ;
	virtual void  jumpDrawablesToCurrentState() ;
	virtual void  onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) ;
	virtual void  onMeasure(int const& arg0,int const& arg1) ;
	virtual void  onPopulateAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual bool  onTouchEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual void  setChecked(bool const& arg0) ;
	virtual void  setSwitchMinWidth(int const& arg0) ;
	virtual void  setSwitchPadding(int const& arg0) ;
	virtual void  setSwitchTextAppearance(AndroidCXX::android_content_Context const& arg0,int const& arg1) ;
	virtual void  setSwitchTypeface(AndroidCXX::android_graphics_Typeface const& arg0,int const& arg1) ;
	virtual void  setSwitchTypeface(AndroidCXX::android_graphics_Typeface const& arg0) ;
	virtual void  setTextOff(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual void  setTextOn(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual void  setThumbDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual void  setThumbResource(int const& arg0) ;
	virtual void  setThumbTextPadding(int const& arg0) ;
	virtual void  setTrackDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual void  setTrackResource(int const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_Switch
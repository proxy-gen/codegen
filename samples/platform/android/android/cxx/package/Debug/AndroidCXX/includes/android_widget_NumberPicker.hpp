/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 
	
 	
 		 
 		 
 		 
 		 
 	
 		 
 		 
 		 
 		 


 		 
 		 
 		 
 		 
 		 

































// Generated Code 

#ifndef _android_widget_NumberPicker
#define _android_widget_NumberPicker
//
// Scroll Down 
//


#include <android_view_KeyEvent.hpp>

#include <android_view_MotionEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeProvider.hpp>

#include <java_lang_String.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_widget_NumberPicker_Formatter.hpp>

#include <android_widget_NumberPicker_OnScrollListener.hpp>

#include <android_widget_NumberPicker_OnValueChangeListener.hpp>

#include <android_content_Context.hpp>

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

class android_view_KeyEvent;

class android_view_MotionEvent;

class android_view_accessibility_AccessibilityNodeProvider;

class java_lang_String;

class android_view_accessibility_AccessibilityEvent;

class android_widget_NumberPicker_Formatter;

class android_widget_NumberPicker_OnScrollListener;

class android_widget_NumberPicker_OnValueChangeListener;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_NumberPicker : public java_lang_Object
{
public:

	// Public ConstrucXXX
	android_widget_NumberPicker(AndroidCXX::android_content_Context const& arg0);
	android_widget_NumberPicker(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_NumberPicker(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	android_widget_NumberPicker(const android_widget_NumberPicker& cc);
	android_widget_NumberPicker(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_NumberPicker();
	// Functions
	virtual void  computeScroll() ;
	virtual bool  dispatchKeyEvent(AndroidCXX::android_view_KeyEvent const& arg0) ;
	virtual bool  dispatchTouchEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual bool  dispatchTrackballEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual AndroidCXX::android_view_accessibility_AccessibilityNodeProvider * getAccessibilityNodeProvider() ;
	virtual std::vector<java_lang_String>  getDisplayedValues() ;
	virtual int  getMaxValue() ;
	virtual int  getMinValue() ;
	virtual int  getSolidColor() ;
	virtual int  getValue() ;
	virtual bool  getWrapSelectorWheel() ;
	virtual void  onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual bool  onInterceptTouchEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual bool  onTouchEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual void  scrollBy(int const& arg0,int const& arg1) ;
	virtual void  setDisplayedValues(std::vector<java_lang_String> const& arg0) ;
	virtual void  setEnabled(bool const& arg0) ;
	virtual void  setFormatter(AndroidCXX::android_widget_NumberPicker_Formatter const& arg0) ;
	virtual void  setMaxValue(int const& arg0) ;
	virtual void  setMinValue(int const& arg0) ;
	virtual void  setOnLongPressUpdateInterval(long const& arg0) ;
	virtual void  setOnScrollListener(AndroidCXX::android_widget_NumberPicker_OnScrollListener const& arg0) ;
	virtual void  setOnValueChangedListener(AndroidCXX::android_widget_NumberPicker_OnValueChangeListener const& arg0) ;
	virtual void  setValue(int const& arg0) ;
	virtual void  setWrapSelectorWheel(bool const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_NumberPicker
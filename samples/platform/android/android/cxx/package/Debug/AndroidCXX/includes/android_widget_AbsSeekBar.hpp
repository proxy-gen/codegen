/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 		 
 		 
	


 		 
 		 
 		 
 		 
 		 






















// Generated Code 

#ifndef _android_widget_AbsSeekBar
#define _android_widget_AbsSeekBar
//
// Scroll Down 
//



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

class android_view_KeyEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_view_accessibility_AccessibilityEvent;

class android_os_Bundle;

class android_graphics_drawable_Drawable;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_AbsSeekBar : public java_lang_Object
{
public:

	android_widget_AbsSeekBar(const android_widget_AbsSeekBar& cc);
	android_widget_AbsSeekBar(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_AbsSeekBar();
	// Functions
	virtual bool  onTouchEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual bool  onKeyDown(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) ;
	virtual void  onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) ;
	virtual void  onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual bool  performAccessibilityAction(int const& arg0,AndroidCXX::android_os_Bundle const& arg1) ;
	virtual void  jumpDrawablesToCurrentState() ;
	virtual void  onRtlPropertiesChanged(int const& arg0) ;
	virtual void  setThumb(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual AndroidCXX::android_graphics_drawable_Drawable * getThumb() ;
	virtual int  getThumbOffset() ;
	virtual void  setThumbOffset(int const& arg0) ;
	virtual void  setKeyProgressIncrement(int const& arg0) ;
	virtual int  getKeyProgressIncrement() ;
	virtual void  setMax(int const& arg0) ;

protected:
	android_widget_AbsSeekBar();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_AbsSeekBar
/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 
	
 		 
 		 


 		 
 		 
 		 
 		 
 		 






















// Generated Code 

#ifndef _android_widget_CompoundButton
#define _android_widget_CompoundButton
//
// Scroll Down 
//



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

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_os_Parcelable;

class android_graphics_drawable_Drawable;

class android_widget_CompoundButton_OnCheckedChangeListener;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_CompoundButton : public android_widget_Checkable
{
public:

	android_widget_CompoundButton(const android_widget_CompoundButton& cc);
	android_widget_CompoundButton(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_CompoundButton();
	// Functions
	virtual int  getCompoundPaddingLeft() ;
	virtual int  getCompoundPaddingRight() ;
	virtual bool  isChecked() ;
	virtual void  jumpDrawablesToCurrentState() ;
	virtual void  onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) ;
	virtual void  onRestoreInstanceState(AndroidCXX::android_os_Parcelable const& arg0) ;
	virtual AndroidCXX::android_os_Parcelable * onSaveInstanceState() ;
	virtual bool  performClick() ;
	virtual void  setButtonDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual void  setButtonDrawable(int const& arg0) ;
	virtual void  setChecked(bool const& arg0) ;
	virtual void  setOnCheckedChangeListener(AndroidCXX::android_widget_CompoundButton_OnCheckedChangeListener const& arg0) ;
	virtual void  toggle() ;

protected:
	android_widget_CompoundButton();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_CompoundButton
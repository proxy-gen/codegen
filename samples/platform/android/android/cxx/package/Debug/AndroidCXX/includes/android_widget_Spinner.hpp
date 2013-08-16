/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
	
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 


 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 


































// Generated Code 

#ifndef _android_widget_Spinner
#define _android_widget_Spinner
//
// Scroll Down 
//


#include <android_graphics_drawable_Drawable.hpp>

#include <java_lang_CharSequence.hpp>

#include <android_content_DialogInterface.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_os_Parcelable.hpp>

#include <android_widget_SpinnerAdapter.hpp>

#include <android_widget_AdapterView_OnItemClickListener.hpp>

#include <android_content_Context.hpp>

#include <android_util_AttributeSet.hpp>


#include <android_content_DialogInterface_OnClickListener.hpp>

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

class java_lang_CharSequence;

class android_content_DialogInterface;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_os_Parcelable;

class android_widget_SpinnerAdapter;

class android_widget_AdapterView_OnItemClickListener;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_Spinner : public android_content_DialogInterface_OnClickListener
{
public:

	// Public ConstrucXXX
	android_widget_Spinner(AndroidCXX::android_content_Context const& arg0);
	android_widget_Spinner(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_Spinner(AndroidCXX::android_content_Context const& arg0,int const& arg1);
	android_widget_Spinner(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	android_widget_Spinner(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2,int const& arg3);
	android_widget_Spinner(const android_widget_Spinner& cc);
	android_widget_Spinner(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_Spinner();
	// Functions
	virtual int  getBaseline() ;
	virtual int  getDropDownHorizontalOffset() ;
	virtual int  getDropDownVerticalOffset() ;
	virtual int  getDropDownWidth() ;
	virtual int  getGravity() ;
	virtual AndroidCXX::android_graphics_drawable_Drawable * getPopupBackground() ;
	virtual AndroidCXX::java_lang_CharSequence * getPrompt() ;
	virtual void  onClick(AndroidCXX::android_content_DialogInterface const& arg0,int const& arg1) ;
	virtual void  onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) ;
	virtual void  onRestoreInstanceState(AndroidCXX::android_os_Parcelable const& arg0) ;
	virtual AndroidCXX::android_os_Parcelable * onSaveInstanceState() ;
	virtual bool  performClick() ;
	virtual void  setAdapter(AndroidCXX::android_widget_SpinnerAdapter const& arg0) ;
	virtual void  setDropDownHorizontalOffset(int const& arg0) ;
	virtual void  setDropDownVerticalOffset(int const& arg0) ;
	virtual void  setDropDownWidth(int const& arg0) ;
	virtual void  setEnabled(bool const& arg0) ;
	virtual void  setGravity(int const& arg0) ;
	virtual void  setOnItemClickListener(AndroidCXX::android_widget_AdapterView_OnItemClickListener const& arg0) ;
	virtual void  setPopupBackgroundDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual void  setPopupBackgroundResource(int const& arg0) ;
	virtual void  setPrompt(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual void  setPromptId(int const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_Spinner
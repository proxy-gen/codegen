/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
	
	
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 


 		 
 		 
 		 
 		 
 		 

































// Generated Code 

#ifndef _android_widget_ProgressBar
#define _android_widget_ProgressBar
//
// Scroll Down 
//


#include <android_graphics_drawable_Drawable.hpp>

#include <android_view_animation_Interpolator.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_os_Parcelable.hpp>

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

class android_graphics_drawable_Drawable;

class android_view_animation_Interpolator;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_os_Parcelable;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_ProgressBar : public java_lang_Object
{
public:

	// Public ConstrucXXX
	android_widget_ProgressBar(AndroidCXX::android_content_Context const& arg0);
	android_widget_ProgressBar(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_ProgressBar(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	android_widget_ProgressBar(const android_widget_ProgressBar& cc);
	android_widget_ProgressBar(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_ProgressBar();
	// Functions
	virtual AndroidCXX::android_graphics_drawable_Drawable * getIndeterminateDrawable() ;
	virtual AndroidCXX::android_view_animation_Interpolator * getInterpolator() ;
	virtual int  getMax() ;
	virtual AndroidCXX::android_graphics_drawable_Drawable * getProgressDrawable() ;
	virtual int  getProgress() ;
	virtual int  getSecondaryProgress() ;
	virtual void  incrementProgressBy(int const& arg0) ;
	virtual void  incrementSecondaryProgressBy(int const& arg0) ;
	virtual void  invalidateDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual bool  isIndeterminate() ;
	virtual void  jumpDrawablesToCurrentState() ;
	virtual void  onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) ;
	virtual void  onRestoreInstanceState(AndroidCXX::android_os_Parcelable const& arg0) ;
	virtual AndroidCXX::android_os_Parcelable * onSaveInstanceState() ;
	virtual void  postInvalidate() ;
	virtual void  setIndeterminateDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual void  setIndeterminate(bool const& arg0) ;
	virtual void  setInterpolator(AndroidCXX::android_content_Context const& arg0,int const& arg1) ;
	virtual void  setInterpolator(AndroidCXX::android_view_animation_Interpolator const& arg0) ;
	virtual void  setMax(int const& arg0) ;
	virtual void  setProgressDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual void  setProgress(int const& arg0) ;
	virtual void  setSecondaryProgress(int const& arg0) ;
	virtual void  setVisibility(int const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ProgressBar
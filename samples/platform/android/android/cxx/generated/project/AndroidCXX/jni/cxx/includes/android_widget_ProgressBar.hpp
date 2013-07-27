/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <android_os_Parcelable.hpp>

#include <android_view_animation_Interpolator.hpp>

#include <android_content_Context.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_graphics_drawable_Drawable.hpp>

#include <android_util_AttributeSet.hpp>

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

class android_os_Parcelable;

class android_view_animation_Interpolator;

class android_content_Context;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_graphics_drawable_Drawable;

class android_util_AttributeSet;

class android_widget_ProgressBar
{
public:

	android_widget_ProgressBar(const android_widget_ProgressBar& cc);
	android_widget_ProgressBar(Proxy proxy);
	// Public Constructors
	android_widget_ProgressBar(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_ProgressBar(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	android_widget_ProgressBar(AndroidCXX::android_content_Context const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_ProgressBar();
	// Functions
	 AndroidCXX::android_os_Parcelable onSaveInstanceState();
	 void setInterpolator(AndroidCXX::android_view_animation_Interpolator const& arg0);
	 void setInterpolator(AndroidCXX::android_content_Context const& arg0,int const& arg1);
	 void setVisibility(int const& arg0);
	 void onRestoreInstanceState(AndroidCXX::android_os_Parcelable const& arg0);
	 void setProgress(int const& arg0);
	 void setSecondaryProgress(int const& arg0);
	 AndroidCXX::android_view_animation_Interpolator getInterpolator();
	 void jumpDrawablesToCurrentState();
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0);
	 void postInvalidate();
	 void invalidateDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0);
	 int getProgress();
	 void setMax(int const& arg0);
	 bool isIndeterminate();
	 void setIndeterminate(bool const& arg0);
	 AndroidCXX::android_graphics_drawable_Drawable getIndeterminateDrawable();
	 void setIndeterminateDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0);
	 AndroidCXX::android_graphics_drawable_Drawable getProgressDrawable();
	 void setProgressDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0);
	 int getSecondaryProgress();
	 int getMax();
	 void incrementProgressBy(int const& arg0);
	 void incrementSecondaryProgressBy(int const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ProgressBar
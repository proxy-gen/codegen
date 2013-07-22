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
	android_widget_ProgressBar(void * proxy);
	// Public Constructors
	android_widget_ProgressBar(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1);
	android_widget_ProgressBar(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1,int& arg2);
	android_widget_ProgressBar(AndroidCXX::android_content_Context& arg0);
	android_widget_ProgressBar();
	// Default Destructor
	virtual ~android_widget_ProgressBar();
	// Functions
	 AndroidCXX::android_os_Parcelable onSaveInstanceState();
	 void setInterpolator(AndroidCXX::android_view_animation_Interpolator& arg0);
	 void setInterpolator(AndroidCXX::android_content_Context& arg0,int& arg1);
	 void setVisibility(int& arg0);
	 void onRestoreInstanceState(AndroidCXX::android_os_Parcelable& arg0);
	 void setProgress(int& arg0);
	 void setSecondaryProgress(int& arg0);
	 AndroidCXX::android_view_animation_Interpolator getInterpolator();
	 void jumpDrawablesToCurrentState();
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo& arg0);
	 void postInvalidate();
	 void invalidateDrawable(AndroidCXX::android_graphics_drawable_Drawable& arg0);
	 int getProgress();
	 void setMax(int& arg0);
	 bool isIndeterminate();
	 void setIndeterminate(bool& arg0);
	 AndroidCXX::android_graphics_drawable_Drawable getIndeterminateDrawable();
	 void setIndeterminateDrawable(AndroidCXX::android_graphics_drawable_Drawable& arg0);
	 AndroidCXX::android_graphics_drawable_Drawable getProgressDrawable();
	 void setProgressDrawable(AndroidCXX::android_graphics_drawable_Drawable& arg0);
	 int getSecondaryProgress();
	 int getMax();
	 void incrementProgressBy(int& arg0);
	 void incrementSecondaryProgressBy(int& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ProgressBar
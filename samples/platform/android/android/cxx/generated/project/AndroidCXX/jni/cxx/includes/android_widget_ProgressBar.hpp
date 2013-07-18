/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
 			
 			
 			
		
 			
 			
 			
		
 			
		
 			


#ifndef _android_widget_ProgressBar
#define _android_widget_ProgressBar


























#include <android_content_Context.hpp>
#include <android_os_Parcelable.hpp>
#include <android_view_accessibility_AccessibilityEvent.hpp>
#include <android_view_animation_Interpolator.hpp>
#include <android_view_accessibility_AccessibilityNodeInfo.hpp>
#include <android_graphics_drawable_Drawable.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_widget_ProgressBar
{
public:
 android_os_Parcelable onSaveInstanceState();
 void setInterpolator(android_view_animation_Interpolator& arg0,android_content_Context& arg1,int& arg2);
 void setVisibility(int& arg0);
 void onRestoreInstanceState(android_os_Parcelable& arg0);
 void setProgress(int& arg0);
 void setSecondaryProgress(int& arg0);
 android_view_animation_Interpolator getInterpolator();
 void jumpDrawablesToCurrentState();
 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
 void postInvalidate();
 void invalidateDrawable(android_graphics_drawable_Drawable& arg0);
 int getProgress();
 void setMax(int& arg0);
 bool isIndeterminate();
 void setIndeterminate(bool& arg0);
 android_graphics_drawable_Drawable getIndeterminateDrawable();
 void setIndeterminateDrawable(android_graphics_drawable_Drawable& arg0);
 android_graphics_drawable_Drawable getProgressDrawable();
 void setProgressDrawable(android_graphics_drawable_Drawable& arg0);
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
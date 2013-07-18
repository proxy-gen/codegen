/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
 			
 			
 			
 			
 			
 			
		
 			
 			
 			
 			
		
		
 			


#ifndef _android_widget_ImageView
#define _android_widget_ImageView








































#include <android_graphics_Bitmap.hpp>
#include <android_graphics_PorterDuff_Mode.hpp>
#include <android_view_accessibility_AccessibilityEvent.hpp>
#include <android_widget_ImageView_ScaleType.hpp>
#include <android_graphics_Matrix.hpp>
#include <android_graphics_ColorFilter.hpp>
#include <android_view_accessibility_AccessibilityNodeInfo.hpp>
#include <android_net_Uri.hpp>
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

class android_widget_ImageView
{
public:
 void setVisibility(int& arg0);
 android_graphics_drawable_Drawable getDrawable();
 void jumpDrawablesToCurrentState();
 std::vector<int> onCreateDrawableState(int& arg0);
 void onPopulateAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
 bool hasOverlappingRendering();
 void setAlpha(int& arg0);
 void invalidateDrawable(android_graphics_drawable_Drawable& arg0);
 void setSelected(bool& arg0);
 int getBaseline();
 void setColorFilter(int& arg0,android_graphics_PorterDuff_Mode& arg1,android_graphics_ColorFilter& arg2);
 void clearColorFilter();
 android_graphics_ColorFilter getColorFilter();
 void setMaxHeight(int& arg0);
 int getMaxHeight();
 void setMaxWidth(int& arg0);
 int getMaxWidth();
 bool getAdjustViewBounds();
 void setAdjustViewBounds(bool& arg0);
 void setImageResource(int& arg0);
 void setImageURI(android_net_Uri& arg0);
 void setImageDrawable(android_graphics_drawable_Drawable& arg0);
 void setImageBitmap(android_graphics_Bitmap& arg0);
 void setImageState(std::vector<int>& arg0,bool& arg1);
 void setImageLevel(int& arg0);
 void setScaleType(android_widget_ImageView_ScaleType& arg0);
 android_widget_ImageView_ScaleType getScaleType();
 android_graphics_Matrix getImageMatrix();
 void setImageMatrix(android_graphics_Matrix& arg0);
 bool getCropToPadding();
 void setCropToPadding(bool& arg0);
 void setBaseline(int& arg0);
 void setBaselineAlignBottom(bool& arg0);
 bool getBaselineAlignBottom();
 int getImageAlpha();
 void setImageAlpha(int& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ImageView
/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
 	
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
 	
 		 
	
	
 		 


 		 
 		 
 		 
 		 
 		 
















































// Generated Code 

#ifndef _android_widget_ImageView
#define _android_widget_ImageView
//
// Scroll Down 
//


#include <android_graphics_drawable_Drawable.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_graphics_PorterDuff_Mode.hpp>

#include <android_graphics_ColorFilter.hpp>

#include <android_net_Uri.hpp>

#include <android_graphics_Bitmap.hpp>

#include <android_widget_ImageView_ScaleType.hpp>

#include <android_graphics_Matrix.hpp>

#include <android_content_Context.hpp>

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

class android_graphics_drawable_Drawable;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;


class android_graphics_ColorFilter;

class android_net_Uri;

class android_graphics_Bitmap;


class android_graphics_Matrix;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_ImageView
{
public:

	android_widget_ImageView(const android_widget_ImageView& cc);
	android_widget_ImageView(Proxy proxy);
	// Public Constructors
	android_widget_ImageView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_ImageView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	android_widget_ImageView(AndroidCXX::android_content_Context const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_ImageView();
	// Functions
	 void setVisibility(int const& arg0);
	 AndroidCXX::android_graphics_drawable_Drawable getDrawable();
	 void jumpDrawablesToCurrentState();
	 std::vector<int> onCreateDrawableState(int const& arg0);
	 void onPopulateAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0);
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0);
	 bool hasOverlappingRendering();
	 void setAlpha(int const& arg0);
	 void invalidateDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0);
	 void setSelected(bool const& arg0);
	 int getBaseline();
	 void setColorFilter(int const& arg0,android_graphics_PorterDuff_Mode::android_graphics_PorterDuff_Mode const& arg1);
	 void setColorFilter(int const& arg0);
	 void setColorFilter(AndroidCXX::android_graphics_ColorFilter const& arg0);
	 void clearColorFilter();
	 AndroidCXX::android_graphics_ColorFilter getColorFilter();
	 void setMaxHeight(int const& arg0);
	 int getMaxHeight();
	 void setMaxWidth(int const& arg0);
	 int getMaxWidth();
	 bool getAdjustViewBounds();
	 void setAdjustViewBounds(bool const& arg0);
	 void setImageResource(int const& arg0);
	 void setImageURI(AndroidCXX::android_net_Uri const& arg0);
	 void setImageDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0);
	 void setImageBitmap(AndroidCXX::android_graphics_Bitmap const& arg0);
	 void setImageState(std::vector<int> const& arg0,bool const& arg1);
	 void setImageLevel(int const& arg0);
	 void setScaleType(android_widget_ImageView_ScaleType::android_widget_ImageView_ScaleType const& arg0);
	 android_widget_ImageView_ScaleType::android_widget_ImageView_ScaleType getScaleType();
	 AndroidCXX::android_graphics_Matrix getImageMatrix();
	 void setImageMatrix(AndroidCXX::android_graphics_Matrix const& arg0);
	 bool getCropToPadding();
	 void setCropToPadding(bool const& arg0);
	 void setBaseline(int const& arg0);
	 void setBaselineAlignBottom(bool const& arg0);
	 bool getBaselineAlignBottom();
	 int getImageAlpha();
	 void setImageAlpha(int const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ImageView
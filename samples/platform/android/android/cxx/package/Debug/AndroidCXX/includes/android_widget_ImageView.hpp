/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <android_graphics_ColorFilter.hpp>

#include <android_graphics_drawable_Drawable.hpp>

#include <android_graphics_Matrix.hpp>

#include <android_widget_ImageView_ScaleType.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_graphics_PorterDuff_Mode.hpp>

#include <android_graphics_Bitmap.hpp>

#include <android_net_Uri.hpp>

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

class android_graphics_ColorFilter;

class android_graphics_drawable_Drawable;

class android_graphics_Matrix;


class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;


class android_graphics_Bitmap;

class android_net_Uri;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_ImageView : public java_lang_Object
{
public:

	// Public ConstrucXXX
	android_widget_ImageView(AndroidCXX::android_content_Context const& arg0);
	android_widget_ImageView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_ImageView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	android_widget_ImageView(const android_widget_ImageView& cc);
	android_widget_ImageView(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_ImageView();
	// Functions
	virtual void  clearColorFilter() ;
	virtual bool  getAdjustViewBounds() ;
	virtual bool  getBaselineAlignBottom() ;
	virtual int  getBaseline() ;
	virtual AndroidCXX::android_graphics_ColorFilter * getColorFilter() ;
	virtual bool  getCropToPadding() ;
	virtual AndroidCXX::android_graphics_drawable_Drawable * getDrawable() ;
	virtual int  getImageAlpha() ;
	virtual AndroidCXX::android_graphics_Matrix * getImageMatrix() ;
	virtual int  getMaxHeight() ;
	virtual int  getMaxWidth() ;
	virtual android_widget_ImageView_ScaleType::android_widget_ImageView_ScaleType  getScaleType() ;
	virtual bool  hasOverlappingRendering() ;
	virtual void  invalidateDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual void  jumpDrawablesToCurrentState() ;
	virtual std::vector<int>  onCreateDrawableState(int const& arg0) ;
	virtual void  onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) ;
	virtual void  onPopulateAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  setAdjustViewBounds(bool const& arg0) ;
	virtual void  setAlpha(int const& arg0) ;
	virtual void  setBaselineAlignBottom(bool const& arg0) ;
	virtual void  setBaseline(int const& arg0) ;
	virtual void  setColorFilter(AndroidCXX::android_graphics_ColorFilter const& arg0) ;
	virtual void  setColorFilter(int const& arg0,android_graphics_PorterDuff_Mode::android_graphics_PorterDuff_Mode const& arg1) ;
	virtual void  setColorFilter(int const& arg0) ;
	virtual void  setCropToPadding(bool const& arg0) ;
	virtual void  setImageAlpha(int const& arg0) ;
	virtual void  setImageBitmap(AndroidCXX::android_graphics_Bitmap const& arg0) ;
	virtual void  setImageDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual void  setImageLevel(int const& arg0) ;
	virtual void  setImageMatrix(AndroidCXX::android_graphics_Matrix const& arg0) ;
	virtual void  setImageResource(int const& arg0) ;
	virtual void  setImageState(std::vector<int> const& arg0,bool const& arg1) ;
	virtual void  setImageURI(AndroidCXX::android_net_Uri const& arg0) ;
	virtual void  setMaxHeight(int const& arg0) ;
	virtual void  setMaxWidth(int const& arg0) ;
	virtual void  setScaleType(android_widget_ImageView_ScaleType::android_widget_ImageView_ScaleType const& arg0) ;
	virtual void  setSelected(bool const& arg0) ;
	virtual void  setVisibility(int const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ImageView
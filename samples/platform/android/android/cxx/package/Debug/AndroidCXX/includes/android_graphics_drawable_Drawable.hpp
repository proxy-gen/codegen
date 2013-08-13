/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 	
 	
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
	
 		 
 		 
	
 		 
 		 
	
	
 		 
	
 		 
 		 
	
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 
	
 		 
 		 
 		 
	
 		 
	
	





















































// Generated Code 

#ifndef _android_graphics_drawable_Drawable
#define _android_graphics_drawable_Drawable
//
// Scroll Down 
//


#include <android_graphics_PorterDuff_Mode.hpp>


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

class android_content_res_Resources;

class org_xmlpull_v1_XmlPullParser;

class android_util_AttributeSet;

class android_graphics_Canvas;

class android_graphics_ColorFilter;


class android_graphics_Rect;

class android_graphics_drawable_Drawable_Callback;

class java_lang_Runnable;


class android_graphics_Region;

class java_io_InputStream;

class java_lang_String;

class android_util_TypedValue;

class android_graphics_BitmapFactory_Options;

class android_graphics_drawable_Drawable_ConstantState;

class android_graphics_drawable_Drawable 
{
public:

	android_graphics_drawable_Drawable(const android_graphics_drawable_Drawable& cc);
	android_graphics_drawable_Drawable(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_graphics_drawable_Drawable();
	// Functions
	virtual std::vector<int>  getState() ;
	virtual bool  setState(std::vector<int> const& arg0) ;
	virtual void  inflate(AndroidCXX::android_content_res_Resources const& arg0,AndroidCXX::org_xmlpull_v1_XmlPullParser const& arg1,AndroidCXX::android_util_AttributeSet const& arg2) ;
	virtual bool  isVisible() ;
	virtual void  setAlpha(int const& arg0) ;
	virtual void  draw(AndroidCXX::android_graphics_Canvas const& arg0) ;
	virtual int  getMinimumHeight() ;
	virtual int  getMinimumWidth() ;
	virtual void  setColorFilter(AndroidCXX::android_graphics_ColorFilter const& arg0) ;
	virtual void  setColorFilter(int const& arg0,android_graphics_PorterDuff_Mode::android_graphics_PorterDuff_Mode const& arg1) ;
	virtual void  clearColorFilter() ;
	virtual bool  setVisible(bool const& arg0,bool const& arg1) ;
	virtual AndroidCXX::android_graphics_Rect * getBounds() ;
	virtual void  setDither(bool const& arg0) ;
	virtual void  setFilterBitmap(bool const& arg0) ;
	virtual void  setBounds(int const& arg0,int const& arg1,int const& arg2,int const& arg3) ;
	virtual void  setBounds(AndroidCXX::android_graphics_Rect const& arg0) ;
	virtual AndroidCXX::android_graphics_Rect * copyBounds() ;
	virtual void  copyBounds(AndroidCXX::android_graphics_Rect const& arg0) ;
	virtual void  setChangingConfigurations(int const& arg0) ;
	virtual int  getChangingConfigurations() ;
	virtual void  setCallback(AndroidCXX::android_graphics_drawable_Drawable_Callback const& arg0) ;
	virtual AndroidCXX::android_graphics_drawable_Drawable_Callback * getCallback() ;
	virtual void  invalidateSelf() ;
	virtual void  scheduleSelf(AndroidCXX::java_lang_Runnable const& arg0,long const& arg1) ;
	virtual void  unscheduleSelf(AndroidCXX::java_lang_Runnable const& arg0) ;
	virtual bool  isStateful() ;
	virtual void  jumpToCurrentState() ;
	virtual AndroidCXX::android_graphics_drawable_Drawable * getCurrent() ;
	virtual bool  setLevel(int const& arg0) ;
	virtual int  getLevel() ;
	virtual int  getOpacity() ;
	static int  resolveOpacity(int const& arg0,int const& arg1) ;
	virtual AndroidCXX::android_graphics_Region * getTransparentRegion() ;
	virtual int  getIntrinsicWidth() ;
	virtual int  getIntrinsicHeight() ;
	virtual bool  getPadding(AndroidCXX::android_graphics_Rect const& arg0) ;
	virtual AndroidCXX::android_graphics_drawable_Drawable * mutate() ;
	static AndroidCXX::android_graphics_drawable_Drawable * createFromStream(AndroidCXX::java_io_InputStream const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	static AndroidCXX::android_graphics_drawable_Drawable * createFromResourceStream(AndroidCXX::android_content_res_Resources const& arg0,AndroidCXX::android_util_TypedValue const& arg1,AndroidCXX::java_io_InputStream const& arg2,AndroidCXX::java_lang_String const& arg3) ;
	static AndroidCXX::android_graphics_drawable_Drawable * createFromResourceStream(AndroidCXX::android_content_res_Resources const& arg0,AndroidCXX::android_util_TypedValue const& arg1,AndroidCXX::java_io_InputStream const& arg2,AndroidCXX::java_lang_String const& arg3,AndroidCXX::android_graphics_BitmapFactory_Options const& arg4) ;
	static AndroidCXX::android_graphics_drawable_Drawable * createFromXml(AndroidCXX::android_content_res_Resources const& arg0,AndroidCXX::org_xmlpull_v1_XmlPullParser const& arg1) ;
	static AndroidCXX::android_graphics_drawable_Drawable * createFromXmlInner(AndroidCXX::android_content_res_Resources const& arg0,AndroidCXX::org_xmlpull_v1_XmlPullParser const& arg1,AndroidCXX::android_util_AttributeSet const& arg2) ;
	static AndroidCXX::android_graphics_drawable_Drawable * createFromPath(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::android_graphics_drawable_Drawable_ConstantState * getConstantState() ;

protected:
	android_graphics_drawable_Drawable();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_drawable_Drawable
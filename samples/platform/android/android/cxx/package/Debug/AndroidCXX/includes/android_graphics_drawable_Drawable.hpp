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

class android_graphics_Rect;

class java_lang_String;


class android_content_res_Resources;

class android_util_TypedValue;

class java_io_InputStream;

class android_graphics_BitmapFactory_Options;

class org_xmlpull_v1_XmlPullParser;

class android_util_AttributeSet;

class android_graphics_Canvas;

class android_graphics_drawable_Drawable_Callback;

class android_graphics_drawable_Drawable_ConstantState;

class android_graphics_Region;

class java_lang_Runnable;

class android_graphics_ColorFilter;


class android_graphics_drawable_Drawable : public AndroidCXX::java_lang_Object
{
public:

	android_graphics_drawable_Drawable(const android_graphics_drawable_Drawable& cc);
	android_graphics_drawable_Drawable(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_graphics_drawable_Drawable();
	// Functions
	virtual void  clearColorFilter() ;
	virtual void  copyBounds(AndroidCXX::android_graphics_Rect const& arg0) ;
	virtual AndroidCXX::android_graphics_Rect * copyBounds() ;
	static AndroidCXX::android_graphics_drawable_Drawable * createFromPath(AndroidCXX::java_lang_String const& arg0) ;
	static AndroidCXX::android_graphics_drawable_Drawable * createFromResourceStream(AndroidCXX::android_content_res_Resources const& arg0,AndroidCXX::android_util_TypedValue const& arg1,AndroidCXX::java_io_InputStream const& arg2,AndroidCXX::java_lang_String const& arg3,AndroidCXX::android_graphics_BitmapFactory_Options const& arg4) ;
	static AndroidCXX::android_graphics_drawable_Drawable * createFromResourceStream(AndroidCXX::android_content_res_Resources const& arg0,AndroidCXX::android_util_TypedValue const& arg1,AndroidCXX::java_io_InputStream const& arg2,AndroidCXX::java_lang_String const& arg3) ;
	static AndroidCXX::android_graphics_drawable_Drawable * createFromStream(AndroidCXX::java_io_InputStream const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	static AndroidCXX::android_graphics_drawable_Drawable * createFromXmlInner(AndroidCXX::android_content_res_Resources const& arg0,AndroidCXX::org_xmlpull_v1_XmlPullParser const& arg1,AndroidCXX::android_util_AttributeSet const& arg2) ;
	static AndroidCXX::android_graphics_drawable_Drawable * createFromXml(AndroidCXX::android_content_res_Resources const& arg0,AndroidCXX::org_xmlpull_v1_XmlPullParser const& arg1) ;
	virtual void  draw(AndroidCXX::android_graphics_Canvas const& arg0) ;
	virtual AndroidCXX::android_graphics_Rect * getBounds() ;
	virtual AndroidCXX::android_graphics_drawable_Drawable_Callback * getCallback() ;
	virtual int  getChangingConfigurations() ;
	virtual AndroidCXX::android_graphics_drawable_Drawable_ConstantState * getConstantState() ;
	virtual AndroidCXX::android_graphics_drawable_Drawable * getCurrent() ;
	virtual int  getIntrinsicHeight() ;
	virtual int  getIntrinsicWidth() ;
	virtual int  getLevel() ;
	virtual int  getMinimumHeight() ;
	virtual int  getMinimumWidth() ;
	virtual int  getOpacity() ;
	virtual bool  getPadding(AndroidCXX::android_graphics_Rect const& arg0) ;
	virtual std::vector<int>  getState() ;
	virtual AndroidCXX::android_graphics_Region * getTransparentRegion() ;
	virtual void  inflate(AndroidCXX::android_content_res_Resources const& arg0,AndroidCXX::org_xmlpull_v1_XmlPullParser const& arg1,AndroidCXX::android_util_AttributeSet const& arg2) ;
	virtual void  invalidateSelf() ;
	virtual bool  isStateful() ;
	virtual bool  isVisible() ;
	virtual void  jumpToCurrentState() ;
	virtual AndroidCXX::android_graphics_drawable_Drawable * mutate() ;
	static int  resolveOpacity(int const& arg0,int const& arg1) ;
	virtual void  scheduleSelf(AndroidCXX::java_lang_Runnable const& arg0,long const& arg1) ;
	virtual void  setAlpha(int const& arg0) ;
	virtual void  setBounds(AndroidCXX::android_graphics_Rect const& arg0) ;
	virtual void  setBounds(int const& arg0,int const& arg1,int const& arg2,int const& arg3) ;
	virtual void  setCallback(AndroidCXX::android_graphics_drawable_Drawable_Callback const& arg0) ;
	virtual void  setChangingConfigurations(int const& arg0) ;
	virtual void  setColorFilter(AndroidCXX::android_graphics_ColorFilter const& arg0) ;
	virtual void  setColorFilter(int const& arg0,android_graphics_PorterDuff_Mode::android_graphics_PorterDuff_Mode const& arg1) ;
	virtual void  setDither(bool const& arg0) ;
	virtual void  setFilterBitmap(bool const& arg0) ;
	virtual bool  setLevel(int const& arg0) ;
	virtual bool  setState(std::vector<int> const& arg0) ;
	virtual bool  setVisible(bool const& arg0,bool const& arg1) ;
	virtual void  unscheduleSelf(AndroidCXX::java_lang_Runnable const& arg0) ;

protected:
	android_graphics_drawable_Drawable();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_drawable_Drawable
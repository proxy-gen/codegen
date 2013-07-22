/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <android_content_res_Resources.hpp>

#include <org_xmlpull_v1_XmlPullParser.hpp>

#include <android_util_AttributeSet.hpp>

#include <android_graphics_Rect.hpp>

#include <android_graphics_Canvas.hpp>

#include <android_graphics_drawable_Drawable_Callback.hpp>

#include <java_lang_Runnable.hpp>

#include <android_graphics_ColorFilter.hpp>

#include <android_graphics_PorterDuff_Mode.hpp>


#include <android_graphics_Region.hpp>

#include <java_io_InputStream.hpp>

#include <java_lang_String.hpp>

#include <android_util_TypedValue.hpp>

#include <android_graphics_BitmapFactory_Options.hpp>

#include <android_graphics_drawable_Drawable_ConstantState.hpp>

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

class android_graphics_Rect;

class android_graphics_Canvas;

class android_graphics_drawable_Drawable_Callback;

class java_lang_Runnable;

class android_graphics_ColorFilter;


class android_graphics_drawable_Drawable;

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
	android_graphics_drawable_Drawable(void * proxy);
	// Public Constructors
	android_graphics_drawable_Drawable();
	// Default Destructor
	virtual ~android_graphics_drawable_Drawable();
	// Functions
	 std::vector<int> getState();
	 bool setState(std::vector<int>& arg0);
	 void inflate(AndroidCXX::android_content_res_Resources& arg0,AndroidCXX::org_xmlpull_v1_XmlPullParser& arg1,AndroidCXX::android_util_AttributeSet& arg2);
	 AndroidCXX::android_graphics_Rect getBounds();
	 bool isVisible();
	 int getChangingConfigurations();
	 bool setVisible(bool& arg0,bool& arg1);
	 void setAlpha(int& arg0);
	 void draw(AndroidCXX::android_graphics_Canvas& arg0);
	 int getMinimumHeight();
	 int getMinimumWidth();
	 void setBounds(int& arg0,int& arg1,int& arg2,int& arg3);
	 void setBounds(AndroidCXX::android_graphics_Rect& arg0);
	 void copyBounds(AndroidCXX::android_graphics_Rect& arg0);
	 AndroidCXX::android_graphics_Rect copyBounds();
	 void setChangingConfigurations(int& arg0);
	 void setDither(bool& arg0);
	 void setFilterBitmap(bool& arg0);
	 void setCallback(AndroidCXX::android_graphics_drawable_Drawable_Callback& arg0);
	 AndroidCXX::android_graphics_drawable_Drawable_Callback getCallback();
	 void invalidateSelf();
	 void scheduleSelf(AndroidCXX::java_lang_Runnable& arg0,long& arg1);
	 void unscheduleSelf(AndroidCXX::java_lang_Runnable& arg0);
	 void setColorFilter(AndroidCXX::android_graphics_ColorFilter& arg0);
	 void setColorFilter(int& arg0,ANDROID_GRAPHICS_PORTERDUFF_MODE::android_graphics_PorterDuff_Mode& arg1);
	 void clearColorFilter();
	 bool isStateful();
	 void jumpToCurrentState();
	 AndroidCXX::android_graphics_drawable_Drawable getCurrent();
	 bool setLevel(int& arg0);
	 int getLevel();
	 int getOpacity();
	static int resolveOpacity(int& arg0,int& arg1);
	 AndroidCXX::android_graphics_Region getTransparentRegion();
	 int getIntrinsicWidth();
	 int getIntrinsicHeight();
	 bool getPadding(AndroidCXX::android_graphics_Rect& arg0);
	 AndroidCXX::android_graphics_drawable_Drawable mutate();
	static AndroidCXX::android_graphics_drawable_Drawable createFromStream(AndroidCXX::java_io_InputStream& arg0,AndroidCXX::java_lang_String& arg1);
	static AndroidCXX::android_graphics_drawable_Drawable createFromResourceStream(AndroidCXX::android_content_res_Resources& arg0,AndroidCXX::android_util_TypedValue& arg1,AndroidCXX::java_io_InputStream& arg2,AndroidCXX::java_lang_String& arg3);
	static AndroidCXX::android_graphics_drawable_Drawable createFromResourceStream(AndroidCXX::android_content_res_Resources& arg0,AndroidCXX::android_util_TypedValue& arg1,AndroidCXX::java_io_InputStream& arg2,AndroidCXX::java_lang_String& arg3,AndroidCXX::android_graphics_BitmapFactory_Options& arg4);
	static AndroidCXX::android_graphics_drawable_Drawable createFromXml(AndroidCXX::android_content_res_Resources& arg0,AndroidCXX::org_xmlpull_v1_XmlPullParser& arg1);
	static AndroidCXX::android_graphics_drawable_Drawable createFromXmlInner(AndroidCXX::android_content_res_Resources& arg0,AndroidCXX::org_xmlpull_v1_XmlPullParser& arg1,AndroidCXX::android_util_AttributeSet& arg2);
	static AndroidCXX::android_graphics_drawable_Drawable createFromPath(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::android_graphics_drawable_Drawable_ConstantState getConstantState();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_drawable_Drawable
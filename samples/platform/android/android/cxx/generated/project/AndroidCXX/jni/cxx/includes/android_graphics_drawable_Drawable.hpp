/*
 * Header (Abstract CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
		
 			
 			
 			
 			
		
 			
 			
 			
 			
		
		
 			
		
 			
 			
		
 			
 			
 			
 			
 			
		
 			
 			
		
 			
 			
 			
		
 			
		
		


#ifndef _android_graphics_drawable_Drawable
#define _android_graphics_drawable_Drawable











































#include <android_graphics_BitmapFactory_Options.hpp>
#include <org_xmlpull_v1_XmlPullParser.hpp>
#include <android_util_AttributeSet.hpp>
#include <android_graphics_drawable_Drawable_ConstantState.hpp>
#include <android_graphics_Rect.hpp>
#include <android_graphics_ColorFilter.hpp>
#include <android_content_res_Resources.hpp>
#include <java_io_InputStream.hpp>
#include <android_graphics_PorterDuff_Mode.hpp>
#include <java_lang_Runnable.hpp>
#include <android_graphics_Canvas.hpp>
#include <android_graphics_drawable_Drawable_Callback.hpp>
#include <android_util_TypedValue.hpp>
#include <java_lang_String.hpp>
#include <android_graphics_Region.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_graphics_drawable_Drawable
{
public:
 std::vector<int> getState();
 bool setState(std::vector<int>& arg0);
 void inflate(android_content_res_Resources& arg0,org_xmlpull_v1_XmlPullParser& arg1,android_util_AttributeSet& arg2);
 android_graphics_Rect getBounds();
 bool isVisible();
 int getChangingConfigurations();
 bool setVisible(bool& arg0);
 void setAlpha(int& arg0);
 void draw(android_graphics_Canvas& arg0);
 int getMinimumHeight();
 int getMinimumWidth();
 void setBounds(int& arg0,android_graphics_Rect& arg1);
 void copyBounds(android_graphics_Rect& arg0);
 void setChangingConfigurations(int& arg0);
 void setDither(bool& arg0);
 void setFilterBitmap(bool& arg0);
 void setCallback(android_graphics_drawable_Drawable_Callback& arg0);
 android_graphics_drawable_Drawable_Callback getCallback();
 void invalidateSelf();
 void scheduleSelf(java_lang_Runnable& arg0,long& arg1);
 void unscheduleSelf(java_lang_Runnable& arg0);
 void setColorFilter(android_graphics_ColorFilter& arg0,int& arg1,android_graphics_PorterDuff_Mode& arg2);
 void clearColorFilter();
 bool isStateful();
 void jumpToCurrentState();
 android_graphics_drawable_Drawable getCurrent();
 bool setLevel(int& arg0);
 int getLevel();
 int getOpacity();
static int resolveOpacity(int& arg0);
 android_graphics_Region getTransparentRegion();
 int getIntrinsicWidth();
 int getIntrinsicHeight();
 bool getPadding(android_graphics_Rect& arg0);
 android_graphics_drawable_Drawable mutate();
static android_graphics_drawable_Drawable createFromStream(java_io_InputStream& arg0,java_lang_String& arg1);
static android_graphics_drawable_Drawable createFromResourceStream(android_content_res_Resources& arg0,android_util_TypedValue& arg1,java_io_InputStream& arg2,java_lang_String& arg3,android_graphics_BitmapFactory_Options& arg4);
static android_graphics_drawable_Drawable createFromXml(android_content_res_Resources& arg0,org_xmlpull_v1_XmlPullParser& arg1);
static android_graphics_drawable_Drawable createFromXmlInner(android_content_res_Resources& arg0,org_xmlpull_v1_XmlPullParser& arg1,android_util_AttributeSet& arg2);
static android_graphics_drawable_Drawable createFromPath(java_lang_String& arg0);
 android_graphics_drawable_Drawable_ConstantState getConstantState();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_drawable_Drawable
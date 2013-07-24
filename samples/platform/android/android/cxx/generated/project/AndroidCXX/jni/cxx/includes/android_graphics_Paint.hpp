/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
	
	
 		 
	
 		 
	
 		 
 		 
 		 
	
 		 
	
	
	
 		 
	
	
 		 
	
	
 		 
	
	
 		 
	
	
 		 
	
	
 		 
	
 		 
	
 		 
	
 		 
 		 
 		 
 		 
 	
 		 
 	
 		 
 	
 	
 	
 		 
 	
 		 
 	
 		 
 	
 	
 	
 		 
 		 
 	
 		 
 		 
 		 
 	
 		 


 		 






























































































// Generated Code 

#ifndef _android_graphics_Paint
#define _android_graphics_Paint
//
// Scroll Down 
//



#include <android_graphics_ColorFilter.hpp>

#include <android_graphics_Paint_Style.hpp>

#include <android_graphics_Paint_Cap.hpp>

#include <android_graphics_Paint_Join.hpp>

#include <android_graphics_Path.hpp>

#include <android_graphics_Shader.hpp>

#include <android_graphics_Xfermode.hpp>

#include <android_graphics_PathEffect.hpp>

#include <android_graphics_MaskFilter.hpp>

#include <android_graphics_Typeface.hpp>

#include <android_graphics_Rasterizer.hpp>

#include <android_graphics_Paint_Align.hpp>

#include <java_util_Locale.hpp>

#include <android_graphics_Paint_FontMetrics.hpp>

#include <android_graphics_Paint_FontMetricsInt.hpp>

#include <java_lang_String.hpp>

#include <java_lang_CharSequence.hpp>

#include <android_graphics_Rect.hpp>

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

class android_graphics_Paint;

class android_graphics_ColorFilter;




class android_graphics_Path;

class android_graphics_Shader;

class android_graphics_Xfermode;

class android_graphics_PathEffect;

class android_graphics_MaskFilter;

class android_graphics_Typeface;

class android_graphics_Rasterizer;


class java_util_Locale;

class android_graphics_Paint_FontMetrics;

class android_graphics_Paint_FontMetricsInt;

class java_lang_String;

class java_lang_CharSequence;

class android_graphics_Rect;

class android_graphics_Paint
{
public:

	android_graphics_Paint(const android_graphics_Paint& cc);
	android_graphics_Paint(void * proxy);
	// Public Constructors
	android_graphics_Paint();
	android_graphics_Paint(int& arg0);
	android_graphics_Paint(AndroidCXX::android_graphics_Paint& arg0);
	// TODO: remove
	// 
	// Default Destructor
	virtual ~android_graphics_Paint();
	// Functions
	 void set(AndroidCXX::android_graphics_Paint& arg0);
	 void reset();
	 int getColor();
	 int getFlags();
	 void setFlags(int& arg0);
	 int getAlpha();
	 void setAlpha(int& arg0);
	 void setDither(bool& arg0);
	 void setFilterBitmap(bool& arg0);
	 AndroidCXX::android_graphics_ColorFilter setColorFilter(AndroidCXX::android_graphics_ColorFilter& arg0);
	 int getHinting();
	 void setHinting(int& arg0);
	 bool isAntiAlias();
	 void setAntiAlias(bool& arg0);
	 bool isDither();
	 bool isLinearText();
	 void setLinearText(bool& arg0);
	 bool isSubpixelText();
	 void setSubpixelText(bool& arg0);
	 bool isUnderlineText();
	 void setUnderlineText(bool& arg0);
	 bool isStrikeThruText();
	 void setStrikeThruText(bool& arg0);
	 bool isFakeBoldText();
	 void setFakeBoldText(bool& arg0);
	 bool isFilterBitmap();
	 ANDROID_GRAPHICS_PAINT_STYLE::android_graphics_Paint_Style getStyle();
	 void setStyle(ANDROID_GRAPHICS_PAINT_STYLE::android_graphics_Paint_Style& arg0);
	 void setColor(int& arg0);
	 void setARGB(int& arg0,int& arg1,int& arg2,int& arg3);
	 float getStrokeWidth();
	 void setStrokeWidth(float& arg0);
	 float getStrokeMiter();
	 void setStrokeMiter(float& arg0);
	 ANDROID_GRAPHICS_PAINT_CAP::android_graphics_Paint_Cap getStrokeCap();
	 void setStrokeCap(ANDROID_GRAPHICS_PAINT_CAP::android_graphics_Paint_Cap& arg0);
	 ANDROID_GRAPHICS_PAINT_JOIN::android_graphics_Paint_Join getStrokeJoin();
	 void setStrokeJoin(ANDROID_GRAPHICS_PAINT_JOIN::android_graphics_Paint_Join& arg0);
	 bool getFillPath(AndroidCXX::android_graphics_Path& arg0,AndroidCXX::android_graphics_Path& arg1);
	 AndroidCXX::android_graphics_Shader getShader();
	 AndroidCXX::android_graphics_Shader setShader(AndroidCXX::android_graphics_Shader& arg0);
	 AndroidCXX::android_graphics_ColorFilter getColorFilter();
	 AndroidCXX::android_graphics_Xfermode getXfermode();
	 AndroidCXX::android_graphics_Xfermode setXfermode(AndroidCXX::android_graphics_Xfermode& arg0);
	 AndroidCXX::android_graphics_PathEffect getPathEffect();
	 AndroidCXX::android_graphics_PathEffect setPathEffect(AndroidCXX::android_graphics_PathEffect& arg0);
	 AndroidCXX::android_graphics_MaskFilter getMaskFilter();
	 AndroidCXX::android_graphics_MaskFilter setMaskFilter(AndroidCXX::android_graphics_MaskFilter& arg0);
	 AndroidCXX::android_graphics_Typeface getTypeface();
	 AndroidCXX::android_graphics_Typeface setTypeface(AndroidCXX::android_graphics_Typeface& arg0);
	 AndroidCXX::android_graphics_Rasterizer getRasterizer();
	 AndroidCXX::android_graphics_Rasterizer setRasterizer(AndroidCXX::android_graphics_Rasterizer& arg0);
	 void setShadowLayer(float& arg0,float& arg1,float& arg2,int& arg3);
	 void clearShadowLayer();
	 ANDROID_GRAPHICS_PAINT_ALIGN::android_graphics_Paint_Align getTextAlign();
	 void setTextAlign(ANDROID_GRAPHICS_PAINT_ALIGN::android_graphics_Paint_Align& arg0);
	 AndroidCXX::java_util_Locale getTextLocale();
	 void setTextLocale(AndroidCXX::java_util_Locale& arg0);
	 float getTextSize();
	 void setTextSize(float& arg0);
	 float getTextScaleX();
	 void setTextScaleX(float& arg0);
	 float getTextSkewX();
	 void setTextSkewX(float& arg0);
	 float ascent();
	 float descent();
	 AndroidCXX::android_graphics_Paint_FontMetrics getFontMetrics();
	 float getFontMetrics(AndroidCXX::android_graphics_Paint_FontMetrics& arg0);
	 AndroidCXX::android_graphics_Paint_FontMetricsInt getFontMetricsInt();
	 int getFontMetricsInt(AndroidCXX::android_graphics_Paint_FontMetricsInt& arg0);
	 float getFontSpacing();
	 float measureText(AndroidCXX::java_lang_String& arg0,int& arg1,int& arg2);
	 float measureText(AndroidCXX::java_lang_String& arg0);
	 float measureText(AndroidCXX::java_lang_CharSequence& arg0,int& arg1,int& arg2);
	 float measureText(std::vector<char>& arg0,int& arg1,int& arg2);
	 int breakText(AndroidCXX::java_lang_CharSequence& arg0,int& arg1,int& arg2,bool& arg3,float& arg4,std::vector<float>& arg5);
	 int breakText(AndroidCXX::java_lang_String& arg0,bool& arg1,float& arg2,std::vector<float>& arg3);
	 int breakText(std::vector<char>& arg0,int& arg1,int& arg2,float& arg3,std::vector<float>& arg4);
	 int getTextWidths(AndroidCXX::java_lang_CharSequence& arg0,int& arg1,int& arg2,std::vector<float>& arg3);
	 int getTextWidths(AndroidCXX::java_lang_String& arg0,int& arg1,int& arg2,std::vector<float>& arg3);
	 int getTextWidths(AndroidCXX::java_lang_String& arg0,std::vector<float>& arg1);
	 int getTextWidths(std::vector<char>& arg0,int& arg1,int& arg2,std::vector<float>& arg3);
	 void getTextPath(AndroidCXX::java_lang_String& arg0,int& arg1,int& arg2,float& arg3,float& arg4,AndroidCXX::android_graphics_Path& arg5);
	 void getTextPath(std::vector<char>& arg0,int& arg1,int& arg2,float& arg3,float& arg4,AndroidCXX::android_graphics_Path& arg5);
	 void getTextBounds(AndroidCXX::java_lang_String& arg0,int& arg1,int& arg2,AndroidCXX::android_graphics_Rect& arg3);
	 void getTextBounds(std::vector<char>& arg0,int& arg1,int& arg2,AndroidCXX::android_graphics_Rect& arg3);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_Paint
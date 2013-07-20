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
	 void set(android_graphics_Paint& arg0);
	 void reset();
	 int getColor();
	 int getFlags();
	 void setFlags(int& arg0);
	 int getAlpha();
	 void setAlpha(int& arg0);
	 void setDither(bool& arg0);
	 void setFilterBitmap(bool& arg0);
	 android_graphics_ColorFilter *  setColorFilter(android_graphics_ColorFilter& arg0);
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
	 android_graphics_Paint_Style *  getStyle();
	 void setStyle(android_graphics_Paint_Style& arg0);
	 void setColor(int& arg0);
	 void setARGB(int& arg0);
	 float getStrokeWidth();
	 void setStrokeWidth(float& arg0);
	 float getStrokeMiter();
	 void setStrokeMiter(float& arg0);
	 android_graphics_Paint_Cap *  getStrokeCap();
	 void setStrokeCap(android_graphics_Paint_Cap& arg0);
	 android_graphics_Paint_Join *  getStrokeJoin();
	 void setStrokeJoin(android_graphics_Paint_Join& arg0);
	 bool getFillPath(android_graphics_Path& arg0);
	 android_graphics_Shader *  getShader();
	 android_graphics_Shader *  setShader(android_graphics_Shader& arg0);
	 android_graphics_ColorFilter *  getColorFilter();
	 android_graphics_Xfermode *  getXfermode();
	 android_graphics_Xfermode *  setXfermode(android_graphics_Xfermode& arg0);
	 android_graphics_PathEffect *  getPathEffect();
	 android_graphics_PathEffect *  setPathEffect(android_graphics_PathEffect& arg0);
	 android_graphics_MaskFilter *  getMaskFilter();
	 android_graphics_MaskFilter *  setMaskFilter(android_graphics_MaskFilter& arg0);
	 android_graphics_Typeface *  getTypeface();
	 android_graphics_Typeface *  setTypeface(android_graphics_Typeface& arg0);
	 android_graphics_Rasterizer *  getRasterizer();
	 android_graphics_Rasterizer *  setRasterizer(android_graphics_Rasterizer& arg0);
	 void setShadowLayer(float& arg0,int& arg1);
	 void clearShadowLayer();
	 android_graphics_Paint_Align *  getTextAlign();
	 void setTextAlign(android_graphics_Paint_Align& arg0);
	 java_util_Locale *  getTextLocale();
	 void setTextLocale(java_util_Locale& arg0);
	 float getTextSize();
	 void setTextSize(float& arg0);
	 float getTextScaleX();
	 void setTextScaleX(float& arg0);
	 float getTextSkewX();
	 void setTextSkewX(float& arg0);
	 float ascent();
	 float descent();
	 android_graphics_Paint_FontMetrics *  getFontMetrics(android_graphics_Paint_FontMetrics& arg0);
	 android_graphics_Paint_FontMetricsInt *  getFontMetricsInt(android_graphics_Paint_FontMetricsInt& arg0);
	 float getFontSpacing();
	 float measureText(java_lang_String& arg0,int& arg1,java_lang_CharSequence& arg2,std::vector<char>& arg3);
	 int breakText(java_lang_CharSequence& arg0,int& arg1,bool& arg2,float& arg3,std::vector<float>& arg4,java_lang_String& arg5,std::vector<char>& arg6);
	 int getTextWidths(java_lang_CharSequence& arg0,int& arg1,std::vector<float>& arg2,java_lang_String& arg3,std::vector<char>& arg4);
	 void getTextPath(java_lang_String& arg0,int& arg1,float& arg2,android_graphics_Path& arg3,std::vector<char>& arg4);
	 void getTextBounds(java_lang_String& arg0,int& arg1,android_graphics_Rect& arg2,std::vector<char>& arg3);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_Paint
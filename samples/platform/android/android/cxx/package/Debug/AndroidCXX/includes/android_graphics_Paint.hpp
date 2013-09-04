/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <java_lang_CharSequence.hpp>

#include <java_lang_String.hpp>

#include <android_graphics_ColorFilter.hpp>

#include <android_graphics_Path.hpp>

#include <android_graphics_Paint_FontMetricsInt.hpp>

#include <android_graphics_Paint_FontMetrics.hpp>

#include <android_graphics_MaskFilter.hpp>

#include <android_graphics_PathEffect.hpp>

#include <android_graphics_Rasterizer.hpp>

#include <android_graphics_Shader.hpp>

#include <android_graphics_Paint_Cap.hpp>

#include <android_graphics_Paint_Join.hpp>

#include <android_graphics_Paint_Style.hpp>

#include <android_graphics_Paint_Align.hpp>

#include <android_graphics_Rect.hpp>

#include <java_util_Locale.hpp>

#include <android_graphics_Typeface.hpp>

#include <android_graphics_Xfermode.hpp>


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

class java_lang_CharSequence;

class java_lang_String;

class android_graphics_ColorFilter;

class android_graphics_Path;

class android_graphics_Paint_FontMetricsInt;

class android_graphics_Paint_FontMetrics;

class android_graphics_MaskFilter;

class android_graphics_PathEffect;

class android_graphics_Rasterizer;

class android_graphics_Shader;





class android_graphics_Rect;

class java_util_Locale;

class android_graphics_Typeface;

class android_graphics_Xfermode;


class android_graphics_Paint : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	android_graphics_Paint(Proxy * aProxy = new Proxy());
	android_graphics_Paint(AndroidCXX::android_graphics_Paint const& arg0,Proxy * aProxy = new Proxy());
	android_graphics_Paint(int const& arg0,Proxy * aProxy = new Proxy());
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_graphics_Paint();
	// Functions
	virtual float  ascent() ;
	virtual int  breakText(std::vector<char> const& arg0,int const& arg1,int const& arg2,float const& arg3,std::vector<float> const& arg4) ;
	virtual int  breakText(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1,int const& arg2,bool const& arg3,float const& arg4,std::vector<float> const& arg5) ;
	virtual int  breakText(AndroidCXX::java_lang_String const& arg0,bool const& arg1,float const& arg2,std::vector<float> const& arg3) ;
	virtual void  clearShadowLayer() ;
	virtual float  descent() ;
	virtual int  getAlpha() ;
	virtual AndroidCXX::android_graphics_ColorFilter * getColorFilter() ;
	virtual int  getColor() ;
	virtual bool  getFillPath(AndroidCXX::android_graphics_Path const& arg0,AndroidCXX::android_graphics_Path const& arg1) ;
	virtual int  getFlags() ;
	virtual int  getFontMetricsInt(AndroidCXX::android_graphics_Paint_FontMetricsInt const& arg0) ;
	virtual AndroidCXX::android_graphics_Paint_FontMetricsInt * getFontMetricsInt() ;
	virtual float  getFontMetrics(AndroidCXX::android_graphics_Paint_FontMetrics const& arg0) ;
	virtual AndroidCXX::android_graphics_Paint_FontMetrics * getFontMetrics() ;
	virtual float  getFontSpacing() ;
	virtual int  getHinting() ;
	virtual AndroidCXX::android_graphics_MaskFilter * getMaskFilter() ;
	virtual AndroidCXX::android_graphics_PathEffect * getPathEffect() ;
	virtual AndroidCXX::android_graphics_Rasterizer * getRasterizer() ;
	virtual AndroidCXX::android_graphics_Shader * getShader() ;
	virtual android_graphics_Paint_Cap::android_graphics_Paint_Cap  getStrokeCap() ;
	virtual android_graphics_Paint_Join::android_graphics_Paint_Join  getStrokeJoin() ;
	virtual float  getStrokeMiter() ;
	virtual float  getStrokeWidth() ;
	virtual android_graphics_Paint_Style::android_graphics_Paint_Style  getStyle() ;
	virtual android_graphics_Paint_Align::android_graphics_Paint_Align  getTextAlign() ;
	virtual void  getTextBounds(std::vector<char> const& arg0,int const& arg1,int const& arg2,AndroidCXX::android_graphics_Rect const& arg3) ;
	virtual void  getTextBounds(AndroidCXX::java_lang_String const& arg0,int const& arg1,int const& arg2,AndroidCXX::android_graphics_Rect const& arg3) ;
	virtual AndroidCXX::java_util_Locale * getTextLocale() ;
	virtual void  getTextPath(std::vector<char> const& arg0,int const& arg1,int const& arg2,float const& arg3,float const& arg4,AndroidCXX::android_graphics_Path const& arg5) ;
	virtual void  getTextPath(AndroidCXX::java_lang_String const& arg0,int const& arg1,int const& arg2,float const& arg3,float const& arg4,AndroidCXX::android_graphics_Path const& arg5) ;
	virtual float  getTextScaleX() ;
	virtual float  getTextSize() ;
	virtual float  getTextSkewX() ;
	virtual int  getTextWidths(std::vector<char> const& arg0,int const& arg1,int const& arg2,std::vector<float> const& arg3) ;
	virtual int  getTextWidths(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1,int const& arg2,std::vector<float> const& arg3) ;
	virtual int  getTextWidths(AndroidCXX::java_lang_String const& arg0,std::vector<float> const& arg1) ;
	virtual int  getTextWidths(AndroidCXX::java_lang_String const& arg0,int const& arg1,int const& arg2,std::vector<float> const& arg3) ;
	virtual AndroidCXX::android_graphics_Typeface * getTypeface() ;
	virtual AndroidCXX::android_graphics_Xfermode * getXfermode() ;
	virtual bool  isAntiAlias() ;
	virtual bool  isDither() ;
	virtual bool  isFakeBoldText() ;
	virtual bool  isFilterBitmap() ;
	virtual bool  isLinearText() ;
	virtual bool  isStrikeThruText() ;
	virtual bool  isSubpixelText() ;
	virtual bool  isUnderlineText() ;
	virtual float  measureText(std::vector<char> const& arg0,int const& arg1,int const& arg2) ;
	virtual float  measureText(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1,int const& arg2) ;
	virtual float  measureText(AndroidCXX::java_lang_String const& arg0,int const& arg1,int const& arg2) ;
	virtual float  measureText(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  reset() ;
	virtual void  setARGB(int const& arg0,int const& arg1,int const& arg2,int const& arg3) ;
	virtual void  setAlpha(int const& arg0) ;
	virtual void  setAntiAlias(bool const& arg0) ;
	virtual AndroidCXX::android_graphics_ColorFilter * setColorFilter(AndroidCXX::android_graphics_ColorFilter const& arg0) ;
	virtual void  setColor(int const& arg0) ;
	virtual void  setDither(bool const& arg0) ;
	virtual void  setFakeBoldText(bool const& arg0) ;
	virtual void  setFilterBitmap(bool const& arg0) ;
	virtual void  setFlags(int const& arg0) ;
	virtual void  setHinting(int const& arg0) ;
	virtual void  setLinearText(bool const& arg0) ;
	virtual AndroidCXX::android_graphics_MaskFilter * setMaskFilter(AndroidCXX::android_graphics_MaskFilter const& arg0) ;
	virtual void  set(AndroidCXX::android_graphics_Paint const& arg0) ;
	virtual AndroidCXX::android_graphics_PathEffect * setPathEffect(AndroidCXX::android_graphics_PathEffect const& arg0) ;
	virtual AndroidCXX::android_graphics_Rasterizer * setRasterizer(AndroidCXX::android_graphics_Rasterizer const& arg0) ;
	virtual AndroidCXX::android_graphics_Shader * setShader(AndroidCXX::android_graphics_Shader const& arg0) ;
	virtual void  setShadowLayer(float const& arg0,float const& arg1,float const& arg2,int const& arg3) ;
	virtual void  setStrikeThruText(bool const& arg0) ;
	virtual void  setStrokeCap(android_graphics_Paint_Cap::android_graphics_Paint_Cap const& arg0) ;
	virtual void  setStrokeJoin(android_graphics_Paint_Join::android_graphics_Paint_Join const& arg0) ;
	virtual void  setStrokeMiter(float const& arg0) ;
	virtual void  setStrokeWidth(float const& arg0) ;
	virtual void  setStyle(android_graphics_Paint_Style::android_graphics_Paint_Style const& arg0) ;
	virtual void  setSubpixelText(bool const& arg0) ;
	virtual void  setTextAlign(android_graphics_Paint_Align::android_graphics_Paint_Align const& arg0) ;
	virtual void  setTextLocale(AndroidCXX::java_util_Locale const& arg0) ;
	virtual void  setTextScaleX(float const& arg0) ;
	virtual void  setTextSize(float const& arg0) ;
	virtual void  setTextSkewX(float const& arg0) ;
	virtual AndroidCXX::android_graphics_Typeface * setTypeface(AndroidCXX::android_graphics_Typeface const& arg0) ;
	virtual void  setUnderlineText(bool const& arg0) ;
	virtual AndroidCXX::android_graphics_Xfermode * setXfermode(AndroidCXX::android_graphics_Xfermode const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_Paint
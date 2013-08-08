/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
	
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 	
 		 
 	
 		 
 		 
 		 
 	
 		 
 	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 	
 		 
 	
 		 
 		 
 		 
 		 
 		 
 	
 	
 		 
 		 
 	
 	
 	
 	
 		 
 	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 	
 	
 		 
 		 
 	
 		 
 	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 


 		 



























































































// Generated Code 

#ifndef _android_graphics_Canvas
#define _android_graphics_Canvas
//
// Scroll Down 
//


#include <android_graphics_Matrix.hpp>

#include <android_graphics_Rect.hpp>

#include <android_graphics_Bitmap.hpp>

#include <android_graphics_RectF.hpp>

#include <android_graphics_Paint.hpp>

#include <android_graphics_Region_Op.hpp>

#include <android_graphics_Path.hpp>

#include <android_graphics_Region.hpp>

#include <android_graphics_DrawFilter.hpp>

#include <android_graphics_Canvas_EdgeType.hpp>

#include <android_graphics_PorterDuff_Mode.hpp>

#include <android_graphics_Canvas_VertexMode.hpp>

#include <java_lang_String.hpp>

#include <java_lang_CharSequence.hpp>

#include <android_graphics_Picture.hpp>

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

class android_graphics_Matrix;

class android_graphics_Rect;

class android_graphics_Bitmap;

class android_graphics_RectF;

class android_graphics_Paint;


class android_graphics_Path;

class android_graphics_Region;

class android_graphics_DrawFilter;




class java_lang_String;

class java_lang_CharSequence;

class android_graphics_Picture;

class android_graphics_Canvas
{
public:

	android_graphics_Canvas(const android_graphics_Canvas& cc);
	android_graphics_Canvas(Proxy proxy);
	// Public Constructors
	android_graphics_Canvas();
	android_graphics_Canvas(AndroidCXX::android_graphics_Bitmap const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_graphics_Canvas();
	// Functions
	 void concat(AndroidCXX::android_graphics_Matrix const& arg0);
	 int save(int const& arg0);
	 int save();
	 void rotate(float const& arg0,float const& arg1,float const& arg2);
	 void rotate(float const& arg0);
	 bool isOpaque();
	 void scale(float const& arg0,float const& arg1);
	 void scale(float const& arg0,float const& arg1,float const& arg2,float const& arg3);
	 int getWidth();
	 int getHeight();
	 void getMatrix(AndroidCXX::android_graphics_Matrix const& arg0);
	 AndroidCXX::android_graphics_Matrix getMatrix();
	 bool isHardwareAccelerated();
	 bool getClipBounds(AndroidCXX::android_graphics_Rect const& arg0);
	 AndroidCXX::android_graphics_Rect getClipBounds();
	 void setBitmap(AndroidCXX::android_graphics_Bitmap const& arg0);
	 int getDensity();
	 void setDensity(int const& arg0);
	 int getMaximumBitmapWidth();
	 int getMaximumBitmapHeight();
	 int saveLayer(AndroidCXX::android_graphics_RectF const& arg0,AndroidCXX::android_graphics_Paint const& arg1,int const& arg2);
	 int saveLayer(float const& arg0,float const& arg1,float const& arg2,float const& arg3,AndroidCXX::android_graphics_Paint const& arg4,int const& arg5);
	 int saveLayerAlpha(AndroidCXX::android_graphics_RectF const& arg0,int const& arg1,int const& arg2);
	 int saveLayerAlpha(float const& arg0,float const& arg1,float const& arg2,float const& arg3,int const& arg4,int const& arg5);
	 void restore();
	 int getSaveCount();
	 void restoreToCount(int const& arg0);
	 void translate(float const& arg0,float const& arg1);
	 void skew(float const& arg0,float const& arg1);
	 void setMatrix(AndroidCXX::android_graphics_Matrix const& arg0);
	 bool clipRect(AndroidCXX::android_graphics_RectF const& arg0);
	 bool clipRect(AndroidCXX::android_graphics_Rect const& arg0);
	 bool clipRect(float const& arg0,float const& arg1,float const& arg2,float const& arg3,android_graphics_Region_Op::android_graphics_Region_Op const& arg4);
	 bool clipRect(float const& arg0,float const& arg1,float const& arg2,float const& arg3);
	 bool clipRect(int const& arg0,int const& arg1,int const& arg2,int const& arg3);
	 bool clipRect(AndroidCXX::android_graphics_Rect const& arg0,android_graphics_Region_Op::android_graphics_Region_Op const& arg1);
	 bool clipRect(AndroidCXX::android_graphics_RectF const& arg0,android_graphics_Region_Op::android_graphics_Region_Op const& arg1);
	 bool clipPath(AndroidCXX::android_graphics_Path const& arg0,android_graphics_Region_Op::android_graphics_Region_Op const& arg1);
	 bool clipPath(AndroidCXX::android_graphics_Path const& arg0);
	 bool clipRegion(AndroidCXX::android_graphics_Region const& arg0,android_graphics_Region_Op::android_graphics_Region_Op const& arg1);
	 bool clipRegion(AndroidCXX::android_graphics_Region const& arg0);
	 AndroidCXX::android_graphics_DrawFilter getDrawFilter();
	 void setDrawFilter(AndroidCXX::android_graphics_DrawFilter const& arg0);
	 bool quickReject(AndroidCXX::android_graphics_RectF const& arg0,android_graphics_Canvas_EdgeType::android_graphics_Canvas_EdgeType const& arg1);
	 bool quickReject(AndroidCXX::android_graphics_Path const& arg0,android_graphics_Canvas_EdgeType::android_graphics_Canvas_EdgeType const& arg1);
	 bool quickReject(float const& arg0,float const& arg1,float const& arg2,float const& arg3,android_graphics_Canvas_EdgeType::android_graphics_Canvas_EdgeType const& arg4);
	 void drawRGB(int const& arg0,int const& arg1,int const& arg2);
	 void drawARGB(int const& arg0,int const& arg1,int const& arg2,int const& arg3);
	 void drawColor(int const& arg0);
	 void drawColor(int const& arg0,android_graphics_PorterDuff_Mode::android_graphics_PorterDuff_Mode const& arg1);
	 void drawPaint(AndroidCXX::android_graphics_Paint const& arg0);
	 void drawPoints(std::vector<float> const& arg0,int const& arg1,int const& arg2,AndroidCXX::android_graphics_Paint const& arg3);
	 void drawPoints(std::vector<float> const& arg0,AndroidCXX::android_graphics_Paint const& arg1);
	 void drawPoint(float const& arg0,float const& arg1,AndroidCXX::android_graphics_Paint const& arg2);
	 void drawLine(float const& arg0,float const& arg1,float const& arg2,float const& arg3,AndroidCXX::android_graphics_Paint const& arg4);
	 void drawLines(std::vector<float> const& arg0,int const& arg1,int const& arg2,AndroidCXX::android_graphics_Paint const& arg3);
	 void drawLines(std::vector<float> const& arg0,AndroidCXX::android_graphics_Paint const& arg1);
	 void drawRect(AndroidCXX::android_graphics_RectF const& arg0,AndroidCXX::android_graphics_Paint const& arg1);
	 void drawRect(AndroidCXX::android_graphics_Rect const& arg0,AndroidCXX::android_graphics_Paint const& arg1);
	 void drawRect(float const& arg0,float const& arg1,float const& arg2,float const& arg3,AndroidCXX::android_graphics_Paint const& arg4);
	 void drawOval(AndroidCXX::android_graphics_RectF const& arg0,AndroidCXX::android_graphics_Paint const& arg1);
	 void drawCircle(float const& arg0,float const& arg1,float const& arg2,AndroidCXX::android_graphics_Paint const& arg3);
	 void drawArc(AndroidCXX::android_graphics_RectF const& arg0,float const& arg1,float const& arg2,bool const& arg3,AndroidCXX::android_graphics_Paint const& arg4);
	 void drawRoundRect(AndroidCXX::android_graphics_RectF const& arg0,float const& arg1,float const& arg2,AndroidCXX::android_graphics_Paint const& arg3);
	 void drawPath(AndroidCXX::android_graphics_Path const& arg0,AndroidCXX::android_graphics_Paint const& arg1);
	 void drawBitmap(AndroidCXX::android_graphics_Bitmap const& arg0,float const& arg1,float const& arg2,AndroidCXX::android_graphics_Paint const& arg3);
	 void drawBitmap(AndroidCXX::android_graphics_Bitmap const& arg0,AndroidCXX::android_graphics_Rect const& arg1,AndroidCXX::android_graphics_RectF const& arg2,AndroidCXX::android_graphics_Paint const& arg3);
	 void drawBitmap(AndroidCXX::android_graphics_Bitmap const& arg0,AndroidCXX::android_graphics_Rect const& arg1,AndroidCXX::android_graphics_Rect const& arg2,AndroidCXX::android_graphics_Paint const& arg3);
	 void drawBitmap(std::vector<int> const& arg0,int const& arg1,int const& arg2,float const& arg3,float const& arg4,int const& arg5,int const& arg6,bool const& arg7,AndroidCXX::android_graphics_Paint const& arg8);
	 void drawBitmap(std::vector<int> const& arg0,int const& arg1,int const& arg2,int const& arg3,int const& arg4,int const& arg5,int const& arg6,bool const& arg7,AndroidCXX::android_graphics_Paint const& arg8);
	 void drawBitmap(AndroidCXX::android_graphics_Bitmap const& arg0,AndroidCXX::android_graphics_Matrix const& arg1,AndroidCXX::android_graphics_Paint const& arg2);
	 void drawBitmapMesh(AndroidCXX::android_graphics_Bitmap const& arg0,int const& arg1,int const& arg2,std::vector<float> const& arg3,int const& arg4,std::vector<int> const& arg5,int const& arg6,AndroidCXX::android_graphics_Paint const& arg7);
	 void drawVertices(android_graphics_Canvas_VertexMode::android_graphics_Canvas_VertexMode const& arg0,int const& arg1,std::vector<float> const& arg2,int const& arg3,std::vector<float> const& arg4,int const& arg5,std::vector<int> const& arg6,int const& arg7,std::vector<short> const& arg8,int const& arg9,int const& arg10,AndroidCXX::android_graphics_Paint const& arg11);
	 void drawText(std::vector<char> const& arg0,int const& arg1,int const& arg2,float const& arg3,float const& arg4,AndroidCXX::android_graphics_Paint const& arg5);
	 void drawText(AndroidCXX::java_lang_String const& arg0,float const& arg1,float const& arg2,AndroidCXX::android_graphics_Paint const& arg3);
	 void drawText(AndroidCXX::java_lang_String const& arg0,int const& arg1,int const& arg2,float const& arg3,float const& arg4,AndroidCXX::android_graphics_Paint const& arg5);
	 void drawText(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1,int const& arg2,float const& arg3,float const& arg4,AndroidCXX::android_graphics_Paint const& arg5);
	 void drawPosText(std::vector<char> const& arg0,int const& arg1,int const& arg2,std::vector<float> const& arg3,AndroidCXX::android_graphics_Paint const& arg4);
	 void drawPosText(AndroidCXX::java_lang_String const& arg0,std::vector<float> const& arg1,AndroidCXX::android_graphics_Paint const& arg2);
	 void drawTextOnPath(std::vector<char> const& arg0,int const& arg1,int const& arg2,AndroidCXX::android_graphics_Path const& arg3,float const& arg4,float const& arg5,AndroidCXX::android_graphics_Paint const& arg6);
	 void drawTextOnPath(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_graphics_Path const& arg1,float const& arg2,float const& arg3,AndroidCXX::android_graphics_Paint const& arg4);
	 void drawPicture(AndroidCXX::android_graphics_Picture const& arg0);
	 void drawPicture(AndroidCXX::android_graphics_Picture const& arg0,AndroidCXX::android_graphics_RectF const& arg1);
	 void drawPicture(AndroidCXX::android_graphics_Picture const& arg0,AndroidCXX::android_graphics_Rect const& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_Canvas
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

#include <android_graphics_Bitmap.hpp>

#include <android_graphics_Paint.hpp>

#include <android_graphics_RectF.hpp>

#include <android_graphics_Region_Op.hpp>

#include <android_graphics_Rect.hpp>

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

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class android_graphics_Matrix;

class android_graphics_Bitmap;

class android_graphics_Paint;

class android_graphics_RectF;


class android_graphics_Rect;

class android_graphics_Path;

class android_graphics_Region;

class android_graphics_DrawFilter;




class java_lang_String;

class java_lang_CharSequence;

class android_graphics_Picture;

class android_graphics_Canvas
{
public:
 void concat(android_graphics_Matrix& arg0);
 int save(int& arg0);
 void rotate(float& arg0);
 bool isOpaque();
 void scale(float& arg0);
 int getWidth();
 int getHeight();
 android_graphics_Matrix getMatrix(android_graphics_Matrix& arg0);
 bool isHardwareAccelerated();
 void setBitmap(android_graphics_Bitmap& arg0);
 int getDensity();
 void setDensity(int& arg0);
 int getMaximumBitmapWidth();
 int getMaximumBitmapHeight();
 int saveLayer(float& arg0,android_graphics_Paint& arg1,int& arg2,android_graphics_RectF& arg3);
 int saveLayerAlpha(android_graphics_RectF& arg0,int& arg1,float& arg2);
 void restore();
 int getSaveCount();
 void restoreToCount(int& arg0);
 void translate(float& arg0);
 void skew(float& arg0);
 void setMatrix(android_graphics_Matrix& arg0);
 bool clipRect(android_graphics_RectF& arg0,android_graphics_Region_Op& arg1,android_graphics_Rect& arg2,float& arg3,int& arg4);
 bool clipPath(android_graphics_Path& arg0,android_graphics_Region_Op& arg1);
 bool clipRegion(android_graphics_Region& arg0,android_graphics_Region_Op& arg1);
 android_graphics_DrawFilter getDrawFilter();
 void setDrawFilter(android_graphics_DrawFilter& arg0);
 bool quickReject(android_graphics_RectF& arg0,android_graphics_Canvas_EdgeType& arg1,android_graphics_Path& arg2,float& arg3);
 bool getClipBounds(android_graphics_Rect& arg0);
 void drawRGB(int& arg0);
 void drawARGB(int& arg0);
 void drawColor(int& arg0,android_graphics_PorterDuff_Mode& arg1);
 void drawPaint(android_graphics_Paint& arg0);
 void drawPoints(std::vector<float>& arg0,int& arg1,android_graphics_Paint& arg2);
 void drawPoint(float& arg0,android_graphics_Paint& arg1);
 void drawLine(float& arg0,android_graphics_Paint& arg1);
 void drawLines(std::vector<float>& arg0,int& arg1,android_graphics_Paint& arg2);
 void drawRect(android_graphics_RectF& arg0,android_graphics_Paint& arg1,android_graphics_Rect& arg2,float& arg3);
 void drawOval(android_graphics_RectF& arg0,android_graphics_Paint& arg1);
 void drawCircle(float& arg0,android_graphics_Paint& arg1);
 void drawArc(android_graphics_RectF& arg0,float& arg1,bool& arg2,android_graphics_Paint& arg3);
 void drawRoundRect(android_graphics_RectF& arg0,float& arg1,android_graphics_Paint& arg2);
 void drawPath(android_graphics_Path& arg0,android_graphics_Paint& arg1);
 void drawBitmap(android_graphics_Bitmap& arg0,float& arg1,android_graphics_Paint& arg2,android_graphics_Rect& arg3,android_graphics_RectF& arg4,std::vector<int>& arg5,int& arg6,bool& arg7,android_graphics_Matrix& arg8);
 void drawBitmapMesh(android_graphics_Bitmap& arg0,int& arg1,std::vector<float>& arg2,std::vector<int>& arg3,android_graphics_Paint& arg4);
 void drawVertices(android_graphics_Canvas_VertexMode& arg0,int& arg1,std::vector<float>& arg2,std::vector<int>& arg3,std::vector<short>& arg4,android_graphics_Paint& arg5);
 void drawText(std::vector<char>& arg0,int& arg1,float& arg2,android_graphics_Paint& arg3,java_lang_String& arg4,java_lang_CharSequence& arg5);
 void drawPosText(std::vector<char>& arg0,int& arg1,std::vector<float>& arg2,android_graphics_Paint& arg3,java_lang_String& arg4);
 void drawTextOnPath(std::vector<char>& arg0,int& arg1,android_graphics_Path& arg2,float& arg3,android_graphics_Paint& arg4,java_lang_String& arg5);
 void drawPicture(android_graphics_Picture& arg0,android_graphics_RectF& arg1,android_graphics_Rect& arg2);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_Canvas
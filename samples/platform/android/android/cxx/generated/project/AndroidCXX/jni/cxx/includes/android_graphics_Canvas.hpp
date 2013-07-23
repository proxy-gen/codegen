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
#include <CXXTypes.hpp>


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

	android_graphics_Canvas(const android_graphics_Canvas& cc);
	android_graphics_Canvas(void * proxy);
	// Public Constructors
	android_graphics_Canvas();
	android_graphics_Canvas(AndroidCXX::android_graphics_Bitmap& arg0);
	// Default Destructor
	virtual ~android_graphics_Canvas();
	// Functions
	 void concat(AndroidCXX::android_graphics_Matrix& arg0);
	 int save(int& arg0);
	 int save();
	 void rotate(float& arg0,float& arg1,float& arg2);
	 void rotate(float& arg0);
	 bool isOpaque();
	 void scale(float& arg0,float& arg1,float& arg2,float& arg3);
	 void scale(float& arg0,float& arg1);
	 int getWidth();
	 int getHeight();
	 AndroidCXX::android_graphics_Matrix getMatrix();
	 void getMatrix(AndroidCXX::android_graphics_Matrix& arg0);
	 bool isHardwareAccelerated();
	 void setBitmap(AndroidCXX::android_graphics_Bitmap& arg0);
	 int getDensity();
	 void setDensity(int& arg0);
	 int getMaximumBitmapWidth();
	 int getMaximumBitmapHeight();
	 int saveLayer(float& arg0,float& arg1,float& arg2,float& arg3,AndroidCXX::android_graphics_Paint& arg4,int& arg5);
	 int saveLayer(AndroidCXX::android_graphics_RectF& arg0,AndroidCXX::android_graphics_Paint& arg1,int& arg2);
	 int saveLayerAlpha(AndroidCXX::android_graphics_RectF& arg0,int& arg1,int& arg2);
	 int saveLayerAlpha(float& arg0,float& arg1,float& arg2,float& arg3,int& arg4,int& arg5);
	 void restore();
	 int getSaveCount();
	 void restoreToCount(int& arg0);
	 void translate(float& arg0,float& arg1);
	 void skew(float& arg0,float& arg1);
	 void setMatrix(AndroidCXX::android_graphics_Matrix& arg0);
	 bool clipRect(AndroidCXX::android_graphics_RectF& arg0,ANDROID_GRAPHICS_REGION_OP::android_graphics_Region_Op& arg1);
	 bool clipRect(AndroidCXX::android_graphics_Rect& arg0,ANDROID_GRAPHICS_REGION_OP::android_graphics_Region_Op& arg1);
	 bool clipRect(AndroidCXX::android_graphics_RectF& arg0);
	 bool clipRect(AndroidCXX::android_graphics_Rect& arg0);
	 bool clipRect(float& arg0,float& arg1,float& arg2,float& arg3,ANDROID_GRAPHICS_REGION_OP::android_graphics_Region_Op& arg4);
	 bool clipRect(float& arg0,float& arg1,float& arg2,float& arg3);
	 bool clipRect(int& arg0,int& arg1,int& arg2,int& arg3);
	 bool clipPath(AndroidCXX::android_graphics_Path& arg0,ANDROID_GRAPHICS_REGION_OP::android_graphics_Region_Op& arg1);
	 bool clipPath(AndroidCXX::android_graphics_Path& arg0);
	 bool clipRegion(AndroidCXX::android_graphics_Region& arg0,ANDROID_GRAPHICS_REGION_OP::android_graphics_Region_Op& arg1);
	 bool clipRegion(AndroidCXX::android_graphics_Region& arg0);
	 AndroidCXX::android_graphics_DrawFilter getDrawFilter();
	 void setDrawFilter(AndroidCXX::android_graphics_DrawFilter& arg0);
	 bool quickReject(AndroidCXX::android_graphics_RectF& arg0,ANDROID_GRAPHICS_CANVAS_EDGETYPE::android_graphics_Canvas_EdgeType& arg1);
	 bool quickReject(AndroidCXX::android_graphics_Path& arg0,ANDROID_GRAPHICS_CANVAS_EDGETYPE::android_graphics_Canvas_EdgeType& arg1);
	 bool quickReject(float& arg0,float& arg1,float& arg2,float& arg3,ANDROID_GRAPHICS_CANVAS_EDGETYPE::android_graphics_Canvas_EdgeType& arg4);
	 bool getClipBounds(AndroidCXX::android_graphics_Rect& arg0);
	 AndroidCXX::android_graphics_Rect getClipBounds();
	 void drawRGB(int& arg0,int& arg1,int& arg2);
	 void drawARGB(int& arg0,int& arg1,int& arg2,int& arg3);
	 void drawColor(int& arg0);
	 void drawColor(int& arg0,ANDROID_GRAPHICS_PORTERDUFF_MODE::android_graphics_PorterDuff_Mode& arg1);
	 void drawPaint(AndroidCXX::android_graphics_Paint& arg0);
	 void drawPoints(std::vector<float>& arg0,int& arg1,int& arg2,AndroidCXX::android_graphics_Paint& arg3);
	 void drawPoints(std::vector<float>& arg0,AndroidCXX::android_graphics_Paint& arg1);
	 void drawPoint(float& arg0,float& arg1,AndroidCXX::android_graphics_Paint& arg2);
	 void drawLine(float& arg0,float& arg1,float& arg2,float& arg3,AndroidCXX::android_graphics_Paint& arg4);
	 void drawLines(std::vector<float>& arg0,int& arg1,int& arg2,AndroidCXX::android_graphics_Paint& arg3);
	 void drawLines(std::vector<float>& arg0,AndroidCXX::android_graphics_Paint& arg1);
	 void drawRect(AndroidCXX::android_graphics_RectF& arg0,AndroidCXX::android_graphics_Paint& arg1);
	 void drawRect(AndroidCXX::android_graphics_Rect& arg0,AndroidCXX::android_graphics_Paint& arg1);
	 void drawRect(float& arg0,float& arg1,float& arg2,float& arg3,AndroidCXX::android_graphics_Paint& arg4);
	 void drawOval(AndroidCXX::android_graphics_RectF& arg0,AndroidCXX::android_graphics_Paint& arg1);
	 void drawCircle(float& arg0,float& arg1,float& arg2,AndroidCXX::android_graphics_Paint& arg3);
	 void drawArc(AndroidCXX::android_graphics_RectF& arg0,float& arg1,float& arg2,bool& arg3,AndroidCXX::android_graphics_Paint& arg4);
	 void drawRoundRect(AndroidCXX::android_graphics_RectF& arg0,float& arg1,float& arg2,AndroidCXX::android_graphics_Paint& arg3);
	 void drawPath(AndroidCXX::android_graphics_Path& arg0,AndroidCXX::android_graphics_Paint& arg1);
	 void drawBitmap(AndroidCXX::android_graphics_Bitmap& arg0,float& arg1,float& arg2,AndroidCXX::android_graphics_Paint& arg3);
	 void drawBitmap(AndroidCXX::android_graphics_Bitmap& arg0,AndroidCXX::android_graphics_Rect& arg1,AndroidCXX::android_graphics_RectF& arg2,AndroidCXX::android_graphics_Paint& arg3);
	 void drawBitmap(AndroidCXX::android_graphics_Bitmap& arg0,AndroidCXX::android_graphics_Rect& arg1,AndroidCXX::android_graphics_Rect& arg2,AndroidCXX::android_graphics_Paint& arg3);
	 void drawBitmap(std::vector<int>& arg0,int& arg1,int& arg2,float& arg3,float& arg4,int& arg5,int& arg6,bool& arg7,AndroidCXX::android_graphics_Paint& arg8);
	 void drawBitmap(std::vector<int>& arg0,int& arg1,int& arg2,int& arg3,int& arg4,int& arg5,int& arg6,bool& arg7,AndroidCXX::android_graphics_Paint& arg8);
	 void drawBitmap(AndroidCXX::android_graphics_Bitmap& arg0,AndroidCXX::android_graphics_Matrix& arg1,AndroidCXX::android_graphics_Paint& arg2);
	 void drawBitmapMesh(AndroidCXX::android_graphics_Bitmap& arg0,int& arg1,int& arg2,std::vector<float>& arg3,int& arg4,std::vector<int>& arg5,int& arg6,AndroidCXX::android_graphics_Paint& arg7);
	 void drawVertices(ANDROID_GRAPHICS_CANVAS_VERTEXMODE::android_graphics_Canvas_VertexMode& arg0,int& arg1,std::vector<float>& arg2,int& arg3,std::vector<float>& arg4,int& arg5,std::vector<int>& arg6,int& arg7,std::vector<short>& arg8,int& arg9,int& arg10,AndroidCXX::android_graphics_Paint& arg11);
	 void drawText(std::vector<char>& arg0,int& arg1,int& arg2,float& arg3,float& arg4,AndroidCXX::android_graphics_Paint& arg5);
	 void drawText(AndroidCXX::java_lang_String& arg0,float& arg1,float& arg2,AndroidCXX::android_graphics_Paint& arg3);
	 void drawText(AndroidCXX::java_lang_String& arg0,int& arg1,int& arg2,float& arg3,float& arg4,AndroidCXX::android_graphics_Paint& arg5);
	 void drawText(AndroidCXX::java_lang_CharSequence& arg0,int& arg1,int& arg2,float& arg3,float& arg4,AndroidCXX::android_graphics_Paint& arg5);
	 void drawPosText(std::vector<char>& arg0,int& arg1,int& arg2,std::vector<float>& arg3,AndroidCXX::android_graphics_Paint& arg4);
	 void drawPosText(AndroidCXX::java_lang_String& arg0,std::vector<float>& arg1,AndroidCXX::android_graphics_Paint& arg2);
	 void drawTextOnPath(std::vector<char>& arg0,int& arg1,int& arg2,AndroidCXX::android_graphics_Path& arg3,float& arg4,float& arg5,AndroidCXX::android_graphics_Paint& arg6);
	 void drawTextOnPath(AndroidCXX::java_lang_String& arg0,AndroidCXX::android_graphics_Path& arg1,float& arg2,float& arg3,AndroidCXX::android_graphics_Paint& arg4);
	 void drawPicture(AndroidCXX::android_graphics_Picture& arg0);
	 void drawPicture(AndroidCXX::android_graphics_Picture& arg0,AndroidCXX::android_graphics_RectF& arg1);
	 void drawPicture(AndroidCXX::android_graphics_Picture& arg0,AndroidCXX::android_graphics_Rect& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_Canvas
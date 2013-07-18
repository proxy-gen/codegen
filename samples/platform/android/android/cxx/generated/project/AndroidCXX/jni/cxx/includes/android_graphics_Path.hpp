/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
 			
 			
		
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			


#ifndef _android_graphics_Path
#define _android_graphics_Path
































#include <android_graphics_Path_Direction.hpp>
#include <android_graphics_RectF.hpp>
#include <android_graphics_Matrix.hpp>
#include <android_graphics_Path_FillType.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_graphics_Path
{
public:
 void offset(float& arg0,android_graphics_Path& arg1);
 bool isEmpty();
 void transform(android_graphics_Matrix& arg0,android_graphics_Path& arg1);
 void close();
 void set(android_graphics_Path& arg0);
 void reset();
 void rewind();
 bool isRect(android_graphics_RectF& arg0);
 android_graphics_Path_FillType getFillType();
 void setFillType(android_graphics_Path_FillType& arg0);
 bool isInverseFillType();
 void toggleInverseFillType();
 void computeBounds(android_graphics_RectF& arg0,bool& arg1);
 void incReserve(int& arg0);
 void moveTo(float& arg0);
 void rMoveTo(float& arg0);
 void lineTo(float& arg0);
 void rLineTo(float& arg0);
 void quadTo(float& arg0);
 void rQuadTo(float& arg0);
 void cubicTo(float& arg0);
 void rCubicTo(float& arg0);
 void arcTo(android_graphics_RectF& arg0,float& arg1,bool& arg2);
 void addRect(float& arg0,android_graphics_Path_Direction& arg1,android_graphics_RectF& arg2);
 void addOval(android_graphics_RectF& arg0,android_graphics_Path_Direction& arg1);
 void addCircle(float& arg0,android_graphics_Path_Direction& arg1);
 void addArc(android_graphics_RectF& arg0,float& arg1);
 void addRoundRect(android_graphics_RectF& arg0,float& arg1,android_graphics_Path_Direction& arg2,std::vector<float>& arg3);
 void addPath(android_graphics_Path& arg0,android_graphics_Matrix& arg1,float& arg2);
 void setLastPoint(float& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_Path
/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 	
 		 
 		 
 		 
 		 
 		 


 		 












































// Generated Code 

#ifndef _android_graphics_Path
#define _android_graphics_Path
//
// Scroll Down 
//



#include <android_graphics_Matrix.hpp>

#include <android_graphics_RectF.hpp>

#include <android_graphics_Path_FillType.hpp>

#include <android_graphics_Path_Direction.hpp>

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

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// using namespace ANDROID_GRAPHICS_PATH_FILLTYPE;
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// using namespace ANDROID_GRAPHICS_PATH_DIRECTION;
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class android_graphics_Path;

class android_graphics_Matrix;

class android_graphics_RectF;



class android_graphics_Path
{
public:

	android_graphics_Path(const android_graphics_Path& cc);
	android_graphics_Path(void * proxy);
	// Public Constructors
	android_graphics_Path();
	android_graphics_Path(AndroidCXX::android_graphics_Path& arg0);
	// Default Destructor
	virtual ~android_graphics_Path();
	// Functions
	 void offset(float& arg0,float& arg1,AndroidCXX::android_graphics_Path& arg2);
	 void offset(float& arg0,float& arg1);
	 bool isEmpty();
	 void transform(AndroidCXX::android_graphics_Matrix& arg0,AndroidCXX::android_graphics_Path& arg1);
	 void transform(AndroidCXX::android_graphics_Matrix& arg0);
	 void close();
	 void set(AndroidCXX::android_graphics_Path& arg0);
	 void reset();
	 void rewind();
	 bool isRect(AndroidCXX::android_graphics_RectF& arg0);
	 ANDROID_GRAPHICS_PATH_FILLTYPE::android_graphics_Path_FillType getFillType();
	 void setFillType(ANDROID_GRAPHICS_PATH_FILLTYPE::android_graphics_Path_FillType& arg0);
	 bool isInverseFillType();
	 void toggleInverseFillType();
	 void computeBounds(AndroidCXX::android_graphics_RectF& arg0,bool& arg1);
	 void incReserve(int& arg0);
	 void moveTo(float& arg0,float& arg1);
	 void rMoveTo(float& arg0,float& arg1);
	 void lineTo(float& arg0,float& arg1);
	 void rLineTo(float& arg0,float& arg1);
	 void quadTo(float& arg0,float& arg1,float& arg2,float& arg3);
	 void rQuadTo(float& arg0,float& arg1,float& arg2,float& arg3);
	 void cubicTo(float& arg0,float& arg1,float& arg2,float& arg3,float& arg4,float& arg5);
	 void rCubicTo(float& arg0,float& arg1,float& arg2,float& arg3,float& arg4,float& arg5);
	 void arcTo(AndroidCXX::android_graphics_RectF& arg0,float& arg1,float& arg2,bool& arg3);
	 void arcTo(AndroidCXX::android_graphics_RectF& arg0,float& arg1,float& arg2);
	 void addRect(float& arg0,float& arg1,float& arg2,float& arg3,ANDROID_GRAPHICS_PATH_DIRECTION::android_graphics_Path_Direction& arg4);
	 void addRect(AndroidCXX::android_graphics_RectF& arg0,ANDROID_GRAPHICS_PATH_DIRECTION::android_graphics_Path_Direction& arg1);
	 void addOval(AndroidCXX::android_graphics_RectF& arg0,ANDROID_GRAPHICS_PATH_DIRECTION::android_graphics_Path_Direction& arg1);
	 void addCircle(float& arg0,float& arg1,float& arg2,ANDROID_GRAPHICS_PATH_DIRECTION::android_graphics_Path_Direction& arg3);
	 void addArc(AndroidCXX::android_graphics_RectF& arg0,float& arg1,float& arg2);
	 void addRoundRect(AndroidCXX::android_graphics_RectF& arg0,float& arg1,float& arg2,ANDROID_GRAPHICS_PATH_DIRECTION::android_graphics_Path_Direction& arg3);
	 void addRoundRect(AndroidCXX::android_graphics_RectF& arg0,std::vector<float>& arg1,ANDROID_GRAPHICS_PATH_DIRECTION::android_graphics_Path_Direction& arg2);
	 void addPath(AndroidCXX::android_graphics_Path& arg0);
	 void addPath(AndroidCXX::android_graphics_Path& arg0,AndroidCXX::android_graphics_Matrix& arg1);
	 void addPath(AndroidCXX::android_graphics_Path& arg0,float& arg1,float& arg2);
	 void setLastPoint(float& arg0,float& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_Path
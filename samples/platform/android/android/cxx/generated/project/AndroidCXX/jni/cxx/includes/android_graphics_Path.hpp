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

// Forward Declarations

class android_graphics_Path;

class android_graphics_Matrix;

class android_graphics_RectF;



class android_graphics_Path
{
public:

	android_graphics_Path(Proxy proxy);
	// Public Constructors
	android_graphics_Path();
	android_graphics_Path(AndroidCXX::android_graphics_Path const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_graphics_Path();
	// Functions
	 void offset(float const& arg0,float const& arg1,AndroidCXX::android_graphics_Path const& arg2);
	 void offset(float const& arg0,float const& arg1);
	 bool isEmpty();
	 void transform(AndroidCXX::android_graphics_Matrix const& arg0,AndroidCXX::android_graphics_Path const& arg1);
	 void transform(AndroidCXX::android_graphics_Matrix const& arg0);
	 void close();
	 void set(AndroidCXX::android_graphics_Path const& arg0);
	 void reset();
	 void rewind();
	 bool isRect(AndroidCXX::android_graphics_RectF const& arg0);
	 android_graphics_Path_FillType::android_graphics_Path_FillType getFillType();
	 void setFillType(android_graphics_Path_FillType::android_graphics_Path_FillType const& arg0);
	 bool isInverseFillType();
	 void toggleInverseFillType();
	 void computeBounds(AndroidCXX::android_graphics_RectF const& arg0,bool const& arg1);
	 void incReserve(int const& arg0);
	 void moveTo(float const& arg0,float const& arg1);
	 void rMoveTo(float const& arg0,float const& arg1);
	 void lineTo(float const& arg0,float const& arg1);
	 void rLineTo(float const& arg0,float const& arg1);
	 void quadTo(float const& arg0,float const& arg1,float const& arg2,float const& arg3);
	 void rQuadTo(float const& arg0,float const& arg1,float const& arg2,float const& arg3);
	 void cubicTo(float const& arg0,float const& arg1,float const& arg2,float const& arg3,float const& arg4,float const& arg5);
	 void rCubicTo(float const& arg0,float const& arg1,float const& arg2,float const& arg3,float const& arg4,float const& arg5);
	 void arcTo(AndroidCXX::android_graphics_RectF const& arg0,float const& arg1,float const& arg2,bool const& arg3);
	 void arcTo(AndroidCXX::android_graphics_RectF const& arg0,float const& arg1,float const& arg2);
	 void addRect(float const& arg0,float const& arg1,float const& arg2,float const& arg3,android_graphics_Path_Direction::android_graphics_Path_Direction const& arg4);
	 void addRect(AndroidCXX::android_graphics_RectF const& arg0,android_graphics_Path_Direction::android_graphics_Path_Direction const& arg1);
	 void addOval(AndroidCXX::android_graphics_RectF const& arg0,android_graphics_Path_Direction::android_graphics_Path_Direction const& arg1);
	 void addCircle(float const& arg0,float const& arg1,float const& arg2,android_graphics_Path_Direction::android_graphics_Path_Direction const& arg3);
	 void addArc(AndroidCXX::android_graphics_RectF const& arg0,float const& arg1,float const& arg2);
	 void addRoundRect(AndroidCXX::android_graphics_RectF const& arg0,float const& arg1,float const& arg2,android_graphics_Path_Direction::android_graphics_Path_Direction const& arg3);
	 void addRoundRect(AndroidCXX::android_graphics_RectF const& arg0,std::vector<float> const& arg1,android_graphics_Path_Direction::android_graphics_Path_Direction const& arg2);
	 void addPath(AndroidCXX::android_graphics_Path const& arg0);
	 void addPath(AndroidCXX::android_graphics_Path const& arg0,AndroidCXX::android_graphics_Matrix const& arg1);
	 void addPath(AndroidCXX::android_graphics_Path const& arg0,float const& arg1,float const& arg2);
	 void setLastPoint(float const& arg0,float const& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_Path
/*
 * Header (Instance CXX)
 * Author: codegen
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

#include <android_graphics_Path_FillType.hpp>

#include <android_graphics_RectF.hpp>

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


class android_graphics_Matrix;


class android_graphics_RectF;


class android_graphics_Path 
{
public:

	// Public ConstrucXXX
	android_graphics_Path();
	android_graphics_Path(AndroidCXX::android_graphics_Path const& arg0);
	android_graphics_Path(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_graphics_Path();
	// Functions
	virtual void  offset(float const& arg0,float const& arg1,AndroidCXX::android_graphics_Path const& arg2) ;
	virtual void  offset(float const& arg0,float const& arg1) ;
	virtual bool  isEmpty() ;
	virtual void  transform(AndroidCXX::android_graphics_Matrix const& arg0,AndroidCXX::android_graphics_Path const& arg1) ;
	virtual void  transform(AndroidCXX::android_graphics_Matrix const& arg0) ;
	virtual void  close() ;
	virtual void  set(AndroidCXX::android_graphics_Path const& arg0) ;
	virtual void  reset() ;
	virtual void  rewind() ;
	virtual android_graphics_Path_FillType::android_graphics_Path_FillType  getFillType() ;
	virtual void  setFillType(android_graphics_Path_FillType::android_graphics_Path_FillType const& arg0) ;
	virtual bool  isInverseFillType() ;
	virtual void  toggleInverseFillType() ;
	virtual bool  isRect(AndroidCXX::android_graphics_RectF const& arg0) ;
	virtual void  computeBounds(AndroidCXX::android_graphics_RectF const& arg0,bool const& arg1) ;
	virtual void  incReserve(int const& arg0) ;
	virtual void  moveTo(float const& arg0,float const& arg1) ;
	virtual void  rMoveTo(float const& arg0,float const& arg1) ;
	virtual void  lineTo(float const& arg0,float const& arg1) ;
	virtual void  rLineTo(float const& arg0,float const& arg1) ;
	virtual void  quadTo(float const& arg0,float const& arg1,float const& arg2,float const& arg3) ;
	virtual void  rQuadTo(float const& arg0,float const& arg1,float const& arg2,float const& arg3) ;
	virtual void  cubicTo(float const& arg0,float const& arg1,float const& arg2,float const& arg3,float const& arg4,float const& arg5) ;
	virtual void  rCubicTo(float const& arg0,float const& arg1,float const& arg2,float const& arg3,float const& arg4,float const& arg5) ;
	virtual void  arcTo(AndroidCXX::android_graphics_RectF const& arg0,float const& arg1,float const& arg2,bool const& arg3) ;
	virtual void  arcTo(AndroidCXX::android_graphics_RectF const& arg0,float const& arg1,float const& arg2) ;
	virtual void  addRect(float const& arg0,float const& arg1,float const& arg2,float const& arg3,android_graphics_Path_Direction::android_graphics_Path_Direction const& arg4) ;
	virtual void  addRect(AndroidCXX::android_graphics_RectF const& arg0,android_graphics_Path_Direction::android_graphics_Path_Direction const& arg1) ;
	virtual void  addOval(AndroidCXX::android_graphics_RectF const& arg0,android_graphics_Path_Direction::android_graphics_Path_Direction const& arg1) ;
	virtual void  addCircle(float const& arg0,float const& arg1,float const& arg2,android_graphics_Path_Direction::android_graphics_Path_Direction const& arg3) ;
	virtual void  addArc(AndroidCXX::android_graphics_RectF const& arg0,float const& arg1,float const& arg2) ;
	virtual void  addRoundRect(AndroidCXX::android_graphics_RectF const& arg0,float const& arg1,float const& arg2,android_graphics_Path_Direction::android_graphics_Path_Direction const& arg3) ;
	virtual void  addRoundRect(AndroidCXX::android_graphics_RectF const& arg0,std::vector<float> const& arg1,android_graphics_Path_Direction::android_graphics_Path_Direction const& arg2) ;
	virtual void  addPath(AndroidCXX::android_graphics_Path const& arg0) ;
	virtual void  addPath(AndroidCXX::android_graphics_Path const& arg0,AndroidCXX::android_graphics_Matrix const& arg1) ;
	virtual void  addPath(AndroidCXX::android_graphics_Path const& arg0,float const& arg1,float const& arg2) ;
	virtual void  setLastPoint(float const& arg0,float const& arg1) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_Path
/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 	
 		 
 	
 	
 	
 	
 	
 		 
 		 
 		 
 	
 	
 	
 	
 	
 		 
 		 
 		 
 		 
 		 
 	
 	
 		 
 		 
 		 
 	
	
	


 		 






















































// Generated Code 

#ifndef _android_graphics_Matrix
#define _android_graphics_Matrix
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <android_graphics_RectF.hpp>

#include <android_graphics_Matrix_ScaleToFit.hpp>

#include <java_lang_String.hpp>


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

class java_lang_Object;


class android_graphics_RectF;


class java_lang_String;

class android_graphics_Matrix 
{
public:

	// Public ConstrucXXX
	android_graphics_Matrix();
	android_graphics_Matrix(AndroidCXX::android_graphics_Matrix const& arg0);
	android_graphics_Matrix(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_graphics_Matrix();
	// Functions
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual void  getValues(std::vector<float> const& arg0) ;
	virtual bool  invert(AndroidCXX::android_graphics_Matrix const& arg0) ;
	virtual bool  isIdentity() ;
	virtual void  mapPoints(std::vector<float> const& arg0,int const& arg1,std::vector<float> const& arg2,int const& arg3,int const& arg4) ;
	virtual void  mapPoints(std::vector<float> const& arg0) ;
	virtual void  mapPoints(std::vector<float> const& arg0,std::vector<float> const& arg1) ;
	virtual float  mapRadius(float const& arg0) ;
	virtual bool  mapRect(AndroidCXX::android_graphics_RectF const& arg0) ;
	virtual bool  mapRect(AndroidCXX::android_graphics_RectF const& arg0,AndroidCXX::android_graphics_RectF const& arg1) ;
	virtual void  mapVectors(std::vector<float> const& arg0,int const& arg1,std::vector<float> const& arg2,int const& arg3,int const& arg4) ;
	virtual void  mapVectors(std::vector<float> const& arg0,std::vector<float> const& arg1) ;
	virtual void  mapVectors(std::vector<float> const& arg0) ;
	virtual bool  postConcat(AndroidCXX::android_graphics_Matrix const& arg0) ;
	virtual bool  postRotate(float const& arg0) ;
	virtual bool  postRotate(float const& arg0,float const& arg1,float const& arg2) ;
	virtual bool  postScale(float const& arg0,float const& arg1) ;
	virtual bool  postScale(float const& arg0,float const& arg1,float const& arg2,float const& arg3) ;
	virtual bool  postSkew(float const& arg0,float const& arg1,float const& arg2,float const& arg3) ;
	virtual bool  postSkew(float const& arg0,float const& arg1) ;
	virtual bool  postTranslate(float const& arg0,float const& arg1) ;
	virtual bool  preConcat(AndroidCXX::android_graphics_Matrix const& arg0) ;
	virtual bool  preRotate(float const& arg0) ;
	virtual bool  preRotate(float const& arg0,float const& arg1,float const& arg2) ;
	virtual bool  preScale(float const& arg0,float const& arg1) ;
	virtual bool  preScale(float const& arg0,float const& arg1,float const& arg2,float const& arg3) ;
	virtual bool  preSkew(float const& arg0,float const& arg1) ;
	virtual bool  preSkew(float const& arg0,float const& arg1,float const& arg2,float const& arg3) ;
	virtual bool  preTranslate(float const& arg0,float const& arg1) ;
	virtual bool  rectStaysRect() ;
	virtual void  reset() ;
	virtual void  set(AndroidCXX::android_graphics_Matrix const& arg0) ;
	virtual bool  setConcat(AndroidCXX::android_graphics_Matrix const& arg0,AndroidCXX::android_graphics_Matrix const& arg1) ;
	virtual bool  setPolyToPoly(std::vector<float> const& arg0,int const& arg1,std::vector<float> const& arg2,int const& arg3,int const& arg4) ;
	virtual bool  setRectToRect(AndroidCXX::android_graphics_RectF const& arg0,AndroidCXX::android_graphics_RectF const& arg1,android_graphics_Matrix_ScaleToFit::android_graphics_Matrix_ScaleToFit const& arg2) ;
	virtual void  setRotate(float const& arg0,float const& arg1,float const& arg2) ;
	virtual void  setRotate(float const& arg0) ;
	virtual void  setScale(float const& arg0,float const& arg1,float const& arg2,float const& arg3) ;
	virtual void  setScale(float const& arg0,float const& arg1) ;
	virtual void  setSinCos(float const& arg0,float const& arg1) ;
	virtual void  setSinCos(float const& arg0,float const& arg1,float const& arg2,float const& arg3) ;
	virtual void  setSkew(float const& arg0,float const& arg1) ;
	virtual void  setSkew(float const& arg0,float const& arg1,float const& arg2,float const& arg3) ;
	virtual void  setTranslate(float const& arg0,float const& arg1) ;
	virtual void  setValues(std::vector<float> const& arg0) ;
	virtual AndroidCXX::java_lang_String * toShortString() ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_Matrix
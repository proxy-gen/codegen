/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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

#include <java_lang_String.hpp>


#include <android_graphics_RectF.hpp>

#include <android_graphics_Matrix_ScaleToFit.hpp>

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

class java_lang_String;

class android_graphics_Matrix;

class android_graphics_RectF;


class android_graphics_Matrix
{
public:

	android_graphics_Matrix(Proxy proxy);
	// Public Constructors
	android_graphics_Matrix();
	android_graphics_Matrix(AndroidCXX::android_graphics_Matrix const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_graphics_Matrix();
	// Functions
	 bool equals(AndroidCXX::java_lang_Object const& arg0);
	 AndroidCXX::java_lang_String toString();
	 void set(AndroidCXX::android_graphics_Matrix const& arg0);
	 void reset();
	 void setScale(float const& arg0,float const& arg1,float const& arg2,float const& arg3);
	 void setScale(float const& arg0,float const& arg1);
	 AndroidCXX::java_lang_String toShortString();
	 bool isIdentity();
	 bool rectStaysRect();
	 void setTranslate(float const& arg0,float const& arg1);
	 void setRotate(float const& arg0,float const& arg1,float const& arg2);
	 void setRotate(float const& arg0);
	 void setSinCos(float const& arg0,float const& arg1);
	 void setSinCos(float const& arg0,float const& arg1,float const& arg2,float const& arg3);
	 void setSkew(float const& arg0,float const& arg1);
	 void setSkew(float const& arg0,float const& arg1,float const& arg2,float const& arg3);
	 bool setConcat(AndroidCXX::android_graphics_Matrix const& arg0,AndroidCXX::android_graphics_Matrix const& arg1);
	 bool preTranslate(float const& arg0,float const& arg1);
	 bool preScale(float const& arg0,float const& arg1);
	 bool preScale(float const& arg0,float const& arg1,float const& arg2,float const& arg3);
	 bool preRotate(float const& arg0);
	 bool preRotate(float const& arg0,float const& arg1,float const& arg2);
	 bool preSkew(float const& arg0,float const& arg1);
	 bool preSkew(float const& arg0,float const& arg1,float const& arg2,float const& arg3);
	 bool preConcat(AndroidCXX::android_graphics_Matrix const& arg0);
	 bool postTranslate(float const& arg0,float const& arg1);
	 bool postScale(float const& arg0,float const& arg1);
	 bool postScale(float const& arg0,float const& arg1,float const& arg2,float const& arg3);
	 bool postRotate(float const& arg0);
	 bool postRotate(float const& arg0,float const& arg1,float const& arg2);
	 bool postSkew(float const& arg0,float const& arg1,float const& arg2,float const& arg3);
	 bool postSkew(float const& arg0,float const& arg1);
	 bool postConcat(AndroidCXX::android_graphics_Matrix const& arg0);
	 bool setRectToRect(AndroidCXX::android_graphics_RectF const& arg0,AndroidCXX::android_graphics_RectF const& arg1,android_graphics_Matrix_ScaleToFit::android_graphics_Matrix_ScaleToFit const& arg2);
	 bool setPolyToPoly(std::vector<float> const& arg0,int const& arg1,std::vector<float> const& arg2,int const& arg3,int const& arg4);
	 bool invert(AndroidCXX::android_graphics_Matrix const& arg0);
	 void mapPoints(std::vector<float> const& arg0,int const& arg1,std::vector<float> const& arg2,int const& arg3,int const& arg4);
	 void mapPoints(std::vector<float> const& arg0);
	 void mapPoints(std::vector<float> const& arg0,std::vector<float> const& arg1);
	 void mapVectors(std::vector<float> const& arg0,int const& arg1,std::vector<float> const& arg2,int const& arg3,int const& arg4);
	 void mapVectors(std::vector<float> const& arg0,std::vector<float> const& arg1);
	 void mapVectors(std::vector<float> const& arg0);
	 bool mapRect(AndroidCXX::android_graphics_RectF const& arg0);
	 bool mapRect(AndroidCXX::android_graphics_RectF const& arg0,AndroidCXX::android_graphics_RectF const& arg1);
	 float mapRadius(float const& arg0);
	 void getValues(std::vector<float> const& arg0);
	 void setValues(std::vector<float> const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_Matrix
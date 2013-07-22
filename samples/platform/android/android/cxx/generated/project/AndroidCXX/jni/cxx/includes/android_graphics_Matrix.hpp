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

	android_graphics_Matrix(const android_graphics_Matrix& cc);
	android_graphics_Matrix(void * proxy);
	// Public Constructors
	android_graphics_Matrix();
	android_graphics_Matrix(AndroidCXX::android_graphics_Matrix& arg0);
	// Default Destructor
	virtual ~android_graphics_Matrix();
	// Functions
	 bool equals(AndroidCXX::java_lang_Object& arg0);
	 AndroidCXX::java_lang_String toString();
	 void set(AndroidCXX::android_graphics_Matrix& arg0);
	 void reset();
	 void setScale(float& arg0,float& arg1,float& arg2,float& arg3);
	 void setScale(float& arg0,float& arg1);
	 AndroidCXX::java_lang_String toShortString();
	 bool isIdentity();
	 bool rectStaysRect();
	 void setTranslate(float& arg0,float& arg1);
	 void setRotate(float& arg0,float& arg1,float& arg2);
	 void setRotate(float& arg0);
	 void setSinCos(float& arg0,float& arg1);
	 void setSinCos(float& arg0,float& arg1,float& arg2,float& arg3);
	 void setSkew(float& arg0,float& arg1);
	 void setSkew(float& arg0,float& arg1,float& arg2,float& arg3);
	 bool setConcat(AndroidCXX::android_graphics_Matrix& arg0,AndroidCXX::android_graphics_Matrix& arg1);
	 bool preTranslate(float& arg0,float& arg1);
	 bool preScale(float& arg0,float& arg1);
	 bool preScale(float& arg0,float& arg1,float& arg2,float& arg3);
	 bool preRotate(float& arg0);
	 bool preRotate(float& arg0,float& arg1,float& arg2);
	 bool preSkew(float& arg0,float& arg1);
	 bool preSkew(float& arg0,float& arg1,float& arg2,float& arg3);
	 bool preConcat(AndroidCXX::android_graphics_Matrix& arg0);
	 bool postTranslate(float& arg0,float& arg1);
	 bool postScale(float& arg0,float& arg1);
	 bool postScale(float& arg0,float& arg1,float& arg2,float& arg3);
	 bool postRotate(float& arg0);
	 bool postRotate(float& arg0,float& arg1,float& arg2);
	 bool postSkew(float& arg0,float& arg1,float& arg2,float& arg3);
	 bool postSkew(float& arg0,float& arg1);
	 bool postConcat(AndroidCXX::android_graphics_Matrix& arg0);
	 bool setRectToRect(AndroidCXX::android_graphics_RectF& arg0,AndroidCXX::android_graphics_RectF& arg1,ANDROID_GRAPHICS_MATRIX_SCALETOFIT::android_graphics_Matrix_ScaleToFit& arg2);
	 bool setPolyToPoly(std::vector<float>& arg0,int& arg1,std::vector<float>& arg2,int& arg3,int& arg4);
	 bool invert(AndroidCXX::android_graphics_Matrix& arg0);
	 void mapPoints(std::vector<float>& arg0,int& arg1,std::vector<float>& arg2,int& arg3,int& arg4);
	 void mapPoints(std::vector<float>& arg0);
	 void mapPoints(std::vector<float>& arg0,std::vector<float>& arg1);
	 void mapVectors(std::vector<float>& arg0,int& arg1,std::vector<float>& arg2,int& arg3,int& arg4);
	 void mapVectors(std::vector<float>& arg0,std::vector<float>& arg1);
	 void mapVectors(std::vector<float>& arg0);
	 bool mapRect(AndroidCXX::android_graphics_RectF& arg0);
	 bool mapRect(AndroidCXX::android_graphics_RectF& arg0,AndroidCXX::android_graphics_RectF& arg1);
	 float mapRadius(float& arg0);
	 void getValues(std::vector<float>& arg0);
	 void setValues(std::vector<float>& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_Matrix
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
	virtual ~android_graphics_Matrix();
	 bool equals(java_lang_Object& arg0);
	 java_lang_String *  toString();
	 void set(android_graphics_Matrix& arg0);
	 void reset();
	 java_lang_String *  toShortString();
	 bool isIdentity();
	 bool rectStaysRect();
	 void setTranslate(float& arg0);
	 void setScale(float& arg0);
	 void setRotate(float& arg0);
	 void setSinCos(float& arg0);
	 void setSkew(float& arg0);
	 bool setConcat(android_graphics_Matrix& arg0);
	 bool preTranslate(float& arg0);
	 bool preScale(float& arg0);
	 bool preRotate(float& arg0);
	 bool preSkew(float& arg0);
	 bool preConcat(android_graphics_Matrix& arg0);
	 bool postTranslate(float& arg0);
	 bool postScale(float& arg0);
	 bool postRotate(float& arg0);
	 bool postSkew(float& arg0);
	 bool postConcat(android_graphics_Matrix& arg0);
	 bool setRectToRect(android_graphics_RectF& arg0,android_graphics_Matrix_ScaleToFit& arg1);
	 bool setPolyToPoly(std::vector<float>& arg0,int& arg1);
	 bool invert(android_graphics_Matrix& arg0);
	 void mapPoints(std::vector<float>& arg0,int& arg1);
	 void mapVectors(std::vector<float>& arg0,int& arg1);
	 bool mapRect(android_graphics_RectF& arg0);
	 float mapRadius(float& arg0);
	 void getValues(std::vector<float>& arg0);
	 void setValues(std::vector<float>& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_Matrix
/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
 		 
 		 
	
	

// Generated Code 

#ifndef _android_view_animation_Transformation
#define _android_view_animation_Transformation
//
// Scroll Down 
//













#include <java_lang_String.hpp>


#include <android_graphics_Matrix.hpp>

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

class java_lang_String;

class android_view_animation_Transformation;

class android_graphics_Matrix;

class android_view_animation_Transformation
{
public:
	 java_lang_String *  toString();
	 void clear();
	 void set(android_view_animation_Transformation& arg0);
	 void compose(android_view_animation_Transformation& arg0);
	 android_graphics_Matrix *  getMatrix();
	 float getAlpha();
	 void setAlpha(float& arg0);
	 java_lang_String *  toShortString();
	 int getTransformationType();
	 void setTransformationType(int& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_animation_Transformation
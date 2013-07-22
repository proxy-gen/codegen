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

// Forward Declarations

class java_lang_String;

class android_view_animation_Transformation;

class android_graphics_Matrix;

class android_view_animation_Transformation
{
public:

	android_view_animation_Transformation(const android_view_animation_Transformation& cc);
	android_view_animation_Transformation(void * proxy);
	// Public Constructors
	android_view_animation_Transformation();
	// Default Destructor
	virtual ~android_view_animation_Transformation();
	// Functions
	 AndroidCXX::java_lang_String toString();
	 void clear();
	 void set(AndroidCXX::android_view_animation_Transformation& arg0);
	 void compose(AndroidCXX::android_view_animation_Transformation& arg0);
	 AndroidCXX::android_graphics_Matrix getMatrix();
	 float getAlpha();
	 void setAlpha(float& arg0);
	 AndroidCXX::java_lang_String toShortString();
	 int getTransformationType();
	 void setTransformationType(int& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_animation_Transformation
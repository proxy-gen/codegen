/*
 * Header (Instance CXX)
 * Author: codegen
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

// Forward Declarations

class java_lang_String;


class android_graphics_Matrix;

class android_view_animation_Transformation 
{
public:

	// Public ConstrucXXX
	android_view_animation_Transformation();
	android_view_animation_Transformation(const android_view_animation_Transformation& cc);
	android_view_animation_Transformation(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_animation_Transformation();
	// Functions
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual void  clear() ;
	virtual void  set(AndroidCXX::android_view_animation_Transformation const& arg0) ;
	virtual void  compose(AndroidCXX::android_view_animation_Transformation const& arg0) ;
	virtual AndroidCXX::android_graphics_Matrix * getMatrix() ;
	virtual float  getAlpha() ;
	virtual void  setAlpha(float const& arg0) ;
	virtual AndroidCXX::java_lang_String * toShortString() ;
	virtual int  getTransformationType() ;
	virtual void  setTransformationType(int const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_animation_Transformation
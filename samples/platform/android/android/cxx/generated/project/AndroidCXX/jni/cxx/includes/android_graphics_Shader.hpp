/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 










// Generated Code 

#ifndef _android_graphics_Shader
#define _android_graphics_Shader
//
// Scroll Down 
//


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

// Forward Declarations

class android_graphics_Matrix;

class android_graphics_Shader
{
public:

	android_graphics_Shader(const android_graphics_Shader& cc);
	android_graphics_Shader(void * proxy);
	// Public Constructors
	android_graphics_Shader();
	// Default Destructor
	virtual ~android_graphics_Shader();
	// Functions
	 bool getLocalMatrix(AndroidCXX::android_graphics_Matrix& arg0);
	 void setLocalMatrix(AndroidCXX::android_graphics_Matrix& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_Shader
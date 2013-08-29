/*
 * Header (Instance CXX)
 * Author: codegen
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

// Forward Declarations

class android_graphics_Matrix;

class android_graphics_Shader 
{
public:

	// Public Constructor
	android_graphics_Shader(Proxy * aProxy = new Proxy());
	android_graphics_Shader(const android_graphics_Shader& cc);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_graphics_Shader();
	// Functions
	virtual bool  getLocalMatrix(AndroidCXX::android_graphics_Matrix const& arg0) ;
	virtual void  setLocalMatrix(AndroidCXX::android_graphics_Matrix const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_Shader
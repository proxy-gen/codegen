/*
 * Header (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			


#ifndef _android_view_SurfaceHolder_Callback
#define _android_view_SurfaceHolder_Callback





#include <android_view_SurfaceHolder.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_view_SurfaceHolder_Callback
{
public:
	void surfaceCreated(android_view_SurfaceHolder& arg0);
	void surfaceChanged(android_view_SurfaceHolder& arg0,int& arg1);
	void surfaceDestroyed(android_view_SurfaceHolder& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_SurfaceHolder_Callback
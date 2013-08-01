/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
 		 










// Generated Code 

#ifndef _android_view_SurfaceHolder_Callback
#define _android_view_SurfaceHolder_Callback
//
// Scroll Down 
//


#include <android_view_SurfaceHolder.hpp>

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

class android_view_SurfaceHolder;

class android_view_SurfaceHolder_Callback
{
public:

	android_view_SurfaceHolder_Callback(const android_view_SurfaceHolder_Callback& cc);
	android_view_SurfaceHolder_Callback(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_SurfaceHolder_Callback();
	// Functions
	 void surfaceCreated(AndroidCXX::android_view_SurfaceHolder const& arg0);
	 void surfaceChanged(AndroidCXX::android_view_SurfaceHolder const& arg0,int const& arg1,int const& arg2,int const& arg3);
	 void surfaceDestroyed(AndroidCXX::android_view_SurfaceHolder const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_SurfaceHolder_Callback
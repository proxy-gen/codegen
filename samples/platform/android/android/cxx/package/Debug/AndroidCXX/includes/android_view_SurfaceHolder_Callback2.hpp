/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 








// Generated Code 

#ifndef _android_view_SurfaceHolder_Callback2
#define _android_view_SurfaceHolder_Callback2
//
// Scroll Down 
//



#include <android_view_SurfaceHolder_Callback.hpp>

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

class android_view_SurfaceHolder_Callback2 : public AndroidCXX::android_view_SurfaceHolder_Callback
{
public:

	android_view_SurfaceHolder_Callback2(const android_view_SurfaceHolder_Callback2& cc);
	android_view_SurfaceHolder_Callback2(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_view_SurfaceHolder_Callback2();
	// Functions
	virtual void  surfaceRedrawNeeded(AndroidCXX::android_view_SurfaceHolder const& arg0) ;

protected:
	android_view_SurfaceHolder_Callback2();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_SurfaceHolder_Callback2
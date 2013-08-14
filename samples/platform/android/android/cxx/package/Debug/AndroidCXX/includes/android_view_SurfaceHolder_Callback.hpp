/*
 * Header (Instance CXX)
 * Author: codegen
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



#include <java_lang_Object.hpp>

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

class android_view_SurfaceHolder_Callback : public java_lang_Object
{
public:

	android_view_SurfaceHolder_Callback(const android_view_SurfaceHolder_Callback& cc);
	android_view_SurfaceHolder_Callback(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_SurfaceHolder_Callback();
	// Functions
	virtual void  surfaceCreated(AndroidCXX::android_view_SurfaceHolder const& arg0) ;
	virtual void  surfaceChanged(AndroidCXX::android_view_SurfaceHolder const& arg0,int const& arg1,int const& arg2,int const& arg3) ;
	virtual void  surfaceDestroyed(AndroidCXX::android_view_SurfaceHolder const& arg0) ;

protected:
	android_view_SurfaceHolder_Callback();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_SurfaceHolder_Callback
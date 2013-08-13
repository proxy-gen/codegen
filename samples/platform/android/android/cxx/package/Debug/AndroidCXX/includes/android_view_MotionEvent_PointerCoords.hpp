/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 


 		 











// Generated Code 

#ifndef _android_view_MotionEvent_PointerCoords
#define _android_view_MotionEvent_PointerCoords
//
// Scroll Down 
//



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


class android_view_MotionEvent_PointerCoords 
{
public:

	// Public ConstrucXXX
	android_view_MotionEvent_PointerCoords();
	android_view_MotionEvent_PointerCoords(AndroidCXX::android_view_MotionEvent_PointerCoords const& arg0);
	android_view_MotionEvent_PointerCoords(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_MotionEvent_PointerCoords();
	// Functions
	virtual void  clear() ;
	virtual void  copyFrom(AndroidCXX::android_view_MotionEvent_PointerCoords const& arg0) ;
	virtual float  getAxisValue(int const& arg0) ;
	virtual void  setAxisValue(int const& arg0,float const& arg1) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_MotionEvent_PointerCoords
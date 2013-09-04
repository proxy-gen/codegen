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


class android_view_MotionEvent_PointerCoords : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	android_view_MotionEvent_PointerCoords(Proxy * aProxy = new Proxy());
	android_view_MotionEvent_PointerCoords(AndroidCXX::android_view_MotionEvent_PointerCoords const& arg0,Proxy * aProxy = new Proxy());
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_view_MotionEvent_PointerCoords();
	// Functions
	virtual void  clear() ;
	virtual void  copyFrom(AndroidCXX::android_view_MotionEvent_PointerCoords const& arg0) ;
	virtual float  getAxisValue(int const& arg0) ;
	virtual void  setAxisValue(int const& arg0,float const& arg1) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_MotionEvent_PointerCoords
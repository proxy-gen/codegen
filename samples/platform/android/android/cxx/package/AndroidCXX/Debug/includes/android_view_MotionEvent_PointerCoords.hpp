/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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

class android_view_MotionEvent_PointerCoords;

class android_view_MotionEvent_PointerCoords
{
public:

	android_view_MotionEvent_PointerCoords(Proxy proxy);
	// Public Constructors
	android_view_MotionEvent_PointerCoords();
	android_view_MotionEvent_PointerCoords(AndroidCXX::android_view_MotionEvent_PointerCoords const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_MotionEvent_PointerCoords();
	// Functions
	 void clear();
	 void copyFrom(AndroidCXX::android_view_MotionEvent_PointerCoords const& arg0);
	 float getAxisValue(int const& arg0);
	 void setAxisValue(int const& arg0,float const& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_MotionEvent_PointerCoords
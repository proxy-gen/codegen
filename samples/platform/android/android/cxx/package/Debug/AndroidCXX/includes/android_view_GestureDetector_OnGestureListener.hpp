/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 













// Generated Code 

#ifndef _android_view_GestureDetector_OnGestureListener
#define _android_view_GestureDetector_OnGestureListener
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

class android_view_MotionEvent;

class android_view_GestureDetector_OnGestureListener : public AndroidCXX::java_lang_Object
{
public:

	android_view_GestureDetector_OnGestureListener(const android_view_GestureDetector_OnGestureListener& cc);
	android_view_GestureDetector_OnGestureListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_GestureDetector_OnGestureListener();
	// Functions
	virtual bool  onDown(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual bool  onFling(AndroidCXX::android_view_MotionEvent const& arg0,AndroidCXX::android_view_MotionEvent const& arg1,float const& arg2,float const& arg3) ;
	virtual void  onLongPress(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual bool  onScroll(AndroidCXX::android_view_MotionEvent const& arg0,AndroidCXX::android_view_MotionEvent const& arg1,float const& arg2,float const& arg3) ;
	virtual void  onShowPress(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual bool  onSingleTapUp(AndroidCXX::android_view_MotionEvent const& arg0) ;

protected:
	android_view_GestureDetector_OnGestureListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_GestureDetector_OnGestureListener
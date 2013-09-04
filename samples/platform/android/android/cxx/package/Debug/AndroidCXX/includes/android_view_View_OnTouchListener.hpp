/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 








// Generated Code 

#ifndef _android_view_View_OnTouchListener
#define _android_view_View_OnTouchListener
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

class android_view_View;

class android_view_MotionEvent;

class android_view_View_OnTouchListener : public AndroidCXX::java_lang_Object
{
public:

	android_view_View_OnTouchListener(const android_view_View_OnTouchListener& cc);
	android_view_View_OnTouchListener(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_view_View_OnTouchListener();
	// Functions
	virtual bool  onTouch(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_MotionEvent const& arg1) ;

protected:
	android_view_View_OnTouchListener();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_View_OnTouchListener
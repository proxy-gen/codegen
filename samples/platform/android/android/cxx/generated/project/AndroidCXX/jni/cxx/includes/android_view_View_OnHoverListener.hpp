/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 








// Generated Code 

#ifndef _android_view_View_OnHoverListener
#define _android_view_View_OnHoverListener
//
// Scroll Down 
//


#include <android_view_View.hpp>

#include <android_view_MotionEvent.hpp>

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

class android_view_View_OnHoverListener
{
public:

	android_view_View_OnHoverListener(const android_view_View_OnHoverListener& cc);
	android_view_View_OnHoverListener(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_View_OnHoverListener();
	// Functions
	 bool onHover(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_MotionEvent const& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_View_OnHoverListener
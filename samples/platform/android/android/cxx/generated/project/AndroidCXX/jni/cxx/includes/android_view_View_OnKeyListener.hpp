/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 








// Generated Code 

#ifndef _android_view_View_OnKeyListener
#define _android_view_View_OnKeyListener
//
// Scroll Down 
//


#include <android_view_View.hpp>

#include <android_view_KeyEvent.hpp>

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

class android_view_KeyEvent;

class android_view_View_OnKeyListener
{
public:

	android_view_View_OnKeyListener(const android_view_View_OnKeyListener& cc);
	android_view_View_OnKeyListener(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_View_OnKeyListener();
	// Functions
	 bool onKey(AndroidCXX::android_view_View const& arg0,int const& arg1,AndroidCXX::android_view_KeyEvent const& arg2);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_View_OnKeyListener
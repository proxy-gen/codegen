/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 











// Generated Code 

#ifndef _android_view_KeyEvent_Callback
#define _android_view_KeyEvent_Callback
//
// Scroll Down 
//


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

class android_view_KeyEvent;

class android_view_KeyEvent_Callback
{
public:

	android_view_KeyEvent_Callback(const android_view_KeyEvent_Callback& cc);
	android_view_KeyEvent_Callback(void * proxy);
	// Public Constructors
	android_view_KeyEvent_Callback();
	// Default Destructor
	virtual ~android_view_KeyEvent_Callback();
	// Functions
	 bool onKeyDown(int& arg0,AndroidCXX::android_view_KeyEvent& arg1);
	 bool onKeyLongPress(int& arg0,AndroidCXX::android_view_KeyEvent& arg1);
	 bool onKeyUp(int& arg0,AndroidCXX::android_view_KeyEvent& arg1);
	 bool onKeyMultiple(int& arg0,int& arg1,AndroidCXX::android_view_KeyEvent& arg2);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_KeyEvent_Callback
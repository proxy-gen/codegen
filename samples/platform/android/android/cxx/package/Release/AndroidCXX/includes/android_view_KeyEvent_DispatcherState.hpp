/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
 		 
 		 
 		 
 		 














// Generated Code 

#ifndef _android_view_KeyEvent_DispatcherState
#define _android_view_KeyEvent_DispatcherState
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

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

class java_lang_Object;

class android_view_KeyEvent;

class android_view_KeyEvent_DispatcherState
{
public:

	android_view_KeyEvent_DispatcherState(const android_view_KeyEvent_DispatcherState& cc);
	android_view_KeyEvent_DispatcherState(Proxy proxy);
	// Public Constructors
	android_view_KeyEvent_DispatcherState();
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_KeyEvent_DispatcherState();
	// Functions
	 void reset();
	 void reset(AndroidCXX::java_lang_Object const& arg0);
	 void startTracking(AndroidCXX::android_view_KeyEvent const& arg0,AndroidCXX::java_lang_Object const& arg1);
	 bool isTracking(AndroidCXX::android_view_KeyEvent const& arg0);
	 void performedLongPress(AndroidCXX::android_view_KeyEvent const& arg0);
	 void handleUpEvent(AndroidCXX::android_view_KeyEvent const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_KeyEvent_DispatcherState
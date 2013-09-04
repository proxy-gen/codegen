/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <android_view_KeyEvent.hpp>

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

class android_view_KeyEvent;


class android_view_KeyEvent_DispatcherState : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	android_view_KeyEvent_DispatcherState(Proxy * aProxy = new Proxy());
	android_view_KeyEvent_DispatcherState(const android_view_KeyEvent_DispatcherState& cc);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_view_KeyEvent_DispatcherState();
	// Functions
	virtual void  handleUpEvent(AndroidCXX::android_view_KeyEvent const& arg0) ;
	virtual bool  isTracking(AndroidCXX::android_view_KeyEvent const& arg0) ;
	virtual void  performedLongPress(AndroidCXX::android_view_KeyEvent const& arg0) ;
	virtual void  reset(AndroidCXX::java_lang_Object const& arg0) ;
	virtual void  reset() ;
	virtual void  startTracking(AndroidCXX::android_view_KeyEvent const& arg0,AndroidCXX::java_lang_Object const& arg1) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_KeyEvent_DispatcherState
/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//











// Generated Code 

#ifndef _android_view_ViewTreeObserver_OnWindowFocusChangeListener
#define _android_view_ViewTreeObserver_OnWindowFocusChangeListener
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

class android_view_ViewTreeObserver_OnWindowFocusChangeListener : public AndroidCXX::java_lang_Object
{
public:

	android_view_ViewTreeObserver_OnWindowFocusChangeListener(const android_view_ViewTreeObserver_OnWindowFocusChangeListener& cc);
	android_view_ViewTreeObserver_OnWindowFocusChangeListener(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_view_ViewTreeObserver_OnWindowFocusChangeListener();
	// Functions
	virtual void  onWindowFocusChanged(bool const& arg0) ;

protected:
	android_view_ViewTreeObserver_OnWindowFocusChangeListener();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_ViewTreeObserver_OnWindowFocusChangeListener
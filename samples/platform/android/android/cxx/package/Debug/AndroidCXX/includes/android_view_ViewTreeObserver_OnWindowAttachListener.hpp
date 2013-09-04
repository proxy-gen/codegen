/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//












// Generated Code 

#ifndef _android_view_ViewTreeObserver_OnWindowAttachListener
#define _android_view_ViewTreeObserver_OnWindowAttachListener
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

class android_view_ViewTreeObserver_OnWindowAttachListener : public AndroidCXX::java_lang_Object
{
public:

	android_view_ViewTreeObserver_OnWindowAttachListener(const android_view_ViewTreeObserver_OnWindowAttachListener& cc);
	android_view_ViewTreeObserver_OnWindowAttachListener(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_view_ViewTreeObserver_OnWindowAttachListener();
	// Functions
	virtual void  onWindowAttached() ;
	virtual void  onWindowDetached() ;

protected:
	android_view_ViewTreeObserver_OnWindowAttachListener();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_ViewTreeObserver_OnWindowAttachListener
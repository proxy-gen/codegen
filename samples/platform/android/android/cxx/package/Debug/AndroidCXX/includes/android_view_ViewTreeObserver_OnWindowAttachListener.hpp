/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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

class android_view_ViewTreeObserver_OnWindowAttachListener
{
public:

	android_view_ViewTreeObserver_OnWindowAttachListener(const android_view_ViewTreeObserver_OnWindowAttachListener& cc);
	android_view_ViewTreeObserver_OnWindowAttachListener(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_ViewTreeObserver_OnWindowAttachListener();
	// Functions
	 void onWindowAttached();
	 void onWindowDetached();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_ViewTreeObserver_OnWindowAttachListener
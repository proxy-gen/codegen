/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//










// Generated Code 

#ifndef _android_app_Activity
#define _android_app_Activity
//
// Scroll Down 
//



#include <android_content_ComponentCallbacks2.hpp>

#include <android_view_KeyEvent_Callback.hpp>

#include <android_view_LayoutInflater_Factory2.hpp>

#include <android_view_View_OnCreateContextMenuListener.hpp>

#include <android_view_Window_Callback.hpp>

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

class android_app_Activity : public AndroidCXX::android_content_ComponentCallbacks2,public AndroidCXX::android_view_KeyEvent_Callback,public AndroidCXX::android_view_LayoutInflater_Factory2,public AndroidCXX::android_view_View_OnCreateContextMenuListener,public AndroidCXX::android_view_Window_Callback
{
public:

	// Public Constructor
	android_app_Activity(Proxy * aProxy = new Proxy());
	android_app_Activity(const android_app_Activity& cc);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_app_Activity();
	// Functions

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_Activity
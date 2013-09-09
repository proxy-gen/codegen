/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//










// Generated Code 

#ifndef _android_support_v4_app_Fragment
#define _android_support_v4_app_Fragment
//
// Scroll Down 
//



#include <android_content_ComponentCallbacks.hpp>

#include <android_view_View_OnCreateContextMenuListener.hpp>

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

class android_support_v4_app_Fragment : public AndroidCXX::android_content_ComponentCallbacks,public AndroidCXX::android_view_View_OnCreateContextMenuListener
{
public:

	// Public Constructor
	android_support_v4_app_Fragment(Proxy * aProxy = new Proxy());
	android_support_v4_app_Fragment(const android_support_v4_app_Fragment& cc);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_support_v4_app_Fragment();
	// Functions

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_support_v4_app_Fragment
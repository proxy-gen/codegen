/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 










// Generated Code 

#ifndef _android_view_WindowId_FocusObserver
#define _android_view_WindowId_FocusObserver
//
// Scroll Down 
//


#include <android_view_WindowId.hpp>

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

class android_view_WindowId;

class android_view_WindowId_FocusObserver
{
public:

	android_view_WindowId_FocusObserver(const android_view_WindowId_FocusObserver& cc);
	android_view_WindowId_FocusObserver(Proxy proxy);
	// Public Constructors
	android_view_WindowId_FocusObserver();
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_WindowId_FocusObserver();
	// Functions
	 void onFocusGained(AndroidCXX::android_view_WindowId const& arg0);
	 void onFocusLost(AndroidCXX::android_view_WindowId const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_WindowId_FocusObserver
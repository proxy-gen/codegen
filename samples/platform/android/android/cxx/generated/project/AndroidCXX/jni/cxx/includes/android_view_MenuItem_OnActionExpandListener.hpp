/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 









// Generated Code 

#ifndef _android_view_MenuItem_OnActionExpandListener
#define _android_view_MenuItem_OnActionExpandListener
//
// Scroll Down 
//


#include <android_view_MenuItem.hpp>

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

class android_view_MenuItem;

class android_view_MenuItem_OnActionExpandListener
{
public:

	android_view_MenuItem_OnActionExpandListener(const android_view_MenuItem_OnActionExpandListener& cc);
	android_view_MenuItem_OnActionExpandListener(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// android_view_MenuItem_OnActionExpandListener();
	// 
	// Default Destructor
	virtual ~android_view_MenuItem_OnActionExpandListener();
	// Functions
	 bool onMenuItemActionExpand(AndroidCXX::android_view_MenuItem& arg0);
	 bool onMenuItemActionCollapse(AndroidCXX::android_view_MenuItem& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_MenuItem_OnActionExpandListener
/*
 * Header (Instance CXX)
 * Author: codegen
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
	android_view_MenuItem_OnActionExpandListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_MenuItem_OnActionExpandListener();
	// Functions
	virtual bool  onMenuItemActionExpand(AndroidCXX::android_view_MenuItem const& arg0) ;
	virtual bool  onMenuItemActionCollapse(AndroidCXX::android_view_MenuItem const& arg0) ;

protected:
	android_view_MenuItem_OnActionExpandListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_MenuItem_OnActionExpandListener
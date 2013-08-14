/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//












// Generated Code 

#ifndef _android_view_CollapsibleActionView
#define _android_view_CollapsibleActionView
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

class android_view_CollapsibleActionView : public java_lang_Object
{
public:

	android_view_CollapsibleActionView(const android_view_CollapsibleActionView& cc);
	android_view_CollapsibleActionView(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_CollapsibleActionView();
	// Functions
	virtual void  onActionViewCollapsed() ;
	virtual void  onActionViewExpanded() ;

protected:
	android_view_CollapsibleActionView();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_CollapsibleActionView
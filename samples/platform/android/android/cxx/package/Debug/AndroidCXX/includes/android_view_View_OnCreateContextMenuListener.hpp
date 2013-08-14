/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 








// Generated Code 

#ifndef _android_view_View_OnCreateContextMenuListener
#define _android_view_View_OnCreateContextMenuListener
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

class android_view_ContextMenu;

class android_view_View;

class android_view_ContextMenu_ContextMenuInfo;

class android_view_View_OnCreateContextMenuListener : public java_lang_Object
{
public:

	android_view_View_OnCreateContextMenuListener(const android_view_View_OnCreateContextMenuListener& cc);
	android_view_View_OnCreateContextMenuListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_View_OnCreateContextMenuListener();
	// Functions
	virtual void  onCreateContextMenu(AndroidCXX::android_view_ContextMenu const& arg0,AndroidCXX::android_view_View const& arg1,AndroidCXX::android_view_ContextMenu_ContextMenuInfo const& arg2) ;

protected:
	android_view_View_OnCreateContextMenuListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_View_OnCreateContextMenuListener
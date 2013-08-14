/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 








// Generated Code 

#ifndef _android_widget_PopupMenu_OnMenuItemClickListener
#define _android_widget_PopupMenu_OnMenuItemClickListener
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

class android_view_MenuItem;

class android_widget_PopupMenu_OnMenuItemClickListener : public java_lang_Object
{
public:

	android_widget_PopupMenu_OnMenuItemClickListener(const android_widget_PopupMenu_OnMenuItemClickListener& cc);
	android_widget_PopupMenu_OnMenuItemClickListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_PopupMenu_OnMenuItemClickListener();
	// Functions
	virtual bool  onMenuItemClick(AndroidCXX::android_view_MenuItem const& arg0) ;

protected:
	android_widget_PopupMenu_OnMenuItemClickListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_PopupMenu_OnMenuItemClickListener
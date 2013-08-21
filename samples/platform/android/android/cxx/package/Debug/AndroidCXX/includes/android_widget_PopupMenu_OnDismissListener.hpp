/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 








// Generated Code 

#ifndef _android_widget_PopupMenu_OnDismissListener
#define _android_widget_PopupMenu_OnDismissListener
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

class android_widget_PopupMenu;

class android_widget_PopupMenu_OnDismissListener : public AndroidCXX::java_lang_Object
{
public:

	android_widget_PopupMenu_OnDismissListener(const android_widget_PopupMenu_OnDismissListener& cc);
	android_widget_PopupMenu_OnDismissListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_PopupMenu_OnDismissListener();
	// Functions
	virtual void  onDismiss(AndroidCXX::android_widget_PopupMenu const& arg0) ;

protected:
	android_widget_PopupMenu_OnDismissListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_PopupMenu_OnDismissListener
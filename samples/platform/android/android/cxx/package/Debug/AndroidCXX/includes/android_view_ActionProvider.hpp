/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 		 
	
 		 
 		 


 		 















// Generated Code 

#ifndef _android_view_ActionProvider
#define _android_view_ActionProvider
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

class android_view_View;

class android_view_MenuItem;

class android_view_SubMenu;

class android_view_ActionProvider_VisibilityListener;

class android_content_Context;

class android_view_ActionProvider 
{
public:

	android_view_ActionProvider(const android_view_ActionProvider& cc);
	android_view_ActionProvider(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_ActionProvider();
	// Functions
	virtual bool  isVisible() ;
	virtual AndroidCXX::android_view_View * onCreateActionView() ;
	virtual AndroidCXX::android_view_View * onCreateActionView(AndroidCXX::android_view_MenuItem const& arg0) ;
	virtual bool  hasSubMenu() ;
	virtual void  onPrepareSubMenu(AndroidCXX::android_view_SubMenu const& arg0) ;
	virtual bool  overridesItemVisibility() ;
	virtual void  refreshVisibility() ;
	virtual bool  onPerformDefaultAction() ;
	virtual void  setVisibilityListener(AndroidCXX::android_view_ActionProvider_VisibilityListener const& arg0) ;

protected:
	android_view_ActionProvider();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_ActionProvider
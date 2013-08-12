/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <android_view_View.hpp>

#include <android_view_MenuItem.hpp>

#include <android_view_SubMenu.hpp>

#include <android_view_ActionProvider_VisibilityListener.hpp>

#include <android_content_Context.hpp>

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
	// Public Constructors
	android_view_ActionProvider(AndroidCXX::android_content_Context const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_ActionProvider();
	// Functions
	 bool isVisible();
	 bool hasSubMenu();
	 AndroidCXX::android_view_View onCreateActionView();
	 AndroidCXX::android_view_View onCreateActionView(AndroidCXX::android_view_MenuItem const& arg0);
	 bool overridesItemVisibility();
	 void refreshVisibility();
	 bool onPerformDefaultAction();
	 void onPrepareSubMenu(AndroidCXX::android_view_SubMenu const& arg0);
	 void setVisibilityListener(AndroidCXX::android_view_ActionProvider_VisibilityListener const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_ActionProvider
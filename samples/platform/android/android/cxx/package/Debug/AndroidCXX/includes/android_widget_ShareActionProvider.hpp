/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 		 
 		 
 		 
 		 


 		 












// Generated Code 

#ifndef _android_widget_ShareActionProvider
#define _android_widget_ShareActionProvider
//
// Scroll Down 
//


#include <android_view_View.hpp>

#include <android_view_SubMenu.hpp>

#include <android_widget_ShareActionProvider_OnShareTargetSelectedListener.hpp>

#include <java_lang_String.hpp>

#include <android_content_Intent.hpp>

#include <android_content_Context.hpp>


#include <android_view_ActionProvider.hpp>

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

class android_view_SubMenu;

class android_widget_ShareActionProvider_OnShareTargetSelectedListener;

class java_lang_String;

class android_content_Intent;

class android_content_Context;

class android_widget_ShareActionProvider : public AndroidCXX::android_view_ActionProvider
{
public:

	// Public Constructor
	android_widget_ShareActionProvider(AndroidCXX::android_content_Context const& arg0,Proxy * aProxy = new Proxy());
	android_widget_ShareActionProvider(const android_widget_ShareActionProvider& cc);
	android_widget_ShareActionProvider(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_widget_ShareActionProvider();
	// Functions
	virtual bool  hasSubMenu() ;
	virtual AndroidCXX::android_view_View * onCreateActionView() ;
	virtual void  onPrepareSubMenu(AndroidCXX::android_view_SubMenu const& arg0) ;
	virtual void  setOnShareTargetSelectedListener(AndroidCXX::android_widget_ShareActionProvider_OnShareTargetSelectedListener const& arg0) ;
	virtual void  setShareHistoryFileName(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setShareIntent(AndroidCXX::android_content_Intent const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ShareActionProvider
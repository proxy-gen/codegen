/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	


 		 
 		 
 		 







// Generated Code 

#ifndef _com_facebook_AuthorizationClient_AuthDialogBuilder
#define _com_facebook_AuthorizationClient_AuthDialogBuilder
//
// Scroll Down 
//


#include <com_facebook_widget_WebDialog.hpp>

#include <android_content_Context.hpp>

#include <java_lang_String.hpp>

#include <android_os_Bundle.hpp>


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

namespace FacebookCXX {

// Forward Declarations

class com_facebook_widget_WebDialog;




class com_facebook_AuthorizationClient_AuthDialogBuilder : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	com_facebook_AuthorizationClient_AuthDialogBuilder(AndroidCXX::android_content_Context const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_os_Bundle const& arg2,Proxy * aProxy = new Proxy());
	com_facebook_AuthorizationClient_AuthDialogBuilder(const com_facebook_AuthorizationClient_AuthDialogBuilder& cc);
	com_facebook_AuthorizationClient_AuthDialogBuilder(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_AuthorizationClient_AuthDialogBuilder();
	// Functions
	virtual FacebookCXX::com_facebook_widget_WebDialog * build() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_AuthorizationClient_AuthDialogBuilder
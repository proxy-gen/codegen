/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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




class com_facebook_AuthorizationClient_AuthDialogBuilder
{
public:

	com_facebook_AuthorizationClient_AuthDialogBuilder(const com_facebook_AuthorizationClient_AuthDialogBuilder& cc);
	com_facebook_AuthorizationClient_AuthDialogBuilder(void * proxy);
	// Public Constructors
	com_facebook_AuthorizationClient_AuthDialogBuilder(AndroidCXX::android_content_Context& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::android_os_Bundle& arg2);
	com_facebook_AuthorizationClient_AuthDialogBuilder();
	// Default Destructor
	virtual ~com_facebook_AuthorizationClient_AuthDialogBuilder();
	// Functions
	 FacebookCXX::com_facebook_widget_WebDialog build();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_AuthorizationClient_AuthDialogBuilder
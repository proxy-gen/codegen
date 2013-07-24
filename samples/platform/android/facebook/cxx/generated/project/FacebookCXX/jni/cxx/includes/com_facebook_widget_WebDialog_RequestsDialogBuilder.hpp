/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	
 		 
	
 		 
	
 		 
	


 		 
 		 
 		 
 		 
 		 











// Generated Code 

#ifndef _com_facebook_widget_WebDialog_RequestsDialogBuilder
#define _com_facebook_widget_WebDialog_RequestsDialogBuilder
//
// Scroll Down 
//


#include <java_lang_String.hpp>


#include <android_content_Context.hpp>

#include <com_facebook_Session.hpp>

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


class com_facebook_widget_WebDialog_RequestsDialogBuilder;


class com_facebook_Session;


class com_facebook_widget_WebDialog_RequestsDialogBuilder
{
public:

	com_facebook_widget_WebDialog_RequestsDialogBuilder(const com_facebook_widget_WebDialog_RequestsDialogBuilder& cc);
	com_facebook_widget_WebDialog_RequestsDialogBuilder(void * proxy);
	// Public Constructors
	com_facebook_widget_WebDialog_RequestsDialogBuilder(AndroidCXX::android_content_Context& arg0,FacebookCXX::com_facebook_Session& arg1);
	com_facebook_widget_WebDialog_RequestsDialogBuilder(AndroidCXX::android_content_Context& arg0,FacebookCXX::com_facebook_Session& arg1,AndroidCXX::android_os_Bundle& arg2);
	// TODO: remove
	// 
	// com_facebook_widget_WebDialog_RequestsDialogBuilder();
	// 
	// Default Destructor
	virtual ~com_facebook_widget_WebDialog_RequestsDialogBuilder();
	// Functions
	 FacebookCXX::com_facebook_widget_WebDialog_RequestsDialogBuilder setData(AndroidCXX::java_lang_String& arg0);
	 FacebookCXX::com_facebook_widget_WebDialog_RequestsDialogBuilder setTitle(AndroidCXX::java_lang_String& arg0);
	 FacebookCXX::com_facebook_widget_WebDialog_RequestsDialogBuilder setMessage(AndroidCXX::java_lang_String& arg0);
	 FacebookCXX::com_facebook_widget_WebDialog_RequestsDialogBuilder setTo(AndroidCXX::java_lang_String& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_WebDialog_RequestsDialogBuilder
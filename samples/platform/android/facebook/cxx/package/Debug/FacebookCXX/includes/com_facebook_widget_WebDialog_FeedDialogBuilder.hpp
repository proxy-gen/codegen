/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	


 		 
 		 
 		 
 		 
 		 















// Generated Code 

#ifndef _com_facebook_widget_WebDialog_FeedDialogBuilder
#define _com_facebook_widget_WebDialog_FeedDialogBuilder
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <android_content_Context.hpp>

#include <com_facebook_Session.hpp>

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




class com_facebook_Session;


class com_facebook_widget_WebDialog_FeedDialogBuilder : public AndroidCXX::java_lang_Object
{
public:

	// Public ConstrucXXX
	com_facebook_widget_WebDialog_FeedDialogBuilder(AndroidCXX::android_content_Context const& arg0,FacebookCXX::com_facebook_Session const& arg1);
	com_facebook_widget_WebDialog_FeedDialogBuilder(AndroidCXX::android_content_Context const& arg0,FacebookCXX::com_facebook_Session const& arg1,AndroidCXX::android_os_Bundle const& arg2);
	com_facebook_widget_WebDialog_FeedDialogBuilder(const com_facebook_widget_WebDialog_FeedDialogBuilder& cc);
	com_facebook_widget_WebDialog_FeedDialogBuilder(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_widget_WebDialog_FeedDialogBuilder();
	// Functions
	virtual FacebookCXX::com_facebook_widget_WebDialog_FeedDialogBuilder * setCaption(AndroidCXX::java_lang_String const& arg0) ;
	virtual FacebookCXX::com_facebook_widget_WebDialog_FeedDialogBuilder * setDescription(AndroidCXX::java_lang_String const& arg0) ;
	virtual FacebookCXX::com_facebook_widget_WebDialog_FeedDialogBuilder * setFrom(AndroidCXX::java_lang_String const& arg0) ;
	virtual FacebookCXX::com_facebook_widget_WebDialog_FeedDialogBuilder * setLink(AndroidCXX::java_lang_String const& arg0) ;
	virtual FacebookCXX::com_facebook_widget_WebDialog_FeedDialogBuilder * setName(AndroidCXX::java_lang_String const& arg0) ;
	virtual FacebookCXX::com_facebook_widget_WebDialog_FeedDialogBuilder * setPicture(AndroidCXX::java_lang_String const& arg0) ;
	virtual FacebookCXX::com_facebook_widget_WebDialog_FeedDialogBuilder * setSource(AndroidCXX::java_lang_String const& arg0) ;
	virtual FacebookCXX::com_facebook_widget_WebDialog_FeedDialogBuilder * setTo(AndroidCXX::java_lang_String const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_WebDialog_FeedDialogBuilder
/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//





 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 







// Generated Code 

#ifndef _com_facebook_widget_WebDialog_Builder
#define _com_facebook_widget_WebDialog_Builder
//
// Scroll Down 
//


#include <android_content_Context.hpp>

#include <com_facebook_Session.hpp>

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


class com_facebook_Session;



class com_facebook_widget_WebDialog_Builder : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	com_facebook_widget_WebDialog_Builder(AndroidCXX::android_content_Context const& arg0,FacebookCXX::com_facebook_Session const& arg1,AndroidCXX::java_lang_String const& arg2,AndroidCXX::android_os_Bundle const& arg3,Proxy * aProxy = new Proxy());
	com_facebook_widget_WebDialog_Builder(AndroidCXX::android_content_Context const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2,AndroidCXX::android_os_Bundle const& arg3,Proxy * aProxy = new Proxy());
	com_facebook_widget_WebDialog_Builder(const com_facebook_widget_WebDialog_Builder& cc);
	com_facebook_widget_WebDialog_Builder(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_widget_WebDialog_Builder();
	// Functions

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_WebDialog_Builder
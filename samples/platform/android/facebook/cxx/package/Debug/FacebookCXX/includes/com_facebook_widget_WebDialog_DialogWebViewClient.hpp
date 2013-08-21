/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 












// Generated Code 

#ifndef _com_facebook_widget_WebDialog_DialogWebViewClient
#define _com_facebook_widget_WebDialog_DialogWebViewClient
//
// Scroll Down 
//


#include <android_webkit_WebView.hpp>

#include <java_lang_String.hpp>

#include <android_graphics_Bitmap.hpp>

#include <android_webkit_SslErrorHandler.hpp>

#include <android_net_http_SslError.hpp>


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






class com_facebook_widget_WebDialog_DialogWebViewClient : public AndroidCXX::java_lang_Object
{
public:

	// Public ConstrucXXX
	com_facebook_widget_WebDialog_DialogWebViewClient(const com_facebook_widget_WebDialog_DialogWebViewClient& cc);
	com_facebook_widget_WebDialog_DialogWebViewClient(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_widget_WebDialog_DialogWebViewClient();
	// Functions
	virtual void  onPageFinished(AndroidCXX::android_webkit_WebView const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual void  onPageStarted(AndroidCXX::android_webkit_WebView const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_graphics_Bitmap const& arg2) ;
	virtual void  onReceivedError(AndroidCXX::android_webkit_WebView const& arg0,int const& arg1,AndroidCXX::java_lang_String const& arg2,AndroidCXX::java_lang_String const& arg3) ;
	virtual void  onReceivedSslError(AndroidCXX::android_webkit_WebView const& arg0,AndroidCXX::android_webkit_SslErrorHandler const& arg1,AndroidCXX::android_net_http_SslError const& arg2) ;
	virtual bool  shouldOverrideUrlLoading(AndroidCXX::android_webkit_WebView const& arg0,AndroidCXX::java_lang_String const& arg1) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_WebDialog_DialogWebViewClient
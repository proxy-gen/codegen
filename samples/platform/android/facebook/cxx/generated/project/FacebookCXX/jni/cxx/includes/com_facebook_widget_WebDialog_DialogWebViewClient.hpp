/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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






class com_facebook_widget_WebDialog_DialogWebViewClient
{
public:

	com_facebook_widget_WebDialog_DialogWebViewClient(const com_facebook_widget_WebDialog_DialogWebViewClient& cc);
	com_facebook_widget_WebDialog_DialogWebViewClient(void * proxy);
	// Public Constructors
	com_facebook_widget_WebDialog_DialogWebViewClient();
	// Default Destructor
	virtual ~com_facebook_widget_WebDialog_DialogWebViewClient();
	// Functions
	 bool shouldOverrideUrlLoading(AndroidCXX::android_webkit_WebView& arg0,AndroidCXX::java_lang_String& arg1);
	 void onPageStarted(AndroidCXX::android_webkit_WebView& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::android_graphics_Bitmap& arg2);
	 void onPageFinished(AndroidCXX::android_webkit_WebView& arg0,AndroidCXX::java_lang_String& arg1);
	 void onReceivedError(AndroidCXX::android_webkit_WebView& arg0,int& arg1,AndroidCXX::java_lang_String& arg2,AndroidCXX::java_lang_String& arg3);
	 void onReceivedSslError(AndroidCXX::android_webkit_WebView& arg0,AndroidCXX::android_webkit_SslErrorHandler& arg1,AndroidCXX::android_net_http_SslError& arg2);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_WebDialog_DialogWebViewClient
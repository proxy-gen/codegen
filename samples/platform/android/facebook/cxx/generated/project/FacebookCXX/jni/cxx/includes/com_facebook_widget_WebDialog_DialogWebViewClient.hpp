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

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class android_webkit_WebView;

class java_lang_String;

class android_graphics_Bitmap;

class android_webkit_SslErrorHandler;

class android_net_http_SslError;

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
	 bool shouldOverrideUrlLoading(FacebookCXX::android_webkit_WebView& arg0,FacebookCXX::java_lang_String& arg1);
	 void onPageStarted(FacebookCXX::android_webkit_WebView& arg0,FacebookCXX::java_lang_String& arg1,FacebookCXX::android_graphics_Bitmap& arg2);
	 void onPageFinished(FacebookCXX::android_webkit_WebView& arg0,FacebookCXX::java_lang_String& arg1);
	 void onReceivedError(FacebookCXX::android_webkit_WebView& arg0,int& arg1,FacebookCXX::java_lang_String& arg2,FacebookCXX::java_lang_String& arg3);
	 void onReceivedSslError(FacebookCXX::android_webkit_WebView& arg0,FacebookCXX::android_webkit_SslErrorHandler& arg1,FacebookCXX::android_net_http_SslError& arg2);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_WebDialog_DialogWebViewClient
/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 























// Generated Code 

#ifndef _android_webkit_WebViewClient
#define _android_webkit_WebViewClient
//
// Scroll Down 
//


#include <android_webkit_WebView.hpp>

#include <java_lang_String.hpp>

#include <android_graphics_Bitmap.hpp>

#include <android_webkit_WebResourceResponse.hpp>

#include <android_os_Message.hpp>

#include <android_webkit_SslErrorHandler.hpp>

#include <android_net_http_SslError.hpp>

#include <android_webkit_HttpAuthHandler.hpp>

#include <android_view_KeyEvent.hpp>

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

class android_webkit_WebResourceResponse;

class android_os_Message;

class android_webkit_SslErrorHandler;

class android_net_http_SslError;

class android_webkit_HttpAuthHandler;

class android_view_KeyEvent;

class android_webkit_WebViewClient
{
public:

	android_webkit_WebViewClient(const android_webkit_WebViewClient& cc);
	android_webkit_WebViewClient(void * proxy);
	// Public Constructors
	android_webkit_WebViewClient();
	// Default Destructor
	virtual ~android_webkit_WebViewClient();
	// Functions
	 bool shouldOverrideUrlLoading(AndroidCXX::android_webkit_WebView& arg0,AndroidCXX::java_lang_String& arg1);
	 void onPageStarted(AndroidCXX::android_webkit_WebView& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::android_graphics_Bitmap& arg2);
	 void onPageFinished(AndroidCXX::android_webkit_WebView& arg0,AndroidCXX::java_lang_String& arg1);
	 void onLoadResource(AndroidCXX::android_webkit_WebView& arg0,AndroidCXX::java_lang_String& arg1);
	 AndroidCXX::android_webkit_WebResourceResponse shouldInterceptRequest(AndroidCXX::android_webkit_WebView& arg0,AndroidCXX::java_lang_String& arg1);
	 void onTooManyRedirects(AndroidCXX::android_webkit_WebView& arg0,AndroidCXX::android_os_Message& arg1,AndroidCXX::android_os_Message& arg2);
	 void onReceivedError(AndroidCXX::android_webkit_WebView& arg0,int& arg1,AndroidCXX::java_lang_String& arg2,AndroidCXX::java_lang_String& arg3);
	 void onFormResubmission(AndroidCXX::android_webkit_WebView& arg0,AndroidCXX::android_os_Message& arg1,AndroidCXX::android_os_Message& arg2);
	 void doUpdateVisitedHistory(AndroidCXX::android_webkit_WebView& arg0,AndroidCXX::java_lang_String& arg1,bool& arg2);
	 void onReceivedSslError(AndroidCXX::android_webkit_WebView& arg0,AndroidCXX::android_webkit_SslErrorHandler& arg1,AndroidCXX::android_net_http_SslError& arg2);
	 void onReceivedHttpAuthRequest(AndroidCXX::android_webkit_WebView& arg0,AndroidCXX::android_webkit_HttpAuthHandler& arg1,AndroidCXX::java_lang_String& arg2,AndroidCXX::java_lang_String& arg3);
	 bool shouldOverrideKeyEvent(AndroidCXX::android_webkit_WebView& arg0,AndroidCXX::android_view_KeyEvent& arg1);
	 void onUnhandledKeyEvent(AndroidCXX::android_webkit_WebView& arg0,AndroidCXX::android_view_KeyEvent& arg1);
	 void onScaleChanged(AndroidCXX::android_webkit_WebView& arg0,float& arg1,float& arg2);
	 void onReceivedLoginRequest(AndroidCXX::android_webkit_WebView& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::java_lang_String& arg2,AndroidCXX::java_lang_String& arg3);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_webkit_WebViewClient
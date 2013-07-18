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

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

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
 bool shouldOverrideUrlLoading(android_webkit_WebView& arg0,java_lang_String& arg1);
 void onPageStarted(android_webkit_WebView& arg0,java_lang_String& arg1,android_graphics_Bitmap& arg2);
 void onPageFinished(android_webkit_WebView& arg0,java_lang_String& arg1);
 void onLoadResource(android_webkit_WebView& arg0,java_lang_String& arg1);
 android_webkit_WebResourceResponse shouldInterceptRequest(android_webkit_WebView& arg0,java_lang_String& arg1);
 void onTooManyRedirects(android_webkit_WebView& arg0,android_os_Message& arg1);
 void onReceivedError(android_webkit_WebView& arg0,int& arg1,java_lang_String& arg2);
 void onFormResubmission(android_webkit_WebView& arg0,android_os_Message& arg1);
 void doUpdateVisitedHistory(android_webkit_WebView& arg0,java_lang_String& arg1,bool& arg2);
 void onReceivedSslError(android_webkit_WebView& arg0,android_webkit_SslErrorHandler& arg1,android_net_http_SslError& arg2);
 void onReceivedHttpAuthRequest(android_webkit_WebView& arg0,android_webkit_HttpAuthHandler& arg1,java_lang_String& arg2);
 bool shouldOverrideKeyEvent(android_webkit_WebView& arg0,android_view_KeyEvent& arg1);
 void onUnhandledKeyEvent(android_webkit_WebView& arg0,android_view_KeyEvent& arg1);
 void onScaleChanged(android_webkit_WebView& arg0,float& arg1);
 void onReceivedLoginRequest(android_webkit_WebView& arg0,java_lang_String& arg1);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_webkit_WebViewClient
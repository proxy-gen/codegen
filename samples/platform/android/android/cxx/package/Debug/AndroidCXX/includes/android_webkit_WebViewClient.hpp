/*
 * Header (Instance CXX)
 * Author: codegen
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

#include <android_os_Message.hpp>

#include <android_graphics_Bitmap.hpp>

#include <android_webkit_HttpAuthHandler.hpp>

#include <android_webkit_SslErrorHandler.hpp>

#include <android_net_http_SslError.hpp>

#include <android_view_KeyEvent.hpp>

#include <android_webkit_WebResourceResponse.hpp>


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

// Forward Declarations

class android_webkit_WebView;

class java_lang_String;

class android_os_Message;

class android_graphics_Bitmap;

class android_webkit_HttpAuthHandler;

class android_webkit_SslErrorHandler;

class android_net_http_SslError;

class android_view_KeyEvent;

class android_webkit_WebResourceResponse;

class android_webkit_WebViewClient 
{
public:

	// Public Constructor
	android_webkit_WebViewClient(Proxy * aProxy = new Proxy());
	android_webkit_WebViewClient(const android_webkit_WebViewClient& cc);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_webkit_WebViewClient();
	// Functions
	virtual void  doUpdateVisitedHistory(AndroidCXX::android_webkit_WebView const& arg0,AndroidCXX::java_lang_String const& arg1,bool const& arg2) ;
	virtual void  onFormResubmission(AndroidCXX::android_webkit_WebView const& arg0,AndroidCXX::android_os_Message const& arg1,AndroidCXX::android_os_Message const& arg2) ;
	virtual void  onLoadResource(AndroidCXX::android_webkit_WebView const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual void  onPageFinished(AndroidCXX::android_webkit_WebView const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual void  onPageStarted(AndroidCXX::android_webkit_WebView const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_graphics_Bitmap const& arg2) ;
	virtual void  onReceivedError(AndroidCXX::android_webkit_WebView const& arg0,int const& arg1,AndroidCXX::java_lang_String const& arg2,AndroidCXX::java_lang_String const& arg3) ;
	virtual void  onReceivedHttpAuthRequest(AndroidCXX::android_webkit_WebView const& arg0,AndroidCXX::android_webkit_HttpAuthHandler const& arg1,AndroidCXX::java_lang_String const& arg2,AndroidCXX::java_lang_String const& arg3) ;
	virtual void  onReceivedLoginRequest(AndroidCXX::android_webkit_WebView const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2,AndroidCXX::java_lang_String const& arg3) ;
	virtual void  onReceivedSslError(AndroidCXX::android_webkit_WebView const& arg0,AndroidCXX::android_webkit_SslErrorHandler const& arg1,AndroidCXX::android_net_http_SslError const& arg2) ;
	virtual void  onScaleChanged(AndroidCXX::android_webkit_WebView const& arg0,float const& arg1,float const& arg2) ;
	virtual void  onTooManyRedirects(AndroidCXX::android_webkit_WebView const& arg0,AndroidCXX::android_os_Message const& arg1,AndroidCXX::android_os_Message const& arg2) ;
	virtual void  onUnhandledKeyEvent(AndroidCXX::android_webkit_WebView const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) ;
	virtual AndroidCXX::android_webkit_WebResourceResponse * shouldInterceptRequest(AndroidCXX::android_webkit_WebView const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual bool  shouldOverrideKeyEvent(AndroidCXX::android_webkit_WebView const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) ;
	virtual bool  shouldOverrideUrlLoading(AndroidCXX::android_webkit_WebView const& arg0,AndroidCXX::java_lang_String const& arg1) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_webkit_WebViewClient
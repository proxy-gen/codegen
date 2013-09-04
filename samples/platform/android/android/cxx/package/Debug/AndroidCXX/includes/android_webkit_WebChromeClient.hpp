/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
	
 		 
 	
 	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
































// Generated Code 

#ifndef _android_webkit_WebChromeClient
#define _android_webkit_WebChromeClient
//
// Scroll Down 
//


#include <android_graphics_Bitmap.hpp>

#include <android_view_View.hpp>

#include <android_webkit_ValueCallback.hpp>

#include <java_lang_String.hpp>

#include <android_webkit_WebView.hpp>

#include <android_webkit_ConsoleMessage.hpp>

#include <android_os_Message.hpp>

#include <android_webkit_WebStorage_QuotaUpdater.hpp>

#include <android_webkit_GeolocationPermissions_Callback.hpp>

#include <android_webkit_JsResult.hpp>

#include <android_webkit_JsPromptResult.hpp>

#include <android_webkit_WebChromeClient_CustomViewCallback.hpp>


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

namespace AndroidCXX {

// Forward Declarations

class android_graphics_Bitmap;

class android_view_View;

class android_webkit_ValueCallback;

class java_lang_String;

class android_webkit_WebView;

class android_webkit_ConsoleMessage;

class android_os_Message;

class android_webkit_WebStorage_QuotaUpdater;

class android_webkit_GeolocationPermissions_Callback;

class android_webkit_JsResult;

class android_webkit_JsPromptResult;

class android_webkit_WebChromeClient_CustomViewCallback;

class android_webkit_WebChromeClient : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	android_webkit_WebChromeClient(Proxy * aProxy = new Proxy());
	android_webkit_WebChromeClient(const android_webkit_WebChromeClient& cc);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_webkit_WebChromeClient();
	// Functions
	virtual AndroidCXX::android_graphics_Bitmap * getDefaultVideoPoster() ;
	virtual AndroidCXX::android_view_View * getVideoLoadingProgressView() ;
	virtual void  getVisitedHistory(AndroidCXX::android_webkit_ValueCallback const& arg0) ;
	virtual void  onCloseWindow(AndroidCXX::android_webkit_WebView const& arg0) ;
	virtual bool  onConsoleMessage(AndroidCXX::android_webkit_ConsoleMessage const& arg0) ;
	virtual void  onConsoleMessage(AndroidCXX::java_lang_String const& arg0,int const& arg1,AndroidCXX::java_lang_String const& arg2) ;
	virtual bool  onCreateWindow(AndroidCXX::android_webkit_WebView const& arg0,bool const& arg1,bool const& arg2,AndroidCXX::android_os_Message const& arg3) ;
	virtual void  onExceededDatabaseQuota(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,long const& arg2,long const& arg3,long const& arg4,AndroidCXX::android_webkit_WebStorage_QuotaUpdater const& arg5) ;
	virtual void  onGeolocationPermissionsHidePrompt() ;
	virtual void  onGeolocationPermissionsShowPrompt(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_webkit_GeolocationPermissions_Callback const& arg1) ;
	virtual void  onHideCustomView() ;
	virtual bool  onJsAlert(AndroidCXX::android_webkit_WebView const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2,AndroidCXX::android_webkit_JsResult const& arg3) ;
	virtual bool  onJsBeforeUnload(AndroidCXX::android_webkit_WebView const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2,AndroidCXX::android_webkit_JsResult const& arg3) ;
	virtual bool  onJsConfirm(AndroidCXX::android_webkit_WebView const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2,AndroidCXX::android_webkit_JsResult const& arg3) ;
	virtual bool  onJsPrompt(AndroidCXX::android_webkit_WebView const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2,AndroidCXX::java_lang_String const& arg3,AndroidCXX::android_webkit_JsPromptResult const& arg4) ;
	virtual bool  onJsTimeout() ;
	virtual void  onProgressChanged(AndroidCXX::android_webkit_WebView const& arg0,int const& arg1) ;
	virtual void  onReachedMaxAppCacheSize(long const& arg0,long const& arg1,AndroidCXX::android_webkit_WebStorage_QuotaUpdater const& arg2) ;
	virtual void  onReceivedIcon(AndroidCXX::android_webkit_WebView const& arg0,AndroidCXX::android_graphics_Bitmap const& arg1) ;
	virtual void  onReceivedTitle(AndroidCXX::android_webkit_WebView const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual void  onReceivedTouchIconUrl(AndroidCXX::android_webkit_WebView const& arg0,AndroidCXX::java_lang_String const& arg1,bool const& arg2) ;
	virtual void  onRequestFocus(AndroidCXX::android_webkit_WebView const& arg0) ;
	virtual void  onShowCustomView(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_webkit_WebChromeClient_CustomViewCallback const& arg1) ;
	virtual void  onShowCustomView(AndroidCXX::android_view_View const& arg0,int const& arg1,AndroidCXX::android_webkit_WebChromeClient_CustomViewCallback const& arg2) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_webkit_WebChromeClient
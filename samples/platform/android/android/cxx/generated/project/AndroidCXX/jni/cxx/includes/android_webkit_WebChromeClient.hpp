/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <android_webkit_WebView.hpp>

#include <java_lang_String.hpp>

#include <android_graphics_Bitmap.hpp>

#include <android_view_View.hpp>

#include <android_webkit_WebChromeClient_CustomViewCallback.hpp>

#include <android_os_Message.hpp>

#include <android_webkit_JsResult.hpp>

#include <android_webkit_JsPromptResult.hpp>

#include <android_webkit_WebStorage_QuotaUpdater.hpp>

#include <android_webkit_GeolocationPermissions_Callback.hpp>

#include <android_webkit_ConsoleMessage.hpp>

#include <android_webkit_ValueCallback.hpp>

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

class android_graphics_Bitmap;

class android_view_View;

class android_webkit_WebChromeClient_CustomViewCallback;

class android_os_Message;

class android_webkit_JsResult;

class android_webkit_JsPromptResult;

class android_webkit_WebStorage_QuotaUpdater;

class android_webkit_GeolocationPermissions_Callback;

class android_webkit_ConsoleMessage;

class android_webkit_ValueCallback;

class android_webkit_WebChromeClient
{
public:

	android_webkit_WebChromeClient(const android_webkit_WebChromeClient& cc);
	android_webkit_WebChromeClient(void * proxy);
	// Public Constructors
	android_webkit_WebChromeClient();
	// TODO: remove
	// 
	// Default Destructor
	virtual ~android_webkit_WebChromeClient();
	// Functions
	 void onProgressChanged(AndroidCXX::android_webkit_WebView& arg0,int& arg1);
	 void onReceivedTitle(AndroidCXX::android_webkit_WebView& arg0,AndroidCXX::java_lang_String& arg1);
	 void onReceivedIcon(AndroidCXX::android_webkit_WebView& arg0,AndroidCXX::android_graphics_Bitmap& arg1);
	 void onReceivedTouchIconUrl(AndroidCXX::android_webkit_WebView& arg0,AndroidCXX::java_lang_String& arg1,bool& arg2);
	 void onShowCustomView(AndroidCXX::android_view_View& arg0,AndroidCXX::android_webkit_WebChromeClient_CustomViewCallback& arg1);
	 void onShowCustomView(AndroidCXX::android_view_View& arg0,int& arg1,AndroidCXX::android_webkit_WebChromeClient_CustomViewCallback& arg2);
	 void onHideCustomView();
	 bool onCreateWindow(AndroidCXX::android_webkit_WebView& arg0,bool& arg1,bool& arg2,AndroidCXX::android_os_Message& arg3);
	 void onRequestFocus(AndroidCXX::android_webkit_WebView& arg0);
	 void onCloseWindow(AndroidCXX::android_webkit_WebView& arg0);
	 bool onJsAlert(AndroidCXX::android_webkit_WebView& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::java_lang_String& arg2,AndroidCXX::android_webkit_JsResult& arg3);
	 bool onJsConfirm(AndroidCXX::android_webkit_WebView& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::java_lang_String& arg2,AndroidCXX::android_webkit_JsResult& arg3);
	 bool onJsPrompt(AndroidCXX::android_webkit_WebView& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::java_lang_String& arg2,AndroidCXX::java_lang_String& arg3,AndroidCXX::android_webkit_JsPromptResult& arg4);
	 bool onJsBeforeUnload(AndroidCXX::android_webkit_WebView& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::java_lang_String& arg2,AndroidCXX::android_webkit_JsResult& arg3);
	 void onExceededDatabaseQuota(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1,long& arg2,long& arg3,long& arg4,AndroidCXX::android_webkit_WebStorage_QuotaUpdater& arg5);
	 void onReachedMaxAppCacheSize(long& arg0,long& arg1,AndroidCXX::android_webkit_WebStorage_QuotaUpdater& arg2);
	 void onGeolocationPermissionsShowPrompt(AndroidCXX::java_lang_String& arg0,AndroidCXX::android_webkit_GeolocationPermissions_Callback& arg1);
	 void onGeolocationPermissionsHidePrompt();
	 bool onJsTimeout();
	 void onConsoleMessage(AndroidCXX::java_lang_String& arg0,int& arg1,AndroidCXX::java_lang_String& arg2);
	 bool onConsoleMessage(AndroidCXX::android_webkit_ConsoleMessage& arg0);
	 AndroidCXX::android_graphics_Bitmap getDefaultVideoPoster();
	 AndroidCXX::android_view_View getVideoLoadingProgressView();
	 void getVisitedHistory(AndroidCXX::android_webkit_ValueCallback& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_webkit_WebChromeClient
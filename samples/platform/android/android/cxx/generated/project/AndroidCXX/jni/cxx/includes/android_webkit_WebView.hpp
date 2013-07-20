/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
	
 		 
	
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 	
 		 
 		 
 		 
 	
 		 
 		 
 		 
 	
 		 
 		 
 		 
 		 
 	
 		 
	
	
 		 
 		 
	
	
	
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	

// Generated Code 

#ifndef _android_webkit_WebView
#define _android_webkit_WebView
//
// Scroll Down 
//







































































































#include <android_net_http_SslCertificate.hpp>

#include <java_lang_String.hpp>

#include <android_os_Bundle.hpp>

#include <android_webkit_WebBackForwardList.hpp>

#include <android_view_KeyEvent.hpp>

#include <android_view_MotionEvent.hpp>

#include <android_view_View.hpp>

#include <android_graphics_Rect.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_view_inputmethod_EditorInfo.hpp>

#include <android_view_inputmethod_InputConnection.hpp>

#include <android_view_ViewGroup_LayoutParams.hpp>

#include <android_graphics_Paint.hpp>

#include <java_util_Map.hpp>

#include <android_webkit_ValueCallback.hpp>

#include <android_graphics_Picture.hpp>

#include <android_webkit_WebView_HitTestResult.hpp>

#include <android_os_Message.hpp>

#include <android_graphics_Bitmap.hpp>

#include <android_webkit_WebView_FindListener.hpp>

#include <android_webkit_WebViewClient.hpp>

#include <android_webkit_DownloadListener.hpp>

#include <android_webkit_WebChromeClient.hpp>

#include <android_webkit_WebView_PictureListener.hpp>

#include <java_lang_Object.hpp>

#include <android_webkit_WebSettings.hpp>

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

class android_net_http_SslCertificate;

class java_lang_String;

class android_os_Bundle;

class android_webkit_WebBackForwardList;

class android_view_KeyEvent;

class android_view_MotionEvent;

class android_view_View;

class android_graphics_Rect;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_view_inputmethod_EditorInfo;

class android_view_inputmethod_InputConnection;

class android_view_ViewGroup_LayoutParams;

class android_graphics_Paint;

class java_util_Map;

class android_webkit_ValueCallback;

class android_graphics_Picture;

class android_webkit_WebView_HitTestResult;

class android_os_Message;

class android_graphics_Bitmap;

class android_webkit_WebView_FindListener;

class android_webkit_WebViewClient;

class android_webkit_DownloadListener;

class android_webkit_WebChromeClient;

class android_webkit_WebView_PictureListener;

class java_lang_Object;

class android_webkit_WebSettings;

class android_webkit_WebView
{
public:
	 void destroy();
	 void freeMemory();
	 android_net_http_SslCertificate *  getCertificate();
	 void clearCache(bool& arg0);
	 java_lang_String *  getUrl();
	 android_webkit_WebBackForwardList *  saveState(android_os_Bundle& arg0);
	 android_webkit_WebBackForwardList *  restoreState(android_os_Bundle& arg0);
	 void onResume();
	 void onPause();
	 bool onKeyDown(int& arg0,android_view_KeyEvent& arg1);
	 bool onKeyUp(int& arg0,android_view_KeyEvent& arg1);
	 bool onKeyMultiple(int& arg0,android_view_KeyEvent& arg1);
	 bool onTouchEvent(android_view_MotionEvent& arg0);
	 bool onTrackballEvent(android_view_MotionEvent& arg0);
	 bool onGenericMotionEvent(android_view_MotionEvent& arg0);
	 void onWindowFocusChanged(bool& arg0);
	 bool dispatchKeyEvent(android_view_KeyEvent& arg0);
	 java_lang_String *  getTitle();
	 void setBackgroundColor(int& arg0);
	 bool requestChildRectangleOnScreen(android_view_View& arg0,android_graphics_Rect& arg1,bool& arg2);
	 bool requestFocus(int& arg0,android_graphics_Rect& arg1);
	 bool shouldDelayChildPressedState();
	 bool performLongClick();
	 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
	 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
	 bool performAccessibilityAction(int& arg0,android_os_Bundle& arg1);
	 android_view_inputmethod_InputConnection *  onCreateInputConnection(android_view_inputmethod_EditorInfo& arg0);
	 bool onHoverEvent(android_view_MotionEvent& arg0);
	 void setLayoutParams(android_view_ViewGroup_LayoutParams& arg0);
	 void computeScroll();
	 void setScrollBarStyle(int& arg0);
	 void setLayerType(int& arg0,android_graphics_Paint& arg1);
	 void setOverScrollMode(int& arg0);
	 void onChildViewAdded(android_view_View& arg0);
	 void onChildViewRemoved(android_view_View& arg0);
	 void onGlobalFocusChanged(android_view_View& arg0);
	 void stopLoading();
	 void setHorizontalScrollbarOverlay(bool& arg0);
	 void setVerticalScrollbarOverlay(bool& arg0);
	 bool overlayHorizontalScrollbar();
	 bool overlayVerticalScrollbar();
	 void setCertificate(android_net_http_SslCertificate& arg0);
	 void savePassword(java_lang_String& arg0);
	 void setHttpAuthUsernamePassword(java_lang_String& arg0);
	 std::vector<long> getHttpAuthUsernamePassword(java_lang_String& arg0);
	 void setNetworkAvailable(bool& arg0);
	 void loadUrl(java_lang_String& arg0,java_util_Map& arg1);
	 void postUrl(java_lang_String& arg0,std::vector<char>& arg1);
	 void loadData(java_lang_String& arg0);
	 void loadDataWithBaseURL(java_lang_String& arg0);
	 void saveWebArchive(java_lang_String& arg0,bool& arg1,android_webkit_ValueCallback& arg2);
	 void reload();
	 bool canGoBack();
	 void goBack();
	 bool canGoForward();
	 void goForward();
	 bool canGoBackOrForward(int& arg0);
	 void goBackOrForward(int& arg0);
	 bool isPrivateBrowsingEnabled();
	 bool pageUp(bool& arg0);
	 bool pageDown(bool& arg0);
	 void clearView();
	 android_graphics_Picture *  capturePicture();
	 float getScale();
	 void setInitialScale(int& arg0);
	 void invokeZoomPicker();
	 android_webkit_WebView_HitTestResult *  getHitTestResult();
	 void requestFocusNodeHref(android_os_Message& arg0);
	 void requestImageRef(android_os_Message& arg0);
	 java_lang_String *  getOriginalUrl();
	 android_graphics_Bitmap *  getFavicon();
	 int getProgress();
	 int getContentHeight();
	 void pauseTimers();
	 void resumeTimers();
	 void clearFormData();
	 void clearHistory();
	 void clearSslPreferences();
	 android_webkit_WebBackForwardList *  copyBackForwardList();
	 void setFindListener(android_webkit_WebView_FindListener& arg0);
	 void findNext(bool& arg0);
	 int findAll(java_lang_String& arg0);
	 void findAllAsync(java_lang_String& arg0);
	 bool showFindDialog(java_lang_String& arg0,bool& arg1);
	static java_lang_String *  findAddress(java_lang_String& arg0);
	 void clearMatches();
	 void documentHasImages(android_os_Message& arg0);
	 void setWebViewClient(android_webkit_WebViewClient& arg0);
	 void setDownloadListener(android_webkit_DownloadListener& arg0);
	 void setWebChromeClient(android_webkit_WebChromeClient& arg0);
	 void setPictureListener(android_webkit_WebView_PictureListener& arg0);
	 void addJavascriptInterface(java_lang_Object& arg0,java_lang_String& arg1);
	 void removeJavascriptInterface(java_lang_String& arg0);
	 android_webkit_WebSettings *  getSettings();
	 void setMapTrackballToArrowKeys(bool& arg0);
	 void flingScroll(int& arg0);
	 bool canZoomIn();
	 bool canZoomOut();
	 bool zoomIn();
	 bool zoomOut();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_webkit_WebView
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

#include <android_content_Context.hpp>

#include <android_util_AttributeSet.hpp>

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

class android_content_Context;

class android_util_AttributeSet;

class android_webkit_WebView
{
public:

	android_webkit_WebView(const android_webkit_WebView& cc);
	android_webkit_WebView(Proxy proxy);
	// Public Constructors
	android_webkit_WebView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_webkit_WebView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	android_webkit_WebView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2,bool const& arg3);
	android_webkit_WebView(AndroidCXX::android_content_Context const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_webkit_WebView();
	// Functions
	 void destroy();
	 void freeMemory();
	 AndroidCXX::android_net_http_SslCertificate getCertificate();
	 void clearCache(bool const& arg0);
	 AndroidCXX::java_lang_String getUrl();
	 AndroidCXX::android_webkit_WebBackForwardList saveState(AndroidCXX::android_os_Bundle const& arg0);
	 AndroidCXX::android_webkit_WebBackForwardList restoreState(AndroidCXX::android_os_Bundle const& arg0);
	 void onResume();
	 void onPause();
	 bool onKeyDown(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1);
	 bool onKeyUp(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1);
	 bool onKeyMultiple(int const& arg0,int const& arg1,AndroidCXX::android_view_KeyEvent const& arg2);
	 bool onTouchEvent(AndroidCXX::android_view_MotionEvent const& arg0);
	 bool onTrackballEvent(AndroidCXX::android_view_MotionEvent const& arg0);
	 bool onGenericMotionEvent(AndroidCXX::android_view_MotionEvent const& arg0);
	 void onWindowFocusChanged(bool const& arg0);
	 bool dispatchKeyEvent(AndroidCXX::android_view_KeyEvent const& arg0);
	 AndroidCXX::java_lang_String getTitle();
	 void setBackgroundColor(int const& arg0);
	 bool requestChildRectangleOnScreen(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_graphics_Rect const& arg1,bool const& arg2);
	 bool requestFocus(int const& arg0,AndroidCXX::android_graphics_Rect const& arg1);
	 bool shouldDelayChildPressedState();
	 bool performLongClick();
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0);
	 bool performAccessibilityAction(int const& arg0,AndroidCXX::android_os_Bundle const& arg1);
	 AndroidCXX::android_view_inputmethod_InputConnection onCreateInputConnection(AndroidCXX::android_view_inputmethod_EditorInfo const& arg0);
	 bool onHoverEvent(AndroidCXX::android_view_MotionEvent const& arg0);
	 void setLayoutParams(AndroidCXX::android_view_ViewGroup_LayoutParams const& arg0);
	 void computeScroll();
	 void setScrollBarStyle(int const& arg0);
	 void setLayerType(int const& arg0,AndroidCXX::android_graphics_Paint const& arg1);
	 void setOverScrollMode(int const& arg0);
	 void onChildViewAdded(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_View const& arg1);
	 void onChildViewRemoved(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_View const& arg1);
	 void onGlobalFocusChanged(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_View const& arg1);
	 void stopLoading();
	 void setHorizontalScrollbarOverlay(bool const& arg0);
	 void setVerticalScrollbarOverlay(bool const& arg0);
	 bool overlayHorizontalScrollbar();
	 bool overlayVerticalScrollbar();
	 void setCertificate(AndroidCXX::android_net_http_SslCertificate const& arg0);
	 void savePassword(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2);
	 void setHttpAuthUsernamePassword(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2,AndroidCXX::java_lang_String const& arg3);
	 std::vector<AndroidCXX::java_lang_String > getHttpAuthUsernamePassword(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1);
	 void setNetworkAvailable(bool const& arg0);
	 void loadUrl(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_util_Map const& arg1);
	 void loadUrl(AndroidCXX::java_lang_String const& arg0);
	 void postUrl(AndroidCXX::java_lang_String const& arg0,std::vector<byte> const& arg1);
	 void loadData(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2);
	 void loadDataWithBaseURL(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2,AndroidCXX::java_lang_String const& arg3,AndroidCXX::java_lang_String const& arg4);
	 void saveWebArchive(AndroidCXX::java_lang_String const& arg0,bool const& arg1,AndroidCXX::android_webkit_ValueCallback const& arg2);
	 void saveWebArchive(AndroidCXX::java_lang_String const& arg0);
	 void reload();
	 bool canGoBack();
	 void goBack();
	 bool canGoForward();
	 void goForward();
	 bool canGoBackOrForward(int const& arg0);
	 void goBackOrForward(int const& arg0);
	 bool isPrivateBrowsingEnabled();
	 bool pageUp(bool const& arg0);
	 bool pageDown(bool const& arg0);
	 void clearView();
	 AndroidCXX::android_graphics_Picture capturePicture();
	 float getScale();
	 void setInitialScale(int const& arg0);
	 void invokeZoomPicker();
	 AndroidCXX::android_webkit_WebView_HitTestResult getHitTestResult();
	 void requestFocusNodeHref(AndroidCXX::android_os_Message const& arg0);
	 void requestImageRef(AndroidCXX::android_os_Message const& arg0);
	 AndroidCXX::java_lang_String getOriginalUrl();
	 AndroidCXX::android_graphics_Bitmap getFavicon();
	 int getProgress();
	 int getContentHeight();
	 void pauseTimers();
	 void resumeTimers();
	 void clearFormData();
	 void clearHistory();
	 void clearSslPreferences();
	 AndroidCXX::android_webkit_WebBackForwardList copyBackForwardList();
	 void setFindListener(AndroidCXX::android_webkit_WebView_FindListener const& arg0);
	 void findNext(bool const& arg0);
	 int findAll(AndroidCXX::java_lang_String const& arg0);
	 void findAllAsync(AndroidCXX::java_lang_String const& arg0);
	 bool showFindDialog(AndroidCXX::java_lang_String const& arg0,bool const& arg1);
	static AndroidCXX::java_lang_String findAddress(AndroidCXX::java_lang_String const& arg0);
	 void clearMatches();
	 void documentHasImages(AndroidCXX::android_os_Message const& arg0);
	 void setWebViewClient(AndroidCXX::android_webkit_WebViewClient const& arg0);
	 void setDownloadListener(AndroidCXX::android_webkit_DownloadListener const& arg0);
	 void setWebChromeClient(AndroidCXX::android_webkit_WebChromeClient const& arg0);
	 void setPictureListener(AndroidCXX::android_webkit_WebView_PictureListener const& arg0);
	 void addJavascriptInterface(AndroidCXX::java_lang_Object const& arg0,AndroidCXX::java_lang_String const& arg1);
	 void removeJavascriptInterface(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::android_webkit_WebSettings getSettings();
	 void setMapTrackballToArrowKeys(bool const& arg0);
	 void flingScroll(int const& arg0,int const& arg1);
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
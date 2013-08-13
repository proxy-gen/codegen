/*
 * Header (Instance CXX)
 * Author: codegen
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

#include <android_view_View.hpp>

#include <android_view_ViewGroup_LayoutParams.hpp>

#include <android_view_MotionEvent.hpp>

#include <android_view_KeyEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_inputmethod_EditorInfo.hpp>

#include <android_view_inputmethod_InputConnection.hpp>

#include <android_graphics_Rect.hpp>

#include <android_graphics_Paint.hpp>

#include <android_content_Context.hpp>

#include <android_util_AttributeSet.hpp>


#include <android_view_ViewGroup_OnHierarchyChangeListener.hpp>

#include <android_view_ViewTreeObserver_OnGlobalFocusChangeListener.hpp>

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

class android_view_View;

class android_view_ViewGroup_LayoutParams;

class android_view_MotionEvent;

class android_view_KeyEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_view_accessibility_AccessibilityEvent;

class android_view_inputmethod_EditorInfo;

class android_view_inputmethod_InputConnection;

class android_graphics_Rect;

class android_graphics_Paint;

class android_content_Context;

class android_util_AttributeSet;

class android_webkit_WebView : public android_view_ViewGroup_OnHierarchyChangeListener,public android_view_ViewTreeObserver_OnGlobalFocusChangeListener
{
public:

	// Public ConstrucXXX
	android_webkit_WebView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2,bool const& arg3);
	android_webkit_WebView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_webkit_WebView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	android_webkit_WebView(AndroidCXX::android_content_Context const& arg0);
	android_webkit_WebView(const android_webkit_WebView& cc);
	android_webkit_WebView(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_webkit_WebView();
	// Functions
	virtual void  destroy() ;
	virtual void  freeMemory() ;
	virtual AndroidCXX::android_net_http_SslCertificate * getCertificate() ;
	virtual void  clearCache(bool const& arg0) ;
	virtual AndroidCXX::java_lang_String * getUrl() ;
	virtual void  onResume() ;
	virtual void  onPause() ;
	virtual void  setHorizontalScrollbarOverlay(bool const& arg0) ;
	virtual void  setVerticalScrollbarOverlay(bool const& arg0) ;
	virtual bool  overlayHorizontalScrollbar() ;
	virtual bool  overlayVerticalScrollbar() ;
	virtual void  setCertificate(AndroidCXX::android_net_http_SslCertificate const& arg0) ;
	virtual void  savePassword(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2) ;
	virtual void  setHttpAuthUsernamePassword(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2,AndroidCXX::java_lang_String const& arg3) ;
	virtual std::vector<java_lang_String>  getHttpAuthUsernamePassword(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual void  setNetworkAvailable(bool const& arg0) ;
	virtual AndroidCXX::android_webkit_WebBackForwardList * saveState(AndroidCXX::android_os_Bundle const& arg0) ;
	virtual AndroidCXX::android_webkit_WebBackForwardList * restoreState(AndroidCXX::android_os_Bundle const& arg0) ;
	virtual void  loadUrl(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  loadUrl(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_util_Map const& arg1) ;
	virtual void  postUrl(AndroidCXX::java_lang_String const& arg0,std::vector<byte> const& arg1) ;
	virtual void  loadData(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2) ;
	virtual void  loadDataWithBaseURL(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2,AndroidCXX::java_lang_String const& arg3,AndroidCXX::java_lang_String const& arg4) ;
	virtual void  saveWebArchive(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  saveWebArchive(AndroidCXX::java_lang_String const& arg0,bool const& arg1,AndroidCXX::android_webkit_ValueCallback const& arg2) ;
	virtual void  stopLoading() ;
	virtual void  reload() ;
	virtual bool  canGoBack() ;
	virtual void  goBack() ;
	virtual bool  canGoForward() ;
	virtual void  goForward() ;
	virtual bool  canGoBackOrForward(int const& arg0) ;
	virtual void  goBackOrForward(int const& arg0) ;
	virtual bool  isPrivateBrowsingEnabled() ;
	virtual bool  pageUp(bool const& arg0) ;
	virtual bool  pageDown(bool const& arg0) ;
	virtual void  clearView() ;
	virtual AndroidCXX::android_graphics_Picture * capturePicture() ;
	virtual float  getScale() ;
	virtual void  setInitialScale(int const& arg0) ;
	virtual void  invokeZoomPicker() ;
	virtual AndroidCXX::android_webkit_WebView_HitTestResult * getHitTestResult() ;
	virtual void  requestFocusNodeHref(AndroidCXX::android_os_Message const& arg0) ;
	virtual void  requestImageRef(AndroidCXX::android_os_Message const& arg0) ;
	virtual AndroidCXX::java_lang_String * getOriginalUrl() ;
	virtual AndroidCXX::java_lang_String * getTitle() ;
	virtual AndroidCXX::android_graphics_Bitmap * getFavicon() ;
	virtual int  getProgress() ;
	virtual int  getContentHeight() ;
	virtual void  pauseTimers() ;
	virtual void  resumeTimers() ;
	virtual void  clearFormData() ;
	virtual void  clearHistory() ;
	virtual void  clearSslPreferences() ;
	virtual AndroidCXX::android_webkit_WebBackForwardList * copyBackForwardList() ;
	virtual void  setFindListener(AndroidCXX::android_webkit_WebView_FindListener const& arg0) ;
	virtual void  findNext(bool const& arg0) ;
	virtual int  findAll(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  findAllAsync(AndroidCXX::java_lang_String const& arg0) ;
	virtual bool  showFindDialog(AndroidCXX::java_lang_String const& arg0,bool const& arg1) ;
	static AndroidCXX::java_lang_String * findAddress(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  clearMatches() ;
	virtual void  documentHasImages(AndroidCXX::android_os_Message const& arg0) ;
	virtual void  setWebViewClient(AndroidCXX::android_webkit_WebViewClient const& arg0) ;
	virtual void  setDownloadListener(AndroidCXX::android_webkit_DownloadListener const& arg0) ;
	virtual void  setWebChromeClient(AndroidCXX::android_webkit_WebChromeClient const& arg0) ;
	virtual void  setPictureListener(AndroidCXX::android_webkit_WebView_PictureListener const& arg0) ;
	virtual void  addJavascriptInterface(AndroidCXX::java_lang_Object const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual void  removeJavascriptInterface(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::android_webkit_WebSettings * getSettings() ;
	virtual void  onChildViewAdded(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_View const& arg1) ;
	virtual void  onChildViewRemoved(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_View const& arg1) ;
	virtual void  onGlobalFocusChanged(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_View const& arg1) ;
	virtual void  setMapTrackballToArrowKeys(bool const& arg0) ;
	virtual void  flingScroll(int const& arg0,int const& arg1) ;
	virtual bool  canZoomIn() ;
	virtual bool  canZoomOut() ;
	virtual bool  zoomIn() ;
	virtual bool  zoomOut() ;
	virtual void  setLayoutParams(AndroidCXX::android_view_ViewGroup_LayoutParams const& arg0) ;
	virtual void  setOverScrollMode(int const& arg0) ;
	virtual void  setScrollBarStyle(int const& arg0) ;
	virtual void  computeScroll() ;
	virtual bool  onHoverEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual bool  onTouchEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual bool  onGenericMotionEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual bool  onTrackballEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual bool  onKeyDown(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) ;
	virtual bool  onKeyUp(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) ;
	virtual bool  onKeyMultiple(int const& arg0,int const& arg1,AndroidCXX::android_view_KeyEvent const& arg2) ;
	virtual bool  shouldDelayChildPressedState() ;
	virtual void  onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) ;
	virtual void  onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual bool  performAccessibilityAction(int const& arg0,AndroidCXX::android_os_Bundle const& arg1) ;
	virtual bool  performLongClick() ;
	virtual AndroidCXX::android_view_inputmethod_InputConnection * onCreateInputConnection(AndroidCXX::android_view_inputmethod_EditorInfo const& arg0) ;
	virtual void  onWindowFocusChanged(bool const& arg0) ;
	virtual bool  dispatchKeyEvent(AndroidCXX::android_view_KeyEvent const& arg0) ;
	virtual bool  requestFocus(int const& arg0,AndroidCXX::android_graphics_Rect const& arg1) ;
	virtual bool  requestChildRectangleOnScreen(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_graphics_Rect const& arg1,bool const& arg2) ;
	virtual void  setBackgroundColor(int const& arg0) ;
	virtual void  setLayerType(int const& arg0,AndroidCXX::android_graphics_Paint const& arg1) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_webkit_WebView
/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
	
	
 		 
	
	
	
	
	
	
	
	
	
	
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 

































































































// Generated Code 

#ifndef _android_webkit_WebSettings
#define _android_webkit_WebSettings
//
// Scroll Down 
//


#include <android_webkit_WebSettings_ZoomDensity.hpp>

#include <android_webkit_WebSettings_LayoutAlgorithm.hpp>

#include <android_webkit_WebSettings_PluginState.hpp>

#include <android_webkit_WebSettings_TextSize.hpp>

#include <android_webkit_WebSettings_RenderPriority.hpp>


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

class java_lang_String;

class android_content_Context;






class android_webkit_WebSettings 
{
public:

	android_webkit_WebSettings(const android_webkit_WebSettings& cc);
	android_webkit_WebSettings(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_webkit_WebSettings();
	// Functions
	virtual bool  enableSmoothTransition() ;
	virtual bool  getAllowContentAccess() ;
	virtual bool  getAllowFileAccessFromFileURLs() ;
	virtual bool  getAllowFileAccess() ;
	virtual bool  getAllowUniversalAccessFromFileURLs() ;
	virtual bool  getBlockNetworkImage() ;
	virtual bool  getBlockNetworkLoads() ;
	virtual bool  getBuiltInZoomControls() ;
	virtual int  getCacheMode() ;
	virtual AndroidCXX::java_lang_String * getCursiveFontFamily() ;
	virtual bool  getDatabaseEnabled() ;
	virtual AndroidCXX::java_lang_String * getDatabasePath() ;
	virtual int  getDefaultFixedFontSize() ;
	virtual int  getDefaultFontSize() ;
	virtual AndroidCXX::java_lang_String * getDefaultTextEncodingName() ;
	static AndroidCXX::java_lang_String * getDefaultUserAgent(AndroidCXX::android_content_Context const& arg0) ;
	virtual android_webkit_WebSettings_ZoomDensity::android_webkit_WebSettings_ZoomDensity  getDefaultZoom() ;
	virtual bool  getDisplayZoomControls() ;
	virtual bool  getDomStorageEnabled() ;
	virtual AndroidCXX::java_lang_String * getFantasyFontFamily() ;
	virtual AndroidCXX::java_lang_String * getFixedFontFamily() ;
	virtual bool  getJavaScriptCanOpenWindowsAutomatically() ;
	virtual bool  getJavaScriptEnabled() ;
	virtual android_webkit_WebSettings_LayoutAlgorithm::android_webkit_WebSettings_LayoutAlgorithm  getLayoutAlgorithm() ;
	virtual bool  getLightTouchEnabled() ;
	virtual bool  getLoadWithOverviewMode() ;
	virtual bool  getLoadsImagesAutomatically() ;
	virtual bool  getMediaPlaybackRequiresUserGesture() ;
	virtual int  getMinimumFontSize() ;
	virtual int  getMinimumLogicalFontSize() ;
	virtual android_webkit_WebSettings_PluginState::android_webkit_WebSettings_PluginState  getPluginState() ;
	virtual AndroidCXX::java_lang_String * getSansSerifFontFamily() ;
	virtual bool  getSaveFormData() ;
	virtual bool  getSavePassword() ;
	virtual AndroidCXX::java_lang_String * getSerifFontFamily() ;
	virtual AndroidCXX::java_lang_String * getStandardFontFamily() ;
	virtual android_webkit_WebSettings_TextSize::android_webkit_WebSettings_TextSize  getTextSize() ;
	virtual int  getTextZoom() ;
	virtual bool  getUseWideViewPort() ;
	virtual AndroidCXX::java_lang_String * getUserAgentString() ;
	virtual void  setAllowContentAccess(bool const& arg0) ;
	virtual void  setAllowFileAccessFromFileURLs(bool const& arg0) ;
	virtual void  setAllowFileAccess(bool const& arg0) ;
	virtual void  setAllowUniversalAccessFromFileURLs(bool const& arg0) ;
	virtual void  setAppCacheEnabled(bool const& arg0) ;
	virtual void  setAppCacheMaxSize(long const& arg0) ;
	virtual void  setAppCachePath(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setBlockNetworkImage(bool const& arg0) ;
	virtual void  setBlockNetworkLoads(bool const& arg0) ;
	virtual void  setBuiltInZoomControls(bool const& arg0) ;
	virtual void  setCacheMode(int const& arg0) ;
	virtual void  setCursiveFontFamily(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setDatabaseEnabled(bool const& arg0) ;
	virtual void  setDatabasePath(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setDefaultFixedFontSize(int const& arg0) ;
	virtual void  setDefaultFontSize(int const& arg0) ;
	virtual void  setDefaultTextEncodingName(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setDefaultZoom(android_webkit_WebSettings_ZoomDensity::android_webkit_WebSettings_ZoomDensity const& arg0) ;
	virtual void  setDisplayZoomControls(bool const& arg0) ;
	virtual void  setDomStorageEnabled(bool const& arg0) ;
	virtual void  setEnableSmoothTransition(bool const& arg0) ;
	virtual void  setFantasyFontFamily(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setFixedFontFamily(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setGeolocationDatabasePath(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setGeolocationEnabled(bool const& arg0) ;
	virtual void  setJavaScriptCanOpenWindowsAutomatically(bool const& arg0) ;
	virtual void  setJavaScriptEnabled(bool const& arg0) ;
	virtual void  setLayoutAlgorithm(android_webkit_WebSettings_LayoutAlgorithm::android_webkit_WebSettings_LayoutAlgorithm const& arg0) ;
	virtual void  setLightTouchEnabled(bool const& arg0) ;
	virtual void  setLoadWithOverviewMode(bool const& arg0) ;
	virtual void  setLoadsImagesAutomatically(bool const& arg0) ;
	virtual void  setMediaPlaybackRequiresUserGesture(bool const& arg0) ;
	virtual void  setMinimumFontSize(int const& arg0) ;
	virtual void  setMinimumLogicalFontSize(int const& arg0) ;
	virtual void  setNeedInitialFocus(bool const& arg0) ;
	virtual void  setPluginState(android_webkit_WebSettings_PluginState::android_webkit_WebSettings_PluginState const& arg0) ;
	virtual void  setRenderPriority(android_webkit_WebSettings_RenderPriority::android_webkit_WebSettings_RenderPriority const& arg0) ;
	virtual void  setSansSerifFontFamily(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setSaveFormData(bool const& arg0) ;
	virtual void  setSavePassword(bool const& arg0) ;
	virtual void  setSerifFontFamily(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setStandardFontFamily(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setSupportMultipleWindows(bool const& arg0) ;
	virtual void  setSupportZoom(bool const& arg0) ;
	virtual void  setTextSize(android_webkit_WebSettings_TextSize::android_webkit_WebSettings_TextSize const& arg0) ;
	virtual void  setTextZoom(int const& arg0) ;
	virtual void  setUseWideViewPort(bool const& arg0) ;
	virtual void  setUserAgentString(AndroidCXX::java_lang_String const& arg0) ;
	virtual bool  supportMultipleWindows() ;
	virtual bool  supportZoom() ;

protected:
	android_webkit_WebSettings();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_webkit_WebSettings
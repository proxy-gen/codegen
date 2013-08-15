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


#include <android_webkit_WebSettings_TextSize.hpp>

#include <android_webkit_WebSettings_ZoomDensity.hpp>

#include <android_webkit_WebSettings_LayoutAlgorithm.hpp>

#include <android_webkit_WebSettings_PluginState.hpp>

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
	virtual AndroidCXX::java_lang_String * getDatabasePath() ;
	virtual android_webkit_WebSettings_TextSize::android_webkit_WebSettings_TextSize  getTextSize() ;
	virtual void  setTextSize(android_webkit_WebSettings_TextSize::android_webkit_WebSettings_TextSize const& arg0) ;
	virtual void  setSupportZoom(bool const& arg0) ;
	virtual bool  supportZoom() ;
	virtual void  setMediaPlaybackRequiresUserGesture(bool const& arg0) ;
	virtual bool  getMediaPlaybackRequiresUserGesture() ;
	virtual void  setBuiltInZoomControls(bool const& arg0) ;
	virtual bool  getBuiltInZoomControls() ;
	virtual void  setDisplayZoomControls(bool const& arg0) ;
	virtual bool  getDisplayZoomControls() ;
	virtual void  setAllowFileAccess(bool const& arg0) ;
	virtual bool  getAllowFileAccess() ;
	virtual void  setAllowContentAccess(bool const& arg0) ;
	virtual bool  getAllowContentAccess() ;
	virtual void  setLoadWithOverviewMode(bool const& arg0) ;
	virtual bool  getLoadWithOverviewMode() ;
	virtual void  setEnableSmoothTransition(bool const& arg0) ;
	virtual bool  enableSmoothTransition() ;
	virtual void  setSaveFormData(bool const& arg0) ;
	virtual bool  getSaveFormData() ;
	virtual void  setSavePassword(bool const& arg0) ;
	virtual bool  getSavePassword() ;
	virtual void  setTextZoom(int const& arg0) ;
	virtual int  getTextZoom() ;
	virtual void  setDefaultZoom(android_webkit_WebSettings_ZoomDensity::android_webkit_WebSettings_ZoomDensity const& arg0) ;
	virtual android_webkit_WebSettings_ZoomDensity::android_webkit_WebSettings_ZoomDensity  getDefaultZoom() ;
	virtual void  setLightTouchEnabled(bool const& arg0) ;
	virtual bool  getLightTouchEnabled() ;
	virtual void  setUseWideViewPort(bool const& arg0) ;
	virtual bool  getUseWideViewPort() ;
	virtual void  setSupportMultipleWindows(bool const& arg0) ;
	virtual bool  supportMultipleWindows() ;
	virtual void  setLayoutAlgorithm(android_webkit_WebSettings_LayoutAlgorithm::android_webkit_WebSettings_LayoutAlgorithm const& arg0) ;
	virtual android_webkit_WebSettings_LayoutAlgorithm::android_webkit_WebSettings_LayoutAlgorithm  getLayoutAlgorithm() ;
	virtual void  setStandardFontFamily(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_String * getStandardFontFamily() ;
	virtual void  setFixedFontFamily(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_String * getFixedFontFamily() ;
	virtual void  setSansSerifFontFamily(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_String * getSansSerifFontFamily() ;
	virtual void  setSerifFontFamily(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_String * getSerifFontFamily() ;
	virtual void  setCursiveFontFamily(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_String * getCursiveFontFamily() ;
	virtual void  setFantasyFontFamily(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_String * getFantasyFontFamily() ;
	virtual void  setMinimumFontSize(int const& arg0) ;
	virtual int  getMinimumFontSize() ;
	virtual void  setMinimumLogicalFontSize(int const& arg0) ;
	virtual int  getMinimumLogicalFontSize() ;
	virtual void  setDefaultFontSize(int const& arg0) ;
	virtual int  getDefaultFontSize() ;
	virtual void  setDefaultFixedFontSize(int const& arg0) ;
	virtual int  getDefaultFixedFontSize() ;
	virtual void  setLoadsImagesAutomatically(bool const& arg0) ;
	virtual bool  getLoadsImagesAutomatically() ;
	virtual void  setBlockNetworkImage(bool const& arg0) ;
	virtual bool  getBlockNetworkImage() ;
	virtual void  setBlockNetworkLoads(bool const& arg0) ;
	virtual bool  getBlockNetworkLoads() ;
	virtual void  setJavaScriptEnabled(bool const& arg0) ;
	virtual void  setAllowUniversalAccessFromFileURLs(bool const& arg0) ;
	virtual void  setAllowFileAccessFromFileURLs(bool const& arg0) ;
	virtual void  setPluginState(android_webkit_WebSettings_PluginState::android_webkit_WebSettings_PluginState const& arg0) ;
	virtual void  setDatabasePath(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setGeolocationDatabasePath(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setAppCacheEnabled(bool const& arg0) ;
	virtual void  setAppCachePath(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setAppCacheMaxSize(long const& arg0) ;
	virtual void  setDatabaseEnabled(bool const& arg0) ;
	virtual void  setDomStorageEnabled(bool const& arg0) ;
	virtual bool  getDomStorageEnabled() ;
	virtual bool  getDatabaseEnabled() ;
	virtual void  setGeolocationEnabled(bool const& arg0) ;
	virtual bool  getJavaScriptEnabled() ;
	virtual bool  getAllowUniversalAccessFromFileURLs() ;
	virtual bool  getAllowFileAccessFromFileURLs() ;
	virtual android_webkit_WebSettings_PluginState::android_webkit_WebSettings_PluginState  getPluginState() ;
	virtual void  setJavaScriptCanOpenWindowsAutomatically(bool const& arg0) ;
	virtual bool  getJavaScriptCanOpenWindowsAutomatically() ;
	virtual void  setDefaultTextEncodingName(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_String * getDefaultTextEncodingName() ;
	virtual void  setUserAgentString(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_String * getUserAgentString() ;
	static AndroidCXX::java_lang_String * getDefaultUserAgent(AndroidCXX::android_content_Context const& arg0) ;
	virtual void  setNeedInitialFocus(bool const& arg0) ;
	virtual void  setRenderPriority(android_webkit_WebSettings_RenderPriority::android_webkit_WebSettings_RenderPriority const& arg0) ;
	virtual void  setCacheMode(int const& arg0) ;
	virtual int  getCacheMode() ;

protected:
	android_webkit_WebSettings();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_webkit_WebSettings
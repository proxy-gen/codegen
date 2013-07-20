/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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

































































































#include <java_lang_String.hpp>

#include <android_webkit_WebSettings_TextSize.hpp>

#include <android_webkit_WebSettings_ZoomDensity.hpp>

#include <android_webkit_WebSettings_LayoutAlgorithm.hpp>

#include <android_webkit_WebSettings_PluginState.hpp>

#include <android_content_Context.hpp>

#include <android_webkit_WebSettings_RenderPriority.hpp>

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

class java_lang_String;





class android_content_Context;


class android_webkit_WebSettings
{
public:
	 java_lang_String *  getDatabasePath();
	 android_webkit_WebSettings_TextSize *  getTextSize();
	 void setTextSize(android_webkit_WebSettings_TextSize& arg0);
	 void setSupportZoom(bool& arg0);
	 bool supportZoom();
	 void setMediaPlaybackRequiresUserGesture(bool& arg0);
	 bool getMediaPlaybackRequiresUserGesture();
	 void setBuiltInZoomControls(bool& arg0);
	 bool getBuiltInZoomControls();
	 void setDisplayZoomControls(bool& arg0);
	 bool getDisplayZoomControls();
	 void setAllowFileAccess(bool& arg0);
	 bool getAllowFileAccess();
	 void setAllowContentAccess(bool& arg0);
	 bool getAllowContentAccess();
	 void setLoadWithOverviewMode(bool& arg0);
	 bool getLoadWithOverviewMode();
	 void setEnableSmoothTransition(bool& arg0);
	 bool enableSmoothTransition();
	 void setSaveFormData(bool& arg0);
	 bool getSaveFormData();
	 void setSavePassword(bool& arg0);
	 bool getSavePassword();
	 void setTextZoom(int& arg0);
	 int getTextZoom();
	 void setDefaultZoom(android_webkit_WebSettings_ZoomDensity& arg0);
	 android_webkit_WebSettings_ZoomDensity *  getDefaultZoom();
	 void setLightTouchEnabled(bool& arg0);
	 bool getLightTouchEnabled();
	 void setUseWideViewPort(bool& arg0);
	 bool getUseWideViewPort();
	 void setSupportMultipleWindows(bool& arg0);
	 bool supportMultipleWindows();
	 void setLayoutAlgorithm(android_webkit_WebSettings_LayoutAlgorithm& arg0);
	 android_webkit_WebSettings_LayoutAlgorithm *  getLayoutAlgorithm();
	 void setStandardFontFamily(java_lang_String& arg0);
	 java_lang_String *  getStandardFontFamily();
	 void setFixedFontFamily(java_lang_String& arg0);
	 java_lang_String *  getFixedFontFamily();
	 void setSansSerifFontFamily(java_lang_String& arg0);
	 java_lang_String *  getSansSerifFontFamily();
	 void setSerifFontFamily(java_lang_String& arg0);
	 java_lang_String *  getSerifFontFamily();
	 void setCursiveFontFamily(java_lang_String& arg0);
	 java_lang_String *  getCursiveFontFamily();
	 void setFantasyFontFamily(java_lang_String& arg0);
	 java_lang_String *  getFantasyFontFamily();
	 void setMinimumFontSize(int& arg0);
	 int getMinimumFontSize();
	 void setMinimumLogicalFontSize(int& arg0);
	 int getMinimumLogicalFontSize();
	 void setDefaultFontSize(int& arg0);
	 int getDefaultFontSize();
	 void setDefaultFixedFontSize(int& arg0);
	 int getDefaultFixedFontSize();
	 void setLoadsImagesAutomatically(bool& arg0);
	 bool getLoadsImagesAutomatically();
	 void setBlockNetworkImage(bool& arg0);
	 bool getBlockNetworkImage();
	 void setBlockNetworkLoads(bool& arg0);
	 bool getBlockNetworkLoads();
	 void setJavaScriptEnabled(bool& arg0);
	 void setAllowUniversalAccessFromFileURLs(bool& arg0);
	 void setAllowFileAccessFromFileURLs(bool& arg0);
	 void setPluginsEnabled(bool& arg0);
	 void setPluginState(android_webkit_WebSettings_PluginState& arg0);
	 void setPluginsPath(java_lang_String& arg0);
	 void setDatabasePath(java_lang_String& arg0);
	 void setGeolocationDatabasePath(java_lang_String& arg0);
	 void setAppCacheEnabled(bool& arg0);
	 void setAppCachePath(java_lang_String& arg0);
	 void setAppCacheMaxSize(long& arg0);
	 void setDatabaseEnabled(bool& arg0);
	 void setDomStorageEnabled(bool& arg0);
	 bool getDomStorageEnabled();
	 bool getDatabaseEnabled();
	 void setGeolocationEnabled(bool& arg0);
	 bool getJavaScriptEnabled();
	 bool getAllowUniversalAccessFromFileURLs();
	 bool getAllowFileAccessFromFileURLs();
	 bool getPluginsEnabled();
	 android_webkit_WebSettings_PluginState *  getPluginState();
	 java_lang_String *  getPluginsPath();
	 void setJavaScriptCanOpenWindowsAutomatically(bool& arg0);
	 bool getJavaScriptCanOpenWindowsAutomatically();
	 void setDefaultTextEncodingName(java_lang_String& arg0);
	 java_lang_String *  getDefaultTextEncodingName();
	 void setUserAgentString(java_lang_String& arg0);
	 java_lang_String *  getUserAgentString();
	static java_lang_String *  getDefaultUserAgent(android_content_Context& arg0);
	 void setNeedInitialFocus(bool& arg0);
	 void setRenderPriority(android_webkit_WebSettings_RenderPriority& arg0);
	 void setCacheMode(int& arg0);
	 int getCacheMode();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_webkit_WebSettings
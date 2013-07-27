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
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_webkit_WebSettings();
	// Functions
	 AndroidCXX::java_lang_String getDatabasePath();
	 android_webkit_WebSettings_TextSize::android_webkit_WebSettings_TextSize getTextSize();
	 void setTextSize(android_webkit_WebSettings_TextSize::android_webkit_WebSettings_TextSize const& arg0);
	 void setSupportZoom(bool const& arg0);
	 bool supportZoom();
	 void setMediaPlaybackRequiresUserGesture(bool const& arg0);
	 bool getMediaPlaybackRequiresUserGesture();
	 void setBuiltInZoomControls(bool const& arg0);
	 bool getBuiltInZoomControls();
	 void setDisplayZoomControls(bool const& arg0);
	 bool getDisplayZoomControls();
	 void setAllowFileAccess(bool const& arg0);
	 bool getAllowFileAccess();
	 void setAllowContentAccess(bool const& arg0);
	 bool getAllowContentAccess();
	 void setLoadWithOverviewMode(bool const& arg0);
	 bool getLoadWithOverviewMode();
	 void setEnableSmoothTransition(bool const& arg0);
	 bool enableSmoothTransition();
	 void setSaveFormData(bool const& arg0);
	 bool getSaveFormData();
	 void setSavePassword(bool const& arg0);
	 bool getSavePassword();
	 void setTextZoom(int const& arg0);
	 int getTextZoom();
	 void setDefaultZoom(android_webkit_WebSettings_ZoomDensity::android_webkit_WebSettings_ZoomDensity const& arg0);
	 android_webkit_WebSettings_ZoomDensity::android_webkit_WebSettings_ZoomDensity getDefaultZoom();
	 void setLightTouchEnabled(bool const& arg0);
	 bool getLightTouchEnabled();
	 void setUseWideViewPort(bool const& arg0);
	 bool getUseWideViewPort();
	 void setSupportMultipleWindows(bool const& arg0);
	 bool supportMultipleWindows();
	 void setLayoutAlgorithm(android_webkit_WebSettings_LayoutAlgorithm::android_webkit_WebSettings_LayoutAlgorithm const& arg0);
	 android_webkit_WebSettings_LayoutAlgorithm::android_webkit_WebSettings_LayoutAlgorithm getLayoutAlgorithm();
	 void setStandardFontFamily(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_String getStandardFontFamily();
	 void setFixedFontFamily(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_String getFixedFontFamily();
	 void setSansSerifFontFamily(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_String getSansSerifFontFamily();
	 void setSerifFontFamily(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_String getSerifFontFamily();
	 void setCursiveFontFamily(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_String getCursiveFontFamily();
	 void setFantasyFontFamily(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_String getFantasyFontFamily();
	 void setMinimumFontSize(int const& arg0);
	 int getMinimumFontSize();
	 void setMinimumLogicalFontSize(int const& arg0);
	 int getMinimumLogicalFontSize();
	 void setDefaultFontSize(int const& arg0);
	 int getDefaultFontSize();
	 void setDefaultFixedFontSize(int const& arg0);
	 int getDefaultFixedFontSize();
	 void setLoadsImagesAutomatically(bool const& arg0);
	 bool getLoadsImagesAutomatically();
	 void setBlockNetworkImage(bool const& arg0);
	 bool getBlockNetworkImage();
	 void setBlockNetworkLoads(bool const& arg0);
	 bool getBlockNetworkLoads();
	 void setJavaScriptEnabled(bool const& arg0);
	 void setAllowUniversalAccessFromFileURLs(bool const& arg0);
	 void setAllowFileAccessFromFileURLs(bool const& arg0);
	 void setPluginsEnabled(bool const& arg0);
	 void setPluginState(android_webkit_WebSettings_PluginState::android_webkit_WebSettings_PluginState const& arg0);
	 void setPluginsPath(AndroidCXX::java_lang_String const& arg0);
	 void setDatabasePath(AndroidCXX::java_lang_String const& arg0);
	 void setGeolocationDatabasePath(AndroidCXX::java_lang_String const& arg0);
	 void setAppCacheEnabled(bool const& arg0);
	 void setAppCachePath(AndroidCXX::java_lang_String const& arg0);
	 void setAppCacheMaxSize(long const& arg0);
	 void setDatabaseEnabled(bool const& arg0);
	 void setDomStorageEnabled(bool const& arg0);
	 bool getDomStorageEnabled();
	 bool getDatabaseEnabled();
	 void setGeolocationEnabled(bool const& arg0);
	 bool getJavaScriptEnabled();
	 bool getAllowUniversalAccessFromFileURLs();
	 bool getAllowFileAccessFromFileURLs();
	 bool getPluginsEnabled();
	 android_webkit_WebSettings_PluginState::android_webkit_WebSettings_PluginState getPluginState();
	 AndroidCXX::java_lang_String getPluginsPath();
	 void setJavaScriptCanOpenWindowsAutomatically(bool const& arg0);
	 bool getJavaScriptCanOpenWindowsAutomatically();
	 void setDefaultTextEncodingName(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_String getDefaultTextEncodingName();
	 void setUserAgentString(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_String getUserAgentString();
	static AndroidCXX::java_lang_String getDefaultUserAgent(AndroidCXX::android_content_Context const& arg0);
	 void setNeedInitialFocus(bool const& arg0);
	 void setRenderPriority(android_webkit_WebSettings_RenderPriority::android_webkit_WebSettings_RenderPriority const& arg0);
	 void setCacheMode(int const& arg0);
	 int getCacheMode();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_webkit_WebSettings
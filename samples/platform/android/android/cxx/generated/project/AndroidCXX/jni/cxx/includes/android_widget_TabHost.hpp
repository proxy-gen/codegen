/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
 			
 			
		
 			
		
		
		
		
 			
		
 			


#ifndef _android_widget_TabHost
#define _android_widget_TabHost





















#include <android_widget_TabWidget.hpp>
#include <android_widget_TabHost_OnTabChangeListener.hpp>
#include <android_view_accessibility_AccessibilityEvent.hpp>
#include <android_widget_FrameLayout.hpp>
#include <android_view_accessibility_AccessibilityNodeInfo.hpp>
#include <android_view_View.hpp>
#include <java_lang_String.hpp>
#include <android_app_LocalActivityManager.hpp>
#include <android_view_KeyEvent.hpp>
#include <android_widget_TabHost_TabSpec.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_widget_TabHost
{
public:
 void setup(android_app_LocalActivityManager& arg0);
 bool dispatchKeyEvent(android_view_KeyEvent& arg0);
 void dispatchWindowFocusChanged(bool& arg0);
 void sendAccessibilityEvent(int& arg0);
 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
 void onTouchModeChanged(bool& arg0);
 void addTab(android_widget_TabHost_TabSpec& arg0);
 android_view_View getCurrentView();
 android_widget_TabHost_TabSpec newTabSpec(java_lang_String& arg0);
 void clearAllTabs();
 android_widget_TabWidget getTabWidget();
 int getCurrentTab();
 java_lang_String getCurrentTabTag();
 android_view_View getCurrentTabView();
 void setCurrentTabByTag(java_lang_String& arg0);
 android_widget_FrameLayout getTabContentView();
 void setCurrentTab(int& arg0);
 void setOnTabChangedListener(android_widget_TabHost_OnTabChangeListener& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_TabHost
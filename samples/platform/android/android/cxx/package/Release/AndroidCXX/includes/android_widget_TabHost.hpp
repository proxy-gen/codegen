/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
 		 
 		 
 		 
	
 		 
	
	
	
	
 		 
	
 		 


 		 
 		 
 		 



























// Generated Code 

#ifndef _android_widget_TabHost
#define _android_widget_TabHost
//
// Scroll Down 
//


#include <android_app_LocalActivityManager.hpp>

#include <android_view_KeyEvent.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_widget_TabHost_TabSpec.hpp>

#include <android_view_View.hpp>

#include <java_lang_String.hpp>

#include <android_widget_TabWidget.hpp>

#include <android_widget_FrameLayout.hpp>

#include <android_widget_TabHost_OnTabChangeListener.hpp>

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

class android_app_LocalActivityManager;

class android_view_KeyEvent;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_widget_TabHost_TabSpec;

class android_view_View;

class java_lang_String;

class android_widget_TabWidget;

class android_widget_FrameLayout;

class android_widget_TabHost_OnTabChangeListener;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_TabHost
{
public:

	android_widget_TabHost(const android_widget_TabHost& cc);
	android_widget_TabHost(Proxy proxy);
	// Public Constructors
	android_widget_TabHost(AndroidCXX::android_content_Context const& arg0);
	android_widget_TabHost(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_TabHost();
	// Functions
	 void setup();
	 void setup(AndroidCXX::android_app_LocalActivityManager const& arg0);
	 bool dispatchKeyEvent(AndroidCXX::android_view_KeyEvent const& arg0);
	 void dispatchWindowFocusChanged(bool const& arg0);
	 void sendAccessibilityEvent(int const& arg0);
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0);
	 void onTouchModeChanged(bool const& arg0);
	 void addTab(AndroidCXX::android_widget_TabHost_TabSpec const& arg0);
	 AndroidCXX::android_view_View getCurrentView();
	 AndroidCXX::android_widget_TabHost_TabSpec newTabSpec(AndroidCXX::java_lang_String const& arg0);
	 void clearAllTabs();
	 AndroidCXX::android_widget_TabWidget getTabWidget();
	 int getCurrentTab();
	 AndroidCXX::java_lang_String getCurrentTabTag();
	 AndroidCXX::android_view_View getCurrentTabView();
	 void setCurrentTabByTag(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::android_widget_FrameLayout getTabContentView();
	 void setCurrentTab(int const& arg0);
	 void setOnTabChangedListener(AndroidCXX::android_widget_TabHost_OnTabChangeListener const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_TabHost
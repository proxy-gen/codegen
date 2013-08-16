/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <android_widget_TabHost_TabSpec.hpp>

#include <android_view_KeyEvent.hpp>

#include <java_lang_String.hpp>

#include <android_view_View.hpp>

#include <android_widget_FrameLayout.hpp>

#include <android_widget_TabWidget.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_widget_TabHost_OnTabChangeListener.hpp>

#include <android_app_LocalActivityManager.hpp>

#include <android_content_Context.hpp>

#include <android_util_AttributeSet.hpp>


#include <android_view_ViewTreeObserver_OnTouchModeChangeListener.hpp>

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

class android_widget_TabHost_TabSpec;

class android_view_KeyEvent;

class java_lang_String;

class android_view_View;

class android_widget_FrameLayout;

class android_widget_TabWidget;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_widget_TabHost_OnTabChangeListener;

class android_app_LocalActivityManager;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_TabHost : public android_view_ViewTreeObserver_OnTouchModeChangeListener
{
public:

	// Public ConstrucXXX
	android_widget_TabHost(AndroidCXX::android_content_Context const& arg0);
	android_widget_TabHost(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_TabHost(const android_widget_TabHost& cc);
	android_widget_TabHost(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_TabHost();
	// Functions
	virtual void  addTab(AndroidCXX::android_widget_TabHost_TabSpec const& arg0) ;
	virtual void  clearAllTabs() ;
	virtual bool  dispatchKeyEvent(AndroidCXX::android_view_KeyEvent const& arg0) ;
	virtual void  dispatchWindowFocusChanged(bool const& arg0) ;
	virtual int  getCurrentTab() ;
	virtual AndroidCXX::java_lang_String * getCurrentTabTag() ;
	virtual AndroidCXX::android_view_View * getCurrentTabView() ;
	virtual AndroidCXX::android_view_View * getCurrentView() ;
	virtual AndroidCXX::android_widget_FrameLayout * getTabContentView() ;
	virtual AndroidCXX::android_widget_TabWidget * getTabWidget() ;
	virtual AndroidCXX::android_widget_TabHost_TabSpec * newTabSpec(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) ;
	virtual void  onTouchModeChanged(bool const& arg0) ;
	virtual void  sendAccessibilityEvent(int const& arg0) ;
	virtual void  setCurrentTabByTag(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setCurrentTab(int const& arg0) ;
	virtual void  setOnTabChangedListener(AndroidCXX::android_widget_TabHost_OnTabChangeListener const& arg0) ;
	virtual void  setup(AndroidCXX::android_app_LocalActivityManager const& arg0) ;
	virtual void  setup() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_TabHost
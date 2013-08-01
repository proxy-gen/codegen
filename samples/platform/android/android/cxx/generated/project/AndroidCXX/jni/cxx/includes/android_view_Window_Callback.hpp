/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 
	
 		 
 		 




























// Generated Code 

#ifndef _android_view_Window_Callback
#define _android_view_Window_Callback
//
// Scroll Down 
//


#include <android_view_Menu.hpp>

#include <android_view_MenuItem.hpp>

#include <android_view_View.hpp>

#include <android_view_WindowManager_LayoutParams.hpp>

#include <android_view_KeyEvent.hpp>

#include <android_view_MotionEvent.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_ActionMode_Callback.hpp>

#include <android_view_ActionMode.hpp>

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

class android_view_Menu;

class android_view_MenuItem;

class android_view_View;

class android_view_WindowManager_LayoutParams;

class android_view_KeyEvent;

class android_view_MotionEvent;

class android_view_accessibility_AccessibilityEvent;

class android_view_ActionMode_Callback;

class android_view_ActionMode;

class android_view_Window_Callback
{
public:

	android_view_Window_Callback(const android_view_Window_Callback& cc);
	android_view_Window_Callback(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_Window_Callback();
	// Functions
	 bool onCreatePanelMenu(int const& arg0,AndroidCXX::android_view_Menu const& arg1);
	 bool onMenuItemSelected(int const& arg0,AndroidCXX::android_view_MenuItem const& arg1);
	 void onPanelClosed(int const& arg0,AndroidCXX::android_view_Menu const& arg1);
	 bool onPreparePanel(int const& arg0,AndroidCXX::android_view_View const& arg1,AndroidCXX::android_view_Menu const& arg2);
	 void onWindowAttributesChanged(AndroidCXX::android_view_WindowManager_LayoutParams const& arg0);
	 void onContentChanged();
	 void onWindowFocusChanged(bool const& arg0);
	 void onAttachedToWindow();
	 void onDetachedFromWindow();
	 bool dispatchKeyEvent(AndroidCXX::android_view_KeyEvent const& arg0);
	 bool dispatchKeyShortcutEvent(AndroidCXX::android_view_KeyEvent const& arg0);
	 bool dispatchTouchEvent(AndroidCXX::android_view_MotionEvent const& arg0);
	 bool dispatchTrackballEvent(AndroidCXX::android_view_MotionEvent const& arg0);
	 bool dispatchGenericMotionEvent(AndroidCXX::android_view_MotionEvent const& arg0);
	 bool dispatchPopulateAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0);
	 AndroidCXX::android_view_View onCreatePanelView(int const& arg0);
	 bool onMenuOpened(int const& arg0,AndroidCXX::android_view_Menu const& arg1);
	 bool onSearchRequested();
	 AndroidCXX::android_view_ActionMode onWindowStartingActionMode(AndroidCXX::android_view_ActionMode_Callback const& arg0);
	 void onActionModeStarted(AndroidCXX::android_view_ActionMode const& arg0);
	 void onActionModeFinished(AndroidCXX::android_view_ActionMode const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_Window_Callback
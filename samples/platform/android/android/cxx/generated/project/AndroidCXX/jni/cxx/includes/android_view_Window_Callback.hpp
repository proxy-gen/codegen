/*
 * Header (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
		
 			
 			
		
 			
 			


#ifndef _android_view_Window_Callback
#define _android_view_Window_Callback























#include <android_view_MenuItem.hpp>
#include <android_view_ActionMode.hpp>
#include <android_view_MotionEvent.hpp>
#include <android_view_Menu.hpp>
#include <android_view_accessibility_AccessibilityEvent.hpp>
#include <android_view_ActionMode_Callback.hpp>
#include <android_view_View.hpp>
#include <android_view_WindowManager_LayoutParams.hpp>
#include <android_view_KeyEvent.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_view_Window_Callback
{
public:
	bool onCreatePanelMenu(int& arg0,android_view_Menu& arg1);
	bool onMenuItemSelected(int& arg0,android_view_MenuItem& arg1);
	void onPanelClosed(int& arg0,android_view_Menu& arg1);
	bool onPreparePanel(int& arg0,android_view_View& arg1,android_view_Menu& arg2);
	void onWindowAttributesChanged(android_view_WindowManager_LayoutParams& arg0);
	void onContentChanged();
	void onWindowFocusChanged(bool& arg0);
	void onAttachedToWindow();
	void onDetachedFromWindow();
	bool dispatchKeyEvent(android_view_KeyEvent& arg0);
	bool dispatchKeyShortcutEvent(android_view_KeyEvent& arg0);
	bool dispatchTouchEvent(android_view_MotionEvent& arg0);
	bool dispatchTrackballEvent(android_view_MotionEvent& arg0);
	bool dispatchGenericMotionEvent(android_view_MotionEvent& arg0);
	bool dispatchPopulateAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
	android_view_View onCreatePanelView(int& arg0);
	bool onMenuOpened(int& arg0,android_view_Menu& arg1);
	bool onSearchRequested();
	android_view_ActionMode onWindowStartingActionMode(android_view_ActionMode_Callback& arg0);
	void onActionModeStarted(android_view_ActionMode& arg0);
	void onActionModeFinished(android_view_ActionMode& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_Window_Callback
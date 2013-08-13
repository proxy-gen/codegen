/*
 * Header (Instance CXX)
 * Author: codegen
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

class android_view_KeyEvent;

class android_view_MotionEvent;

class android_view_accessibility_AccessibilityEvent;

class android_view_WindowManager_LayoutParams;

class android_view_View;

class android_view_Menu;

class android_view_MenuItem;

class android_view_ActionMode_Callback;

class android_view_ActionMode;

class android_view_Window_Callback 
{
public:

	android_view_Window_Callback(const android_view_Window_Callback& cc);
	android_view_Window_Callback(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_Window_Callback();
	// Functions
	virtual void  onAttachedToWindow() ;
	virtual void  onDetachedFromWindow() ;
	virtual void  onWindowFocusChanged(bool const& arg0) ;
	virtual bool  dispatchKeyEvent(AndroidCXX::android_view_KeyEvent const& arg0) ;
	virtual bool  dispatchKeyShortcutEvent(AndroidCXX::android_view_KeyEvent const& arg0) ;
	virtual bool  dispatchTrackballEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual bool  dispatchTouchEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual bool  dispatchPopulateAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual bool  dispatchGenericMotionEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual void  onContentChanged() ;
	virtual void  onWindowAttributesChanged(AndroidCXX::android_view_WindowManager_LayoutParams const& arg0) ;
	virtual AndroidCXX::android_view_View * onCreatePanelView(int const& arg0) ;
	virtual bool  onCreatePanelMenu(int const& arg0,AndroidCXX::android_view_Menu const& arg1) ;
	virtual bool  onPreparePanel(int const& arg0,AndroidCXX::android_view_View const& arg1,AndroidCXX::android_view_Menu const& arg2) ;
	virtual bool  onMenuOpened(int const& arg0,AndroidCXX::android_view_Menu const& arg1) ;
	virtual bool  onMenuItemSelected(int const& arg0,AndroidCXX::android_view_MenuItem const& arg1) ;
	virtual void  onPanelClosed(int const& arg0,AndroidCXX::android_view_Menu const& arg1) ;
	virtual bool  onSearchRequested() ;
	virtual AndroidCXX::android_view_ActionMode * onWindowStartingActionMode(AndroidCXX::android_view_ActionMode_Callback const& arg0) ;
	virtual void  onActionModeStarted(AndroidCXX::android_view_ActionMode const& arg0) ;
	virtual void  onActionModeFinished(AndroidCXX::android_view_ActionMode const& arg0) ;

protected:
	android_view_Window_Callback();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_Window_Callback
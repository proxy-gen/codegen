/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
	
	
	
	
	
	
	
	
	
	
 		 
 		 
 		 
	
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 


 		 













































































// Generated Code 

#ifndef _android_view_Window
#define _android_view_Window
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

class android_view_View;

class android_view_ViewGroup_LayoutParams;

class android_view_WindowManager_LayoutParams;

class android_view_Window_Callback;


class android_content_Context;

class android_view_LayoutInflater;

class android_view_WindowManager;

class android_content_res_TypedArray;

class android_view_KeyEvent;

class android_content_res_Configuration;

class android_os_Bundle;

class android_graphics_drawable_Drawable;

class android_net_Uri;

class java_lang_CharSequence;

class android_os_IBinder;

class java_lang_String;

class android_view_MotionEvent;

class android_view_InputQueue_Callback;

class android_view_SurfaceHolder_Callback2;

class android_view_Window 
{
public:

	android_view_Window(const android_view_Window& cc);
	android_view_Window(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_Window();
	// Functions
	virtual void  addContentView(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_ViewGroup_LayoutParams const& arg1) ;
	virtual void  addFlags(int const& arg0) ;
	virtual void  clearFlags(int const& arg0) ;
	virtual void  closeAllPanels() ;
	virtual void  closePanel(int const& arg0) ;
	virtual AndroidCXX::android_view_View * findViewById(int const& arg0) ;
	virtual AndroidCXX::android_view_WindowManager_LayoutParams * getAttributes() ;
	virtual AndroidCXX::android_view_Window_Callback * getCallback() ;
	virtual AndroidCXX::android_view_Window * getContainer() ;
	virtual AndroidCXX::android_content_Context * getContext() ;
	virtual AndroidCXX::android_view_View * getCurrentFocus() ;
	virtual AndroidCXX::android_view_View * getDecorView() ;
	virtual AndroidCXX::android_view_LayoutInflater * getLayoutInflater() ;
	virtual int  getVolumeControlStream() ;
	virtual AndroidCXX::android_view_WindowManager * getWindowManager() ;
	virtual AndroidCXX::android_content_res_TypedArray * getWindowStyle() ;
	virtual bool  hasChildren() ;
	virtual bool  hasFeature(int const& arg0) ;
	virtual void  invalidatePanelMenu(int const& arg0) ;
	virtual bool  isActive() ;
	virtual bool  isFloating() ;
	virtual bool  isShortcutKey(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) ;
	virtual void  makeActive() ;
	virtual void  onConfigurationChanged(AndroidCXX::android_content_res_Configuration const& arg0) ;
	virtual void  openPanel(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) ;
	virtual AndroidCXX::android_view_View * peekDecorView() ;
	virtual bool  performContextMenuIdentifierAction(int const& arg0,int const& arg1) ;
	virtual bool  performPanelIdentifierAction(int const& arg0,int const& arg1,int const& arg2) ;
	virtual bool  performPanelShortcut(int const& arg0,int const& arg1,AndroidCXX::android_view_KeyEvent const& arg2,int const& arg3) ;
	virtual bool  requestFeature(int const& arg0) ;
	virtual void  restoreHierarchyState(AndroidCXX::android_os_Bundle const& arg0) ;
	virtual AndroidCXX::android_os_Bundle * saveHierarchyState() ;
	virtual void  setAttributes(AndroidCXX::android_view_WindowManager_LayoutParams const& arg0) ;
	virtual void  setBackgroundDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual void  setBackgroundDrawableResource(int const& arg0) ;
	virtual void  setCallback(AndroidCXX::android_view_Window_Callback const& arg0) ;
	virtual void  setChildDrawable(int const& arg0,AndroidCXX::android_graphics_drawable_Drawable const& arg1) ;
	virtual void  setChildInt(int const& arg0,int const& arg1) ;
	virtual void  setContainer(AndroidCXX::android_view_Window const& arg0) ;
	virtual void  setContentView(int const& arg0) ;
	virtual void  setContentView(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_ViewGroup_LayoutParams const& arg1) ;
	virtual void  setContentView(AndroidCXX::android_view_View const& arg0) ;
	virtual void  setDimAmount(float const& arg0) ;
	virtual void  setFeatureDrawable(int const& arg0,AndroidCXX::android_graphics_drawable_Drawable const& arg1) ;
	virtual void  setFeatureDrawableAlpha(int const& arg0,int const& arg1) ;
	virtual void  setFeatureDrawableResource(int const& arg0,int const& arg1) ;
	virtual void  setFeatureDrawableUri(int const& arg0,AndroidCXX::android_net_Uri const& arg1) ;
	virtual void  setFeatureInt(int const& arg0,int const& arg1) ;
	virtual void  setFlags(int const& arg0,int const& arg1) ;
	virtual void  setFormat(int const& arg0) ;
	virtual void  setGravity(int const& arg0) ;
	virtual void  setLayout(int const& arg0,int const& arg1) ;
	virtual void  setSoftInputMode(int const& arg0) ;
	virtual void  setTitle(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual void  setTitleColor(int const& arg0) ;
	virtual void  setType(int const& arg0) ;
	virtual void  setUiOptions(int const& arg0) ;
	virtual void  setUiOptions(int const& arg0,int const& arg1) ;
	virtual void  setVolumeControlStream(int const& arg0) ;
	virtual void  setWindowAnimations(int const& arg0) ;
	virtual void  setWindowManager(AndroidCXX::android_view_WindowManager const& arg0,AndroidCXX::android_os_IBinder const& arg1,AndroidCXX::java_lang_String const& arg2) ;
	virtual void  setWindowManager(AndroidCXX::android_view_WindowManager const& arg0,AndroidCXX::android_os_IBinder const& arg1,AndroidCXX::java_lang_String const& arg2,bool const& arg3) ;
	virtual bool  superDispatchGenericMotionEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual bool  superDispatchKeyEvent(AndroidCXX::android_view_KeyEvent const& arg0) ;
	virtual bool  superDispatchKeyShortcutEvent(AndroidCXX::android_view_KeyEvent const& arg0) ;
	virtual bool  superDispatchTouchEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual bool  superDispatchTrackballEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual void  takeInputQueue(AndroidCXX::android_view_InputQueue_Callback const& arg0) ;
	virtual void  takeKeyEvents(bool const& arg0) ;
	virtual void  takeSurface(AndroidCXX::android_view_SurfaceHolder_Callback2 const& arg0) ;
	virtual void  togglePanel(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) ;

protected:
	android_view_Window();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_Window
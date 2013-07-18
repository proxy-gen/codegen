/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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






































































#include <android_content_Context.hpp>

#include <android_view_WindowManager_LayoutParams.hpp>

#include <android_view_LayoutInflater.hpp>

#include <android_content_res_Configuration.hpp>

#include <android_os_Bundle.hpp>

#include <android_view_View.hpp>

#include <android_view_WindowManager.hpp>

#include <android_view_ViewGroup_LayoutParams.hpp>

#include <android_net_Uri.hpp>

#include <android_graphics_drawable_Drawable.hpp>

#include <java_lang_CharSequence.hpp>

#include <android_view_KeyEvent.hpp>

#include <android_view_Window_Callback.hpp>

#include <android_content_res_TypedArray.hpp>


#include <android_os_IBinder.hpp>

#include <java_lang_String.hpp>

#include <android_view_SurfaceHolder_Callback2.hpp>

#include <android_view_InputQueue_Callback.hpp>

#include <android_view_MotionEvent.hpp>

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

class android_content_Context;

class android_view_WindowManager_LayoutParams;

class android_view_LayoutInflater;

class android_content_res_Configuration;

class android_os_Bundle;

class android_view_View;

class android_view_WindowManager;

class android_view_ViewGroup_LayoutParams;

class android_net_Uri;

class android_graphics_drawable_Drawable;

class java_lang_CharSequence;

class android_view_KeyEvent;

class android_view_Window_Callback;

class android_content_res_TypedArray;


class android_os_IBinder;

class java_lang_String;

class android_view_SurfaceHolder_Callback2;

class android_view_InputQueue_Callback;

class android_view_MotionEvent;

class android_view_Window
{
public:
 android_content_Context getContext();
 android_view_WindowManager_LayoutParams getAttributes();
 void setFormat(int& arg0);
 android_view_LayoutInflater getLayoutInflater();
 void onConfigurationChanged(android_content_res_Configuration& arg0);
 void restoreHierarchyState(android_os_Bundle& arg0);
 android_view_View findViewById(int& arg0);
 void makeActive();
 android_os_Bundle saveHierarchyState();
 android_view_View getDecorView();
 android_view_WindowManager getWindowManager();
 android_view_View getCurrentFocus();
 void setContentView(int& arg0,android_view_View& arg1,android_view_ViewGroup_LayoutParams& arg2);
 void addContentView(android_view_View& arg0,android_view_ViewGroup_LayoutParams& arg1);
 void takeKeyEvents(bool& arg0);
 void setFeatureDrawableResource(int& arg0);
 void setFeatureDrawableUri(int& arg0,android_net_Uri& arg1);
 void setFeatureDrawable(int& arg0,android_graphics_drawable_Drawable& arg1);
 void setFeatureDrawableAlpha(int& arg0);
 void setTitle(java_lang_CharSequence& arg0);
 void setTitleColor(int& arg0);
 void setVolumeControlStream(int& arg0);
 int getVolumeControlStream();
 void setType(int& arg0);
 void setFlags(int& arg0);
 void addFlags(int& arg0);
 void setBackgroundDrawable(android_graphics_drawable_Drawable& arg0);
 bool isShortcutKey(int& arg0,android_view_KeyEvent& arg1);
 void setCallback(android_view_Window_Callback& arg0);
 android_view_Window_Callback getCallback();
 android_content_res_TypedArray getWindowStyle();
 void setContainer(android_view_Window& arg0);
 android_view_Window getContainer();
 bool hasChildren();
 void setWindowManager(android_view_WindowManager& arg0,android_os_IBinder& arg1,java_lang_String& arg2,bool& arg3);
 void takeSurface(android_view_SurfaceHolder_Callback2& arg0);
 void takeInputQueue(android_view_InputQueue_Callback& arg0);
 bool isFloating();
 void setLayout(int& arg0);
 void setGravity(int& arg0);
 void setWindowAnimations(int& arg0);
 void setSoftInputMode(int& arg0);
 void clearFlags(int& arg0);
 void setDimAmount(float& arg0);
 void setAttributes(android_view_WindowManager_LayoutParams& arg0);
 bool requestFeature(int& arg0);
 bool isActive();
 void openPanel(int& arg0,android_view_KeyEvent& arg1);
 void closePanel(int& arg0);
 void togglePanel(int& arg0,android_view_KeyEvent& arg1);
 void invalidatePanelMenu(int& arg0);
 bool performPanelShortcut(int& arg0,android_view_KeyEvent& arg1);
 bool performPanelIdentifierAction(int& arg0);
 void closeAllPanels();
 bool performContextMenuIdentifierAction(int& arg0);
 void setBackgroundDrawableResource(int& arg0);
 void setFeatureInt(int& arg0);
 bool superDispatchKeyEvent(android_view_KeyEvent& arg0);
 bool superDispatchKeyShortcutEvent(android_view_KeyEvent& arg0);
 bool superDispatchTouchEvent(android_view_MotionEvent& arg0);
 bool superDispatchTrackballEvent(android_view_MotionEvent& arg0);
 bool superDispatchGenericMotionEvent(android_view_MotionEvent& arg0);
 android_view_View peekDecorView();
 bool hasFeature(int& arg0);
 void setChildDrawable(int& arg0,android_graphics_drawable_Drawable& arg1);
 void setChildInt(int& arg0);
 void setUiOptions(int& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_Window
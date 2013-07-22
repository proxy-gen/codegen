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
#include <CXXTypes.hpp>


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

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

class android_view_Window;

class android_os_IBinder;

class java_lang_String;

class android_view_SurfaceHolder_Callback2;

class android_view_InputQueue_Callback;

class android_view_MotionEvent;

class android_view_Window
{
public:

	android_view_Window(const android_view_Window& cc);
	android_view_Window(void * proxy);
	// Public Constructors
	android_view_Window(AndroidCXX::android_content_Context& arg0);
	android_view_Window();
	// Default Destructor
	virtual ~android_view_Window();
	// Functions
	 AndroidCXX::android_content_Context getContext();
	 AndroidCXX::android_view_WindowManager_LayoutParams getAttributes();
	 void setFormat(int& arg0);
	 AndroidCXX::android_view_LayoutInflater getLayoutInflater();
	 void onConfigurationChanged(AndroidCXX::android_content_res_Configuration& arg0);
	 void restoreHierarchyState(AndroidCXX::android_os_Bundle& arg0);
	 AndroidCXX::android_view_View findViewById(int& arg0);
	 void makeActive();
	 AndroidCXX::android_os_Bundle saveHierarchyState();
	 AndroidCXX::android_view_View getDecorView();
	 AndroidCXX::android_view_WindowManager getWindowManager();
	 AndroidCXX::android_view_View getCurrentFocus();
	 void setContentView(int& arg0);
	 void setContentView(AndroidCXX::android_view_View& arg0,AndroidCXX::android_view_ViewGroup_LayoutParams& arg1);
	 void setContentView(AndroidCXX::android_view_View& arg0);
	 void addContentView(AndroidCXX::android_view_View& arg0,AndroidCXX::android_view_ViewGroup_LayoutParams& arg1);
	 void takeKeyEvents(bool& arg0);
	 void setFeatureDrawableResource(int& arg0,int& arg1);
	 void setFeatureDrawableUri(int& arg0,AndroidCXX::android_net_Uri& arg1);
	 void setFeatureDrawable(int& arg0,AndroidCXX::android_graphics_drawable_Drawable& arg1);
	 void setFeatureDrawableAlpha(int& arg0,int& arg1);
	 void setTitle(AndroidCXX::java_lang_CharSequence& arg0);
	 void setTitleColor(int& arg0);
	 void setVolumeControlStream(int& arg0);
	 int getVolumeControlStream();
	 void setType(int& arg0);
	 void setFlags(int& arg0,int& arg1);
	 void addFlags(int& arg0);
	 void setBackgroundDrawable(AndroidCXX::android_graphics_drawable_Drawable& arg0);
	 bool isShortcutKey(int& arg0,AndroidCXX::android_view_KeyEvent& arg1);
	 void setCallback(AndroidCXX::android_view_Window_Callback& arg0);
	 AndroidCXX::android_view_Window_Callback getCallback();
	 AndroidCXX::android_content_res_TypedArray getWindowStyle();
	 void setContainer(AndroidCXX::android_view_Window& arg0);
	 AndroidCXX::android_view_Window getContainer();
	 bool hasChildren();
	 void setWindowManager(AndroidCXX::android_view_WindowManager& arg0,AndroidCXX::android_os_IBinder& arg1,AndroidCXX::java_lang_String& arg2,bool& arg3);
	 void setWindowManager(AndroidCXX::android_view_WindowManager& arg0,AndroidCXX::android_os_IBinder& arg1,AndroidCXX::java_lang_String& arg2);
	 void takeSurface(AndroidCXX::android_view_SurfaceHolder_Callback2& arg0);
	 void takeInputQueue(AndroidCXX::android_view_InputQueue_Callback& arg0);
	 bool isFloating();
	 void setLayout(int& arg0,int& arg1);
	 void setGravity(int& arg0);
	 void setWindowAnimations(int& arg0);
	 void setSoftInputMode(int& arg0);
	 void clearFlags(int& arg0);
	 void setDimAmount(float& arg0);
	 void setAttributes(AndroidCXX::android_view_WindowManager_LayoutParams& arg0);
	 bool requestFeature(int& arg0);
	 bool isActive();
	 void openPanel(int& arg0,AndroidCXX::android_view_KeyEvent& arg1);
	 void closePanel(int& arg0);
	 void togglePanel(int& arg0,AndroidCXX::android_view_KeyEvent& arg1);
	 void invalidatePanelMenu(int& arg0);
	 bool performPanelShortcut(int& arg0,int& arg1,AndroidCXX::android_view_KeyEvent& arg2,int& arg3);
	 bool performPanelIdentifierAction(int& arg0,int& arg1,int& arg2);
	 void closeAllPanels();
	 bool performContextMenuIdentifierAction(int& arg0,int& arg1);
	 void setBackgroundDrawableResource(int& arg0);
	 void setFeatureInt(int& arg0,int& arg1);
	 bool superDispatchKeyEvent(AndroidCXX::android_view_KeyEvent& arg0);
	 bool superDispatchKeyShortcutEvent(AndroidCXX::android_view_KeyEvent& arg0);
	 bool superDispatchTouchEvent(AndroidCXX::android_view_MotionEvent& arg0);
	 bool superDispatchTrackballEvent(AndroidCXX::android_view_MotionEvent& arg0);
	 bool superDispatchGenericMotionEvent(AndroidCXX::android_view_MotionEvent& arg0);
	 AndroidCXX::android_view_View peekDecorView();
	 bool hasFeature(int& arg0);
	 void setChildDrawable(int& arg0,AndroidCXX::android_graphics_drawable_Drawable& arg1);
	 void setChildInt(int& arg0,int& arg1);
	 void setUiOptions(int& arg0);
	 void setUiOptions(int& arg0,int& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_Window
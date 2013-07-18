/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
		
 			
		

// Generated Code 

#ifndef _android_widget_ZoomButtonsController
#define _android_widget_ZoomButtonsController
//
// Scroll Down 
//















#include <android_view_View.hpp>

#include <android_view_MotionEvent.hpp>

#include <android_view_ViewGroup.hpp>

#include <android_widget_ZoomButtonsController_OnZoomListener.hpp>

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

class android_view_View;

class android_view_MotionEvent;

class android_view_ViewGroup;

class android_widget_ZoomButtonsController_OnZoomListener;

class android_widget_ZoomButtonsController
{
public:
 bool isVisible();
 void setVisible(bool& arg0);
 void setFocusable(bool& arg0);
 bool onTouch(android_view_View& arg0,android_view_MotionEvent& arg1);
 android_view_ViewGroup getContainer();
 void setZoomSpeed(long& arg0);
 void setZoomInEnabled(bool& arg0);
 void setZoomOutEnabled(bool& arg0);
 void setOnZoomListener(android_widget_ZoomButtonsController_OnZoomListener& arg0);
 bool isAutoDismissed();
 void setAutoDismissed(bool& arg0);
 android_view_View getZoomControls();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ZoomButtonsController
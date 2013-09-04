/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <android_view_ViewGroup.hpp>

#include <android_view_View.hpp>

#include <android_view_MotionEvent.hpp>

#include <android_widget_ZoomButtonsController_OnZoomListener.hpp>


#include <android_view_View_OnTouchListener.hpp>

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

class android_view_ViewGroup;

class android_view_View;

class android_view_MotionEvent;

class android_widget_ZoomButtonsController_OnZoomListener;

class android_widget_ZoomButtonsController : public AndroidCXX::android_view_View_OnTouchListener
{
public:

	// Public Constructor
	android_widget_ZoomButtonsController(AndroidCXX::android_view_View const& arg0,Proxy * aProxy = new Proxy());
	android_widget_ZoomButtonsController(const android_widget_ZoomButtonsController& cc);
	android_widget_ZoomButtonsController(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_widget_ZoomButtonsController();
	// Functions
	virtual AndroidCXX::android_view_ViewGroup * getContainer() ;
	virtual AndroidCXX::android_view_View * getZoomControls() ;
	virtual bool  isAutoDismissed() ;
	virtual bool  isVisible() ;
	virtual bool  onTouch(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_MotionEvent const& arg1) ;
	virtual void  setAutoDismissed(bool const& arg0) ;
	virtual void  setFocusable(bool const& arg0) ;
	virtual void  setOnZoomListener(AndroidCXX::android_widget_ZoomButtonsController_OnZoomListener const& arg0) ;
	virtual void  setVisible(bool const& arg0) ;
	virtual void  setZoomInEnabled(bool const& arg0) ;
	virtual void  setZoomOutEnabled(bool const& arg0) ;
	virtual void  setZoomSpeed(long const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ZoomButtonsController
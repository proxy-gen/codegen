/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 




























// Generated Code 

#ifndef _android_view_ViewTreeObserver
#define _android_view_ViewTreeObserver
//
// Scroll Down 
//


#include <android_view_ViewTreeObserver_OnDrawListener.hpp>

#include <android_view_ViewTreeObserver_OnGlobalFocusChangeListener.hpp>

#include <android_view_ViewTreeObserver_OnGlobalLayoutListener.hpp>

#include <android_view_ViewTreeObserver_OnPreDrawListener.hpp>

#include <android_view_ViewTreeObserver_OnScrollChangedListener.hpp>

#include <android_view_ViewTreeObserver_OnTouchModeChangeListener.hpp>

#include <android_view_ViewTreeObserver_OnWindowAttachListener.hpp>

#include <android_view_ViewTreeObserver_OnWindowFocusChangeListener.hpp>


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

class android_view_ViewTreeObserver_OnDrawListener;

class android_view_ViewTreeObserver_OnGlobalFocusChangeListener;

class android_view_ViewTreeObserver_OnGlobalLayoutListener;

class android_view_ViewTreeObserver_OnPreDrawListener;

class android_view_ViewTreeObserver_OnScrollChangedListener;

class android_view_ViewTreeObserver_OnTouchModeChangeListener;

class android_view_ViewTreeObserver_OnWindowAttachListener;

class android_view_ViewTreeObserver_OnWindowFocusChangeListener;

class android_view_ViewTreeObserver 
{
public:

	// Public ConstrucXXX
	android_view_ViewTreeObserver(const android_view_ViewTreeObserver& cc);
	android_view_ViewTreeObserver(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_ViewTreeObserver();
	// Functions
	virtual void  addOnDrawListener(AndroidCXX::android_view_ViewTreeObserver_OnDrawListener const& arg0) ;
	virtual void  addOnGlobalFocusChangeListener(AndroidCXX::android_view_ViewTreeObserver_OnGlobalFocusChangeListener const& arg0) ;
	virtual void  addOnGlobalLayoutListener(AndroidCXX::android_view_ViewTreeObserver_OnGlobalLayoutListener const& arg0) ;
	virtual void  addOnPreDrawListener(AndroidCXX::android_view_ViewTreeObserver_OnPreDrawListener const& arg0) ;
	virtual void  addOnScrollChangedListener(AndroidCXX::android_view_ViewTreeObserver_OnScrollChangedListener const& arg0) ;
	virtual void  addOnTouchModeChangeListener(AndroidCXX::android_view_ViewTreeObserver_OnTouchModeChangeListener const& arg0) ;
	virtual void  addOnWindowAttachListener(AndroidCXX::android_view_ViewTreeObserver_OnWindowAttachListener const& arg0) ;
	virtual void  addOnWindowFocusChangeListener(AndroidCXX::android_view_ViewTreeObserver_OnWindowFocusChangeListener const& arg0) ;
	virtual void  dispatchOnDraw() ;
	virtual void  dispatchOnGlobalLayout() ;
	virtual bool  dispatchOnPreDraw() ;
	virtual bool  isAlive() ;
	virtual void  removeGlobalOnLayoutListener(AndroidCXX::android_view_ViewTreeObserver_OnGlobalLayoutListener const& arg0) ;
	virtual void  removeOnDrawListener(AndroidCXX::android_view_ViewTreeObserver_OnDrawListener const& arg0) ;
	virtual void  removeOnGlobalFocusChangeListener(AndroidCXX::android_view_ViewTreeObserver_OnGlobalFocusChangeListener const& arg0) ;
	virtual void  removeOnGlobalLayoutListener(AndroidCXX::android_view_ViewTreeObserver_OnGlobalLayoutListener const& arg0) ;
	virtual void  removeOnPreDrawListener(AndroidCXX::android_view_ViewTreeObserver_OnPreDrawListener const& arg0) ;
	virtual void  removeOnScrollChangedListener(AndroidCXX::android_view_ViewTreeObserver_OnScrollChangedListener const& arg0) ;
	virtual void  removeOnTouchModeChangeListener(AndroidCXX::android_view_ViewTreeObserver_OnTouchModeChangeListener const& arg0) ;
	virtual void  removeOnWindowAttachListener(AndroidCXX::android_view_ViewTreeObserver_OnWindowAttachListener const& arg0) ;
	virtual void  removeOnWindowFocusChangeListener(AndroidCXX::android_view_ViewTreeObserver_OnWindowFocusChangeListener const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_ViewTreeObserver
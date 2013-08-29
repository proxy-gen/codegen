/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
	
	
	
	
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 


 		 
 		 
 		 
 		 
 		 




































// Generated Code 

#ifndef _android_widget_AdapterViewAnimator
#define _android_widget_AdapterViewAnimator
//
// Scroll Down 
//



#include <android_widget_Advanceable.hpp>

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

class android_widget_Adapter;

class android_view_View;

class android_animation_ObjectAnimator;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_os_Parcelable;

class android_view_MotionEvent;

class android_content_Context;

class android_content_Intent;

class android_util_AttributeSet;

class android_widget_AdapterViewAnimator : public AndroidCXX::android_widget_Advanceable
{
public:

	android_widget_AdapterViewAnimator(const android_widget_AdapterViewAnimator& cc);
	android_widget_AdapterViewAnimator(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_widget_AdapterViewAnimator();
	// Functions
	virtual void  advance() ;
	virtual void  deferNotifyDataSetChanged() ;
	virtual void  fyiWillBeAdvancedByHostKThx() ;
	virtual AndroidCXX::android_widget_Adapter * getAdapter() ;
	virtual int  getBaseline() ;
	virtual AndroidCXX::android_view_View * getCurrentView() ;
	virtual int  getDisplayedChild() ;
	virtual AndroidCXX::android_animation_ObjectAnimator * getInAnimation() ;
	virtual AndroidCXX::android_animation_ObjectAnimator * getOutAnimation() ;
	virtual AndroidCXX::android_view_View * getSelectedView() ;
	virtual void  onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) ;
	virtual bool  onRemoteAdapterConnected() ;
	virtual void  onRemoteAdapterDisconnected() ;
	virtual void  onRestoreInstanceState(AndroidCXX::android_os_Parcelable const& arg0) ;
	virtual AndroidCXX::android_os_Parcelable * onSaveInstanceState() ;
	virtual bool  onTouchEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual void  setAdapter(AndroidCXX::android_widget_Adapter const& arg0) ;
	virtual void  setAnimateFirstView(bool const& arg0) ;
	virtual void  setDisplayedChild(int const& arg0) ;
	virtual void  setInAnimation(AndroidCXX::android_animation_ObjectAnimator const& arg0) ;
	virtual void  setInAnimation(AndroidCXX::android_content_Context const& arg0,int const& arg1) ;
	virtual void  setOutAnimation(AndroidCXX::android_animation_ObjectAnimator const& arg0) ;
	virtual void  setOutAnimation(AndroidCXX::android_content_Context const& arg0,int const& arg1) ;
	virtual void  setRemoteViewsAdapter(AndroidCXX::android_content_Intent const& arg0) ;
	virtual void  setSelection(int const& arg0) ;
	virtual void  showNext() ;
	virtual void  showPrevious() ;

protected:
	android_widget_AdapterViewAnimator();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_AdapterViewAnimator
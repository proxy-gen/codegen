/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 		 
 		 
	
	
 		 
 		 
	
 		 
 		 


 		 
 		 
 		 






























// Generated Code 

#ifndef _android_widget_ViewAnimator
#define _android_widget_ViewAnimator
//
// Scroll Down 
//


#include <android_view_View.hpp>

#include <android_view_ViewGroup_LayoutParams.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_animation_Animation.hpp>

#include <android_content_Context.hpp>

#include <android_util_AttributeSet.hpp>


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

class android_view_accessibility_AccessibilityNodeInfo;

class android_view_accessibility_AccessibilityEvent;

class android_view_animation_Animation;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_ViewAnimator 
{
public:

	// Public ConstrucXXX
	android_widget_ViewAnimator(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_ViewAnimator(AndroidCXX::android_content_Context const& arg0);
	android_widget_ViewAnimator(const android_widget_ViewAnimator& cc);
	android_widget_ViewAnimator(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_ViewAnimator();
	// Functions
	virtual void  addView(AndroidCXX::android_view_View const& arg0,int const& arg1,AndroidCXX::android_view_ViewGroup_LayoutParams const& arg2) ;
	virtual void  removeView(AndroidCXX::android_view_View const& arg0) ;
	virtual void  onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) ;
	virtual void  onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  removeViewInLayout(AndroidCXX::android_view_View const& arg0) ;
	virtual void  removeViewsInLayout(int const& arg0,int const& arg1) ;
	virtual void  removeViewAt(int const& arg0) ;
	virtual void  removeViews(int const& arg0,int const& arg1) ;
	virtual void  removeAllViews() ;
	virtual int  getBaseline() ;
	virtual void  setDisplayedChild(int const& arg0) ;
	virtual int  getDisplayedChild() ;
	virtual void  showNext() ;
	virtual void  showPrevious() ;
	virtual AndroidCXX::android_view_View * getCurrentView() ;
	virtual AndroidCXX::android_view_animation_Animation * getInAnimation() ;
	virtual void  setInAnimation(AndroidCXX::android_view_animation_Animation const& arg0) ;
	virtual void  setInAnimation(AndroidCXX::android_content_Context const& arg0,int const& arg1) ;
	virtual AndroidCXX::android_view_animation_Animation * getOutAnimation() ;
	virtual void  setOutAnimation(AndroidCXX::android_content_Context const& arg0,int const& arg1) ;
	virtual void  setOutAnimation(AndroidCXX::android_view_animation_Animation const& arg0) ;
	virtual void  setAnimateFirstView(bool const& arg0) ;
	virtual bool  getAnimateFirstView() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ViewAnimator
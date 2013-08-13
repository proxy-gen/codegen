/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
 	
 		 


































// Generated Code 

#ifndef _android_animation_LayoutTransition
#define _android_animation_LayoutTransition
//
// Scroll Down 
//


#include <android_animation_TimeInterpolator.hpp>

#include <android_view_ViewGroup.hpp>

#include <android_view_View.hpp>

#include <android_animation_Animator.hpp>

#include <android_animation_LayoutTransition_TransitionListener.hpp>

#include <java_util_List.hpp>


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

class android_animation_TimeInterpolator;

class android_view_ViewGroup;

class android_view_View;

class android_animation_Animator;

class android_animation_LayoutTransition_TransitionListener;

class java_util_List;

class android_animation_LayoutTransition 
{
public:

	// Public ConstrucXXX
	android_animation_LayoutTransition();
	android_animation_LayoutTransition(const android_animation_LayoutTransition& cc);
	android_animation_LayoutTransition(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_animation_LayoutTransition();
	// Functions
	virtual void  setInterpolator(int const& arg0,AndroidCXX::android_animation_TimeInterpolator const& arg1) ;
	virtual void  setDuration(int const& arg0,long const& arg1) ;
	virtual void  setDuration(long const& arg0) ;
	virtual long  getDuration(int const& arg0) ;
	virtual AndroidCXX::android_animation_TimeInterpolator * getInterpolator(int const& arg0) ;
	virtual void  addChild(AndroidCXX::android_view_ViewGroup const& arg0,AndroidCXX::android_view_View const& arg1) ;
	virtual long  getStartDelay(int const& arg0) ;
	virtual void  setStartDelay(int const& arg0,long const& arg1) ;
	virtual void  enableTransitionType(int const& arg0) ;
	virtual void  disableTransitionType(int const& arg0) ;
	virtual bool  isTransitionTypeEnabled(int const& arg0) ;
	virtual void  setStagger(int const& arg0,long const& arg1) ;
	virtual long  getStagger(int const& arg0) ;
	virtual void  setAnimator(int const& arg0,AndroidCXX::android_animation_Animator const& arg1) ;
	virtual AndroidCXX::android_animation_Animator * getAnimator(int const& arg0) ;
	virtual void  setAnimateParentHierarchy(bool const& arg0) ;
	virtual bool  isChangingLayout() ;
	virtual bool  isRunning() ;
	virtual void  showChild(AndroidCXX::android_view_ViewGroup const& arg0,AndroidCXX::android_view_View const& arg1) ;
	virtual void  showChild(AndroidCXX::android_view_ViewGroup const& arg0,AndroidCXX::android_view_View const& arg1,int const& arg2) ;
	virtual void  removeChild(AndroidCXX::android_view_ViewGroup const& arg0,AndroidCXX::android_view_View const& arg1) ;
	virtual void  hideChild(AndroidCXX::android_view_ViewGroup const& arg0,AndroidCXX::android_view_View const& arg1) ;
	virtual void  hideChild(AndroidCXX::android_view_ViewGroup const& arg0,AndroidCXX::android_view_View const& arg1,int const& arg2) ;
	virtual void  addTransitionListener(AndroidCXX::android_animation_LayoutTransition_TransitionListener const& arg0) ;
	virtual void  removeTransitionListener(AndroidCXX::android_animation_LayoutTransition_TransitionListener const& arg0) ;
	virtual AndroidCXX::java_util_List * getTransitionListeners() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_animation_LayoutTransition
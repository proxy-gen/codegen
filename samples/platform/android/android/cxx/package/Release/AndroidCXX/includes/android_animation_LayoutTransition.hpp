/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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

	android_animation_LayoutTransition(const android_animation_LayoutTransition& cc);
	android_animation_LayoutTransition(Proxy proxy);
	// Public Constructors
	android_animation_LayoutTransition();
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_animation_LayoutTransition();
	// Functions
	 void setInterpolator(int const& arg0,AndroidCXX::android_animation_TimeInterpolator const& arg1);
	 void setDuration(int const& arg0,long const& arg1);
	 void setDuration(long const& arg0);
	 AndroidCXX::android_animation_TimeInterpolator getInterpolator(int const& arg0);
	 long getDuration(int const& arg0);
	 long getStartDelay(int const& arg0);
	 void setStartDelay(int const& arg0,long const& arg1);
	 void addChild(AndroidCXX::android_view_ViewGroup const& arg0,AndroidCXX::android_view_View const& arg1);
	 void enableTransitionType(int const& arg0);
	 void disableTransitionType(int const& arg0);
	 bool isTransitionTypeEnabled(int const& arg0);
	 void setStagger(int const& arg0,long const& arg1);
	 long getStagger(int const& arg0);
	 void setAnimator(int const& arg0,AndroidCXX::android_animation_Animator const& arg1);
	 AndroidCXX::android_animation_Animator getAnimator(int const& arg0);
	 void setAnimateParentHierarchy(bool const& arg0);
	 bool isChangingLayout();
	 bool isRunning();
	 void showChild(AndroidCXX::android_view_ViewGroup const& arg0,AndroidCXX::android_view_View const& arg1);
	 void showChild(AndroidCXX::android_view_ViewGroup const& arg0,AndroidCXX::android_view_View const& arg1,int const& arg2);
	 void removeChild(AndroidCXX::android_view_ViewGroup const& arg0,AndroidCXX::android_view_View const& arg1);
	 void hideChild(AndroidCXX::android_view_ViewGroup const& arg0,AndroidCXX::android_view_View const& arg1);
	 void hideChild(AndroidCXX::android_view_ViewGroup const& arg0,AndroidCXX::android_view_View const& arg1,int const& arg2);
	 void addTransitionListener(AndroidCXX::android_animation_LayoutTransition_TransitionListener const& arg0);
	 void removeTransitionListener(AndroidCXX::android_animation_LayoutTransition_TransitionListener const& arg0);
	 AndroidCXX::java_util_List getTransitionListeners();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_animation_LayoutTransition
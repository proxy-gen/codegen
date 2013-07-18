/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
 			
 			
 			
		
 			
 			
 			
 			
 			
 			
 			
 			
		


#ifndef _android_animation_LayoutTransition
#define _android_animation_LayoutTransition

























#include <java_util_List.hpp>
#include <android_view_ViewGroup.hpp>
#include <android_animation_TimeInterpolator.hpp>
#include <android_animation_Animator.hpp>
#include <android_view_View.hpp>
#include <android_animation_LayoutTransition_TransitionListener.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_animation_LayoutTransition
{
public:
 void setInterpolator(int& arg0,android_animation_TimeInterpolator& arg1);
 void setDuration(int& arg0,long& arg1);
 android_animation_TimeInterpolator getInterpolator(int& arg0);
 long getDuration(int& arg0);
 long getStartDelay(int& arg0);
 void setStartDelay(int& arg0,long& arg1);
 void addChild(android_view_ViewGroup& arg0,android_view_View& arg1);
 void enableTransitionType(int& arg0);
 void disableTransitionType(int& arg0);
 bool isTransitionTypeEnabled(int& arg0);
 void setStagger(int& arg0,long& arg1);
 long getStagger(int& arg0);
 void setAnimator(int& arg0,android_animation_Animator& arg1);
 android_animation_Animator getAnimator(int& arg0);
 void setAnimateParentHierarchy(bool& arg0);
 bool isChangingLayout();
 bool isRunning();
 void showChild(android_view_ViewGroup& arg0,android_view_View& arg1,int& arg2);
 void removeChild(android_view_ViewGroup& arg0,android_view_View& arg1);
 void hideChild(android_view_ViewGroup& arg0,android_view_View& arg1,int& arg2);
 void addTransitionListener(android_animation_LayoutTransition_TransitionListener& arg0);
 void removeTransitionListener(android_animation_LayoutTransition_TransitionListener& arg0);
 java_util_List getTransitionListeners();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_animation_LayoutTransition
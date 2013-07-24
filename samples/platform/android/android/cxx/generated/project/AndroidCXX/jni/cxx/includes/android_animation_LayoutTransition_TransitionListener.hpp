/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
 		 
 		 
 		 
 		 









// Generated Code 

#ifndef _android_animation_LayoutTransition_TransitionListener
#define _android_animation_LayoutTransition_TransitionListener
//
// Scroll Down 
//


#include <android_animation_LayoutTransition.hpp>

#include <android_view_ViewGroup.hpp>

#include <android_view_View.hpp>

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

class android_animation_LayoutTransition;

class android_view_ViewGroup;

class android_view_View;

class android_animation_LayoutTransition_TransitionListener
{
public:

	android_animation_LayoutTransition_TransitionListener(const android_animation_LayoutTransition_TransitionListener& cc);
	android_animation_LayoutTransition_TransitionListener(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// android_animation_LayoutTransition_TransitionListener();
	// 
	// Default Destructor
	virtual ~android_animation_LayoutTransition_TransitionListener();
	// Functions
	 void startTransition(AndroidCXX::android_animation_LayoutTransition& arg0,AndroidCXX::android_view_ViewGroup& arg1,AndroidCXX::android_view_View& arg2,int& arg3);
	 void endTransition(AndroidCXX::android_animation_LayoutTransition& arg0,AndroidCXX::android_view_ViewGroup& arg1,AndroidCXX::android_view_View& arg2,int& arg3);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_animation_LayoutTransition_TransitionListener
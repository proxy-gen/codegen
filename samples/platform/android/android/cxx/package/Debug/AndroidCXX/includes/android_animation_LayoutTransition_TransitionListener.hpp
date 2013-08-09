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
	android_animation_LayoutTransition_TransitionListener(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_animation_LayoutTransition_TransitionListener();
	// Functions
	 void startTransition(AndroidCXX::android_animation_LayoutTransition const& arg0,AndroidCXX::android_view_ViewGroup const& arg1,AndroidCXX::android_view_View const& arg2,int const& arg3);
	 void endTransition(AndroidCXX::android_animation_LayoutTransition const& arg0,AndroidCXX::android_view_ViewGroup const& arg1,AndroidCXX::android_view_View const& arg2,int const& arg3);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_animation_LayoutTransition_TransitionListener
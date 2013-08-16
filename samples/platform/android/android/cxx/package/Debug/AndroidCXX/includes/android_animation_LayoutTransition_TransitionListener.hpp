/*
 * Header (Instance CXX)
 * Author: codegen
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



#include <java_lang_Object.hpp>

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

class android_animation_LayoutTransition_TransitionListener : public java_lang_Object
{
public:

	android_animation_LayoutTransition_TransitionListener(const android_animation_LayoutTransition_TransitionListener& cc);
	android_animation_LayoutTransition_TransitionListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_animation_LayoutTransition_TransitionListener();
	// Functions
	virtual void  endTransition(AndroidCXX::android_animation_LayoutTransition const& arg0,AndroidCXX::android_view_ViewGroup const& arg1,AndroidCXX::android_view_View const& arg2,int const& arg3) ;
	virtual void  startTransition(AndroidCXX::android_animation_LayoutTransition const& arg0,AndroidCXX::android_view_ViewGroup const& arg1,AndroidCXX::android_view_View const& arg2,int const& arg3) ;

protected:
	android_animation_LayoutTransition_TransitionListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_animation_LayoutTransition_TransitionListener
/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 










// Generated Code 

#ifndef _android_view_animation_Animation_AnimationListener
#define _android_view_animation_Animation_AnimationListener
//
// Scroll Down 
//



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

class android_view_animation_Animation;

class android_view_animation_Animation_AnimationListener 
{
public:

	android_view_animation_Animation_AnimationListener(const android_view_animation_Animation_AnimationListener& cc);
	android_view_animation_Animation_AnimationListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_animation_Animation_AnimationListener();
	// Functions
	virtual void  onAnimationStart(AndroidCXX::android_view_animation_Animation const& arg0) ;
	virtual void  onAnimationEnd(AndroidCXX::android_view_animation_Animation const& arg0) ;
	virtual void  onAnimationRepeat(AndroidCXX::android_view_animation_Animation const& arg0) ;

protected:
	android_view_animation_Animation_AnimationListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_animation_Animation_AnimationListener
/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 











// Generated Code 

#ifndef _android_animation_Animator_AnimatorListener
#define _android_animation_Animator_AnimatorListener
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

class android_animation_Animator;

class android_animation_Animator_AnimatorListener : public java_lang_Object
{
public:

	android_animation_Animator_AnimatorListener(const android_animation_Animator_AnimatorListener& cc);
	android_animation_Animator_AnimatorListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_animation_Animator_AnimatorListener();
	// Functions
	virtual void  onAnimationStart(AndroidCXX::android_animation_Animator const& arg0) ;
	virtual void  onAnimationEnd(AndroidCXX::android_animation_Animator const& arg0) ;
	virtual void  onAnimationRepeat(AndroidCXX::android_animation_Animator const& arg0) ;
	virtual void  onAnimationCancel(AndroidCXX::android_animation_Animator const& arg0) ;

protected:
	android_animation_Animator_AnimatorListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_animation_Animator_AnimatorListener
/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 








// Generated Code 

#ifndef _android_animation_ValueAnimator_AnimatorUpdateListener
#define _android_animation_ValueAnimator_AnimatorUpdateListener
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

class android_animation_ValueAnimator;

class android_animation_ValueAnimator_AnimatorUpdateListener : public java_lang_Object
{
public:

	android_animation_ValueAnimator_AnimatorUpdateListener(const android_animation_ValueAnimator_AnimatorUpdateListener& cc);
	android_animation_ValueAnimator_AnimatorUpdateListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_animation_ValueAnimator_AnimatorUpdateListener();
	// Functions
	virtual void  onAnimationUpdate(AndroidCXX::android_animation_ValueAnimator const& arg0) ;

protected:
	android_animation_ValueAnimator_AnimatorUpdateListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_animation_ValueAnimator_AnimatorUpdateListener
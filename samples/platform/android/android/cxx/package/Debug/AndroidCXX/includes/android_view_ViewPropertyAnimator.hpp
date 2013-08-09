/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
	
	
 		 
	
	
	
	
	
	
	
	
	
	
	
 		 
	
	
	
	
	
	
	
	
	
	
	
	
 		 
	
 		 
	







































// Generated Code 

#ifndef _android_view_ViewPropertyAnimator
#define _android_view_ViewPropertyAnimator
//
// Scroll Down 
//



#include <android_animation_TimeInterpolator.hpp>

#include <android_animation_Animator_AnimatorListener.hpp>

#include <java_lang_Runnable.hpp>

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

class android_view_ViewPropertyAnimator;

class android_animation_TimeInterpolator;

class android_animation_Animator_AnimatorListener;

class java_lang_Runnable;

class android_view_ViewPropertyAnimator
{
public:

	android_view_ViewPropertyAnimator(const android_view_ViewPropertyAnimator& cc);
	android_view_ViewPropertyAnimator(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_ViewPropertyAnimator();
	// Functions
	 void start();
	 AndroidCXX::android_view_ViewPropertyAnimator y(float const& arg0);
	 AndroidCXX::android_view_ViewPropertyAnimator x(float const& arg0);
	 void cancel();
	 AndroidCXX::android_view_ViewPropertyAnimator alpha(float const& arg0);
	 AndroidCXX::android_view_ViewPropertyAnimator setInterpolator(AndroidCXX::android_animation_TimeInterpolator const& arg0);
	 AndroidCXX::android_view_ViewPropertyAnimator setDuration(long const& arg0);
	 AndroidCXX::android_animation_TimeInterpolator getInterpolator();
	 long getDuration();
	 AndroidCXX::android_view_ViewPropertyAnimator rotation(float const& arg0);
	 AndroidCXX::android_view_ViewPropertyAnimator rotationY(float const& arg0);
	 AndroidCXX::android_view_ViewPropertyAnimator rotationX(float const& arg0);
	 AndroidCXX::android_view_ViewPropertyAnimator scaleX(float const& arg0);
	 AndroidCXX::android_view_ViewPropertyAnimator scaleY(float const& arg0);
	 AndroidCXX::android_view_ViewPropertyAnimator translationX(float const& arg0);
	 AndroidCXX::android_view_ViewPropertyAnimator translationY(float const& arg0);
	 long getStartDelay();
	 AndroidCXX::android_view_ViewPropertyAnimator setStartDelay(long const& arg0);
	 AndroidCXX::android_view_ViewPropertyAnimator setListener(AndroidCXX::android_animation_Animator_AnimatorListener const& arg0);
	 AndroidCXX::android_view_ViewPropertyAnimator xBy(float const& arg0);
	 AndroidCXX::android_view_ViewPropertyAnimator yBy(float const& arg0);
	 AndroidCXX::android_view_ViewPropertyAnimator rotationBy(float const& arg0);
	 AndroidCXX::android_view_ViewPropertyAnimator rotationXBy(float const& arg0);
	 AndroidCXX::android_view_ViewPropertyAnimator rotationYBy(float const& arg0);
	 AndroidCXX::android_view_ViewPropertyAnimator translationXBy(float const& arg0);
	 AndroidCXX::android_view_ViewPropertyAnimator translationYBy(float const& arg0);
	 AndroidCXX::android_view_ViewPropertyAnimator scaleXBy(float const& arg0);
	 AndroidCXX::android_view_ViewPropertyAnimator scaleYBy(float const& arg0);
	 AndroidCXX::android_view_ViewPropertyAnimator alphaBy(float const& arg0);
	 AndroidCXX::android_view_ViewPropertyAnimator withLayer();
	 AndroidCXX::android_view_ViewPropertyAnimator withStartAction(AndroidCXX::java_lang_Runnable const& arg0);
	 AndroidCXX::android_view_ViewPropertyAnimator withEndAction(AndroidCXX::java_lang_Runnable const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_ViewPropertyAnimator
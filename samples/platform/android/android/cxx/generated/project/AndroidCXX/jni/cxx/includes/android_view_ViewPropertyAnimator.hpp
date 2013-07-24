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
	android_view_ViewPropertyAnimator(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// android_view_ViewPropertyAnimator();
	// 
	// Default Destructor
	virtual ~android_view_ViewPropertyAnimator();
	// Functions
	 void start();
	 AndroidCXX::android_view_ViewPropertyAnimator y(float& arg0);
	 AndroidCXX::android_view_ViewPropertyAnimator x(float& arg0);
	 void cancel();
	 AndroidCXX::android_view_ViewPropertyAnimator alpha(float& arg0);
	 AndroidCXX::android_view_ViewPropertyAnimator setInterpolator(AndroidCXX::android_animation_TimeInterpolator& arg0);
	 AndroidCXX::android_view_ViewPropertyAnimator setDuration(long& arg0);
	 long getDuration();
	 AndroidCXX::android_view_ViewPropertyAnimator rotation(float& arg0);
	 AndroidCXX::android_view_ViewPropertyAnimator rotationY(float& arg0);
	 AndroidCXX::android_view_ViewPropertyAnimator rotationX(float& arg0);
	 AndroidCXX::android_view_ViewPropertyAnimator scaleX(float& arg0);
	 AndroidCXX::android_view_ViewPropertyAnimator scaleY(float& arg0);
	 AndroidCXX::android_view_ViewPropertyAnimator translationX(float& arg0);
	 AndroidCXX::android_view_ViewPropertyAnimator translationY(float& arg0);
	 long getStartDelay();
	 AndroidCXX::android_view_ViewPropertyAnimator setStartDelay(long& arg0);
	 AndroidCXX::android_view_ViewPropertyAnimator setListener(AndroidCXX::android_animation_Animator_AnimatorListener& arg0);
	 AndroidCXX::android_view_ViewPropertyAnimator xBy(float& arg0);
	 AndroidCXX::android_view_ViewPropertyAnimator yBy(float& arg0);
	 AndroidCXX::android_view_ViewPropertyAnimator rotationBy(float& arg0);
	 AndroidCXX::android_view_ViewPropertyAnimator rotationXBy(float& arg0);
	 AndroidCXX::android_view_ViewPropertyAnimator rotationYBy(float& arg0);
	 AndroidCXX::android_view_ViewPropertyAnimator translationXBy(float& arg0);
	 AndroidCXX::android_view_ViewPropertyAnimator translationYBy(float& arg0);
	 AndroidCXX::android_view_ViewPropertyAnimator scaleXBy(float& arg0);
	 AndroidCXX::android_view_ViewPropertyAnimator scaleYBy(float& arg0);
	 AndroidCXX::android_view_ViewPropertyAnimator alphaBy(float& arg0);
	 AndroidCXX::android_view_ViewPropertyAnimator withLayer();
	 AndroidCXX::android_view_ViewPropertyAnimator withStartAction(AndroidCXX::java_lang_Runnable& arg0);
	 AndroidCXX::android_view_ViewPropertyAnimator withEndAction(AndroidCXX::java_lang_Runnable& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_ViewPropertyAnimator
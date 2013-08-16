/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	
 		 
	
	
	
 	
 		 
 	
	
 	
	
 		 
 	
	
 		 
 	
	
 		 
 		 
	
 		 
 	
 	
 		 
 	
 		 
 	
 		 
	














































// Generated Code 

#ifndef _android_animation_ValueAnimator
#define _android_animation_ValueAnimator
//
// Scroll Down 
//


#include <android_animation_ValueAnimator_AnimatorUpdateListener.hpp>

#include <java_lang_String.hpp>

#include <java_lang_Object.hpp>

#include <android_animation_TimeInterpolator.hpp>

#include <android_animation_PropertyValuesHolder.hpp>

#include <android_animation_TypeEvaluator.hpp>


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

class android_animation_ValueAnimator_AnimatorUpdateListener;


class java_lang_String;


class android_animation_TimeInterpolator;

class android_animation_PropertyValuesHolder;

class android_animation_TypeEvaluator;

class android_animation_ValueAnimator : public java_lang_Object
{
public:

	// Public ConstrucXXX
	android_animation_ValueAnimator();
	android_animation_ValueAnimator(const android_animation_ValueAnimator& cc);
	android_animation_ValueAnimator(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_animation_ValueAnimator();
	// Functions
	virtual void  addUpdateListener(AndroidCXX::android_animation_ValueAnimator_AnimatorUpdateListener const& arg0) ;
	virtual void  cancel() ;
	virtual AndroidCXX::android_animation_ValueAnimator * clone() ;
	virtual void  end() ;
	virtual float  getAnimatedFraction() ;
	virtual AndroidCXX::java_lang_Object * getAnimatedValue(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_Object * getAnimatedValue() ;
	virtual long  getCurrentPlayTime() ;
	virtual long  getDuration() ;
	static long  getFrameDelay() ;
	virtual AndroidCXX::android_animation_TimeInterpolator * getInterpolator() ;
	virtual int  getRepeatCount() ;
	virtual int  getRepeatMode() ;
	virtual long  getStartDelay() ;
	virtual std::vector<android_animation_PropertyValuesHolder>  getValues() ;
	virtual bool  isRunning() ;
	virtual bool  isStarted() ;
	static AndroidCXX::android_animation_ValueAnimator * ofFloat(std::vector<float> const& arg0) ;
	static AndroidCXX::android_animation_ValueAnimator * ofInt(std::vector<int> const& arg0) ;
	static AndroidCXX::android_animation_ValueAnimator * ofObject(AndroidCXX::android_animation_TypeEvaluator const& arg0,std::vector<java_lang_Object> const& arg1) ;
	static AndroidCXX::android_animation_ValueAnimator * ofPropertyValuesHolder(std::vector<android_animation_PropertyValuesHolder> const& arg0) ;
	virtual void  removeAllUpdateListeners() ;
	virtual void  removeUpdateListener(AndroidCXX::android_animation_ValueAnimator_AnimatorUpdateListener const& arg0) ;
	virtual void  reverse() ;
	virtual void  setCurrentPlayTime(long const& arg0) ;
	virtual AndroidCXX::android_animation_ValueAnimator * setDuration(long const& arg0) ;
	virtual void  setEvaluator(AndroidCXX::android_animation_TypeEvaluator const& arg0) ;
	virtual void  setFloatValues(std::vector<float> const& arg0) ;
	static void  setFrameDelay(long const& arg0) ;
	virtual void  setIntValues(std::vector<int> const& arg0) ;
	virtual void  setInterpolator(AndroidCXX::android_animation_TimeInterpolator const& arg0) ;
	virtual void  setObjectValues(std::vector<java_lang_Object> const& arg0) ;
	virtual void  setRepeatCount(int const& arg0) ;
	virtual void  setRepeatMode(int const& arg0) ;
	virtual void  setStartDelay(long const& arg0) ;
	virtual void  setValues(std::vector<android_animation_PropertyValuesHolder> const& arg0) ;
	virtual void  start() ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_animation_ValueAnimator
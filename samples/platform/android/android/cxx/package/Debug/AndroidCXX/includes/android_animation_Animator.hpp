/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 		 
	
	
 		 
 		 
 		 
	
 	
 		 



























// Generated Code 

#ifndef _android_animation_Animator
#define _android_animation_Animator
//
// Scroll Down 
//



#include <java_lang_Cloneable.hpp>

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


class android_animation_TimeInterpolator;

class java_lang_Object;

class android_animation_Animator_AnimatorListener;

class java_util_ArrayList;

class android_animation_Animator : public java_lang_Cloneable
{
public:

	android_animation_Animator(const android_animation_Animator& cc);
	android_animation_Animator(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_animation_Animator();
	// Functions
	virtual AndroidCXX::android_animation_Animator * clone() ;
	virtual void  start() ;
	virtual void  end() ;
	virtual void  setInterpolator(AndroidCXX::android_animation_TimeInterpolator const& arg0) ;
	virtual AndroidCXX::android_animation_Animator * setDuration(long const& arg0) ;
	virtual void  cancel() ;
	virtual long  getDuration() ;
	virtual AndroidCXX::android_animation_TimeInterpolator * getInterpolator() ;
	virtual long  getStartDelay() ;
	virtual void  setStartDelay(long const& arg0) ;
	virtual void  setTarget(AndroidCXX::java_lang_Object const& arg0) ;
	virtual bool  isRunning() ;
	virtual bool  isStarted() ;
	virtual void  addListener(AndroidCXX::android_animation_Animator_AnimatorListener const& arg0) ;
	virtual void  removeListener(AndroidCXX::android_animation_Animator_AnimatorListener const& arg0) ;
	virtual AndroidCXX::java_util_ArrayList * getListeners() ;
	virtual void  removeAllListeners() ;
	virtual void  setupStartValues() ;
	virtual void  setupEndValues() ;

protected:
	android_animation_Animator();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_animation_Animator
/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 		 
 		 
 		 
 		 
 		 


 		 
 		 
















































// Generated Code 

#ifndef _android_view_animation_Animation
#define _android_view_animation_Animation
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

class android_view_animation_Interpolator;

class android_view_animation_Transformation;

class android_view_animation_Animation_AnimationListener;

class android_content_Context;

class android_util_AttributeSet;

class android_view_animation_Animation : public AndroidCXX::java_lang_Cloneable
{
public:

	android_view_animation_Animation(const android_view_animation_Animation& cc);
	android_view_animation_Animation(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_view_animation_Animation();
	// Functions
	virtual void  cancel() ;
	virtual long  computeDurationHint() ;
	virtual int  getBackgroundColor() ;
	virtual bool  getDetachWallpaper() ;
	virtual long  getDuration() ;
	virtual bool  getFillAfter() ;
	virtual bool  getFillBefore() ;
	virtual AndroidCXX::android_view_animation_Interpolator * getInterpolator() ;
	virtual int  getRepeatCount() ;
	virtual int  getRepeatMode() ;
	virtual long  getStartOffset() ;
	virtual long  getStartTime() ;
	virtual bool  getTransformation(long const& arg0,AndroidCXX::android_view_animation_Transformation const& arg1,float const& arg2) ;
	virtual bool  getTransformation(long const& arg0,AndroidCXX::android_view_animation_Transformation const& arg1) ;
	virtual int  getZAdjustment() ;
	virtual bool  hasEnded() ;
	virtual bool  hasStarted() ;
	virtual void  initialize(int const& arg0,int const& arg1,int const& arg2,int const& arg3) ;
	virtual bool  isFillEnabled() ;
	virtual bool  isInitialized() ;
	virtual void  reset() ;
	virtual void  restrictDuration(long const& arg0) ;
	virtual void  scaleCurrentDuration(float const& arg0) ;
	virtual void  setAnimationListener(AndroidCXX::android_view_animation_Animation_AnimationListener const& arg0) ;
	virtual void  setBackgroundColor(int const& arg0) ;
	virtual void  setDetachWallpaper(bool const& arg0) ;
	virtual void  setDuration(long const& arg0) ;
	virtual void  setFillAfter(bool const& arg0) ;
	virtual void  setFillBefore(bool const& arg0) ;
	virtual void  setFillEnabled(bool const& arg0) ;
	virtual void  setInterpolator(AndroidCXX::android_content_Context const& arg0,int const& arg1) ;
	virtual void  setInterpolator(AndroidCXX::android_view_animation_Interpolator const& arg0) ;
	virtual void  setRepeatCount(int const& arg0) ;
	virtual void  setRepeatMode(int const& arg0) ;
	virtual void  setStartOffset(long const& arg0) ;
	virtual void  setStartTime(long const& arg0) ;
	virtual void  setZAdjustment(int const& arg0) ;
	virtual void  startNow() ;
	virtual void  start() ;
	virtual bool  willChangeBounds() ;
	virtual bool  willChangeTransformationMatrix() ;

protected:
	android_view_animation_Animation();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_animation_Animation
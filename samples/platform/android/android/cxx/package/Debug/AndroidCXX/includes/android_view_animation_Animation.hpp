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

class android_content_Context;

class android_view_animation_Animation_AnimationListener;

class android_view_animation_Transformation;

class android_util_AttributeSet;

class android_view_animation_Animation : public java_lang_Cloneable
{
public:

	android_view_animation_Animation(const android_view_animation_Animation& cc);
	android_view_animation_Animation(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_animation_Animation();
	// Functions
	virtual void  start() ;
	virtual void  reset() ;
	virtual void  initialize(int const& arg0,int const& arg1,int const& arg2,int const& arg3) ;
	virtual void  setBackgroundColor(int const& arg0) ;
	virtual void  setDuration(long const& arg0) ;
	virtual long  getDuration() ;
	virtual void  setInterpolator(AndroidCXX::android_view_animation_Interpolator const& arg0) ;
	virtual void  setInterpolator(AndroidCXX::android_content_Context const& arg0,int const& arg1) ;
	virtual AndroidCXX::android_view_animation_Interpolator * getInterpolator() ;
	virtual void  cancel() ;
	virtual long  getStartOffset() ;
	virtual bool  isInitialized() ;
	virtual void  setStartOffset(long const& arg0) ;
	virtual void  restrictDuration(long const& arg0) ;
	virtual void  scaleCurrentDuration(float const& arg0) ;
	virtual void  setStartTime(long const& arg0) ;
	virtual void  startNow() ;
	virtual void  setRepeatMode(int const& arg0) ;
	virtual void  setRepeatCount(int const& arg0) ;
	virtual bool  isFillEnabled() ;
	virtual void  setFillEnabled(bool const& arg0) ;
	virtual void  setFillBefore(bool const& arg0) ;
	virtual void  setFillAfter(bool const& arg0) ;
	virtual void  setZAdjustment(int const& arg0) ;
	virtual void  setDetachWallpaper(bool const& arg0) ;
	virtual long  getStartTime() ;
	virtual int  getRepeatMode() ;
	virtual int  getRepeatCount() ;
	virtual bool  getFillBefore() ;
	virtual bool  getFillAfter() ;
	virtual int  getZAdjustment() ;
	virtual int  getBackgroundColor() ;
	virtual bool  getDetachWallpaper() ;
	virtual bool  willChangeTransformationMatrix() ;
	virtual bool  willChangeBounds() ;
	virtual void  setAnimationListener(AndroidCXX::android_view_animation_Animation_AnimationListener const& arg0) ;
	virtual long  computeDurationHint() ;
	virtual bool  getTransformation(long const& arg0,AndroidCXX::android_view_animation_Transformation const& arg1,float const& arg2) ;
	virtual bool  getTransformation(long const& arg0,AndroidCXX::android_view_animation_Transformation const& arg1) ;
	virtual bool  hasStarted() ;
	virtual bool  hasEnded() ;

protected:
	android_view_animation_Animation();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_animation_Animation
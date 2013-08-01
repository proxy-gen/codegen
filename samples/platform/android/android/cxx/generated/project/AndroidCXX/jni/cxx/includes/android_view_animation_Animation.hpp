/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <android_content_Context.hpp>

#include <android_view_animation_Interpolator.hpp>

#include <android_view_animation_Animation_AnimationListener.hpp>

#include <android_view_animation_Transformation.hpp>

#include <android_util_AttributeSet.hpp>

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

class android_content_Context;

class android_view_animation_Interpolator;

class android_view_animation_Animation_AnimationListener;

class android_view_animation_Transformation;

class android_util_AttributeSet;

class android_view_animation_Animation
{
public:

	android_view_animation_Animation(const android_view_animation_Animation& cc);
	android_view_animation_Animation(Proxy proxy);
	// Public Constructors
	android_view_animation_Animation(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_view_animation_Animation();
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_animation_Animation();
	// Functions
	 void start();
	 void reset();
	 void initialize(int const& arg0,int const& arg1,int const& arg2,int const& arg3);
	 void cancel();
	 void setInterpolator(AndroidCXX::android_content_Context const& arg0,int const& arg1);
	 void setInterpolator(AndroidCXX::android_view_animation_Interpolator const& arg0);
	 void setDuration(long const& arg0);
	 void setAnimationListener(AndroidCXX::android_view_animation_Animation_AnimationListener const& arg0);
	 int getRepeatCount();
	 bool isInitialized();
	 void setStartOffset(long const& arg0);
	 void restrictDuration(long const& arg0);
	 void scaleCurrentDuration(float const& arg0);
	 void setStartTime(long const& arg0);
	 void startNow();
	 void setRepeatMode(int const& arg0);
	 void setRepeatCount(int const& arg0);
	 bool isFillEnabled();
	 void setFillEnabled(bool const& arg0);
	 void setFillBefore(bool const& arg0);
	 void setFillAfter(bool const& arg0);
	 void setZAdjustment(int const& arg0);
	 void setBackgroundColor(int const& arg0);
	 void setDetachWallpaper(bool const& arg0);
	 AndroidCXX::android_view_animation_Interpolator getInterpolator();
	 long getStartTime();
	 long getDuration();
	 long getStartOffset();
	 int getRepeatMode();
	 bool getFillBefore();
	 bool getFillAfter();
	 int getZAdjustment();
	 int getBackgroundColor();
	 bool getDetachWallpaper();
	 bool willChangeTransformationMatrix();
	 bool willChangeBounds();
	 long computeDurationHint();
	 bool getTransformation(long const& arg0,AndroidCXX::android_view_animation_Transformation const& arg1);
	 bool getTransformation(long const& arg0,AndroidCXX::android_view_animation_Transformation const& arg1,float const& arg2);
	 bool hasStarted();
	 bool hasEnded();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_animation_Animation
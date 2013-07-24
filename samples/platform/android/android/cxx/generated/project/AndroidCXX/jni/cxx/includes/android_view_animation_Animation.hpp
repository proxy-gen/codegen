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
	android_view_animation_Animation(void * proxy);
	// Public Constructors
	android_view_animation_Animation(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1);
	android_view_animation_Animation();
	// TODO: remove
	// 
	// Default Destructor
	virtual ~android_view_animation_Animation();
	// Functions
	 void start();
	 void reset();
	 void initialize(int& arg0,int& arg1,int& arg2,int& arg3);
	 void cancel();
	 void setInterpolator(AndroidCXX::android_content_Context& arg0,int& arg1);
	 void setInterpolator(AndroidCXX::android_view_animation_Interpolator& arg0);
	 void setDuration(long& arg0);
	 void setAnimationListener(AndroidCXX::android_view_animation_Animation_AnimationListener& arg0);
	 int getRepeatCount();
	 bool isInitialized();
	 void setStartOffset(long& arg0);
	 void restrictDuration(long& arg0);
	 void scaleCurrentDuration(float& arg0);
	 void setStartTime(long& arg0);
	 void startNow();
	 void setRepeatMode(int& arg0);
	 void setRepeatCount(int& arg0);
	 bool isFillEnabled();
	 void setFillEnabled(bool& arg0);
	 void setFillBefore(bool& arg0);
	 void setFillAfter(bool& arg0);
	 void setZAdjustment(int& arg0);
	 void setBackgroundColor(int& arg0);
	 void setDetachWallpaper(bool& arg0);
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
	 bool getTransformation(long& arg0,AndroidCXX::android_view_animation_Transformation& arg1);
	 bool getTransformation(long& arg0,AndroidCXX::android_view_animation_Transformation& arg1,float& arg2);
	 bool hasStarted();
	 bool hasEnded();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_animation_Animation
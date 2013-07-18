/*
 * Header (Abstract CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
		
 			


#ifndef _android_view_animation_Animation
#define _android_view_animation_Animation









































#include <android_view_animation_Animation_AnimationListener.hpp>
#include <android_view_animation_Interpolator.hpp>
#include <android_view_animation_Transformation.hpp>
#include <android_content_Context.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_view_animation_Animation
{
public:
 void start();
 void reset();
 void initialize(int& arg0);
 void cancel();
 void setInterpolator(android_content_Context& arg0,int& arg1,android_view_animation_Interpolator& arg2);
 void setDuration(long& arg0);
 void setAnimationListener(android_view_animation_Animation_AnimationListener& arg0);
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
 android_view_animation_Interpolator getInterpolator();
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
 bool getTransformation(long& arg0,android_view_animation_Transformation& arg1,float& arg2);
 bool hasStarted();
 bool hasEnded();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_animation_Animation
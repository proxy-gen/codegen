/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//




 		 
 		 
 		 
 		 
 		 
 		 
 		 





























// Generated Code 

#ifndef _android_widget_OverScroller
#define _android_widget_OverScroller
//
// Scroll Down 
//


#include <android_content_Context.hpp>

#include <android_view_animation_Interpolator.hpp>

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

class android_widget_OverScroller
{
public:

	android_widget_OverScroller(const android_widget_OverScroller& cc);
	android_widget_OverScroller(void * proxy);
	// Public Constructors
	android_widget_OverScroller(AndroidCXX::android_content_Context& arg0);
	android_widget_OverScroller(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_view_animation_Interpolator& arg1);
	android_widget_OverScroller(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_view_animation_Interpolator& arg1,float& arg2,float& arg3);
	android_widget_OverScroller(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_view_animation_Interpolator& arg1,float& arg2,float& arg3,bool& arg4);
	// TODO: remove
	// 
	// android_widget_OverScroller();
	// 
	// Default Destructor
	virtual ~android_widget_OverScroller();
	// Functions
	 void setFriction(float& arg0);
	 bool isFinished();
	 void forceFinished(bool& arg0);
	 int getCurrX();
	 int getCurrY();
	 float getCurrVelocity();
	 int getStartX();
	 int getStartY();
	 int getFinalX();
	 int getFinalY();
	 bool computeScrollOffset();
	 void startScroll(int& arg0,int& arg1,int& arg2,int& arg3);
	 void startScroll(int& arg0,int& arg1,int& arg2,int& arg3,int& arg4);
	 void fling(int& arg0,int& arg1,int& arg2,int& arg3,int& arg4,int& arg5,int& arg6,int& arg7);
	 void fling(int& arg0,int& arg1,int& arg2,int& arg3,int& arg4,int& arg5,int& arg6,int& arg7,int& arg8,int& arg9);
	 void abortAnimation();
	 bool springBack(int& arg0,int& arg1,int& arg2,int& arg3,int& arg4,int& arg5);
	 void notifyHorizontalEdgeReached(int& arg0,int& arg1,int& arg2);
	 void notifyVerticalEdgeReached(int& arg0,int& arg1,int& arg2);
	 bool isOverScrolled();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_OverScroller
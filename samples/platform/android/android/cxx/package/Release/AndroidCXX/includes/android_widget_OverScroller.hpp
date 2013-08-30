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
	android_widget_OverScroller(Proxy proxy);
	// Public Constructors
	android_widget_OverScroller(AndroidCXX::android_content_Context const& arg0);
	android_widget_OverScroller(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_view_animation_Interpolator const& arg1);
	android_widget_OverScroller(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_view_animation_Interpolator const& arg1,float const& arg2,float const& arg3);
	android_widget_OverScroller(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_view_animation_Interpolator const& arg1,float const& arg2,float const& arg3,bool const& arg4);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_OverScroller();
	// Functions
	 void setFriction(float const& arg0);
	 bool isFinished();
	 void forceFinished(bool const& arg0);
	 int getCurrX();
	 int getCurrY();
	 float getCurrVelocity();
	 int getStartX();
	 int getStartY();
	 int getFinalX();
	 int getFinalY();
	 bool computeScrollOffset();
	 void startScroll(int const& arg0,int const& arg1,int const& arg2,int const& arg3);
	 void startScroll(int const& arg0,int const& arg1,int const& arg2,int const& arg3,int const& arg4);
	 void fling(int const& arg0,int const& arg1,int const& arg2,int const& arg3,int const& arg4,int const& arg5,int const& arg6,int const& arg7);
	 void fling(int const& arg0,int const& arg1,int const& arg2,int const& arg3,int const& arg4,int const& arg5,int const& arg6,int const& arg7,int const& arg8,int const& arg9);
	 void abortAnimation();
	 bool springBack(int const& arg0,int const& arg1,int const& arg2,int const& arg3,int const& arg4,int const& arg5);
	 void notifyHorizontalEdgeReached(int const& arg0,int const& arg1,int const& arg2);
	 void notifyVerticalEdgeReached(int const& arg0,int const& arg1,int const& arg2);
	 bool isOverScrolled();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_OverScroller
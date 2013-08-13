/*
 * Header (Instance CXX)
 * Author: codegen
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

	// Public ConstrucXXX
	android_widget_OverScroller(AndroidCXX::android_content_Context const& arg0);
	android_widget_OverScroller(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_view_animation_Interpolator const& arg1);
	android_widget_OverScroller(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_view_animation_Interpolator const& arg1,float const& arg2,float const& arg3);
	android_widget_OverScroller(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_view_animation_Interpolator const& arg1,float const& arg2,float const& arg3,bool const& arg4);
	android_widget_OverScroller(const android_widget_OverScroller& cc);
	android_widget_OverScroller(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_OverScroller();
	// Functions
	virtual void  setFriction(float const& arg0) ;
	virtual bool  isFinished() ;
	virtual void  fling(int const& arg0,int const& arg1,int const& arg2,int const& arg3,int const& arg4,int const& arg5,int const& arg6,int const& arg7) ;
	virtual void  fling(int const& arg0,int const& arg1,int const& arg2,int const& arg3,int const& arg4,int const& arg5,int const& arg6,int const& arg7,int const& arg8,int const& arg9) ;
	virtual void  forceFinished(bool const& arg0) ;
	virtual int  getCurrX() ;
	virtual int  getCurrY() ;
	virtual float  getCurrVelocity() ;
	virtual int  getStartX() ;
	virtual int  getStartY() ;
	virtual int  getFinalX() ;
	virtual int  getFinalY() ;
	virtual bool  computeScrollOffset() ;
	virtual void  startScroll(int const& arg0,int const& arg1,int const& arg2,int const& arg3) ;
	virtual void  startScroll(int const& arg0,int const& arg1,int const& arg2,int const& arg3,int const& arg4) ;
	virtual bool  springBack(int const& arg0,int const& arg1,int const& arg2,int const& arg3,int const& arg4,int const& arg5) ;
	virtual void  notifyHorizontalEdgeReached(int const& arg0,int const& arg1,int const& arg2) ;
	virtual void  notifyVerticalEdgeReached(int const& arg0,int const& arg1,int const& arg2) ;
	virtual bool  isOverScrolled() ;
	virtual void  abortAnimation() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_OverScroller
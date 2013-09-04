/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//





 		 
 		 
 		 
 		 
 		 




























// Generated Code 

#ifndef _android_widget_Scroller
#define _android_widget_Scroller
//
// Scroll Down 
//


#include <android_content_Context.hpp>

#include <android_view_animation_Interpolator.hpp>


#include <java_lang_Object.hpp>

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

class android_widget_Scroller : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	android_widget_Scroller(AndroidCXX::android_content_Context const& arg0,Proxy * aProxy = new Proxy());
	android_widget_Scroller(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_view_animation_Interpolator const& arg1,Proxy * aProxy = new Proxy());
	android_widget_Scroller(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_view_animation_Interpolator const& arg1,bool const& arg2,Proxy * aProxy = new Proxy());
	android_widget_Scroller(const android_widget_Scroller& cc);
	android_widget_Scroller(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_widget_Scroller();
	// Functions
	virtual void  abortAnimation() ;
	virtual bool  computeScrollOffset() ;
	virtual void  extendDuration(int const& arg0) ;
	virtual void  fling(int const& arg0,int const& arg1,int const& arg2,int const& arg3,int const& arg4,int const& arg5,int const& arg6,int const& arg7) ;
	virtual void  forceFinished(bool const& arg0) ;
	virtual float  getCurrVelocity() ;
	virtual int  getCurrX() ;
	virtual int  getCurrY() ;
	virtual int  getDuration() ;
	virtual int  getFinalX() ;
	virtual int  getFinalY() ;
	virtual int  getStartX() ;
	virtual int  getStartY() ;
	virtual bool  isFinished() ;
	virtual void  setFinalX(int const& arg0) ;
	virtual void  setFinalY(int const& arg0) ;
	virtual void  setFriction(float const& arg0) ;
	virtual void  startScroll(int const& arg0,int const& arg1,int const& arg2,int const& arg3,int const& arg4) ;
	virtual void  startScroll(int const& arg0,int const& arg1,int const& arg2,int const& arg3) ;
	virtual int  timePassed() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_Scroller
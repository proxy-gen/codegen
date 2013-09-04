/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 	
 		 
 		 
	
 		 
 		 
 		 
 		 
	
 		 
	
	
	
 	
 	
	
 		 
 	
 	
	
 		 
 		 
	
	
 		 
 		 



























































































// Generated Code 

#ifndef _android_view_MotionEvent
#define _android_view_MotionEvent
//
// Scroll Down 
//


#include <android_view_MotionEvent_PointerCoords.hpp>

#include <java_lang_String.hpp>

#include <android_view_MotionEvent_PointerProperties.hpp>

#include <android_graphics_Matrix.hpp>

#include <android_os_Parcel.hpp>


#include <android_view_InputEvent.hpp>

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

class android_view_MotionEvent_PointerCoords;

class java_lang_String;

class android_view_MotionEvent_PointerProperties;


class android_graphics_Matrix;

class android_os_Parcel;

class android_view_MotionEvent : public AndroidCXX::android_view_InputEvent
{
public:

	// Public Constructor
	android_view_MotionEvent(const android_view_MotionEvent& cc);
	android_view_MotionEvent(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_view_MotionEvent();
	// Functions
	virtual void  addBatch(long const& arg0,std::vector<AndroidCXX::android_view_MotionEvent_PointerCoords> const& arg1,int const& arg2) ;
	virtual void  addBatch(long const& arg0,float const& arg1,float const& arg2,float const& arg3,float const& arg4,int const& arg5) ;
	static int  axisFromString(AndroidCXX::java_lang_String const& arg0) ;
	static AndroidCXX::java_lang_String * axisToString(int const& arg0) ;
	virtual int  findPointerIndex(int const& arg0) ;
	virtual int  getActionIndex() ;
	virtual int  getActionMasked() ;
	virtual int  getAction() ;
	virtual float  getAxisValue(int const& arg0,int const& arg1) ;
	virtual float  getAxisValue(int const& arg0) ;
	virtual int  getButtonState() ;
	virtual int  getDeviceId() ;
	virtual long  getDownTime() ;
	virtual int  getEdgeFlags() ;
	virtual long  getEventTime() ;
	virtual int  getFlags() ;
	virtual float  getHistoricalAxisValue(int const& arg0,int const& arg1,int const& arg2) ;
	virtual float  getHistoricalAxisValue(int const& arg0,int const& arg1) ;
	virtual long  getHistoricalEventTime(int const& arg0) ;
	virtual float  getHistoricalOrientation(int const& arg0,int const& arg1) ;
	virtual float  getHistoricalOrientation(int const& arg0) ;
	virtual void  getHistoricalPointerCoords(int const& arg0,int const& arg1,AndroidCXX::android_view_MotionEvent_PointerCoords const& arg2) ;
	virtual float  getHistoricalPressure(int const& arg0,int const& arg1) ;
	virtual float  getHistoricalPressure(int const& arg0) ;
	virtual float  getHistoricalSize(int const& arg0,int const& arg1) ;
	virtual float  getHistoricalSize(int const& arg0) ;
	virtual float  getHistoricalToolMajor(int const& arg0,int const& arg1) ;
	virtual float  getHistoricalToolMajor(int const& arg0) ;
	virtual float  getHistoricalToolMinor(int const& arg0,int const& arg1) ;
	virtual float  getHistoricalToolMinor(int const& arg0) ;
	virtual float  getHistoricalTouchMajor(int const& arg0,int const& arg1) ;
	virtual float  getHistoricalTouchMajor(int const& arg0) ;
	virtual float  getHistoricalTouchMinor(int const& arg0,int const& arg1) ;
	virtual float  getHistoricalTouchMinor(int const& arg0) ;
	virtual float  getHistoricalX(int const& arg0,int const& arg1) ;
	virtual float  getHistoricalX(int const& arg0) ;
	virtual float  getHistoricalY(int const& arg0,int const& arg1) ;
	virtual float  getHistoricalY(int const& arg0) ;
	virtual int  getHistorySize() ;
	virtual int  getMetaState() ;
	virtual float  getOrientation(int const& arg0) ;
	virtual float  getOrientation() ;
	virtual void  getPointerCoords(int const& arg0,AndroidCXX::android_view_MotionEvent_PointerCoords const& arg1) ;
	virtual int  getPointerCount() ;
	virtual int  getPointerId(int const& arg0) ;
	virtual void  getPointerProperties(int const& arg0,AndroidCXX::android_view_MotionEvent_PointerProperties const& arg1) ;
	virtual float  getPressure(int const& arg0) ;
	virtual float  getPressure() ;
	virtual float  getRawX() ;
	virtual float  getRawY() ;
	virtual float  getSize(int const& arg0) ;
	virtual float  getSize() ;
	virtual int  getSource() ;
	virtual float  getToolMajor(int const& arg0) ;
	virtual float  getToolMajor() ;
	virtual float  getToolMinor(int const& arg0) ;
	virtual float  getToolMinor() ;
	virtual int  getToolType(int const& arg0) ;
	virtual float  getTouchMajor(int const& arg0) ;
	virtual float  getTouchMajor() ;
	virtual float  getTouchMinor(int const& arg0) ;
	virtual float  getTouchMinor() ;
	virtual float  getX(int const& arg0) ;
	virtual float  getXPrecision() ;
	virtual float  getX() ;
	virtual float  getY(int const& arg0) ;
	virtual float  getYPrecision() ;
	virtual float  getY() ;
	static AndroidCXX::android_view_MotionEvent * obtainNoHistory(AndroidCXX::android_view_MotionEvent const& arg0) ;
	static AndroidCXX::android_view_MotionEvent * obtain(AndroidCXX::android_view_MotionEvent const& arg0) ;
	static AndroidCXX::android_view_MotionEvent * obtain(long const& arg0,long const& arg1,int const& arg2,float const& arg3,float const& arg4,float const& arg5,float const& arg6,int const& arg7,float const& arg8,float const& arg9,int const& arg10,int const& arg11) ;
	static AndroidCXX::android_view_MotionEvent * obtain(long const& arg0,long const& arg1,int const& arg2,float const& arg3,float const& arg4,int const& arg5) ;
	static AndroidCXX::android_view_MotionEvent * obtain(long const& arg0,long const& arg1,int const& arg2,int const& arg3,std::vector<int> const& arg4,std::vector<AndroidCXX::android_view_MotionEvent_PointerCoords> const& arg5,int const& arg6,float const& arg7,float const& arg8,int const& arg9,int const& arg10,int const& arg11,int const& arg12) ;
	static AndroidCXX::android_view_MotionEvent * obtain(long const& arg0,long const& arg1,int const& arg2,int const& arg3,std::vector<AndroidCXX::android_view_MotionEvent_PointerProperties> const& arg4,std::vector<AndroidCXX::android_view_MotionEvent_PointerCoords> const& arg5,int const& arg6,int const& arg7,float const& arg8,float const& arg9,int const& arg10,int const& arg11,int const& arg12,int const& arg13) ;
	static AndroidCXX::android_view_MotionEvent * obtain(long const& arg0,long const& arg1,int const& arg2,int const& arg3,float const& arg4,float const& arg5,float const& arg6,float const& arg7,int const& arg8,float const& arg9,float const& arg10,int const& arg11,int const& arg12) ;
	virtual void  offsetLocation(float const& arg0,float const& arg1) ;
	virtual void  recycle() ;
	virtual void  setAction(int const& arg0) ;
	virtual void  setEdgeFlags(int const& arg0) ;
	virtual void  setLocation(float const& arg0,float const& arg1) ;
	virtual void  setSource(int const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual void  transform(AndroidCXX::android_graphics_Matrix const& arg0) ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_MotionEvent
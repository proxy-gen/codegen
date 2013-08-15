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


#include <java_lang_String.hpp>

#include <android_graphics_Matrix.hpp>

#include <android_os_Parcel.hpp>

#include <android_view_MotionEvent_PointerCoords.hpp>

#include <android_view_MotionEvent_PointerProperties.hpp>


#include <android_os_Parcelable.hpp>

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

class java_lang_String;

class android_graphics_Matrix;

class android_os_Parcel;


class android_view_MotionEvent_PointerCoords;

class android_view_MotionEvent_PointerProperties;

class android_view_MotionEvent : public android_os_Parcelable
{
public:

	// Public ConstrucXXX
	android_view_MotionEvent(const android_view_MotionEvent& cc);
	android_view_MotionEvent(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_MotionEvent();
	// Functions
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual void  transform(AndroidCXX::android_graphics_Matrix const& arg0) ;
	virtual float  getSize() ;
	virtual float  getSize(int const& arg0) ;
	virtual float  getY(int const& arg0) ;
	virtual float  getY() ;
	virtual float  getX(int const& arg0) ;
	virtual float  getX() ;
	virtual float  getOrientation(int const& arg0) ;
	virtual float  getOrientation() ;
	virtual int  getAction() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;
	static AndroidCXX::android_view_MotionEvent * obtain(long const& arg0,long const& arg1,int const& arg2,float const& arg3,float const& arg4,int const& arg5) ;
	static AndroidCXX::android_view_MotionEvent * obtain(long const& arg0,long const& arg1,int const& arg2,int const& arg3,float const& arg4,float const& arg5,float const& arg6,float const& arg7,int const& arg8,float const& arg9,float const& arg10,int const& arg11,int const& arg12) ;
	static AndroidCXX::android_view_MotionEvent * obtain(long const& arg0,long const& arg1,int const& arg2,float const& arg3,float const& arg4,float const& arg5,float const& arg6,int const& arg7,float const& arg8,float const& arg9,int const& arg10,int const& arg11) ;
	static AndroidCXX::android_view_MotionEvent * obtain(long const& arg0,long const& arg1,int const& arg2,int const& arg3,std::vector<int> const& arg4,std::vector<android_view_MotionEvent_PointerCoords> const& arg5,int const& arg6,float const& arg7,float const& arg8,int const& arg9,int const& arg10,int const& arg11,int const& arg12) ;
	static AndroidCXX::android_view_MotionEvent * obtain(long const& arg0,long const& arg1,int const& arg2,int const& arg3,std::vector<android_view_MotionEvent_PointerProperties> const& arg4,std::vector<android_view_MotionEvent_PointerCoords> const& arg5,int const& arg6,int const& arg7,float const& arg8,float const& arg9,int const& arg10,int const& arg11,int const& arg12,int const& arg13) ;
	static AndroidCXX::android_view_MotionEvent * obtain(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual void  recycle() ;
	virtual int  getFlags() ;
	virtual void  setAction(int const& arg0) ;
	static AndroidCXX::android_view_MotionEvent * obtainNoHistory(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual int  getDeviceId() ;
	virtual int  getSource() ;
	virtual void  setSource(int const& arg0) ;
	virtual int  getActionMasked() ;
	virtual int  getActionIndex() ;
	virtual long  getDownTime() ;
	virtual long  getEventTime() ;
	virtual float  getPressure() ;
	virtual float  getPressure(int const& arg0) ;
	virtual float  getTouchMajor() ;
	virtual float  getTouchMajor(int const& arg0) ;
	virtual float  getTouchMinor() ;
	virtual float  getTouchMinor(int const& arg0) ;
	virtual float  getToolMajor() ;
	virtual float  getToolMajor(int const& arg0) ;
	virtual float  getToolMinor() ;
	virtual float  getToolMinor(int const& arg0) ;
	virtual float  getAxisValue(int const& arg0,int const& arg1) ;
	virtual float  getAxisValue(int const& arg0) ;
	virtual int  getPointerCount() ;
	virtual int  getPointerId(int const& arg0) ;
	virtual int  getToolType(int const& arg0) ;
	virtual int  findPointerIndex(int const& arg0) ;
	virtual void  getPointerCoords(int const& arg0,AndroidCXX::android_view_MotionEvent_PointerCoords const& arg1) ;
	virtual void  getPointerProperties(int const& arg0,AndroidCXX::android_view_MotionEvent_PointerProperties const& arg1) ;
	virtual int  getMetaState() ;
	virtual int  getButtonState() ;
	virtual float  getRawX() ;
	virtual float  getRawY() ;
	virtual float  getXPrecision() ;
	virtual float  getYPrecision() ;
	virtual int  getHistorySize() ;
	virtual long  getHistoricalEventTime(int const& arg0) ;
	virtual float  getHistoricalX(int const& arg0) ;
	virtual float  getHistoricalX(int const& arg0,int const& arg1) ;
	virtual float  getHistoricalY(int const& arg0,int const& arg1) ;
	virtual float  getHistoricalY(int const& arg0) ;
	virtual float  getHistoricalPressure(int const& arg0) ;
	virtual float  getHistoricalPressure(int const& arg0,int const& arg1) ;
	virtual float  getHistoricalSize(int const& arg0) ;
	virtual float  getHistoricalSize(int const& arg0,int const& arg1) ;
	virtual float  getHistoricalTouchMajor(int const& arg0) ;
	virtual float  getHistoricalTouchMajor(int const& arg0,int const& arg1) ;
	virtual float  getHistoricalTouchMinor(int const& arg0,int const& arg1) ;
	virtual float  getHistoricalTouchMinor(int const& arg0) ;
	virtual float  getHistoricalToolMajor(int const& arg0,int const& arg1) ;
	virtual float  getHistoricalToolMajor(int const& arg0) ;
	virtual float  getHistoricalToolMinor(int const& arg0,int const& arg1) ;
	virtual float  getHistoricalToolMinor(int const& arg0) ;
	virtual float  getHistoricalOrientation(int const& arg0,int const& arg1) ;
	virtual float  getHistoricalOrientation(int const& arg0) ;
	virtual float  getHistoricalAxisValue(int const& arg0,int const& arg1) ;
	virtual float  getHistoricalAxisValue(int const& arg0,int const& arg1,int const& arg2) ;
	virtual void  getHistoricalPointerCoords(int const& arg0,int const& arg1,AndroidCXX::android_view_MotionEvent_PointerCoords const& arg2) ;
	virtual int  getEdgeFlags() ;
	virtual void  setEdgeFlags(int const& arg0) ;
	virtual void  offsetLocation(float const& arg0,float const& arg1) ;
	virtual void  setLocation(float const& arg0,float const& arg1) ;
	virtual void  addBatch(long const& arg0,std::vector<android_view_MotionEvent_PointerCoords> const& arg1,int const& arg2) ;
	virtual void  addBatch(long const& arg0,float const& arg1,float const& arg2,float const& arg3,float const& arg4,int const& arg5) ;
	static AndroidCXX::java_lang_String * axisToString(int const& arg0) ;
	static int  axisFromString(AndroidCXX::java_lang_String const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_MotionEvent
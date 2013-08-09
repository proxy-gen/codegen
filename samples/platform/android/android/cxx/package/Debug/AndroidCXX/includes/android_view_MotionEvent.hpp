/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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

class android_view_MotionEvent;

class android_view_MotionEvent_PointerCoords;

class android_view_MotionEvent_PointerProperties;

class android_view_MotionEvent
{
public:

	android_view_MotionEvent(const android_view_MotionEvent& cc);
	android_view_MotionEvent(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_MotionEvent();
	// Functions
	 AndroidCXX::java_lang_String toString();
	 void transform(AndroidCXX::android_graphics_Matrix const& arg0);
	 float getSize(int const& arg0);
	 float getSize();
	 float getY();
	 float getY(int const& arg0);
	 float getX();
	 float getX(int const& arg0);
	 void writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1);
	static AndroidCXX::android_view_MotionEvent obtain(long const& arg0,long const& arg1,int const& arg2,float const& arg3,float const& arg4,float const& arg5,float const& arg6,int const& arg7,float const& arg8,float const& arg9,int const& arg10,int const& arg11);
	static AndroidCXX::android_view_MotionEvent obtain(long const& arg0,long const& arg1,int const& arg2,int const& arg3,std::vector<int> const& arg4,std::vector<AndroidCXX::android_view_MotionEvent_PointerCoords > const& arg5,int const& arg6,float const& arg7,float const& arg8,int const& arg9,int const& arg10,int const& arg11,int const& arg12);
	static AndroidCXX::android_view_MotionEvent obtain(long const& arg0,long const& arg1,int const& arg2,int const& arg3,std::vector<AndroidCXX::android_view_MotionEvent_PointerProperties > const& arg4,std::vector<AndroidCXX::android_view_MotionEvent_PointerCoords > const& arg5,int const& arg6,int const& arg7,float const& arg8,float const& arg9,int const& arg10,int const& arg11,int const& arg12,int const& arg13);
	static AndroidCXX::android_view_MotionEvent obtain(AndroidCXX::android_view_MotionEvent const& arg0);
	static AndroidCXX::android_view_MotionEvent obtain(long const& arg0,long const& arg1,int const& arg2,float const& arg3,float const& arg4,int const& arg5);
	static AndroidCXX::android_view_MotionEvent obtain(long const& arg0,long const& arg1,int const& arg2,int const& arg3,float const& arg4,float const& arg5,float const& arg6,float const& arg7,int const& arg8,float const& arg9,float const& arg10,int const& arg11,int const& arg12);
	 void recycle();
	 int getAction();
	 int getFlags();
	 void setAction(int const& arg0);
	 float getOrientation(int const& arg0);
	 float getOrientation();
	 int getDeviceId();
	 int getSource();
	 void setSource(int const& arg0);
	 int getMetaState();
	 long getDownTime();
	 long getEventTime();
	static AndroidCXX::android_view_MotionEvent obtainNoHistory(AndroidCXX::android_view_MotionEvent const& arg0);
	 int getActionMasked();
	 int getActionIndex();
	 float getPressure();
	 float getPressure(int const& arg0);
	 float getTouchMajor();
	 float getTouchMajor(int const& arg0);
	 float getTouchMinor();
	 float getTouchMinor(int const& arg0);
	 float getToolMajor(int const& arg0);
	 float getToolMajor();
	 float getToolMinor();
	 float getToolMinor(int const& arg0);
	 float getAxisValue(int const& arg0,int const& arg1);
	 float getAxisValue(int const& arg0);
	 int getPointerCount();
	 int getPointerId(int const& arg0);
	 int getToolType(int const& arg0);
	 int findPointerIndex(int const& arg0);
	 void getPointerCoords(int const& arg0,AndroidCXX::android_view_MotionEvent_PointerCoords const& arg1);
	 void getPointerProperties(int const& arg0,AndroidCXX::android_view_MotionEvent_PointerProperties const& arg1);
	 int getButtonState();
	 float getRawX();
	 float getRawY();
	 float getXPrecision();
	 float getYPrecision();
	 int getHistorySize();
	 long getHistoricalEventTime(int const& arg0);
	 float getHistoricalX(int const& arg0);
	 float getHistoricalX(int const& arg0,int const& arg1);
	 float getHistoricalY(int const& arg0);
	 float getHistoricalY(int const& arg0,int const& arg1);
	 float getHistoricalPressure(int const& arg0);
	 float getHistoricalPressure(int const& arg0,int const& arg1);
	 float getHistoricalSize(int const& arg0,int const& arg1);
	 float getHistoricalSize(int const& arg0);
	 float getHistoricalTouchMajor(int const& arg0);
	 float getHistoricalTouchMajor(int const& arg0,int const& arg1);
	 float getHistoricalTouchMinor(int const& arg0,int const& arg1);
	 float getHistoricalTouchMinor(int const& arg0);
	 float getHistoricalToolMajor(int const& arg0,int const& arg1);
	 float getHistoricalToolMajor(int const& arg0);
	 float getHistoricalToolMinor(int const& arg0);
	 float getHistoricalToolMinor(int const& arg0,int const& arg1);
	 float getHistoricalOrientation(int const& arg0);
	 float getHistoricalOrientation(int const& arg0,int const& arg1);
	 float getHistoricalAxisValue(int const& arg0,int const& arg1);
	 float getHistoricalAxisValue(int const& arg0,int const& arg1,int const& arg2);
	 void getHistoricalPointerCoords(int const& arg0,int const& arg1,AndroidCXX::android_view_MotionEvent_PointerCoords const& arg2);
	 int getEdgeFlags();
	 void setEdgeFlags(int const& arg0);
	 void offsetLocation(float const& arg0,float const& arg1);
	 void setLocation(float const& arg0,float const& arg1);
	 void addBatch(long const& arg0,std::vector<AndroidCXX::android_view_MotionEvent_PointerCoords > const& arg1,int const& arg2);
	 void addBatch(long const& arg0,float const& arg1,float const& arg2,float const& arg3,float const& arg4,int const& arg5);
	static AndroidCXX::java_lang_String axisToString(int const& arg0);
	static int axisFromString(AndroidCXX::java_lang_String const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_MotionEvent
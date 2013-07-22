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
	android_view_MotionEvent(void * proxy);
	// Public Constructors
	android_view_MotionEvent();
	// Default Destructor
	virtual ~android_view_MotionEvent();
	// Functions
	 AndroidCXX::java_lang_String toString();
	 void transform(AndroidCXX::android_graphics_Matrix& arg0);
	 float getSize(int& arg0);
	 float getSize();
	 float getY();
	 float getY(int& arg0);
	 float getX();
	 float getX(int& arg0);
	 void writeToParcel(AndroidCXX::android_os_Parcel& arg0,int& arg1);
	static AndroidCXX::android_view_MotionEvent obtain(long& arg0,long& arg1,int& arg2,float& arg3,float& arg4,float& arg5,float& arg6,int& arg7,float& arg8,float& arg9,int& arg10,int& arg11);
	static AndroidCXX::android_view_MotionEvent obtain(long& arg0,long& arg1,int& arg2,int& arg3,std::vector<int>& arg4,std::vector<AndroidCXX::android_view_MotionEvent_PointerCoords >& arg5,int& arg6,float& arg7,float& arg8,int& arg9,int& arg10,int& arg11,int& arg12);
	static AndroidCXX::android_view_MotionEvent obtain(long& arg0,long& arg1,int& arg2,int& arg3,std::vector<AndroidCXX::android_view_MotionEvent_PointerProperties >& arg4,std::vector<AndroidCXX::android_view_MotionEvent_PointerCoords >& arg5,int& arg6,int& arg7,float& arg8,float& arg9,int& arg10,int& arg11,int& arg12,int& arg13);
	static AndroidCXX::android_view_MotionEvent obtain(AndroidCXX::android_view_MotionEvent& arg0);
	static AndroidCXX::android_view_MotionEvent obtain(long& arg0,long& arg1,int& arg2,float& arg3,float& arg4,int& arg5);
	static AndroidCXX::android_view_MotionEvent obtain(long& arg0,long& arg1,int& arg2,int& arg3,float& arg4,float& arg5,float& arg6,float& arg7,int& arg8,float& arg9,float& arg10,int& arg11,int& arg12);
	 void recycle();
	 int getAction();
	 int getFlags();
	 void setAction(int& arg0);
	 float getOrientation(int& arg0);
	 float getOrientation();
	 int getDeviceId();
	 int getSource();
	 void setSource(int& arg0);
	 int getMetaState();
	 long getDownTime();
	 long getEventTime();
	static AndroidCXX::android_view_MotionEvent obtainNoHistory(AndroidCXX::android_view_MotionEvent& arg0);
	 int getActionMasked();
	 int getActionIndex();
	 float getPressure();
	 float getPressure(int& arg0);
	 float getTouchMajor();
	 float getTouchMajor(int& arg0);
	 float getTouchMinor();
	 float getTouchMinor(int& arg0);
	 float getToolMajor(int& arg0);
	 float getToolMajor();
	 float getToolMinor();
	 float getToolMinor(int& arg0);
	 float getAxisValue(int& arg0,int& arg1);
	 float getAxisValue(int& arg0);
	 int getPointerCount();
	 int getPointerId(int& arg0);
	 int getToolType(int& arg0);
	 int findPointerIndex(int& arg0);
	 void getPointerCoords(int& arg0,AndroidCXX::android_view_MotionEvent_PointerCoords& arg1);
	 void getPointerProperties(int& arg0,AndroidCXX::android_view_MotionEvent_PointerProperties& arg1);
	 int getButtonState();
	 float getRawX();
	 float getRawY();
	 float getXPrecision();
	 float getYPrecision();
	 int getHistorySize();
	 long getHistoricalEventTime(int& arg0);
	 float getHistoricalX(int& arg0);
	 float getHistoricalX(int& arg0,int& arg1);
	 float getHistoricalY(int& arg0);
	 float getHistoricalY(int& arg0,int& arg1);
	 float getHistoricalPressure(int& arg0);
	 float getHistoricalPressure(int& arg0,int& arg1);
	 float getHistoricalSize(int& arg0,int& arg1);
	 float getHistoricalSize(int& arg0);
	 float getHistoricalTouchMajor(int& arg0);
	 float getHistoricalTouchMajor(int& arg0,int& arg1);
	 float getHistoricalTouchMinor(int& arg0,int& arg1);
	 float getHistoricalTouchMinor(int& arg0);
	 float getHistoricalToolMajor(int& arg0,int& arg1);
	 float getHistoricalToolMajor(int& arg0);
	 float getHistoricalToolMinor(int& arg0);
	 float getHistoricalToolMinor(int& arg0,int& arg1);
	 float getHistoricalOrientation(int& arg0);
	 float getHistoricalOrientation(int& arg0,int& arg1);
	 float getHistoricalAxisValue(int& arg0,int& arg1);
	 float getHistoricalAxisValue(int& arg0,int& arg1,int& arg2);
	 void getHistoricalPointerCoords(int& arg0,int& arg1,AndroidCXX::android_view_MotionEvent_PointerCoords& arg2);
	 int getEdgeFlags();
	 void setEdgeFlags(int& arg0);
	 void offsetLocation(float& arg0,float& arg1);
	 void setLocation(float& arg0,float& arg1);
	 void addBatch(long& arg0,std::vector<AndroidCXX::android_view_MotionEvent_PointerCoords >& arg1,int& arg2);
	 void addBatch(long& arg0,float& arg1,float& arg2,float& arg3,float& arg4,int& arg5);
	static AndroidCXX::java_lang_String axisToString(int& arg0);
	static int axisFromString(AndroidCXX::java_lang_String& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_MotionEvent
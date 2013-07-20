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


#include <android_view_MotionEvent_PointerProperties.hpp>

#include <android_view_MotionEvent_PointerCoords.hpp>

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class java_lang_String;

class android_graphics_Matrix;

class android_os_Parcel;

class android_view_MotionEvent;

class android_view_MotionEvent_PointerProperties;

class android_view_MotionEvent_PointerCoords;

class android_view_MotionEvent
{
public:
	 java_lang_String *  toString();
	 void transform(android_graphics_Matrix& arg0);
	 float getSize(int& arg0);
	 float getY(int& arg0);
	 float getX(int& arg0);
	 void writeToParcel(android_os_Parcel& arg0,int& arg1);
	static android_view_MotionEvent *  obtain(long& arg0,int& arg1,float& arg2,std::vector<int>& arg3,std::vector<long>& arg4,std::vector<long>& arg5,android_view_MotionEvent& arg6);
	 void recycle();
	 int getAction();
	 int getFlags();
	 void setAction(int& arg0);
	 float getOrientation(int& arg0);
	 int getDeviceId();
	 int getSource();
	 void setSource(int& arg0);
	 int getMetaState();
	 long getDownTime();
	 long getEventTime();
	static android_view_MotionEvent *  obtainNoHistory(android_view_MotionEvent& arg0);
	 int getActionMasked();
	 int getActionIndex();
	 float getPressure(int& arg0);
	 float getTouchMajor(int& arg0);
	 float getTouchMinor(int& arg0);
	 float getToolMajor(int& arg0);
	 float getToolMinor(int& arg0);
	 float getAxisValue(int& arg0);
	 int getPointerCount();
	 int getPointerId(int& arg0);
	 int getToolType(int& arg0);
	 int findPointerIndex(int& arg0);
	 void getPointerCoords(int& arg0,android_view_MotionEvent_PointerCoords& arg1);
	 void getPointerProperties(int& arg0,android_view_MotionEvent_PointerProperties& arg1);
	 int getButtonState();
	 float getRawX();
	 float getRawY();
	 float getXPrecision();
	 float getYPrecision();
	 int getHistorySize();
	 long getHistoricalEventTime(int& arg0);
	 float getHistoricalX(int& arg0);
	 float getHistoricalY(int& arg0);
	 float getHistoricalPressure(int& arg0);
	 float getHistoricalSize(int& arg0);
	 float getHistoricalTouchMajor(int& arg0);
	 float getHistoricalTouchMinor(int& arg0);
	 float getHistoricalToolMajor(int& arg0);
	 float getHistoricalToolMinor(int& arg0);
	 float getHistoricalOrientation(int& arg0);
	 float getHistoricalAxisValue(int& arg0);
	 void getHistoricalPointerCoords(int& arg0,android_view_MotionEvent_PointerCoords& arg1);
	 int getEdgeFlags();
	 void setEdgeFlags(int& arg0);
	 void offsetLocation(float& arg0);
	 void setLocation(float& arg0);
	 void addBatch(long& arg0,std::vector<long>& arg1,int& arg2,float& arg3);
	static java_lang_String *  axisToString(int& arg0);
	static int axisFromString(java_lang_String& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_MotionEvent
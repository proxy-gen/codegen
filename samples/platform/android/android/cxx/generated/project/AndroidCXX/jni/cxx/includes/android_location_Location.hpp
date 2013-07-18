/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
 			
		
 			
		
 			
 			
 			
		
 			
 			
 			
 			

// Generated Code 

#ifndef _android_location_Location
#define _android_location_Location
//
// Scroll Down 
//









































#include <java_lang_String.hpp>


#include <android_os_Bundle.hpp>

#include <android_util_Printer.hpp>

#include <android_os_Parcel.hpp>

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


class android_os_Bundle;

class android_util_Printer;

class android_os_Parcel;

class android_location_Location
{
public:
 java_lang_String toString();
 void set(android_location_Location& arg0);
 void reset();
 void setTime(long& arg0);
 long getTime();
 java_lang_String getProvider();
static java_lang_String convert(double& arg0,int& arg1,java_lang_String& arg2);
static void distanceBetween(double& arg0,std::vector<float>& arg1);
 float distanceTo(android_location_Location& arg0);
 float bearingTo(android_location_Location& arg0);
 void setProvider(java_lang_String& arg0);
 long getElapsedRealtimeNanos();
 void setElapsedRealtimeNanos(long& arg0);
 double getLatitude();
 void setLatitude(double& arg0);
 double getLongitude();
 void setLongitude(double& arg0);
 bool hasAltitude();
 double getAltitude();
 void setAltitude(double& arg0);
 void removeAltitude();
 bool hasSpeed();
 float getSpeed();
 void setSpeed(float& arg0);
 void removeSpeed();
 bool hasBearing();
 float getBearing();
 void setBearing(float& arg0);
 void removeBearing();
 bool hasAccuracy();
 float getAccuracy();
 void setAccuracy(float& arg0);
 void removeAccuracy();
 android_os_Bundle getExtras();
 void setExtras(android_os_Bundle& arg0);
 void dump(android_util_Printer& arg0,java_lang_String& arg1);
 int describeContents();
 void writeToParcel(android_os_Parcel& arg0,int& arg1);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_location_Location
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
#include <CXXTypes.hpp>


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class java_lang_String;

class android_location_Location;

class android_os_Bundle;

class android_util_Printer;

class android_os_Parcel;

class android_location_Location
{
public:

	android_location_Location(const android_location_Location& cc);
	android_location_Location(void * proxy);
	// Public Constructors
	android_location_Location(AndroidCXX::java_lang_String& arg0);
	android_location_Location(AndroidCXX::android_location_Location& arg0);
	android_location_Location();
	// Default Destructor
	virtual ~android_location_Location();
	// Functions
	 AndroidCXX::java_lang_String toString();
	 void set(AndroidCXX::android_location_Location& arg0);
	 void reset();
	 void setTime(long& arg0);
	 long getTime();
	 AndroidCXX::java_lang_String getProvider();
	static AndroidCXX::java_lang_String convert(double& arg0,int& arg1);
	static double convert(AndroidCXX::java_lang_String& arg0);
	static void distanceBetween(double& arg0,double& arg1,double& arg2,double& arg3,std::vector<float>& arg4);
	 float distanceTo(AndroidCXX::android_location_Location& arg0);
	 float bearingTo(AndroidCXX::android_location_Location& arg0);
	 void setProvider(AndroidCXX::java_lang_String& arg0);
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
	 AndroidCXX::android_os_Bundle getExtras();
	 void setExtras(AndroidCXX::android_os_Bundle& arg0);
	 void dump(AndroidCXX::android_util_Printer& arg0,AndroidCXX::java_lang_String& arg1);
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel& arg0,int& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_location_Location
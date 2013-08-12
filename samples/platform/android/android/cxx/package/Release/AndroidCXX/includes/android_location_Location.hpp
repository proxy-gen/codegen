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

// Forward Declarations

class java_lang_String;

class android_location_Location;

class android_os_Bundle;

class android_util_Printer;

class android_os_Parcel;

class android_location_Location
{
public:

	android_location_Location(Proxy proxy);
	// Public Constructors
	android_location_Location(AndroidCXX::android_location_Location const& arg0);
	android_location_Location(AndroidCXX::java_lang_String const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_location_Location();
	// Functions
	 AndroidCXX::java_lang_String toString();
	 void set(AndroidCXX::android_location_Location const& arg0);
	 void reset();
	 void setTime(long const& arg0);
	 long getTime();
	 AndroidCXX::java_lang_String getProvider();
	static double convert(AndroidCXX::java_lang_String const& arg0);
	static AndroidCXX::java_lang_String convert(double const& arg0,int const& arg1);
	static void distanceBetween(double const& arg0,double const& arg1,double const& arg2,double const& arg3,std::vector<float> const& arg4);
	 float distanceTo(AndroidCXX::android_location_Location const& arg0);
	 float bearingTo(AndroidCXX::android_location_Location const& arg0);
	 void setProvider(AndroidCXX::java_lang_String const& arg0);
	 long getElapsedRealtimeNanos();
	 void setElapsedRealtimeNanos(long const& arg0);
	 double getLatitude();
	 void setLatitude(double const& arg0);
	 double getLongitude();
	 void setLongitude(double const& arg0);
	 bool hasAltitude();
	 double getAltitude();
	 void setAltitude(double const& arg0);
	 void removeAltitude();
	 bool hasSpeed();
	 float getSpeed();
	 void setSpeed(float const& arg0);
	 void removeSpeed();
	 bool hasBearing();
	 float getBearing();
	 void setBearing(float const& arg0);
	 void removeBearing();
	 bool hasAccuracy();
	 float getAccuracy();
	 void setAccuracy(float const& arg0);
	 void removeAccuracy();
	 AndroidCXX::android_os_Bundle getExtras();
	 void setExtras(AndroidCXX::android_os_Bundle const& arg0);
	 void dump(AndroidCXX::android_util_Printer const& arg0,AndroidCXX::java_lang_String const& arg1);
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1);
	 bool isFromMockProvider();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_location_Location
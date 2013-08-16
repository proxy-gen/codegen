/*
 * Header (Instance CXX)
 * Author: codegen
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

#include <android_util_Printer.hpp>

#include <android_os_Bundle.hpp>

#include <android_os_Parcel.hpp>


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

class android_util_Printer;

class android_os_Bundle;

class android_os_Parcel;

class android_location_Location : public android_os_Parcelable
{
public:

	// Public ConstrucXXX
	android_location_Location(AndroidCXX::java_lang_String const& arg0);
	android_location_Location(AndroidCXX::android_location_Location const& arg0);
	android_location_Location(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_location_Location();
	// Functions
	virtual float  bearingTo(AndroidCXX::android_location_Location const& arg0) ;
	static double  convert(AndroidCXX::java_lang_String const& arg0) ;
	static AndroidCXX::java_lang_String * convert(double const& arg0,int const& arg1) ;
	virtual int  describeContents() ;
	static void  distanceBetween(double const& arg0,double const& arg1,double const& arg2,double const& arg3,std::vector<float> const& arg4) ;
	virtual float  distanceTo(AndroidCXX::android_location_Location const& arg0) ;
	virtual void  dump(AndroidCXX::android_util_Printer const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual float  getAccuracy() ;
	virtual double  getAltitude() ;
	virtual float  getBearing() ;
	virtual long  getElapsedRealtimeNanos() ;
	virtual AndroidCXX::android_os_Bundle * getExtras() ;
	virtual double  getLatitude() ;
	virtual double  getLongitude() ;
	virtual AndroidCXX::java_lang_String * getProvider() ;
	virtual float  getSpeed() ;
	virtual long  getTime() ;
	virtual bool  hasAccuracy() ;
	virtual bool  hasAltitude() ;
	virtual bool  hasBearing() ;
	virtual bool  hasSpeed() ;
	virtual bool  isFromMockProvider() ;
	virtual void  removeAccuracy() ;
	virtual void  removeAltitude() ;
	virtual void  removeBearing() ;
	virtual void  removeSpeed() ;
	virtual void  reset() ;
	virtual void  set(AndroidCXX::android_location_Location const& arg0) ;
	virtual void  setAccuracy(float const& arg0) ;
	virtual void  setAltitude(double const& arg0) ;
	virtual void  setBearing(float const& arg0) ;
	virtual void  setElapsedRealtimeNanos(long const& arg0) ;
	virtual void  setExtras(AndroidCXX::android_os_Bundle const& arg0) ;
	virtual void  setLatitude(double const& arg0) ;
	virtual void  setLongitude(double const& arg0) ;
	virtual void  setProvider(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setSpeed(float const& arg0) ;
	virtual void  setTime(long const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_location_Location
/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
	
 	
	
	
	
	
 	
 		 
	
	
	
 		 























// Generated Code 

#ifndef _android_view_InputDevice
#define _android_view_InputDevice
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <android_view_KeyCharacterMap.hpp>

#include <android_view_InputDevice_MotionRange.hpp>

#include <java_util_List.hpp>

#include <android_os_Vibrator.hpp>

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


class android_view_KeyCharacterMap;

class android_view_InputDevice_MotionRange;

class java_util_List;

class android_os_Vibrator;

class android_os_Parcel;

class android_view_InputDevice : public android_os_Parcelable
{
public:

	// Public ConstrucXXX
	android_view_InputDevice(const android_view_InputDevice& cc);
	android_view_InputDevice(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_InputDevice();
	// Functions
	virtual int  describeContents() ;
	virtual AndroidCXX::java_lang_String * getDescriptor() ;
	static AndroidCXX::android_view_InputDevice * getDevice(int const& arg0) ;
	static std::vector<int>  getDeviceIds() ;
	virtual int  getId() ;
	virtual AndroidCXX::android_view_KeyCharacterMap * getKeyCharacterMap() ;
	virtual int  getKeyboardType() ;
	virtual AndroidCXX::android_view_InputDevice_MotionRange * getMotionRange(int const& arg0,int const& arg1) ;
	virtual AndroidCXX::android_view_InputDevice_MotionRange * getMotionRange(int const& arg0) ;
	virtual AndroidCXX::java_util_List * getMotionRanges() ;
	virtual AndroidCXX::java_lang_String * getName() ;
	virtual int  getSources() ;
	virtual AndroidCXX::android_os_Vibrator * getVibrator() ;
	virtual bool  isVirtual() ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_InputDevice
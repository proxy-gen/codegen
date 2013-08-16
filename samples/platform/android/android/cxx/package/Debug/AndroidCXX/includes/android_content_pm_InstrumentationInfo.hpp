/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 		 


 		 










// Generated Code 

#ifndef _android_content_pm_InstrumentationInfo
#define _android_content_pm_InstrumentationInfo
//
// Scroll Down 
//


#include <java_lang_String.hpp>

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

class android_os_Parcel;


class android_content_pm_InstrumentationInfo : public android_os_Parcelable
{
public:

	// Public ConstrucXXX
	android_content_pm_InstrumentationInfo();
	android_content_pm_InstrumentationInfo(AndroidCXX::android_content_pm_InstrumentationInfo const& arg0);
	android_content_pm_InstrumentationInfo(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_content_pm_InstrumentationInfo();
	// Functions
	virtual int  describeContents() ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_pm_InstrumentationInfo
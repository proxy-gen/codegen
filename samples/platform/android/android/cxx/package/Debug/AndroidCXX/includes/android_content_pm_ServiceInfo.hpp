/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
	
 		 


 		 











// Generated Code 

#ifndef _android_content_pm_ServiceInfo
#define _android_content_pm_ServiceInfo
//
// Scroll Down 
//


#include <android_util_Printer.hpp>

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

class android_util_Printer;

class java_lang_String;

class android_os_Parcel;


class android_content_pm_ServiceInfo : public AndroidCXX::android_os_Parcelable
{
public:

	// Public Constructor
	android_content_pm_ServiceInfo(Proxy * aProxy = new Proxy());
	android_content_pm_ServiceInfo(AndroidCXX::android_content_pm_ServiceInfo const& arg0,Proxy * aProxy = new Proxy());
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_content_pm_ServiceInfo();
	// Functions
	virtual int  describeContents() ;
	virtual void  dump(AndroidCXX::android_util_Printer const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_pm_ServiceInfo
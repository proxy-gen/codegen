/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <java_lang_String.hpp>

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

class android_util_Printer;

class android_os_Parcel;

class android_content_pm_ServiceInfo;

class android_content_pm_ServiceInfo
{
public:

	android_content_pm_ServiceInfo(Proxy proxy);
	// Public Constructors
	android_content_pm_ServiceInfo();
	android_content_pm_ServiceInfo(AndroidCXX::android_content_pm_ServiceInfo const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_content_pm_ServiceInfo();
	// Functions
	 AndroidCXX::java_lang_String toString();
	 void dump(AndroidCXX::android_util_Printer const& arg0,AndroidCXX::java_lang_String const& arg1);
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_pm_ServiceInfo
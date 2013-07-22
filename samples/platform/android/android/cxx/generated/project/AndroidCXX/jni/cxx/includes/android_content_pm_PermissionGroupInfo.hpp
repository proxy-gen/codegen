/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
 		 
 		 
	


 		 











// Generated Code 

#ifndef _android_content_pm_PermissionGroupInfo
#define _android_content_pm_PermissionGroupInfo
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <android_os_Parcel.hpp>

#include <android_content_pm_PackageManager.hpp>

#include <java_lang_CharSequence.hpp>


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

class android_content_pm_PackageManager;

class java_lang_CharSequence;

class android_content_pm_PermissionGroupInfo;

class android_content_pm_PermissionGroupInfo
{
public:

	android_content_pm_PermissionGroupInfo(const android_content_pm_PermissionGroupInfo& cc);
	android_content_pm_PermissionGroupInfo(void * proxy);
	// Public Constructors
	android_content_pm_PermissionGroupInfo();
	android_content_pm_PermissionGroupInfo(AndroidCXX::android_content_pm_PermissionGroupInfo& arg0);
	// Default Destructor
	virtual ~android_content_pm_PermissionGroupInfo();
	// Functions
	 AndroidCXX::java_lang_String toString();
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel& arg0,int& arg1);
	 AndroidCXX::java_lang_CharSequence loadDescription(AndroidCXX::android_content_pm_PackageManager& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_pm_PermissionGroupInfo
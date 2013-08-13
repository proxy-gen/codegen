/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 		 
 		 
	


 		 











// Generated Code 

#ifndef _android_content_pm_PermissionInfo
#define _android_content_pm_PermissionInfo
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <android_os_Parcel.hpp>

#include <android_content_pm_PackageManager.hpp>

#include <java_lang_CharSequence.hpp>


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

class android_content_pm_PackageManager;

class java_lang_CharSequence;


class android_content_pm_PermissionInfo : public android_os_Parcelable
{
public:

	// Public ConstrucXXX
	android_content_pm_PermissionInfo();
	android_content_pm_PermissionInfo(AndroidCXX::android_content_pm_PermissionInfo const& arg0);
	android_content_pm_PermissionInfo(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_content_pm_PermissionInfo();
	// Functions
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual int  describeContents() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;
	virtual AndroidCXX::java_lang_CharSequence * loadDescription(AndroidCXX::android_content_pm_PackageManager const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_pm_PermissionInfo
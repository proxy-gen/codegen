/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
	
 		 


 		 











// Generated Code 

#ifndef _android_content_pm_ConfigurationInfo
#define _android_content_pm_ConfigurationInfo
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


class android_content_pm_ConfigurationInfo : public AndroidCXX::android_os_Parcelable
{
public:

	// Public ConstrucXXX
	android_content_pm_ConfigurationInfo();
	android_content_pm_ConfigurationInfo(AndroidCXX::android_content_pm_ConfigurationInfo const& arg0);
	android_content_pm_ConfigurationInfo(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_content_pm_ConfigurationInfo();
	// Functions
	virtual int  describeContents() ;
	virtual AndroidCXX::java_lang_String * getGlEsVersion() ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_pm_ConfigurationInfo
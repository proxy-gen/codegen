/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
 		 
	


 		 











// Generated Code 

#ifndef _android_content_pm_FeatureInfo
#define _android_content_pm_FeatureInfo
//
// Scroll Down 
//


#include <java_lang_String.hpp>

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

class android_os_Parcel;

class android_content_pm_FeatureInfo;

class android_content_pm_FeatureInfo
{
public:

	android_content_pm_FeatureInfo(Proxy proxy);
	// Public Constructors
	android_content_pm_FeatureInfo();
	android_content_pm_FeatureInfo(AndroidCXX::android_content_pm_FeatureInfo const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_content_pm_FeatureInfo();
	// Functions
	 AndroidCXX::java_lang_String toString();
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1);
	 AndroidCXX::java_lang_String getGlEsVersion();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_pm_FeatureInfo
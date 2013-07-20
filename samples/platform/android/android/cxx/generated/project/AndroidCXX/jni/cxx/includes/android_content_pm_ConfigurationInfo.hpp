/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class java_lang_String;

class android_os_Parcel;

class android_content_pm_ConfigurationInfo
{
public:
	android_content_pm_ConfigurationInfo(const android_content_pm_ConfigurationInfo& cc);
	android_content_pm_ConfigurationInfo(void * proxy);
	virtual ~android_content_pm_ConfigurationInfo();
	 java_lang_String *  toString();
	 int describeContents();
	 void writeToParcel(android_os_Parcel& arg0,int& arg1);
	 java_lang_String *  getGlEsVersion();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_pm_ConfigurationInfo
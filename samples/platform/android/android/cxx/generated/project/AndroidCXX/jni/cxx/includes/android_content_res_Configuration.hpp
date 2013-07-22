/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 


 		 
























// Generated Code 

#ifndef _android_content_res_Configuration
#define _android_content_res_Configuration
//
// Scroll Down 
//



#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <java_util_Locale.hpp>

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

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class android_content_res_Configuration;

class java_lang_Object;

class java_lang_String;

class java_util_Locale;

class android_os_Parcel;

class android_content_res_Configuration
{
public:

	android_content_res_Configuration(const android_content_res_Configuration& cc);
	android_content_res_Configuration(void * proxy);
	// Public Constructors
	android_content_res_Configuration();
	android_content_res_Configuration(AndroidCXX::android_content_res_Configuration& arg0);
	// Default Destructor
	virtual ~android_content_res_Configuration();
	// Functions
	 bool equals(AndroidCXX::android_content_res_Configuration& arg0);
	 bool equals(AndroidCXX::java_lang_Object& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	 int compareTo(AndroidCXX::android_content_res_Configuration& arg0);
	 void setLocale(AndroidCXX::java_util_Locale& arg0);
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel& arg0,int& arg1);
	 void readFromParcel(AndroidCXX::android_os_Parcel& arg0);
	 void setLayoutDirection(AndroidCXX::java_util_Locale& arg0);
	 int getLayoutDirection();
	 bool isLayoutSizeAtLeast(int& arg0);
	 void setTo(AndroidCXX::android_content_res_Configuration& arg0);
	 void setToDefaults();
	 int updateFrom(AndroidCXX::android_content_res_Configuration& arg0);
	 int diff(AndroidCXX::android_content_res_Configuration& arg0);
	static bool needNewResources(int& arg0,int& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_res_Configuration
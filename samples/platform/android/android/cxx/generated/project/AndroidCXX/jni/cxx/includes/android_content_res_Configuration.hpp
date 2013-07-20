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

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

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
	virtual ~android_content_res_Configuration();
	 bool equals(android_content_res_Configuration& arg0,java_lang_Object& arg1);
	 java_lang_String *  toString();
	 int hashCode();
	 int compareTo(android_content_res_Configuration& arg0);
	 void setLocale(java_util_Locale& arg0);
	 int describeContents();
	 void writeToParcel(android_os_Parcel& arg0,int& arg1);
	 void readFromParcel(android_os_Parcel& arg0);
	 void setLayoutDirection(java_util_Locale& arg0);
	 int getLayoutDirection();
	 bool isLayoutSizeAtLeast(int& arg0);
	 void setTo(android_content_res_Configuration& arg0);
	 void setToDefaults();
	 int updateFrom(android_content_res_Configuration& arg0);
	 int diff(android_content_res_Configuration& arg0);
	static bool needNewResources(int& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_res_Configuration
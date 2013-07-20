/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
	
 		 
	
	
 		 
 		 
 		 
	
	
	
 		 
	
	
	

// Generated Code 

#ifndef _android_content_ComponentName
#define _android_content_ComponentName
//
// Scroll Down 
//


















#include <java_lang_Object.hpp>

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

class java_lang_Object;

class java_lang_String;

class android_content_ComponentName;

class android_os_Parcel;

class android_content_ComponentName
{
public:
	android_content_ComponentName(const android_content_ComponentName& cc);
	android_content_ComponentName(void * proxy);
	virtual ~android_content_ComponentName();
	 bool equals(java_lang_Object& arg0);
	 java_lang_String *  toString();
	 int hashCode();
	 android_content_ComponentName *  clone();
	 int compareTo(android_content_ComponentName& arg0);
	 java_lang_String *  getClassName();
	 java_lang_String *  getPackageName();
	 int describeContents();
	static void writeToParcel(android_os_Parcel& arg0,int& arg1,android_content_ComponentName& arg2);
	static android_content_ComponentName *  readFromParcel(android_os_Parcel& arg0);
	 java_lang_String *  toShortString();
	 java_lang_String *  flattenToString();
	static android_content_ComponentName *  unflattenFromString(java_lang_String& arg0);
	 java_lang_String *  getShortClassName();
	 java_lang_String *  flattenToShortString();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_ComponentName
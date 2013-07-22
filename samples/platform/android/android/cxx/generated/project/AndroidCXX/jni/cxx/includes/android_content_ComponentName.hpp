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

#include <android_content_Context.hpp>

#include <java_lang_Class.hpp>

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

class java_lang_Object;

class java_lang_String;

class android_content_ComponentName;

class android_os_Parcel;

class android_content_Context;

class java_lang_Class;

class android_content_ComponentName
{
public:

	android_content_ComponentName(const android_content_ComponentName& cc);
	android_content_ComponentName(void * proxy);
	// Public Constructors
	android_content_ComponentName(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1);
	android_content_ComponentName(AndroidCXX::android_content_Context& arg0,AndroidCXX::java_lang_String& arg1);
	android_content_ComponentName(AndroidCXX::android_content_Context& arg0,AndroidCXX::java_lang_Class& arg1);
	android_content_ComponentName(AndroidCXX::android_os_Parcel& arg0);
	android_content_ComponentName();
	// Default Destructor
	virtual ~android_content_ComponentName();
	// Functions
	 bool equals(AndroidCXX::java_lang_Object& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	 AndroidCXX::android_content_ComponentName clone();
	 int compareTo(AndroidCXX::android_content_ComponentName& arg0);
	 AndroidCXX::java_lang_String getClassName();
	 AndroidCXX::java_lang_String getPackageName();
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel& arg0,int& arg1);
	static void writeToParcel(AndroidCXX::android_content_ComponentName& arg0,AndroidCXX::android_os_Parcel& arg1);
	static AndroidCXX::android_content_ComponentName readFromParcel(AndroidCXX::android_os_Parcel& arg0);
	 AndroidCXX::java_lang_String toShortString();
	 AndroidCXX::java_lang_String flattenToString();
	static AndroidCXX::android_content_ComponentName unflattenFromString(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_lang_String getShortClassName();
	 AndroidCXX::java_lang_String flattenToShortString();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_ComponentName
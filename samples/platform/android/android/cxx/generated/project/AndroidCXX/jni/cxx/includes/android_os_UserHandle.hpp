/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	
 		 
 		 
 		 
 		 
	


 		 













// Generated Code 

#ifndef _android_os_UserHandle
#define _android_os_UserHandle
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
#include <CXXTypes.hpp>


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class java_lang_Object;

class java_lang_String;

class android_os_Parcel;

class android_os_UserHandle;

class android_os_UserHandle
{
public:

	android_os_UserHandle(const android_os_UserHandle& cc);
	android_os_UserHandle(void * proxy);
	// Public Constructors
	android_os_UserHandle(AndroidCXX::android_os_Parcel& arg0);
	// TODO: remove
	// 
	// android_os_UserHandle();
	// 
	// Default Destructor
	virtual ~android_os_UserHandle();
	// Functions
	 bool equals(AndroidCXX::java_lang_Object& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel& arg0,int& arg1);
	static void writeToParcel(AndroidCXX::android_os_UserHandle& arg0,AndroidCXX::android_os_Parcel& arg1);
	static AndroidCXX::android_os_UserHandle readFromParcel(AndroidCXX::android_os_Parcel& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_UserHandle
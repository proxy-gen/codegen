/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 
	
 		 
 		 
 		 
	

// Generated Code 

#ifndef _android_os_Messenger
#define _android_os_Messenger
//
// Scroll Down 
//











#include <java_lang_Object.hpp>

#include <android_os_Message.hpp>

#include <android_os_Parcel.hpp>

#include <android_os_IBinder.hpp>


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

class android_os_Message;

class android_os_Parcel;

class android_os_IBinder;

class android_os_Messenger;

class android_os_Messenger
{
public:
	 bool equals(java_lang_Object& arg0);
	 int hashCode();
	 void send(android_os_Message& arg0);
	 int describeContents();
	 void writeToParcel(android_os_Parcel& arg0,int& arg1);
	 android_os_IBinder *  getBinder();
	static void writeMessengerOrNullToParcel(android_os_Messenger& arg0,android_os_Parcel& arg1);
	static android_os_Messenger *  readMessengerOrNullFromParcel(android_os_Parcel& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_Messenger
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


#include <android_os_Handler.hpp>

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

// Forward Declarations

class java_lang_Object;

class android_os_Message;

class android_os_Parcel;

class android_os_IBinder;

class android_os_Messenger;

class android_os_Handler;

class android_os_Messenger
{
public:

	android_os_Messenger(const android_os_Messenger& cc);
	android_os_Messenger(void * proxy);
	// Public Constructors
	android_os_Messenger(AndroidCXX::android_os_Handler& arg0);
	android_os_Messenger(AndroidCXX::android_os_IBinder& arg0);
	android_os_Messenger();
	// Default Destructor
	virtual ~android_os_Messenger();
	// Functions
	 bool equals(AndroidCXX::java_lang_Object& arg0);
	 int hashCode();
	 void send(AndroidCXX::android_os_Message& arg0);
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel& arg0,int& arg1);
	 AndroidCXX::android_os_IBinder getBinder();
	static void writeMessengerOrNullToParcel(AndroidCXX::android_os_Messenger& arg0,AndroidCXX::android_os_Parcel& arg1);
	static AndroidCXX::android_os_Messenger readMessengerOrNullFromParcel(AndroidCXX::android_os_Parcel& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_Messenger
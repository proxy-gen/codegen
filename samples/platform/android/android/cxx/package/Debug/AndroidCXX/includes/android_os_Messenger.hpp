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
	android_os_Messenger(Proxy proxy);
	// Public Constructors
	android_os_Messenger(AndroidCXX::android_os_Handler const& arg0);
	android_os_Messenger(AndroidCXX::android_os_IBinder const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_os_Messenger();
	// Functions
	 bool equals(AndroidCXX::java_lang_Object const& arg0);
	 int hashCode();
	 void send(AndroidCXX::android_os_Message const& arg0);
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1);
	 AndroidCXX::android_os_IBinder getBinder();
	static void writeMessengerOrNullToParcel(AndroidCXX::android_os_Messenger const& arg0,AndroidCXX::android_os_Parcel const& arg1);
	static AndroidCXX::android_os_Messenger readMessengerOrNullFromParcel(AndroidCXX::android_os_Parcel const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_Messenger
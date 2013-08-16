/*
 * Header (Instance CXX)
 * Author: codegen
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

#include <android_os_IBinder.hpp>

#include <android_os_Parcel.hpp>

#include <android_os_Message.hpp>

#include <android_os_Handler.hpp>


#include <android_os_Parcelable.hpp>

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

class android_os_IBinder;

class android_os_Parcel;


class android_os_Message;

class android_os_Handler;

class android_os_Messenger : public android_os_Parcelable
{
public:

	// Public ConstrucXXX
	android_os_Messenger(AndroidCXX::android_os_Handler const& arg0);
	android_os_Messenger(AndroidCXX::android_os_IBinder const& arg0);
	android_os_Messenger(const android_os_Messenger& cc);
	android_os_Messenger(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_os_Messenger();
	// Functions
	virtual int  describeContents() ;
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::android_os_IBinder * getBinder() ;
	virtual int  hashCode() ;
	static AndroidCXX::android_os_Messenger * readMessengerOrNullFromParcel(AndroidCXX::android_os_Parcel const& arg0) ;
	virtual void  send(AndroidCXX::android_os_Message const& arg0) ;
	static void  writeMessengerOrNullToParcel(AndroidCXX::android_os_Messenger const& arg0,AndroidCXX::android_os_Parcel const& arg1) ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_Messenger
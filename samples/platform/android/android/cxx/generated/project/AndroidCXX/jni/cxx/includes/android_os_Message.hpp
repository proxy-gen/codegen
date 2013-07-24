/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
	
 		 
 		 
 		 
	
 		 
 		 
	
 		 
	
 		 
	
 		 
 		 
	
 		 
	
 		 
 		 
	
	
	
 		 
	
 		 
	





























// Generated Code 

#ifndef _android_os_Message
#define _android_os_Message
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <android_os_Bundle.hpp>


#include <android_os_Parcel.hpp>

#include <android_os_Handler.hpp>

#include <java_lang_Object.hpp>

#include <java_lang_Runnable.hpp>

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

class java_lang_String;

class android_os_Bundle;

class android_os_Message;

class android_os_Parcel;

class android_os_Handler;

class java_lang_Object;

class java_lang_Runnable;

class android_os_Message
{
public:

	android_os_Message(const android_os_Message& cc);
	android_os_Message(void * proxy);
	// Public Constructors
	android_os_Message();
	// TODO: remove
	// 
	// Default Destructor
	virtual ~android_os_Message();
	// Functions
	 AndroidCXX::java_lang_String toString();
	 AndroidCXX::android_os_Bundle getData();
	 void copyFrom(AndroidCXX::android_os_Message& arg0);
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel& arg0,int& arg1);
	static AndroidCXX::android_os_Message obtain(AndroidCXX::android_os_Handler& arg0,int& arg1,int& arg2,int& arg3);
	static AndroidCXX::android_os_Message obtain(AndroidCXX::android_os_Handler& arg0,int& arg1,int& arg2,int& arg3,AndroidCXX::java_lang_Object& arg4);
	static AndroidCXX::android_os_Message obtain(AndroidCXX::android_os_Message& arg0);
	static AndroidCXX::android_os_Message obtain(AndroidCXX::android_os_Handler& arg0);
	static AndroidCXX::android_os_Message obtain(AndroidCXX::android_os_Handler& arg0,AndroidCXX::java_lang_Runnable& arg1);
	static AndroidCXX::android_os_Message obtain(AndroidCXX::android_os_Handler& arg0,int& arg1);
	static AndroidCXX::android_os_Message obtain(AndroidCXX::android_os_Handler& arg0,int& arg1,AndroidCXX::java_lang_Object& arg2);
	static AndroidCXX::android_os_Message obtain();
	 void recycle();
	 AndroidCXX::android_os_Bundle peekData();
	 void setData(AndroidCXX::android_os_Bundle& arg0);
	 AndroidCXX::java_lang_Runnable getCallback();
	 long getWhen();
	 void setTarget(AndroidCXX::android_os_Handler& arg0);
	 AndroidCXX::android_os_Handler getTarget();
	 void sendToTarget();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_Message
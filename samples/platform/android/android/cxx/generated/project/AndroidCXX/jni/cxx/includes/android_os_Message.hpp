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
	 java_lang_String *  toString();
	 android_os_Bundle *  getData();
	 void copyFrom(android_os_Message& arg0);
	 int describeContents();
	 void writeToParcel(android_os_Parcel& arg0,int& arg1);
	static android_os_Message *  obtain(android_os_Handler& arg0,int& arg1,java_lang_Object& arg2,android_os_Message& arg3,java_lang_Runnable& arg4);
	 void recycle();
	 android_os_Bundle *  peekData();
	 void setData(android_os_Bundle& arg0);
	 java_lang_Runnable *  getCallback();
	 long getWhen();
	 void setTarget(android_os_Handler& arg0);
	 android_os_Handler *  getTarget();
	 void sendToTarget();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_Message
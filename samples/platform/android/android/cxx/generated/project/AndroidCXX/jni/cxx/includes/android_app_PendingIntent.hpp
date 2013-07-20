/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
	
 		 
 		 
 		 
	
	
	
	
 		 
 	
 		 
	
 		 
	
 		 
 		 
 		 
	

// Generated Code 

#ifndef _android_app_PendingIntent
#define _android_app_PendingIntent
//
// Scroll Down 
//





















#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <android_app_PendingIntent_OnFinished.hpp>

#include <android_os_Handler.hpp>

#include <android_content_Context.hpp>

#include <android_content_Intent.hpp>


#include <android_os_Parcel.hpp>

#include <android_os_Bundle.hpp>

#include <android_os_UserHandle.hpp>

#include <android_content_IntentSender.hpp>

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

class android_app_PendingIntent_OnFinished;

class android_os_Handler;

class android_content_Context;

class android_content_Intent;

class android_app_PendingIntent;

class android_os_Parcel;

class android_os_Bundle;

class android_os_UserHandle;

class android_content_IntentSender;

class android_app_PendingIntent
{
public:
	 bool equals(java_lang_Object& arg0);
	 java_lang_String *  toString();
	 int hashCode();
	 void send(int& arg0,android_app_PendingIntent_OnFinished& arg1,android_os_Handler& arg2,android_content_Context& arg3,android_content_Intent& arg4,java_lang_String& arg5);
	static android_app_PendingIntent *  getService(android_content_Context& arg0,int& arg1,android_content_Intent& arg2);
	 int describeContents();
	 void writeToParcel(android_os_Parcel& arg0,int& arg1);
	static android_app_PendingIntent *  getBroadcast(android_content_Context& arg0,int& arg1,android_content_Intent& arg2);
	 void cancel();
	static android_app_PendingIntent *  getActivity(android_content_Context& arg0,int& arg1,android_content_Intent& arg2,android_os_Bundle& arg3);
	 java_lang_String *  getTargetPackage();
	 java_lang_String *  getCreatorPackage();
	 int getCreatorUid();
	 android_os_UserHandle *  getCreatorUserHandle();
	static android_app_PendingIntent *  getActivities(android_content_Context& arg0,int& arg1,std::vector<long>& arg2,android_os_Bundle& arg3);
	 android_content_IntentSender *  getIntentSender();
	static void writePendingIntentOrNullToParcel(android_app_PendingIntent& arg0,android_os_Parcel& arg1);
	static android_app_PendingIntent *  readPendingIntentOrNullFromParcel(android_os_Parcel& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_PendingIntent
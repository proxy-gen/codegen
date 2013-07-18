/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
 			
 			
 			
 			
 			
		
 			
 			
 			
 			
 			
 			
		
 			
		
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			

// Generated Code 

#ifndef _android_os_Handler
#define _android_os_Handler
//
// Scroll Down 
//



























#include <java_lang_String.hpp>

#include <android_util_Printer.hpp>

#include <java_lang_Runnable.hpp>

#include <java_lang_Object.hpp>

#include <android_os_Looper.hpp>

#include <android_os_Message.hpp>

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

class android_util_Printer;

class java_lang_Runnable;

class java_lang_Object;

class android_os_Looper;

class android_os_Message;

class android_os_Handler
{
public:
 java_lang_String toString();
 void dump(android_util_Printer& arg0,java_lang_String& arg1);
 void removeCallbacks(java_lang_Runnable& arg0,java_lang_Object& arg1);
 bool post(java_lang_Runnable& arg0);
 android_os_Looper getLooper();
 bool hasMessages(int& arg0,java_lang_Object& arg1);
 void removeMessages(int& arg0,java_lang_Object& arg1);
 bool sendEmptyMessage(int& arg0);
 bool postDelayed(java_lang_Runnable& arg0,long& arg1);
 void handleMessage(android_os_Message& arg0);
 void dispatchMessage(android_os_Message& arg0);
 java_lang_String getMessageName(android_os_Message& arg0);
 android_os_Message obtainMessage(int& arg0,java_lang_Object& arg1);
 bool postAtTime(java_lang_Runnable& arg0,java_lang_Object& arg1,long& arg2);
 bool postAtFrontOfQueue(java_lang_Runnable& arg0);
 bool runWithScissors(java_lang_Runnable& arg0,long& arg1);
 bool sendMessage(android_os_Message& arg0);
 bool sendEmptyMessageDelayed(int& arg0,long& arg1);
 bool sendEmptyMessageAtTime(int& arg0,long& arg1);
 bool sendMessageDelayed(android_os_Message& arg0,long& arg1);
 bool sendMessageAtTime(android_os_Message& arg0,long& arg1);
 bool sendMessageAtFrontOfQueue(android_os_Message& arg0);
 void removeCallbacksAndMessages(java_lang_Object& arg0);
 bool hasCallbacks(java_lang_Runnable& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_Handler
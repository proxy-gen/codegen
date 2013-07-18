/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
 			
 			
 			
 			
 			
		
 			
 			
 			
 			
 			
 			
		
 			
		
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			


#ifndef _android_os_Handler
#define _android_os_Handler


























#include <java_lang_Object.hpp>
#include <android_os_Message.hpp>
#include <android_os_Looper.hpp>
#include <java_lang_Runnable.hpp>
#include <android_util_Printer.hpp>
#include <java_lang_String.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

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
/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
 		 
 		 
	
	
 		 
	
	

// Generated Code 

#ifndef _android_os_Looper
#define _android_os_Looper
//
// Scroll Down 
//














#include <java_lang_String.hpp>

#include <android_util_Printer.hpp>


#include <android_os_MessageQueue.hpp>

#include <java_lang_Thread.hpp>

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

class android_os_Looper;

class android_os_MessageQueue;

class java_lang_Thread;

class android_os_Looper
{
public:
	 java_lang_String *  toString();
	static void loop();
	 void dump(android_util_Printer& arg0,java_lang_String& arg1);
	static android_os_Looper *  myLooper();
	static android_os_Looper *  getMainLooper();
	static void prepare();
	static void prepareMainLooper();
	 void setMessageLogging(android_util_Printer& arg0);
	static android_os_MessageQueue *  myQueue();
	 void quit();
	 java_lang_Thread *  getThread();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_Looper
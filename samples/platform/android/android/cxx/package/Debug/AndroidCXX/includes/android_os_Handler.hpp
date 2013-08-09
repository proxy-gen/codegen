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

#include <android_os_Handler_Callback.hpp>

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

class android_util_Printer;

class java_lang_Runnable;

class java_lang_Object;

class android_os_Looper;

class android_os_Message;

class android_os_Handler_Callback;

class android_os_Handler
{
public:

	android_os_Handler(const android_os_Handler& cc);
	android_os_Handler(Proxy proxy);
	// Public Constructors
	android_os_Handler(AndroidCXX::android_os_Looper const& arg0,AndroidCXX::android_os_Handler_Callback const& arg1,bool const& arg2);
	android_os_Handler(bool const& arg0);
	android_os_Handler(AndroidCXX::android_os_Handler_Callback const& arg0,bool const& arg1);
	android_os_Handler();
	android_os_Handler(AndroidCXX::android_os_Handler_Callback const& arg0);
	android_os_Handler(AndroidCXX::android_os_Looper const& arg0);
	android_os_Handler(AndroidCXX::android_os_Looper const& arg0,AndroidCXX::android_os_Handler_Callback const& arg1);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_os_Handler();
	// Functions
	 AndroidCXX::java_lang_String toString();
	 void dump(AndroidCXX::android_util_Printer const& arg0,AndroidCXX::java_lang_String const& arg1);
	 void removeCallbacks(AndroidCXX::java_lang_Runnable const& arg0);
	 void removeCallbacks(AndroidCXX::java_lang_Runnable const& arg0,AndroidCXX::java_lang_Object const& arg1);
	 bool post(AndroidCXX::java_lang_Runnable const& arg0);
	 AndroidCXX::android_os_Looper getLooper();
	 bool hasMessages(int const& arg0);
	 bool hasMessages(int const& arg0,AndroidCXX::java_lang_Object const& arg1);
	 void removeMessages(int const& arg0,AndroidCXX::java_lang_Object const& arg1);
	 void removeMessages(int const& arg0);
	 bool sendEmptyMessage(int const& arg0);
	 bool postDelayed(AndroidCXX::java_lang_Runnable const& arg0,long const& arg1);
	 void handleMessage(AndroidCXX::android_os_Message const& arg0);
	 void dispatchMessage(AndroidCXX::android_os_Message const& arg0);
	 AndroidCXX::java_lang_String getMessageName(AndroidCXX::android_os_Message const& arg0);
	 AndroidCXX::android_os_Message obtainMessage(int const& arg0,int const& arg1,int const& arg2);
	 AndroidCXX::android_os_Message obtainMessage(int const& arg0);
	 AndroidCXX::android_os_Message obtainMessage(int const& arg0,AndroidCXX::java_lang_Object const& arg1);
	 AndroidCXX::android_os_Message obtainMessage(int const& arg0,int const& arg1,int const& arg2,AndroidCXX::java_lang_Object const& arg3);
	 AndroidCXX::android_os_Message obtainMessage();
	 bool postAtTime(AndroidCXX::java_lang_Runnable const& arg0,AndroidCXX::java_lang_Object const& arg1,long const& arg2);
	 bool postAtTime(AndroidCXX::java_lang_Runnable const& arg0,long const& arg1);
	 bool postAtFrontOfQueue(AndroidCXX::java_lang_Runnable const& arg0);
	 bool runWithScissors(AndroidCXX::java_lang_Runnable const& arg0,long const& arg1);
	 bool sendMessage(AndroidCXX::android_os_Message const& arg0);
	 bool sendEmptyMessageDelayed(int const& arg0,long const& arg1);
	 bool sendEmptyMessageAtTime(int const& arg0,long const& arg1);
	 bool sendMessageDelayed(AndroidCXX::android_os_Message const& arg0,long const& arg1);
	 bool sendMessageAtTime(AndroidCXX::android_os_Message const& arg0,long const& arg1);
	 bool sendMessageAtFrontOfQueue(AndroidCXX::android_os_Message const& arg0);
	 void removeCallbacksAndMessages(AndroidCXX::java_lang_Object const& arg0);
	 bool hasCallbacks(AndroidCXX::java_lang_Runnable const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_Handler
/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <android_os_Message.hpp>

#include <android_util_Printer.hpp>

#include <java_lang_String.hpp>

#include <android_os_Looper.hpp>

#include <java_lang_Runnable.hpp>

#include <java_lang_Object.hpp>

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

class android_os_Message;

class android_util_Printer;

class java_lang_String;

class android_os_Looper;

class java_lang_Runnable;

class java_lang_Object;

class android_os_Handler_Callback;

class android_os_Handler 
{
public:

	// Public Constructor
	android_os_Handler(Proxy * aProxy = new Proxy());
	android_os_Handler(AndroidCXX::android_os_Handler_Callback const& arg0,Proxy * aProxy = new Proxy());
	android_os_Handler(AndroidCXX::android_os_Handler_Callback const& arg0,bool const& arg1,Proxy * aProxy = new Proxy());
	android_os_Handler(AndroidCXX::android_os_Looper const& arg0,Proxy * aProxy = new Proxy());
	android_os_Handler(AndroidCXX::android_os_Looper const& arg0,AndroidCXX::android_os_Handler_Callback const& arg1,Proxy * aProxy = new Proxy());
	android_os_Handler(AndroidCXX::android_os_Looper const& arg0,AndroidCXX::android_os_Handler_Callback const& arg1,bool const& arg2,Proxy * aProxy = new Proxy());
	android_os_Handler(bool const& arg0,Proxy * aProxy = new Proxy());
	android_os_Handler(const android_os_Handler& cc);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_os_Handler();
	// Functions
	virtual void  dispatchMessage(AndroidCXX::android_os_Message const& arg0) ;
	virtual void  dump(AndroidCXX::android_util_Printer const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual AndroidCXX::android_os_Looper * getLooper() ;
	virtual AndroidCXX::java_lang_String * getMessageName(AndroidCXX::android_os_Message const& arg0) ;
	virtual void  handleMessage(AndroidCXX::android_os_Message const& arg0) ;
	virtual bool  hasCallbacks(AndroidCXX::java_lang_Runnable const& arg0) ;
	virtual bool  hasMessages(int const& arg0,AndroidCXX::java_lang_Object const& arg1) ;
	virtual bool  hasMessages(int const& arg0) ;
	virtual AndroidCXX::android_os_Message * obtainMessage(int const& arg0,int const& arg1,int const& arg2,AndroidCXX::java_lang_Object const& arg3) ;
	virtual AndroidCXX::android_os_Message * obtainMessage(int const& arg0,int const& arg1,int const& arg2) ;
	virtual AndroidCXX::android_os_Message * obtainMessage(int const& arg0,AndroidCXX::java_lang_Object const& arg1) ;
	virtual AndroidCXX::android_os_Message * obtainMessage(int const& arg0) ;
	virtual AndroidCXX::android_os_Message * obtainMessage() ;
	virtual bool  postAtFrontOfQueue(AndroidCXX::java_lang_Runnable const& arg0) ;
	virtual bool  postAtTime(AndroidCXX::java_lang_Runnable const& arg0,AndroidCXX::java_lang_Object const& arg1,long const& arg2) ;
	virtual bool  postAtTime(AndroidCXX::java_lang_Runnable const& arg0,long const& arg1) ;
	virtual bool  postDelayed(AndroidCXX::java_lang_Runnable const& arg0,long const& arg1) ;
	virtual bool  post(AndroidCXX::java_lang_Runnable const& arg0) ;
	virtual void  removeCallbacksAndMessages(AndroidCXX::java_lang_Object const& arg0) ;
	virtual void  removeCallbacks(AndroidCXX::java_lang_Runnable const& arg0,AndroidCXX::java_lang_Object const& arg1) ;
	virtual void  removeCallbacks(AndroidCXX::java_lang_Runnable const& arg0) ;
	virtual void  removeMessages(int const& arg0,AndroidCXX::java_lang_Object const& arg1) ;
	virtual void  removeMessages(int const& arg0) ;
	virtual bool  runWithScissors(AndroidCXX::java_lang_Runnable const& arg0,long const& arg1) ;
	virtual bool  sendEmptyMessageAtTime(int const& arg0,long const& arg1) ;
	virtual bool  sendEmptyMessageDelayed(int const& arg0,long const& arg1) ;
	virtual bool  sendEmptyMessage(int const& arg0) ;
	virtual bool  sendMessageAtFrontOfQueue(AndroidCXX::android_os_Message const& arg0) ;
	virtual bool  sendMessageAtTime(AndroidCXX::android_os_Message const& arg0,long const& arg1) ;
	virtual bool  sendMessageDelayed(AndroidCXX::android_os_Message const& arg0,long const& arg1) ;
	virtual bool  sendMessage(AndroidCXX::android_os_Message const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_Handler
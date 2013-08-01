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
#include <CXXTypes.hpp>


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

	android_os_Looper(const android_os_Looper& cc);
	android_os_Looper(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_os_Looper();
	// Functions
	 AndroidCXX::java_lang_String toString();
	static void loop();
	 void dump(AndroidCXX::android_util_Printer const& arg0,AndroidCXX::java_lang_String const& arg1);
	static AndroidCXX::android_os_Looper myLooper();
	static AndroidCXX::android_os_Looper getMainLooper();
	static void prepare();
	static void prepareMainLooper();
	 void setMessageLogging(AndroidCXX::android_util_Printer const& arg0);
	static AndroidCXX::android_os_MessageQueue myQueue();
	 void quit();
	 AndroidCXX::java_lang_Thread getThread();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_Looper
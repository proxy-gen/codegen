/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <android_util_Printer.hpp>

#include <java_lang_String.hpp>

#include <java_lang_Thread.hpp>

#include <android_os_MessageQueue.hpp>


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

class android_util_Printer;

class java_lang_String;


class java_lang_Thread;

class android_os_MessageQueue;

class android_os_Looper 
{
public:

	// Public ConstrucXXX
	android_os_Looper(const android_os_Looper& cc);
	android_os_Looper(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_os_Looper();
	// Functions
	virtual void  dump(AndroidCXX::android_util_Printer const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	static AndroidCXX::android_os_Looper * getMainLooper() ;
	virtual AndroidCXX::java_lang_Thread * getThread() ;
	static void  loop() ;
	static AndroidCXX::android_os_Looper * myLooper() ;
	static AndroidCXX::android_os_MessageQueue * myQueue() ;
	static void  prepareMainLooper() ;
	static void  prepare() ;
	virtual void  quit() ;
	virtual void  quitSafely() ;
	virtual void  setMessageLogging(AndroidCXX::android_util_Printer const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_Looper
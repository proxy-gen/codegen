/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 








// Generated Code 

#ifndef _java_lang_Thread_UncaughtExceptionHandler
#define _java_lang_Thread_UncaughtExceptionHandler
//
// Scroll Down 
//



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

class java_lang_Thread;

class java_lang_Throwable;

class java_lang_Thread_UncaughtExceptionHandler 
{
public:

	java_lang_Thread_UncaughtExceptionHandler(const java_lang_Thread_UncaughtExceptionHandler& cc);
	java_lang_Thread_UncaughtExceptionHandler(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_lang_Thread_UncaughtExceptionHandler();
	// Functions
	virtual void  uncaughtException(AndroidCXX::java_lang_Thread const& arg0,AndroidCXX::java_lang_Throwable const& arg1) ;

protected:
	java_lang_Thread_UncaughtExceptionHandler();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Thread_UncaughtExceptionHandler
/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 	
 		 
	
 	
 	
 		 
 		 
	
	
	
 	
 		 
	
	
	
 		 
 		 
 		 
 		 
 		 
 		 
	


 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 























































// Generated Code 

#ifndef _java_lang_Thread
#define _java_lang_Thread
//
// Scroll Down 
//


#include <java_util_Map.hpp>

#include <java_lang_StackTraceElement.hpp>

#include <java_lang_ClassLoader.hpp>

#include <java_lang_Thread_UncaughtExceptionHandler.hpp>

#include <java_lang_String.hpp>

#include <java_lang_Thread_State.hpp>

#include <java_lang_ThreadGroup.hpp>

#include <java_lang_Object.hpp>

#include <java_lang_Throwable.hpp>

#include <java_lang_Runnable.hpp>


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


class java_util_Map;

class java_lang_StackTraceElement;

class java_lang_ClassLoader;

class java_lang_Thread_UncaughtExceptionHandler;

class java_lang_String;


class java_lang_ThreadGroup;

class java_lang_Object;

class java_lang_Throwable;


class java_lang_Thread : public AndroidCXX::java_lang_Runnable
{
public:

	// Public ConstrucXXX
	java_lang_Thread();
	java_lang_Thread(AndroidCXX::java_lang_Runnable const& arg0);
	java_lang_Thread(AndroidCXX::java_lang_Runnable const& arg0,AndroidCXX::java_lang_String const& arg1);
	java_lang_Thread(AndroidCXX::java_lang_String const& arg0);
	java_lang_Thread(AndroidCXX::java_lang_ThreadGroup const& arg0,AndroidCXX::java_lang_Runnable const& arg1);
	java_lang_Thread(AndroidCXX::java_lang_ThreadGroup const& arg0,AndroidCXX::java_lang_Runnable const& arg1,AndroidCXX::java_lang_String const& arg2);
	java_lang_Thread(AndroidCXX::java_lang_ThreadGroup const& arg0,AndroidCXX::java_lang_Runnable const& arg1,AndroidCXX::java_lang_String const& arg2,long const& arg3);
	java_lang_Thread(AndroidCXX::java_lang_ThreadGroup const& arg0,AndroidCXX::java_lang_String const& arg1);
	java_lang_Thread(const java_lang_Thread& cc);
	java_lang_Thread(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_lang_Thread();
	// Functions
	static int  activeCount() ;
	virtual void  checkAccess() ;
	virtual int  countStackFrames() ;
	static AndroidCXX::java_lang_Thread * currentThread() ;
	virtual void  destroy() ;
	static void  dumpStack() ;
	static int  enumerate(std::vector<AndroidCXX::java_lang_Thread> const& arg0) ;
	static AndroidCXX::java_util_Map * getAllStackTraces() ;
	virtual AndroidCXX::java_lang_ClassLoader * getContextClassLoader() ;
	static AndroidCXX::java_lang_Thread_UncaughtExceptionHandler * getDefaultUncaughtExceptionHandler() ;
	virtual long  getId() ;
	virtual AndroidCXX::java_lang_String * getName() ;
	virtual int  getPriority() ;
	virtual std::vector<AndroidCXX::java_lang_StackTraceElement>  getStackTrace() ;
	virtual java_lang_Thread_State::java_lang_Thread_State  getState() ;
	virtual AndroidCXX::java_lang_ThreadGroup * getThreadGroup() ;
	virtual AndroidCXX::java_lang_Thread_UncaughtExceptionHandler * getUncaughtExceptionHandler() ;
	static bool  holdsLock(AndroidCXX::java_lang_Object const& arg0) ;
	virtual void  interrupt() ;
	static bool  interrupted() ;
	virtual bool  isAlive() ;
	virtual bool  isDaemon() ;
	virtual bool  isInterrupted() ;
	virtual void  join(long const& arg0,int const& arg1) ;
	virtual void  join(long const& arg0) ;
	virtual void  join() ;
	virtual void  resume() ;
	virtual void  run() ;
	virtual void  setContextClassLoader(AndroidCXX::java_lang_ClassLoader const& arg0) ;
	virtual void  setDaemon(bool const& arg0) ;
	static void  setDefaultUncaughtExceptionHandler(AndroidCXX::java_lang_Thread_UncaughtExceptionHandler const& arg0) ;
	virtual void  setName(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setPriority(int const& arg0) ;
	virtual void  setUncaughtExceptionHandler(AndroidCXX::java_lang_Thread_UncaughtExceptionHandler const& arg0) ;
	static void  sleep(long const& arg0,int const& arg1) ;
	static void  sleep(long const& arg0) ;
	virtual void  start() ;
	virtual void  stop(AndroidCXX::java_lang_Throwable const& arg0) ;
	virtual void  stop() ;
	virtual void  suspend() ;
	virtual AndroidCXX::java_lang_String * toString() ;
	static void  yield() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Thread
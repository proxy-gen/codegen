/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <java_lang_String.hpp>


#include <java_lang_ThreadGroup.hpp>

#include <java_lang_StackTraceElement.hpp>

#include <java_lang_Throwable.hpp>

#include <java_lang_ClassLoader.hpp>

#include <java_lang_Object.hpp>

#include <java_util_Map.hpp>

#include <java_lang_Thread_State.hpp>

#include <java_lang_Thread_UncaughtExceptionHandler.hpp>

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

class java_lang_String;

class java_lang_Thread;

class java_lang_ThreadGroup;

class java_lang_StackTraceElement;

class java_lang_Throwable;

class java_lang_ClassLoader;

class java_lang_Object;

class java_util_Map;


class java_lang_Thread_UncaughtExceptionHandler;

class java_lang_Runnable;

class java_lang_Thread
{
public:

	java_lang_Thread(const java_lang_Thread& cc);
	java_lang_Thread(Proxy proxy);
	// Public Constructors
	java_lang_Thread(AndroidCXX::java_lang_ThreadGroup const& arg0,AndroidCXX::java_lang_Runnable const& arg1,AndroidCXX::java_lang_String const& arg2,long const& arg3);
	java_lang_Thread();
	java_lang_Thread(AndroidCXX::java_lang_Runnable const& arg0);
	java_lang_Thread(AndroidCXX::java_lang_ThreadGroup const& arg0,AndroidCXX::java_lang_Runnable const& arg1);
	java_lang_Thread(AndroidCXX::java_lang_String const& arg0);
	java_lang_Thread(AndroidCXX::java_lang_ThreadGroup const& arg0,AndroidCXX::java_lang_String const& arg1);
	java_lang_Thread(AndroidCXX::java_lang_Runnable const& arg0,AndroidCXX::java_lang_String const& arg1);
	java_lang_Thread(AndroidCXX::java_lang_ThreadGroup const& arg0,AndroidCXX::java_lang_Runnable const& arg1,AndroidCXX::java_lang_String const& arg2);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_lang_Thread();
	// Functions
	 void run();
	 AndroidCXX::java_lang_String toString();
	 bool isInterrupted();
	static AndroidCXX::java_lang_Thread currentThread();
	 AndroidCXX::java_lang_String getName();
	 AndroidCXX::java_lang_ThreadGroup getThreadGroup();
	 std::vector<java_lang_StackTraceElement> getStackTrace();
	static void dumpStack();
	 void setPriority(int const& arg0);
	 void setDaemon(bool const& arg0);
	 void start();
	static void yield();
	static void sleep(long const& arg0);
	static void sleep(long const& arg0,int const& arg1);
	 void stop();
	 void stop(AndroidCXX::java_lang_Throwable const& arg0);
	 void interrupt();
	static bool interrupted();
	 void destroy();
	 bool isAlive();
	 void suspend();
	 void resume();
	 int getPriority();
	 void setName(AndroidCXX::java_lang_String const& arg0);
	static int activeCount();
	static int enumerate(std::vector<java_lang_Thread> const& arg0);
	 int countStackFrames();
	 void join();
	 void join(long const& arg0,int const& arg1);
	 void join(long const& arg0);
	 bool isDaemon();
	 void checkAccess();
	 AndroidCXX::java_lang_ClassLoader getContextClassLoader();
	 void setContextClassLoader(AndroidCXX::java_lang_ClassLoader const& arg0);
	static bool holdsLock(AndroidCXX::java_lang_Object const& arg0);
	static AndroidCXX::java_util_Map getAllStackTraces();
	 long getId();
	 java_lang_Thread_State::java_lang_Thread_State getState();
	static void setDefaultUncaughtExceptionHandler(AndroidCXX::java_lang_Thread_UncaughtExceptionHandler const& arg0);
	static AndroidCXX::java_lang_Thread_UncaughtExceptionHandler getDefaultUncaughtExceptionHandler();
	 AndroidCXX::java_lang_Thread_UncaughtExceptionHandler getUncaughtExceptionHandler();
	 void setUncaughtExceptionHandler(AndroidCXX::java_lang_Thread_UncaughtExceptionHandler const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Thread
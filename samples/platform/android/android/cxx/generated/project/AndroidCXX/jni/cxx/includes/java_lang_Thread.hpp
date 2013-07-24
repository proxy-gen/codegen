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
	java_lang_Thread(void * proxy);
	// Public Constructors
	java_lang_Thread(AndroidCXX::java_lang_ThreadGroup& arg0,AndroidCXX::java_lang_Runnable& arg1,AndroidCXX::java_lang_String& arg2,long& arg3);
	java_lang_Thread();
	java_lang_Thread(AndroidCXX::java_lang_Runnable& arg0);
	java_lang_Thread(AndroidCXX::java_lang_ThreadGroup& arg0,AndroidCXX::java_lang_Runnable& arg1);
	java_lang_Thread(AndroidCXX::java_lang_String& arg0);
	java_lang_Thread(AndroidCXX::java_lang_ThreadGroup& arg0,AndroidCXX::java_lang_String& arg1);
	java_lang_Thread(AndroidCXX::java_lang_Runnable& arg0,AndroidCXX::java_lang_String& arg1);
	java_lang_Thread(AndroidCXX::java_lang_ThreadGroup& arg0,AndroidCXX::java_lang_Runnable& arg1,AndroidCXX::java_lang_String& arg2);
	// TODO: remove
	// 
	// Default Destructor
	virtual ~java_lang_Thread();
	// Functions
	 void run();
	 AndroidCXX::java_lang_String toString();
	 bool isInterrupted();
	static AndroidCXX::java_lang_Thread currentThread();
	 AndroidCXX::java_lang_String getName();
	 AndroidCXX::java_lang_ThreadGroup getThreadGroup();
	 std::vector<AndroidCXX::java_lang_StackTraceElement > getStackTrace();
	static void dumpStack();
	 void setPriority(int& arg0);
	 void setDaemon(bool& arg0);
	 void start();
	static void yield();
	static void sleep(long& arg0);
	static void sleep(long& arg0,int& arg1);
	 void stop();
	 void stop(AndroidCXX::java_lang_Throwable& arg0);
	 void interrupt();
	static bool interrupted();
	 void destroy();
	 bool isAlive();
	 void suspend();
	 void resume();
	 int getPriority();
	 void setName(AndroidCXX::java_lang_String& arg0);
	static int activeCount();
	static int enumerate(std::vector<AndroidCXX::java_lang_Thread >& arg0);
	 int countStackFrames();
	 void join();
	 void join(long& arg0,int& arg1);
	 void join(long& arg0);
	 bool isDaemon();
	 void checkAccess();
	 AndroidCXX::java_lang_ClassLoader getContextClassLoader();
	 void setContextClassLoader(AndroidCXX::java_lang_ClassLoader& arg0);
	static bool holdsLock(AndroidCXX::java_lang_Object& arg0);
	static AndroidCXX::java_util_Map getAllStackTraces();
	 long getId();
	 JAVA_LANG_THREAD_STATE::java_lang_Thread_State getState();
	static void setDefaultUncaughtExceptionHandler(AndroidCXX::java_lang_Thread_UncaughtExceptionHandler& arg0);
	static AndroidCXX::java_lang_Thread_UncaughtExceptionHandler getDefaultUncaughtExceptionHandler();
	 AndroidCXX::java_lang_Thread_UncaughtExceptionHandler getUncaughtExceptionHandler();
	 void setUncaughtExceptionHandler(AndroidCXX::java_lang_Thread_UncaughtExceptionHandler& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Thread
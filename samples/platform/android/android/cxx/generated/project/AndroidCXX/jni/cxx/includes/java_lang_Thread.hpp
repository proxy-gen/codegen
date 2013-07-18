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

#include <java_lang_Throwable.hpp>

#include <java_lang_ClassLoader.hpp>

#include <java_lang_Object.hpp>

#include <java_util_Map.hpp>

#include <java_lang_Thread_State.hpp>

#include <java_lang_Thread_UncaughtExceptionHandler.hpp>

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


class java_lang_ThreadGroup;

class java_lang_Throwable;

class java_lang_ClassLoader;

class java_lang_Object;

class java_util_Map;


class java_lang_Thread_UncaughtExceptionHandler;

class java_lang_Thread
{
public:
 void run();
 java_lang_String toString();
 bool isInterrupted();
static java_lang_Thread currentThread();
 java_lang_String getName();
 java_lang_ThreadGroup getThreadGroup();
 std::vector<long> getStackTrace();
static void dumpStack();
 void setPriority(int& arg0);
 void setDaemon(bool& arg0);
 void start();
static void yield();
static void sleep(long& arg0,int& arg1);
 void stop(java_lang_Throwable& arg0);
 void interrupt();
static bool interrupted();
 void destroy();
 bool isAlive();
 void suspend();
 void resume();
 int getPriority();
 void setName(java_lang_String& arg0);
static int activeCount();
static int enumerate(std::vector<long>& arg0);
 int countStackFrames();
 void join(long& arg0,int& arg1);
 bool isDaemon();
 void checkAccess();
 java_lang_ClassLoader getContextClassLoader();
 void setContextClassLoader(java_lang_ClassLoader& arg0);
static bool holdsLock(java_lang_Object& arg0);
static java_util_Map getAllStackTraces();
 long getId();
 java_lang_Thread_State getState();
static void setDefaultUncaughtExceptionHandler(java_lang_Thread_UncaughtExceptionHandler& arg0);
static java_lang_Thread_UncaughtExceptionHandler getDefaultUncaughtExceptionHandler();
 java_lang_Thread_UncaughtExceptionHandler getUncaughtExceptionHandler();
 void setUncaughtExceptionHandler(java_lang_Thread_UncaughtExceptionHandler& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Thread
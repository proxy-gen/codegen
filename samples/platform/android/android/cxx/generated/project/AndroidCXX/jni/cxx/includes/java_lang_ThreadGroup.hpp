/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
		
		
		
 			

// Generated Code 

#ifndef _java_lang_ThreadGroup
#define _java_lang_ThreadGroup
//
// Scroll Down 
//
























#include <java_lang_Thread.hpp>

#include <java_lang_Throwable.hpp>

#include <java_lang_String.hpp>


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

class java_lang_Thread;

class java_lang_Throwable;

class java_lang_String;


class java_lang_ThreadGroup
{
public:
 void uncaughtException(java_lang_Thread& arg0,java_lang_Throwable& arg1);
 java_lang_String toString();
 java_lang_String getName();
 java_lang_ThreadGroup getParent();
 void setDaemon(bool& arg0);
 void stop();
 void interrupt();
 void destroy();
 void suspend();
 void resume();
 int activeCount();
 int enumerate(std::vector<long>& arg0,bool& arg1,std::vector<long>& arg2);
 bool isDaemon();
 void checkAccess();
 int getMaxPriority();
 bool isDestroyed();
 void setMaxPriority(int& arg0);
 bool parentOf(java_lang_ThreadGroup& arg0);
 int activeGroupCount();
 void list();
 bool allowThreadSuspension(bool& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_ThreadGroup
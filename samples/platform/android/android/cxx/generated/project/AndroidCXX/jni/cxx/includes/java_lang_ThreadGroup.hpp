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
#include <CXXTypes.hpp>


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class java_lang_Thread;

class java_lang_Throwable;

class java_lang_String;

class java_lang_ThreadGroup;

class java_lang_ThreadGroup
{
public:

	java_lang_ThreadGroup(const java_lang_ThreadGroup& cc);
	java_lang_ThreadGroup(void * proxy);
	// Public Constructors
	java_lang_ThreadGroup(AndroidCXX::java_lang_String& arg0);
	java_lang_ThreadGroup(AndroidCXX::java_lang_ThreadGroup& arg0,AndroidCXX::java_lang_String& arg1);
	java_lang_ThreadGroup();
	// Default Destructor
	virtual ~java_lang_ThreadGroup();
	// Functions
	 void uncaughtException(AndroidCXX::java_lang_Thread& arg0,AndroidCXX::java_lang_Throwable& arg1);
	 AndroidCXX::java_lang_String toString();
	 AndroidCXX::java_lang_String getName();
	 AndroidCXX::java_lang_ThreadGroup getParent();
	 void setDaemon(bool& arg0);
	 void stop();
	 void interrupt();
	 void destroy();
	 void suspend();
	 void resume();
	 int activeCount();
	 int enumerate(std::vector<AndroidCXX::java_lang_ThreadGroup >& arg0);
	 int enumerate(std::vector<AndroidCXX::java_lang_ThreadGroup >& arg0,bool& arg1);
	 int enumerate(std::vector<AndroidCXX::java_lang_Thread >& arg0,bool& arg1);
	 int enumerate(std::vector<AndroidCXX::java_lang_Thread >& arg0);
	 bool isDaemon();
	 void checkAccess();
	 int getMaxPriority();
	 bool isDestroyed();
	 void setMaxPriority(int& arg0);
	 bool parentOf(AndroidCXX::java_lang_ThreadGroup& arg0);
	 int activeGroupCount();
	 void list();
	 bool allowThreadSuspension(bool& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_ThreadGroup
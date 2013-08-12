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
	java_lang_ThreadGroup(Proxy proxy);
	// Public Constructors
	java_lang_ThreadGroup(AndroidCXX::java_lang_String const& arg0);
	java_lang_ThreadGroup(AndroidCXX::java_lang_ThreadGroup const& arg0,AndroidCXX::java_lang_String const& arg1);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_lang_ThreadGroup();
	// Functions
	 void uncaughtException(AndroidCXX::java_lang_Thread const& arg0,AndroidCXX::java_lang_Throwable const& arg1);
	 AndroidCXX::java_lang_String toString();
	 AndroidCXX::java_lang_String getName();
	 AndroidCXX::java_lang_ThreadGroup getParent();
	 void setDaemon(bool const& arg0);
	 void stop();
	 void interrupt();
	 void destroy();
	 void suspend();
	 void resume();
	 int activeCount();
	 int enumerate(std::vector<java_lang_ThreadGroup> const& arg0);
	 int enumerate(std::vector<java_lang_ThreadGroup> const& arg0,bool const& arg1);
	 int enumerate(std::vector<java_lang_Thread> const& arg0,bool const& arg1);
	 int enumerate(std::vector<java_lang_Thread> const& arg0);
	 bool isDaemon();
	 void checkAccess();
	 int getMaxPriority();
	 bool isDestroyed();
	 void setMaxPriority(int const& arg0);
	 bool parentOf(AndroidCXX::java_lang_ThreadGroup const& arg0);
	 int activeGroupCount();
	 void list();
	 bool allowThreadSuspension(bool const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_ThreadGroup
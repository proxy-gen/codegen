/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <java_lang_Thread_UncaughtExceptionHandler.hpp>

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


class java_lang_ThreadGroup : public java_lang_Thread_UncaughtExceptionHandler
{
public:

	// Public ConstrucXXX
	java_lang_ThreadGroup(AndroidCXX::java_lang_String const& arg0);
	java_lang_ThreadGroup(AndroidCXX::java_lang_ThreadGroup const& arg0,AndroidCXX::java_lang_String const& arg1);
	java_lang_ThreadGroup(const java_lang_ThreadGroup& cc);
	java_lang_ThreadGroup(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_lang_ThreadGroup();
	// Functions
	virtual void  uncaughtException(AndroidCXX::java_lang_Thread const& arg0,AndroidCXX::java_lang_Throwable const& arg1) ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual AndroidCXX::java_lang_String * getName() ;
	virtual AndroidCXX::java_lang_ThreadGroup * getParent() ;
	virtual void  setDaemon(bool const& arg0) ;
	virtual void  stop() ;
	virtual void  interrupt() ;
	virtual void  destroy() ;
	virtual void  suspend() ;
	virtual void  resume() ;
	virtual int  activeCount() ;
	virtual int  enumerate(std::vector<java_lang_ThreadGroup> const& arg0) ;
	virtual int  enumerate(std::vector<java_lang_ThreadGroup> const& arg0,bool const& arg1) ;
	virtual int  enumerate(std::vector<java_lang_Thread> const& arg0,bool const& arg1) ;
	virtual int  enumerate(std::vector<java_lang_Thread> const& arg0) ;
	virtual bool  isDaemon() ;
	virtual void  checkAccess() ;
	virtual int  getMaxPriority() ;
	virtual bool  isDestroyed() ;
	virtual void  setMaxPriority(int const& arg0) ;
	virtual bool  parentOf(AndroidCXX::java_lang_ThreadGroup const& arg0) ;
	virtual int  activeGroupCount() ;
	virtual void  list() ;
	virtual bool  allowThreadSuspension(bool const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_ThreadGroup
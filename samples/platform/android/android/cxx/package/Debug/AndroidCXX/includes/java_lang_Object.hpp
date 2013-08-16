/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	
 	
 		 
	

















// Generated Code 

#ifndef _java_lang_Object
#define _java_lang_Object
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


class java_lang_Class;

class java_lang_String;

class java_lang_Object 
{
public:

	java_lang_Object(const java_lang_Object& cc);
	java_lang_Object(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_lang_Object();
	// Functions
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_lang_Class * getClass() ;
	virtual int  hashCode() ;
	virtual void  notify() ;
	virtual void  notifyAll() ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual void  wait() ;
	virtual void  wait(long const& arg0) ;
	virtual void  wait(long const& arg0,int const& arg1) ;

protected:
	java_lang_Object();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Object
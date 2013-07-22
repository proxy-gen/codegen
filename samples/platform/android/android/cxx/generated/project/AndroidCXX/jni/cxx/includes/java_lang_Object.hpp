/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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



#include <java_lang_String.hpp>

#include <java_lang_Class.hpp>

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

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class java_lang_Object;

class java_lang_String;

class java_lang_Class;

class java_lang_Object
{
public:

	java_lang_Object(const java_lang_Object& cc);
	java_lang_Object(void * proxy);
	// Public Constructors
	java_lang_Object();
	// Default Destructor
	virtual ~java_lang_Object();
	// Functions
	 void wait();
	 void wait(long& arg0);
	 void wait(long& arg0,int& arg1);
	 bool equals(java_lang_Object& arg0);
	 java_lang_String toString();
	 int hashCode();
	 java_lang_Class getClass();
	 void notify();
	 void notifyAll();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Object
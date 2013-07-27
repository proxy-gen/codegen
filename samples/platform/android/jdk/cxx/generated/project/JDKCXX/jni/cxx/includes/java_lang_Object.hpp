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

namespace JDKCXX {

// Forward Declarations

class java_lang_Object;

class java_lang_String;

class java_lang_Class;

class java_lang_Object
{
public:

	java_lang_Object(const java_lang_Object& cc);
	java_lang_Object(Proxy proxy);
	// Public Constructors
	java_lang_Object();
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_lang_Object();
	// Functions
	 void wait();
	 void wait(long const& arg0);
	 void wait(long const& arg0,int const& arg1);
	 bool equals(JDKCXX::java_lang_Object const& arg0);
	 JDKCXX::java_lang_String toString();
	 int hashCode();
	 JDKCXX::java_lang_Class getClass();
	 void notify();
	 void notifyAll();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Object
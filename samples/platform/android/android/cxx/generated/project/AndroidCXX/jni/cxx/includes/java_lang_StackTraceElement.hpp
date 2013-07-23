/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
	
	
	


 		 
 		 
 		 














// Generated Code 

#ifndef _java_lang_StackTraceElement
#define _java_lang_StackTraceElement
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

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

class java_lang_Object;

class java_lang_String;

class java_lang_StackTraceElement
{
public:

	java_lang_StackTraceElement(const java_lang_StackTraceElement& cc);
	java_lang_StackTraceElement(void * proxy);
	// Public Constructors
	java_lang_StackTraceElement(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::java_lang_String& arg2,int& arg3);
	java_lang_StackTraceElement();
	// Default Destructor
	virtual ~java_lang_StackTraceElement();
	// Functions
	 bool equals(AndroidCXX::java_lang_Object& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	 AndroidCXX::java_lang_String getFileName();
	 int getLineNumber();
	 AndroidCXX::java_lang_String getClassName();
	 AndroidCXX::java_lang_String getMethodName();
	 bool isNativeMethod();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_StackTraceElement
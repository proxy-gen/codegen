/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
 		 


 		 

























// Generated Code 

#ifndef _java_lang_Short
#define _java_lang_Short
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

class java_lang_Short;

class java_lang_Short
{
public:

	java_lang_Short(const java_lang_Short& cc);
	java_lang_Short(void * proxy);
	// Public Constructors
	java_lang_Short(short& arg0);
	java_lang_Short(AndroidCXX::java_lang_String& arg0);
	java_lang_Short();
	// Default Destructor
	virtual ~java_lang_Short();
	// Functions
	 bool equals(AndroidCXX::java_lang_Object& arg0);
	static AndroidCXX::java_lang_String toString(short& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	static short reverseBytes(short& arg0);
	 int compareTo(AndroidCXX::java_lang_Short& arg0);
	 byte byteValue();
	 short shortValue();
	 int intValue();
	 long longValue();
	 float floatValue();
	 double doubleValue();
	static AndroidCXX::java_lang_Short valueOf(short& arg0);
	static AndroidCXX::java_lang_Short valueOf(AndroidCXX::java_lang_String& arg0);
	static AndroidCXX::java_lang_Short valueOf(AndroidCXX::java_lang_String& arg0,int& arg1);
	static AndroidCXX::java_lang_Short decode(AndroidCXX::java_lang_String& arg0);
	static short parseShort(AndroidCXX::java_lang_String& arg0,int& arg1);
	static short parseShort(AndroidCXX::java_lang_String& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Short
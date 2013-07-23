/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
	
 		 
 		 
	
 		 
	
	
 		 
	
 		 
 		 


 		 
























// Generated Code 

#ifndef _java_lang_Byte
#define _java_lang_Byte
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

class java_lang_Byte;

class java_lang_Byte
{
public:

	java_lang_Byte(const java_lang_Byte& cc);
	java_lang_Byte(void * proxy);
	// Public Constructors
	java_lang_Byte(byte& arg0);
	java_lang_Byte(AndroidCXX::java_lang_String& arg0);
	java_lang_Byte();
	// Default Destructor
	virtual ~java_lang_Byte();
	// Functions
	 bool equals(AndroidCXX::java_lang_Object& arg0);
	static AndroidCXX::java_lang_String toString(byte& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	 int compareTo(AndroidCXX::java_lang_Byte& arg0);
	 byte byteValue();
	 short shortValue();
	 int intValue();
	 long longValue();
	 float floatValue();
	 double doubleValue();
	static AndroidCXX::java_lang_Byte valueOf(AndroidCXX::java_lang_String& arg0);
	static AndroidCXX::java_lang_Byte valueOf(AndroidCXX::java_lang_String& arg0,int& arg1);
	static AndroidCXX::java_lang_Byte valueOf(byte& arg0);
	static AndroidCXX::java_lang_Byte decode(AndroidCXX::java_lang_String& arg0);
	static byte parseByte(AndroidCXX::java_lang_String& arg0);
	static byte parseByte(AndroidCXX::java_lang_String& arg0,int& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Byte
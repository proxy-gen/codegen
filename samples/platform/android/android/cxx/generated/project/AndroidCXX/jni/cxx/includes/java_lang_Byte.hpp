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
	java_lang_Byte(Proxy proxy);
	// Public Constructors
	java_lang_Byte(byte const& arg0);
	java_lang_Byte(AndroidCXX::java_lang_String const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_lang_Byte();
	// Functions
	 bool equals(AndroidCXX::java_lang_Object const& arg0);
	static AndroidCXX::java_lang_String toString(byte const& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	 int compareTo(AndroidCXX::java_lang_Byte const& arg0);
	 byte byteValue();
	 short shortValue();
	 int intValue();
	 long longValue();
	 float floatValue();
	 double doubleValue();
	static AndroidCXX::java_lang_Byte valueOf(AndroidCXX::java_lang_String const& arg0);
	static AndroidCXX::java_lang_Byte valueOf(AndroidCXX::java_lang_String const& arg0,int const& arg1);
	static AndroidCXX::java_lang_Byte valueOf(byte const& arg0);
	static AndroidCXX::java_lang_Byte decode(AndroidCXX::java_lang_String const& arg0);
	static byte parseByte(AndroidCXX::java_lang_String const& arg0);
	static byte parseByte(AndroidCXX::java_lang_String const& arg0,int const& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Byte
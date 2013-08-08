/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	
	
 		 
 		 
 		 
	
	
 		 


 		 

















// Generated Code 

#ifndef _java_lang_Boolean
#define _java_lang_Boolean
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

class java_lang_Boolean;

class java_lang_Boolean
{
public:

	java_lang_Boolean(const java_lang_Boolean& cc);
	java_lang_Boolean(Proxy proxy);
	// Public Constructors
	java_lang_Boolean(bool const& arg0);
	java_lang_Boolean(AndroidCXX::java_lang_String const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_lang_Boolean();
	// Functions
	 bool equals(AndroidCXX::java_lang_Object const& arg0);
	static AndroidCXX::java_lang_String toString(bool const& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	 int compareTo(AndroidCXX::java_lang_Boolean const& arg0);
	static bool getBoolean(AndroidCXX::java_lang_String const& arg0);
	 bool booleanValue();
	static AndroidCXX::java_lang_Boolean valueOf(AndroidCXX::java_lang_String const& arg0);
	static AndroidCXX::java_lang_Boolean valueOf(bool const& arg0);
	static bool parseBoolean(AndroidCXX::java_lang_String const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Boolean
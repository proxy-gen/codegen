/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	
	
 		 
 		 
	
	
	
 		 


 		 































// Generated Code 

#ifndef _java_lang_Float
#define _java_lang_Float
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

class java_lang_Float;

class java_lang_Float
{
public:

	java_lang_Float(const java_lang_Float& cc);
	java_lang_Float(Proxy proxy);
	// Public Constructors
	java_lang_Float(float const& arg0);
	java_lang_Float(AndroidCXX::java_lang_String const& arg0);
	java_lang_Float(double const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_lang_Float();
	// Functions
	 bool equals(AndroidCXX::java_lang_Object const& arg0);
	static AndroidCXX::java_lang_String toString(float const& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	static int floatToRawIntBits(float const& arg0);
	static int floatToIntBits(float const& arg0);
	static float intBitsToFloat(int const& arg0);
	 int compareTo(AndroidCXX::java_lang_Float const& arg0);
	 byte byteValue();
	 short shortValue();
	 int intValue();
	 long longValue();
	 float floatValue();
	 double doubleValue();
	static AndroidCXX::java_lang_Float valueOf(AndroidCXX::java_lang_String const& arg0);
	static AndroidCXX::java_lang_Float valueOf(float const& arg0);
	static AndroidCXX::java_lang_String toHexString(float const& arg0);
	static int compare(float const& arg0,float const& arg1);
	static bool isNaN(float const& arg0);
	 bool isNaN();
	static float parseFloat(AndroidCXX::java_lang_String const& arg0);
	 bool isInfinite();
	static bool isInfinite(float const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Float
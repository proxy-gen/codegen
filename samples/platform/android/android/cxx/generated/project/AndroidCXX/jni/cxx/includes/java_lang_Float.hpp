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
	java_lang_Float(void * proxy);
	// Public Constructors
	java_lang_Float(float& arg0);
	java_lang_Float(AndroidCXX::java_lang_String& arg0);
	java_lang_Float(double& arg0);
	// TODO: remove
	// 
	// java_lang_Float();
	// 
	// Default Destructor
	virtual ~java_lang_Float();
	// Functions
	 bool equals(AndroidCXX::java_lang_Object& arg0);
	static AndroidCXX::java_lang_String toString(float& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	static int floatToRawIntBits(float& arg0);
	static int floatToIntBits(float& arg0);
	static float intBitsToFloat(int& arg0);
	 int compareTo(AndroidCXX::java_lang_Float& arg0);
	 byte byteValue();
	 short shortValue();
	 int intValue();
	 long longValue();
	 float floatValue();
	 double doubleValue();
	static AndroidCXX::java_lang_Float valueOf(AndroidCXX::java_lang_String& arg0);
	static AndroidCXX::java_lang_Float valueOf(float& arg0);
	static AndroidCXX::java_lang_String toHexString(float& arg0);
	static int compare(float& arg0,float& arg1);
	static bool isNaN(float& arg0);
	 bool isNaN();
	static float parseFloat(AndroidCXX::java_lang_String& arg0);
	 bool isInfinite();
	static bool isInfinite(float& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Float
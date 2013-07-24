/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	
	


 		 
 		 













// Generated Code 

#ifndef _java_math_MathContext
#define _java_math_MathContext
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <java_math_RoundingMode.hpp>

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


class java_math_MathContext
{
public:

	java_math_MathContext(const java_math_MathContext& cc);
	java_math_MathContext(void * proxy);
	// Public Constructors
	java_math_MathContext(int& arg0);
	java_math_MathContext(int& arg0,JAVA_MATH_ROUNDINGMODE::java_math_RoundingMode& arg1);
	java_math_MathContext(AndroidCXX::java_lang_String& arg0);
	// TODO: remove
	// 
	// java_math_MathContext();
	// 
	// Default Destructor
	virtual ~java_math_MathContext();
	// Functions
	 bool equals(AndroidCXX::java_lang_Object& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	 int getPrecision();
	 JAVA_MATH_ROUNDINGMODE::java_math_RoundingMode getRoundingMode();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_math_MathContext
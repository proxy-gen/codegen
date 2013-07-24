/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	
	
 		 
 		 
	
	
	
 		 


 		 






























// Generated Code 

#ifndef _java_lang_Double
#define _java_lang_Double
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

class java_lang_Double;

class java_lang_Double
{
public:

	java_lang_Double(const java_lang_Double& cc);
	java_lang_Double(void * proxy);
	// Public Constructors
	java_lang_Double(double& arg0);
	java_lang_Double(AndroidCXX::java_lang_String& arg0);
	// TODO: remove
	// 
	// java_lang_Double();
	// 
	// Default Destructor
	virtual ~java_lang_Double();
	// Functions
	 bool equals(AndroidCXX::java_lang_Object& arg0);
	static AndroidCXX::java_lang_String toString(double& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	static long doubleToRawLongBits(double& arg0);
	static long doubleToLongBits(double& arg0);
	static double longBitsToDouble(long& arg0);
	 int compareTo(AndroidCXX::java_lang_Double& arg0);
	 byte byteValue();
	 short shortValue();
	 int intValue();
	 long longValue();
	 float floatValue();
	 double doubleValue();
	static AndroidCXX::java_lang_Double valueOf(AndroidCXX::java_lang_String& arg0);
	static AndroidCXX::java_lang_Double valueOf(double& arg0);
	static AndroidCXX::java_lang_String toHexString(double& arg0);
	static int compare(double& arg0,double& arg1);
	static bool isNaN(double& arg0);
	 bool isNaN();
	 bool isInfinite();
	static bool isInfinite(double& arg0);
	static double parseDouble(AndroidCXX::java_lang_String& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Double
/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	
	
	
 		 
 		 
	
 		 
	
	
	
 		 
	
 		 
 		 
	
	
 		 
 		 
	
 		 
	
 		 
	


 		 









































// Generated Code 

#ifndef _java_lang_Integer
#define _java_lang_Integer
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

class java_lang_Integer;

class java_lang_Integer
{
public:

	java_lang_Integer(const java_lang_Integer& cc);
	java_lang_Integer(Proxy proxy);
	// Public Constructors
	java_lang_Integer(int const& arg0);
	java_lang_Integer(AndroidCXX::java_lang_String const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_lang_Integer();
	// Functions
	static int numberOfLeadingZeros(int const& arg0);
	static int numberOfTrailingZeros(int const& arg0);
	static int bitCount(int const& arg0);
	 bool equals(AndroidCXX::java_lang_Object const& arg0);
	static AndroidCXX::java_lang_String toString(int const& arg0,int const& arg1);
	static AndroidCXX::java_lang_String toString(int const& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	static int reverseBytes(int const& arg0);
	 int compareTo(AndroidCXX::java_lang_Integer const& arg0);
	 byte byteValue();
	 short shortValue();
	 int intValue();
	 long longValue();
	 float floatValue();
	 double doubleValue();
	static AndroidCXX::java_lang_Integer valueOf(AndroidCXX::java_lang_String const& arg0,int const& arg1);
	static AndroidCXX::java_lang_Integer valueOf(AndroidCXX::java_lang_String const& arg0);
	static AndroidCXX::java_lang_Integer valueOf(int const& arg0);
	static AndroidCXX::java_lang_String toHexString(int const& arg0);
	static AndroidCXX::java_lang_Integer decode(AndroidCXX::java_lang_String const& arg0);
	static int reverse(int const& arg0);
	static int parseInt(AndroidCXX::java_lang_String const& arg0);
	static int parseInt(AndroidCXX::java_lang_String const& arg0,int const& arg1);
	static AndroidCXX::java_lang_String toOctalString(int const& arg0);
	static AndroidCXX::java_lang_String toBinaryString(int const& arg0);
	static AndroidCXX::java_lang_Integer getInteger(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_Integer const& arg1);
	static AndroidCXX::java_lang_Integer getInteger(AndroidCXX::java_lang_String const& arg0);
	static AndroidCXX::java_lang_Integer getInteger(AndroidCXX::java_lang_String const& arg0,int const& arg1);
	static int highestOneBit(int const& arg0);
	static int lowestOneBit(int const& arg0);
	static int rotateLeft(int const& arg0,int const& arg1);
	static int rotateRight(int const& arg0,int const& arg1);
	static int signum(int const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Integer
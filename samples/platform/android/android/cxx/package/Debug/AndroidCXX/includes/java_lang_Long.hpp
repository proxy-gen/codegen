/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	
	
	
 		 
 		 
	
 		 
	
 		 
 		 
	
 		 
	
 		 
	
	
	
 		 
	
	
	
 		 
 		 


 		 









































// Generated Code 

#ifndef _java_lang_Long
#define _java_lang_Long
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

class java_lang_Long;

class java_lang_Long
{
public:

	java_lang_Long(const java_lang_Long& cc);
	java_lang_Long(Proxy proxy);
	// Public Constructors
	java_lang_Long(long const& arg0);
	java_lang_Long(AndroidCXX::java_lang_String const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_lang_Long();
	// Functions
	static int numberOfLeadingZeros(long const& arg0);
	static int numberOfTrailingZeros(long const& arg0);
	static int bitCount(long const& arg0);
	 bool equals(AndroidCXX::java_lang_Object const& arg0);
	 AndroidCXX::java_lang_String toString();
	static AndroidCXX::java_lang_String toString(long const& arg0);
	static AndroidCXX::java_lang_String toString(long const& arg0,int const& arg1);
	 int hashCode();
	static long reverseBytes(long const& arg0);
	 int compareTo(AndroidCXX::java_lang_Long const& arg0);
	static AndroidCXX::java_lang_Long getLong(AndroidCXX::java_lang_String const& arg0);
	static AndroidCXX::java_lang_Long getLong(AndroidCXX::java_lang_String const& arg0,long const& arg1);
	static AndroidCXX::java_lang_Long getLong(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_Long const& arg1);
	 byte byteValue();
	 short shortValue();
	 int intValue();
	 long longValue();
	 float floatValue();
	 double doubleValue();
	static AndroidCXX::java_lang_Long valueOf(AndroidCXX::java_lang_String const& arg0);
	static AndroidCXX::java_lang_Long valueOf(AndroidCXX::java_lang_String const& arg0,int const& arg1);
	static AndroidCXX::java_lang_Long valueOf(long const& arg0);
	static AndroidCXX::java_lang_String toHexString(long const& arg0);
	static AndroidCXX::java_lang_Long decode(AndroidCXX::java_lang_String const& arg0);
	static long reverse(long const& arg0);
	static AndroidCXX::java_lang_String toOctalString(long const& arg0);
	static AndroidCXX::java_lang_String toBinaryString(long const& arg0);
	static long highestOneBit(long const& arg0);
	static long lowestOneBit(long const& arg0);
	static long rotateLeft(long const& arg0,int const& arg1);
	static long rotateRight(long const& arg0,int const& arg1);
	static int signum(long const& arg0);
	static long parseLong(AndroidCXX::java_lang_String const& arg0,int const& arg1);
	static long parseLong(AndroidCXX::java_lang_String const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Long
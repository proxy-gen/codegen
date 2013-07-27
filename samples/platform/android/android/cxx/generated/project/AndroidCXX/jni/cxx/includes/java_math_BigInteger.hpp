/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	
 		 
	
	
	
	
 		 
	
 		 
	
 		 
	
 	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
 	
 		 
	
 		 
	
	
 		 
	
 		 
	
 		 
 		 
	
 		 
	
	
	
	
	
	
	


 	
 		 
 	
 		 
 		 
 		 























































// Generated Code 

#ifndef _java_math_BigInteger
#define _java_math_BigInteger
//
// Scroll Down 
//



#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <java_util_Random.hpp>

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

class java_math_BigInteger;

class java_lang_Object;

class java_lang_String;

class java_util_Random;

class java_math_BigInteger
{
public:

	java_math_BigInteger(const java_math_BigInteger& cc);
	java_math_BigInteger(Proxy proxy);
	// Public Constructors
	java_math_BigInteger(int const& arg0,std::vector<byte> const& arg1);
	java_math_BigInteger(AndroidCXX::java_lang_String const& arg0,int const& arg1);
	java_math_BigInteger(std::vector<byte> const& arg0);
	java_math_BigInteger(AndroidCXX::java_lang_String const& arg0);
	java_math_BigInteger(int const& arg0,AndroidCXX::java_util_Random const& arg1);
	java_math_BigInteger(int const& arg0,int const& arg1,AndroidCXX::java_util_Random const& arg2);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_math_BigInteger();
	// Functions
	 AndroidCXX::java_math_BigInteger add(AndroidCXX::java_math_BigInteger const& arg0);
	 int bitCount();
	 bool equals(AndroidCXX::java_lang_Object const& arg0);
	 AndroidCXX::java_lang_String toString(int const& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	 AndroidCXX::java_math_BigInteger abs();
	 AndroidCXX::java_math_BigInteger pow(int const& arg0);
	 AndroidCXX::java_math_BigInteger min(AndroidCXX::java_math_BigInteger const& arg0);
	 AndroidCXX::java_math_BigInteger max(AndroidCXX::java_math_BigInteger const& arg0);
	 int compareTo(AndroidCXX::java_math_BigInteger const& arg0);
	 int intValue();
	 long longValue();
	 float floatValue();
	 double doubleValue();
	static AndroidCXX::java_math_BigInteger valueOf(long const& arg0);
	 int signum();
	 std::vector<byte> toByteArray();
	 AndroidCXX::java_math_BigInteger _and(AndroidCXX::java_math_BigInteger const& arg0);
	 AndroidCXX::java_math_BigInteger _or(AndroidCXX::java_math_BigInteger const& arg0);
	 AndroidCXX::java_math_BigInteger _xor(AndroidCXX::java_math_BigInteger const& arg0);
	 AndroidCXX::java_math_BigInteger andNot(AndroidCXX::java_math_BigInteger const& arg0);
	 AndroidCXX::java_math_BigInteger subtract(AndroidCXX::java_math_BigInteger const& arg0);
	 AndroidCXX::java_math_BigInteger multiply(AndroidCXX::java_math_BigInteger const& arg0);
	 AndroidCXX::java_math_BigInteger divide(AndroidCXX::java_math_BigInteger const& arg0);
	 AndroidCXX::java_math_BigInteger remainder(AndroidCXX::java_math_BigInteger const& arg0);
	 std::vector<AndroidCXX::java_math_BigInteger > divideAndRemainder(AndroidCXX::java_math_BigInteger const& arg0);
	 AndroidCXX::java_math_BigInteger negate();
	 int bitLength();
	 bool testBit(int const& arg0);
	static AndroidCXX::java_math_BigInteger probablePrime(int const& arg0,AndroidCXX::java_util_Random const& arg1);
	 AndroidCXX::java_math_BigInteger nextProbablePrime();
	 AndroidCXX::java_math_BigInteger gcd(AndroidCXX::java_math_BigInteger const& arg0);
	 AndroidCXX::java_math_BigInteger mod(AndroidCXX::java_math_BigInteger const& arg0);
	 AndroidCXX::java_math_BigInteger modPow(AndroidCXX::java_math_BigInteger const& arg0,AndroidCXX::java_math_BigInteger const& arg1);
	 AndroidCXX::java_math_BigInteger modInverse(AndroidCXX::java_math_BigInteger const& arg0);
	 AndroidCXX::java_math_BigInteger shiftLeft(int const& arg0);
	 AndroidCXX::java_math_BigInteger shiftRight(int const& arg0);
	 AndroidCXX::java_math_BigInteger _not();
	 AndroidCXX::java_math_BigInteger setBit(int const& arg0);
	 AndroidCXX::java_math_BigInteger clearBit(int const& arg0);
	 AndroidCXX::java_math_BigInteger flipBit(int const& arg0);
	 int getLowestSetBit();
	 bool isProbablePrime(int const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_math_BigInteger
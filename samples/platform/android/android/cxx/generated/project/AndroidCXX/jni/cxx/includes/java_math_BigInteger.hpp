/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
 			
		
		
		
 			
		
 			
		
 			
		
 			
		
 			
		
 			
		
 			
		
 			
		
		
 			
		
 			
		
 			
		
 			
 			
		
 			
		
		
 			
		
 			
		
 			
		
		
		
		
		
		
		


#ifndef _java_math_BigInteger
#define _java_math_BigInteger













































#include <java_lang_Object.hpp>
#include <java_util_Random.hpp>
#include <java_lang_String.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class java_math_BigInteger
{
public:
 java_math_BigInteger add(java_math_BigInteger& arg0);
 int bitCount();
 bool equals(java_lang_Object& arg0);
 java_lang_String toString(int& arg0);
 int hashCode();
 java_math_BigInteger abs();
 java_math_BigInteger pow(int& arg0);
 java_math_BigInteger min(java_math_BigInteger& arg0);
 java_math_BigInteger max(java_math_BigInteger& arg0);
 int compareTo(java_math_BigInteger& arg0);
 int intValue();
 long longValue();
 float floatValue();
 double doubleValue();
static java_math_BigInteger valueOf(long& arg0);
 int signum();
 std::vector<char> toByteArray();
 java_math_BigInteger and(java_math_BigInteger& arg0);
 java_math_BigInteger or(java_math_BigInteger& arg0);
 java_math_BigInteger xor(java_math_BigInteger& arg0);
 java_math_BigInteger andNot(java_math_BigInteger& arg0);
 int bitLength();
static java_math_BigInteger probablePrime(int& arg0,java_util_Random& arg1);
 java_math_BigInteger nextProbablePrime();
 java_math_BigInteger subtract(java_math_BigInteger& arg0);
 java_math_BigInteger multiply(java_math_BigInteger& arg0);
 java_math_BigInteger divide(java_math_BigInteger& arg0);
 std::vector<long> divideAndRemainder(java_math_BigInteger& arg0);
 java_math_BigInteger remainder(java_math_BigInteger& arg0);
 java_math_BigInteger gcd(java_math_BigInteger& arg0);
 java_math_BigInteger negate();
 java_math_BigInteger mod(java_math_BigInteger& arg0);
 java_math_BigInteger modPow(java_math_BigInteger& arg0);
 java_math_BigInteger modInverse(java_math_BigInteger& arg0);
 java_math_BigInteger shiftLeft(int& arg0);
 java_math_BigInteger shiftRight(int& arg0);
 java_math_BigInteger not();
 bool testBit(int& arg0);
 java_math_BigInteger setBit(int& arg0);
 java_math_BigInteger clearBit(int& arg0);
 java_math_BigInteger flipBit(int& arg0);
 int getLowestSetBit();
 bool isProbablePrime(int& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_math_BigInteger
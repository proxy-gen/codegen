/*
 * Header (Instance CXX)
 * Author: codegen
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

#include <java_util_Random.hpp>

#include <java_lang_String.hpp>


#include <java_lang_Number.hpp>

#include <java_lang_Comparable.hpp>

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

class java_util_Random;

class java_lang_String;

class java_math_BigInteger : public AndroidCXX::java_lang_Number,public AndroidCXX::java_lang_Comparable
{
public:

	// Public Constructor
	java_math_BigInteger(std::vector<byte> const& arg0,Proxy * aProxy = new Proxy());
	java_math_BigInteger(int const& arg0,std::vector<byte> const& arg1,Proxy * aProxy = new Proxy());
	java_math_BigInteger(int const& arg0,int const& arg1,AndroidCXX::java_util_Random const& arg2,Proxy * aProxy = new Proxy());
	java_math_BigInteger(int const& arg0,AndroidCXX::java_util_Random const& arg1,Proxy * aProxy = new Proxy());
	java_math_BigInteger(AndroidCXX::java_lang_String const& arg0,Proxy * aProxy = new Proxy());
	java_math_BigInteger(AndroidCXX::java_lang_String const& arg0,int const& arg1,Proxy * aProxy = new Proxy());
	java_math_BigInteger(const java_math_BigInteger& cc);
	java_math_BigInteger(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_math_BigInteger();
	// Functions
	virtual AndroidCXX::java_math_BigInteger * abs() ;
	virtual AndroidCXX::java_math_BigInteger * add(AndroidCXX::java_math_BigInteger const& arg0) ;
	virtual AndroidCXX::java_math_BigInteger * andNot(AndroidCXX::java_math_BigInteger const& arg0) ;
	virtual AndroidCXX::java_math_BigInteger * _and(AndroidCXX::java_math_BigInteger const& arg0) ;
	virtual int  bitCount() ;
	virtual int  bitLength() ;
	virtual AndroidCXX::java_math_BigInteger * clearBit(int const& arg0) ;
	virtual int  compareTo(AndroidCXX::java_math_BigInteger const& arg0) ;
	virtual std::vector<AndroidCXX::java_math_BigInteger>  divideAndRemainder(AndroidCXX::java_math_BigInteger const& arg0) ;
	virtual AndroidCXX::java_math_BigInteger * divide(AndroidCXX::java_math_BigInteger const& arg0) ;
	virtual double  doubleValue() ;
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_math_BigInteger * flipBit(int const& arg0) ;
	virtual float  floatValue() ;
	virtual AndroidCXX::java_math_BigInteger * gcd(AndroidCXX::java_math_BigInteger const& arg0) ;
	virtual int  getLowestSetBit() ;
	virtual int  hashCode() ;
	virtual int  intValue() ;
	virtual bool  isProbablePrime(int const& arg0) ;
	virtual long  longValue() ;
	virtual AndroidCXX::java_math_BigInteger * max(AndroidCXX::java_math_BigInteger const& arg0) ;
	virtual AndroidCXX::java_math_BigInteger * min(AndroidCXX::java_math_BigInteger const& arg0) ;
	virtual AndroidCXX::java_math_BigInteger * modInverse(AndroidCXX::java_math_BigInteger const& arg0) ;
	virtual AndroidCXX::java_math_BigInteger * mod(AndroidCXX::java_math_BigInteger const& arg0) ;
	virtual AndroidCXX::java_math_BigInteger * modPow(AndroidCXX::java_math_BigInteger const& arg0,AndroidCXX::java_math_BigInteger const& arg1) ;
	virtual AndroidCXX::java_math_BigInteger * multiply(AndroidCXX::java_math_BigInteger const& arg0) ;
	virtual AndroidCXX::java_math_BigInteger * negate() ;
	virtual AndroidCXX::java_math_BigInteger * nextProbablePrime() ;
	virtual AndroidCXX::java_math_BigInteger * _not() ;
	virtual AndroidCXX::java_math_BigInteger * _or(AndroidCXX::java_math_BigInteger const& arg0) ;
	virtual AndroidCXX::java_math_BigInteger * pow(int const& arg0) ;
	static AndroidCXX::java_math_BigInteger * probablePrime(int const& arg0,AndroidCXX::java_util_Random const& arg1) ;
	virtual AndroidCXX::java_math_BigInteger * remainder(AndroidCXX::java_math_BigInteger const& arg0) ;
	virtual AndroidCXX::java_math_BigInteger * setBit(int const& arg0) ;
	virtual AndroidCXX::java_math_BigInteger * shiftLeft(int const& arg0) ;
	virtual AndroidCXX::java_math_BigInteger * shiftRight(int const& arg0) ;
	virtual int  signum() ;
	virtual AndroidCXX::java_math_BigInteger * subtract(AndroidCXX::java_math_BigInteger const& arg0) ;
	virtual bool  testBit(int const& arg0) ;
	virtual std::vector<byte>  toByteArray() ;
	virtual AndroidCXX::java_lang_String * toString(int const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;
	static AndroidCXX::java_math_BigInteger * valueOf(long const& arg0) ;
	virtual AndroidCXX::java_math_BigInteger * _xor(AndroidCXX::java_math_BigInteger const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_math_BigInteger
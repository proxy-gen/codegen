/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
	
 		 
	
 		 
	
	
 		 
	
	
 		 
	
 		 
	
 		 
	
 		 
	
	
	
 		 
	
	
 		 
	
 		 
 		 
	
 		 
	
 		 
 		 
	
 		 
 		 
	
 		 
 		 
	
 		 
	
 		 
 		 
	
 		 
	
 		 
	
 		 
	
 		 
 		 
	
 		 
	
 		 
 		 
	
 		 
 		 
 	
 		 
 		 
 	
 		 
	
 		 
	
 		 
	
	
	
 		 
	
	
	
	
	
	
	
	
	
	
	


 	
 	
 		 
 	
 	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 

















































































// Generated Code 

#ifndef _java_math_BigDecimal
#define _java_math_BigDecimal
//
// Scroll Down 
//



#include <java_math_MathContext.hpp>

#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <java_math_RoundingMode.hpp>

#include <java_math_BigInteger.hpp>

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

class java_math_BigDecimal;

class java_math_MathContext;

class java_lang_Object;

class java_lang_String;


class java_math_BigInteger;

class java_math_BigDecimal
{
public:

	java_math_BigDecimal(const java_math_BigDecimal& cc);
	java_math_BigDecimal(void * proxy);
	// Public Constructors
	java_math_BigDecimal(std::vector<char>& arg0,int& arg1,int& arg2);
	java_math_BigDecimal(std::vector<char>& arg0,int& arg1,int& arg2,AndroidCXX::java_math_MathContext& arg3);
	java_math_BigDecimal(std::vector<char>& arg0);
	java_math_BigDecimal(std::vector<char>& arg0,AndroidCXX::java_math_MathContext& arg1);
	java_math_BigDecimal(AndroidCXX::java_lang_String& arg0);
	java_math_BigDecimal(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_math_MathContext& arg1);
	java_math_BigDecimal(double& arg0);
	java_math_BigDecimal(double& arg0,AndroidCXX::java_math_MathContext& arg1);
	java_math_BigDecimal(AndroidCXX::java_math_BigInteger& arg0);
	java_math_BigDecimal(AndroidCXX::java_math_BigInteger& arg0,AndroidCXX::java_math_MathContext& arg1);
	java_math_BigDecimal(AndroidCXX::java_math_BigInteger& arg0,int& arg1);
	java_math_BigDecimal(AndroidCXX::java_math_BigInteger& arg0,int& arg1,AndroidCXX::java_math_MathContext& arg2);
	java_math_BigDecimal(int& arg0);
	java_math_BigDecimal(int& arg0,AndroidCXX::java_math_MathContext& arg1);
	java_math_BigDecimal(long& arg0);
	java_math_BigDecimal(long& arg0,AndroidCXX::java_math_MathContext& arg1);
	java_math_BigDecimal();
	// Default Destructor
	virtual ~java_math_BigDecimal();
	// Functions
	 AndroidCXX::java_math_BigDecimal add(AndroidCXX::java_math_BigDecimal& arg0,AndroidCXX::java_math_MathContext& arg1);
	 AndroidCXX::java_math_BigDecimal add(AndroidCXX::java_math_BigDecimal& arg0);
	 bool equals(AndroidCXX::java_lang_Object& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	 AndroidCXX::java_math_BigDecimal abs();
	 AndroidCXX::java_math_BigDecimal abs(AndroidCXX::java_math_MathContext& arg0);
	 AndroidCXX::java_math_BigDecimal pow(int& arg0);
	 AndroidCXX::java_math_BigDecimal pow(int& arg0,AndroidCXX::java_math_MathContext& arg1);
	 AndroidCXX::java_math_BigDecimal min(AndroidCXX::java_math_BigDecimal& arg0);
	 AndroidCXX::java_math_BigDecimal max(AndroidCXX::java_math_BigDecimal& arg0);
	 int compareTo(AndroidCXX::java_math_BigDecimal& arg0);
	 int intValue();
	 long longValue();
	 float floatValue();
	 double doubleValue();
	static AndroidCXX::java_math_BigDecimal valueOf(double& arg0);
	static AndroidCXX::java_math_BigDecimal valueOf(long& arg0);
	static AndroidCXX::java_math_BigDecimal valueOf(long& arg0,int& arg1);
	 int signum();
	 AndroidCXX::java_math_BigDecimal round(AndroidCXX::java_math_MathContext& arg0);
	 AndroidCXX::java_math_BigDecimal ulp();
	 int scale();
	 int precision();
	 AndroidCXX::java_math_BigDecimal subtract(AndroidCXX::java_math_BigDecimal& arg0);
	 AndroidCXX::java_math_BigDecimal subtract(AndroidCXX::java_math_BigDecimal& arg0,AndroidCXX::java_math_MathContext& arg1);
	 AndroidCXX::java_math_BigDecimal multiply(AndroidCXX::java_math_BigDecimal& arg0);
	 AndroidCXX::java_math_BigDecimal multiply(AndroidCXX::java_math_BigDecimal& arg0,AndroidCXX::java_math_MathContext& arg1);
	 AndroidCXX::java_math_BigDecimal divide(AndroidCXX::java_math_BigDecimal& arg0,AndroidCXX::java_math_MathContext& arg1);
	 AndroidCXX::java_math_BigDecimal divide(AndroidCXX::java_math_BigDecimal& arg0,int& arg1,JAVA_MATH_ROUNDINGMODE::java_math_RoundingMode& arg2);
	 AndroidCXX::java_math_BigDecimal divide(AndroidCXX::java_math_BigDecimal& arg0,int& arg1);
	 AndroidCXX::java_math_BigDecimal divide(AndroidCXX::java_math_BigDecimal& arg0,JAVA_MATH_ROUNDINGMODE::java_math_RoundingMode& arg1);
	 AndroidCXX::java_math_BigDecimal divide(AndroidCXX::java_math_BigDecimal& arg0);
	 AndroidCXX::java_math_BigDecimal divide(AndroidCXX::java_math_BigDecimal& arg0,int& arg1,int& arg2);
	 AndroidCXX::java_math_BigDecimal divideToIntegralValue(AndroidCXX::java_math_BigDecimal& arg0);
	 AndroidCXX::java_math_BigDecimal divideToIntegralValue(AndroidCXX::java_math_BigDecimal& arg0,AndroidCXX::java_math_MathContext& arg1);
	 AndroidCXX::java_math_BigDecimal remainder(AndroidCXX::java_math_BigDecimal& arg0);
	 AndroidCXX::java_math_BigDecimal remainder(AndroidCXX::java_math_BigDecimal& arg0,AndroidCXX::java_math_MathContext& arg1);
	 std::vector<AndroidCXX::java_math_BigDecimal > divideAndRemainder(AndroidCXX::java_math_BigDecimal& arg0,AndroidCXX::java_math_MathContext& arg1);
	 std::vector<AndroidCXX::java_math_BigDecimal > divideAndRemainder(AndroidCXX::java_math_BigDecimal& arg0);
	 AndroidCXX::java_math_BigDecimal negate();
	 AndroidCXX::java_math_BigDecimal negate(AndroidCXX::java_math_MathContext& arg0);
	 AndroidCXX::java_math_BigDecimal plus(AndroidCXX::java_math_MathContext& arg0);
	 AndroidCXX::java_math_BigDecimal plus();
	 AndroidCXX::java_math_BigInteger unscaledValue();
	 AndroidCXX::java_math_BigDecimal setScale(int& arg0,JAVA_MATH_ROUNDINGMODE::java_math_RoundingMode& arg1);
	 AndroidCXX::java_math_BigDecimal setScale(int& arg0,int& arg1);
	 AndroidCXX::java_math_BigDecimal setScale(int& arg0);
	 AndroidCXX::java_math_BigDecimal movePointLeft(int& arg0);
	 AndroidCXX::java_math_BigDecimal movePointRight(int& arg0);
	 AndroidCXX::java_math_BigDecimal scaleByPowerOfTen(int& arg0);
	 AndroidCXX::java_math_BigDecimal stripTrailingZeros();
	 AndroidCXX::java_lang_String toEngineeringString();
	 AndroidCXX::java_lang_String toPlainString();
	 AndroidCXX::java_math_BigInteger toBigInteger();
	 AndroidCXX::java_math_BigInteger toBigIntegerExact();
	 long longValueExact();
	 int intValueExact();
	 short shortValueExact();
	 byte byteValueExact();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_math_BigDecimal
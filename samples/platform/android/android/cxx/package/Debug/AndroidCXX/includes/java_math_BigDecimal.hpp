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
	java_math_BigDecimal(Proxy proxy);
	// Public Constructors
	java_math_BigDecimal(std::vector<char> const& arg0,int const& arg1,int const& arg2);
	java_math_BigDecimal(std::vector<char> const& arg0,int const& arg1,int const& arg2,AndroidCXX::java_math_MathContext const& arg3);
	java_math_BigDecimal(std::vector<char> const& arg0);
	java_math_BigDecimal(std::vector<char> const& arg0,AndroidCXX::java_math_MathContext const& arg1);
	java_math_BigDecimal(AndroidCXX::java_lang_String const& arg0);
	java_math_BigDecimal(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_math_MathContext const& arg1);
	java_math_BigDecimal(double const& arg0);
	java_math_BigDecimal(double const& arg0,AndroidCXX::java_math_MathContext const& arg1);
	java_math_BigDecimal(AndroidCXX::java_math_BigInteger const& arg0);
	java_math_BigDecimal(AndroidCXX::java_math_BigInteger const& arg0,AndroidCXX::java_math_MathContext const& arg1);
	java_math_BigDecimal(AndroidCXX::java_math_BigInteger const& arg0,int const& arg1);
	java_math_BigDecimal(AndroidCXX::java_math_BigInteger const& arg0,int const& arg1,AndroidCXX::java_math_MathContext const& arg2);
	java_math_BigDecimal(int const& arg0);
	java_math_BigDecimal(int const& arg0,AndroidCXX::java_math_MathContext const& arg1);
	java_math_BigDecimal(long const& arg0);
	java_math_BigDecimal(long const& arg0,AndroidCXX::java_math_MathContext const& arg1);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_math_BigDecimal();
	// Functions
	 AndroidCXX::java_math_BigDecimal add(AndroidCXX::java_math_BigDecimal const& arg0,AndroidCXX::java_math_MathContext const& arg1);
	 AndroidCXX::java_math_BigDecimal add(AndroidCXX::java_math_BigDecimal const& arg0);
	 bool equals(AndroidCXX::java_lang_Object const& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	 AndroidCXX::java_math_BigDecimal abs();
	 AndroidCXX::java_math_BigDecimal abs(AndroidCXX::java_math_MathContext const& arg0);
	 AndroidCXX::java_math_BigDecimal pow(int const& arg0);
	 AndroidCXX::java_math_BigDecimal pow(int const& arg0,AndroidCXX::java_math_MathContext const& arg1);
	 AndroidCXX::java_math_BigDecimal min(AndroidCXX::java_math_BigDecimal const& arg0);
	 AndroidCXX::java_math_BigDecimal max(AndroidCXX::java_math_BigDecimal const& arg0);
	 int compareTo(AndroidCXX::java_math_BigDecimal const& arg0);
	 int intValue();
	 long longValue();
	 float floatValue();
	 double doubleValue();
	static AndroidCXX::java_math_BigDecimal valueOf(double const& arg0);
	static AndroidCXX::java_math_BigDecimal valueOf(long const& arg0);
	static AndroidCXX::java_math_BigDecimal valueOf(long const& arg0,int const& arg1);
	 int signum();
	 AndroidCXX::java_math_BigDecimal round(AndroidCXX::java_math_MathContext const& arg0);
	 AndroidCXX::java_math_BigDecimal ulp();
	 int scale();
	 int precision();
	 AndroidCXX::java_math_BigDecimal subtract(AndroidCXX::java_math_BigDecimal const& arg0);
	 AndroidCXX::java_math_BigDecimal subtract(AndroidCXX::java_math_BigDecimal const& arg0,AndroidCXX::java_math_MathContext const& arg1);
	 AndroidCXX::java_math_BigDecimal multiply(AndroidCXX::java_math_BigDecimal const& arg0);
	 AndroidCXX::java_math_BigDecimal multiply(AndroidCXX::java_math_BigDecimal const& arg0,AndroidCXX::java_math_MathContext const& arg1);
	 AndroidCXX::java_math_BigDecimal divide(AndroidCXX::java_math_BigDecimal const& arg0,AndroidCXX::java_math_MathContext const& arg1);
	 AndroidCXX::java_math_BigDecimal divide(AndroidCXX::java_math_BigDecimal const& arg0,int const& arg1,java_math_RoundingMode::java_math_RoundingMode const& arg2);
	 AndroidCXX::java_math_BigDecimal divide(AndroidCXX::java_math_BigDecimal const& arg0,int const& arg1);
	 AndroidCXX::java_math_BigDecimal divide(AndroidCXX::java_math_BigDecimal const& arg0,java_math_RoundingMode::java_math_RoundingMode const& arg1);
	 AndroidCXX::java_math_BigDecimal divide(AndroidCXX::java_math_BigDecimal const& arg0);
	 AndroidCXX::java_math_BigDecimal divide(AndroidCXX::java_math_BigDecimal const& arg0,int const& arg1,int const& arg2);
	 AndroidCXX::java_math_BigDecimal divideToIntegralValue(AndroidCXX::java_math_BigDecimal const& arg0);
	 AndroidCXX::java_math_BigDecimal divideToIntegralValue(AndroidCXX::java_math_BigDecimal const& arg0,AndroidCXX::java_math_MathContext const& arg1);
	 AndroidCXX::java_math_BigDecimal remainder(AndroidCXX::java_math_BigDecimal const& arg0);
	 AndroidCXX::java_math_BigDecimal remainder(AndroidCXX::java_math_BigDecimal const& arg0,AndroidCXX::java_math_MathContext const& arg1);
	 std::vector<AndroidCXX::java_math_BigDecimal > divideAndRemainder(AndroidCXX::java_math_BigDecimal const& arg0,AndroidCXX::java_math_MathContext const& arg1);
	 std::vector<AndroidCXX::java_math_BigDecimal > divideAndRemainder(AndroidCXX::java_math_BigDecimal const& arg0);
	 AndroidCXX::java_math_BigDecimal negate();
	 AndroidCXX::java_math_BigDecimal negate(AndroidCXX::java_math_MathContext const& arg0);
	 AndroidCXX::java_math_BigDecimal plus(AndroidCXX::java_math_MathContext const& arg0);
	 AndroidCXX::java_math_BigDecimal plus();
	 AndroidCXX::java_math_BigInteger unscaledValue();
	 AndroidCXX::java_math_BigDecimal setScale(int const& arg0,java_math_RoundingMode::java_math_RoundingMode const& arg1);
	 AndroidCXX::java_math_BigDecimal setScale(int const& arg0,int const& arg1);
	 AndroidCXX::java_math_BigDecimal setScale(int const& arg0);
	 AndroidCXX::java_math_BigDecimal movePointLeft(int const& arg0);
	 AndroidCXX::java_math_BigDecimal movePointRight(int const& arg0);
	 AndroidCXX::java_math_BigDecimal scaleByPowerOfTen(int const& arg0);
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
/*
 * Header (Instance CXX)
 * Author: codegen
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

#include <java_lang_String.hpp>

#include <java_math_BigInteger.hpp>


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

class java_math_MathContext;

class java_lang_String;

class java_math_BigInteger;

class java_math_BigDecimal : public AndroidCXX::java_lang_Number,public AndroidCXX::java_lang_Comparable
{
public:

	// Public Constructor
	java_math_BigDecimal(std::vector<char> const& arg0,Proxy * aProxy = new Proxy());
	java_math_BigDecimal(std::vector<char> const& arg0,int const& arg1,int const& arg2,Proxy * aProxy = new Proxy());
	java_math_BigDecimal(std::vector<char> const& arg0,int const& arg1,int const& arg2,AndroidCXX::java_math_MathContext const& arg3,Proxy * aProxy = new Proxy());
	java_math_BigDecimal(std::vector<char> const& arg0,AndroidCXX::java_math_MathContext const& arg1,Proxy * aProxy = new Proxy());
	java_math_BigDecimal(double const& arg0,Proxy * aProxy = new Proxy());
	java_math_BigDecimal(double const& arg0,AndroidCXX::java_math_MathContext const& arg1,Proxy * aProxy = new Proxy());
	java_math_BigDecimal(int const& arg0,Proxy * aProxy = new Proxy());
	java_math_BigDecimal(int const& arg0,AndroidCXX::java_math_MathContext const& arg1,Proxy * aProxy = new Proxy());
	java_math_BigDecimal(AndroidCXX::java_lang_String const& arg0,Proxy * aProxy = new Proxy());
	java_math_BigDecimal(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_math_MathContext const& arg1,Proxy * aProxy = new Proxy());
	java_math_BigDecimal(AndroidCXX::java_math_BigInteger const& arg0,Proxy * aProxy = new Proxy());
	java_math_BigDecimal(AndroidCXX::java_math_BigInteger const& arg0,int const& arg1,Proxy * aProxy = new Proxy());
	java_math_BigDecimal(AndroidCXX::java_math_BigInteger const& arg0,int const& arg1,AndroidCXX::java_math_MathContext const& arg2,Proxy * aProxy = new Proxy());
	java_math_BigDecimal(AndroidCXX::java_math_BigInteger const& arg0,AndroidCXX::java_math_MathContext const& arg1,Proxy * aProxy = new Proxy());
	java_math_BigDecimal(long const& arg0,Proxy * aProxy = new Proxy());
	java_math_BigDecimal(long const& arg0,AndroidCXX::java_math_MathContext const& arg1,Proxy * aProxy = new Proxy());
	java_math_BigDecimal(const java_math_BigDecimal& cc);
	java_math_BigDecimal(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_math_BigDecimal();
	// Functions

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_math_BigDecimal
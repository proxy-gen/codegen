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

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_math_BigInteger
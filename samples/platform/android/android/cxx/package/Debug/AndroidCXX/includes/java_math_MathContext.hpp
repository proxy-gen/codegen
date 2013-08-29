/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	
	


 		 
 		 













// Generated Code 

#ifndef _java_math_MathContext
#define _java_math_MathContext
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <java_math_RoundingMode.hpp>

#include <java_lang_String.hpp>


#include <java_io_Serializable.hpp>

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

class java_math_MathContext : public AndroidCXX::java_io_Serializable
{
public:

	// Public Constructor
	java_math_MathContext(int const& arg0,Proxy * aProxy = new Proxy());
	java_math_MathContext(int const& arg0,java_math_RoundingMode::java_math_RoundingMode const& arg1,Proxy * aProxy = new Proxy());
	java_math_MathContext(AndroidCXX::java_lang_String const& arg0,Proxy * aProxy = new Proxy());
	java_math_MathContext(const java_math_MathContext& cc);
	java_math_MathContext(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_math_MathContext();
	// Functions
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual int  getPrecision() ;
	virtual java_math_RoundingMode::java_math_RoundingMode  getRoundingMode() ;
	virtual int  hashCode() ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_math_MathContext
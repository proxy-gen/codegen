/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 
	
	
	
	
 		 
	


 		 






























// Generated Code 

#ifndef _java_lang_Double
#define _java_lang_Double
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>


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

class java_lang_String;

class java_lang_Double : public java_lang_Comparable
{
public:

	// Public ConstrucXXX
	java_lang_Double(double const& arg0);
	java_lang_Double(AndroidCXX::java_lang_String const& arg0);
	java_lang_Double(const java_lang_Double& cc);
	java_lang_Double(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_lang_Double();
	// Functions
	virtual byte  byteValue() ;
	static int  compare(double const& arg0,double const& arg1) ;
	virtual int  compareTo(AndroidCXX::java_lang_Double const& arg0) ;
	static long  doubleToLongBits(double const& arg0) ;
	static long  doubleToRawLongBits(double const& arg0) ;
	virtual double  doubleValue() ;
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual float  floatValue() ;
	virtual int  hashCode() ;
	virtual int  intValue() ;
	static bool  isInfinite(double const& arg0) ;
	virtual bool  isInfinite() ;
	static bool  isNaN(double const& arg0) ;
	virtual bool  isNaN() ;
	static double  longBitsToDouble(long const& arg0) ;
	virtual long  longValue() ;
	static double  parseDouble(AndroidCXX::java_lang_String const& arg0) ;
	virtual short  shortValue() ;
	static AndroidCXX::java_lang_String * toHexString(double const& arg0) ;
	static AndroidCXX::java_lang_String * toString(double const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;
	static AndroidCXX::java_lang_Double * valueOf(double const& arg0) ;
	static AndroidCXX::java_lang_Double * valueOf(AndroidCXX::java_lang_String const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Double
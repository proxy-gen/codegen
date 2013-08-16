/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
	
 		 
 		 
	
 		 
 		 
	
 		 
	
 		 
 		 
	
	
	
	
	
	
	
 		 
	
 		 
	


 		 









































// Generated Code 

#ifndef _java_lang_Integer
#define _java_lang_Integer
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <java_lang_Object.hpp>


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


class java_lang_String;

class java_lang_Object;

class java_lang_Integer : public java_lang_Comparable
{
public:

	// Public ConstrucXXX
	java_lang_Integer(int const& arg0);
	java_lang_Integer(AndroidCXX::java_lang_String const& arg0);
	java_lang_Integer(const java_lang_Integer& cc);
	java_lang_Integer(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_lang_Integer();
	// Functions
	static int  bitCount(int const& arg0) ;
	virtual byte  byteValue() ;
	virtual int  compareTo(AndroidCXX::java_lang_Integer const& arg0) ;
	static AndroidCXX::java_lang_Integer * decode(AndroidCXX::java_lang_String const& arg0) ;
	virtual double  doubleValue() ;
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual float  floatValue() ;
	static AndroidCXX::java_lang_Integer * getInteger(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	static AndroidCXX::java_lang_Integer * getInteger(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_Integer const& arg1) ;
	static AndroidCXX::java_lang_Integer * getInteger(AndroidCXX::java_lang_String const& arg0) ;
	virtual int  hashCode() ;
	static int  highestOneBit(int const& arg0) ;
	virtual int  intValue() ;
	virtual long  longValue() ;
	static int  lowestOneBit(int const& arg0) ;
	static int  numberOfLeadingZeros(int const& arg0) ;
	static int  numberOfTrailingZeros(int const& arg0) ;
	static int  parseInt(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	static int  parseInt(AndroidCXX::java_lang_String const& arg0) ;
	static int  reverseBytes(int const& arg0) ;
	static int  reverse(int const& arg0) ;
	static int  rotateLeft(int const& arg0,int const& arg1) ;
	static int  rotateRight(int const& arg0,int const& arg1) ;
	virtual short  shortValue() ;
	static int  signum(int const& arg0) ;
	static AndroidCXX::java_lang_String * toBinaryString(int const& arg0) ;
	static AndroidCXX::java_lang_String * toHexString(int const& arg0) ;
	static AndroidCXX::java_lang_String * toOctalString(int const& arg0) ;
	static AndroidCXX::java_lang_String * toString(int const& arg0,int const& arg1) ;
	static AndroidCXX::java_lang_String * toString(int const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;
	static AndroidCXX::java_lang_Integer * valueOf(int const& arg0) ;
	static AndroidCXX::java_lang_Integer * valueOf(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	static AndroidCXX::java_lang_Integer * valueOf(AndroidCXX::java_lang_String const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Integer
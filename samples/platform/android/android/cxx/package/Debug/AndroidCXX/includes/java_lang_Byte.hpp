/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
	
 		 
 		 
 		 
	
	
 		 
	
 		 
	
	


 		 
























// Generated Code 

#ifndef _java_lang_Byte
#define _java_lang_Byte
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

class java_lang_Byte : public java_lang_Comparable
{
public:

	// Public ConstrucXXX
	java_lang_Byte(AndroidCXX::java_lang_String const& arg0);
	java_lang_Byte(byte const& arg0);
	java_lang_Byte(const java_lang_Byte& cc);
	java_lang_Byte(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_lang_Byte();
	// Functions
	virtual byte  byteValue() ;
	virtual int  compareTo(AndroidCXX::java_lang_Byte const& arg0) ;
	static AndroidCXX::java_lang_Byte * decode(AndroidCXX::java_lang_String const& arg0) ;
	virtual double  doubleValue() ;
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual float  floatValue() ;
	virtual int  hashCode() ;
	virtual int  intValue() ;
	virtual long  longValue() ;
	static byte  parseByte(AndroidCXX::java_lang_String const& arg0) ;
	static byte  parseByte(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	virtual short  shortValue() ;
	static AndroidCXX::java_lang_String * toString(byte const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;
	static AndroidCXX::java_lang_Byte * valueOf(AndroidCXX::java_lang_String const& arg0) ;
	static AndroidCXX::java_lang_Byte * valueOf(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	static AndroidCXX::java_lang_Byte * valueOf(byte const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Byte
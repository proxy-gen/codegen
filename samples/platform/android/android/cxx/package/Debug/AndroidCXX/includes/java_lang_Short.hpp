/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
	
 		 
 		 
 		 
	
	
 		 
	
 		 
	
	


 		 

























// Generated Code 

#ifndef _java_lang_Short
#define _java_lang_Short
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

class java_lang_Short : public java_lang_Comparable
{
public:

	// Public ConstrucXXX
	java_lang_Short(AndroidCXX::java_lang_String const& arg0);
	java_lang_Short(short const& arg0);
	java_lang_Short(const java_lang_Short& cc);
	java_lang_Short(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_lang_Short();
	// Functions
	virtual byte  byteValue() ;
	virtual int  compareTo(AndroidCXX::java_lang_Short const& arg0) ;
	static AndroidCXX::java_lang_Short * decode(AndroidCXX::java_lang_String const& arg0) ;
	virtual double  doubleValue() ;
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual float  floatValue() ;
	virtual int  hashCode() ;
	virtual int  intValue() ;
	virtual long  longValue() ;
	static short  parseShort(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	static short  parseShort(AndroidCXX::java_lang_String const& arg0) ;
	static short  reverseBytes(short const& arg0) ;
	virtual short  shortValue() ;
	static AndroidCXX::java_lang_String * toString(short const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;
	static AndroidCXX::java_lang_Short * valueOf(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	static AndroidCXX::java_lang_Short * valueOf(AndroidCXX::java_lang_String const& arg0) ;
	static AndroidCXX::java_lang_Short * valueOf(short const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Short
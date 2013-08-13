/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//

















// Generated Code 

#ifndef _java_lang_Number
#define _java_lang_Number
//
// Scroll Down 
//



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

class java_lang_Number : public java_io_Serializable
{
public:

	java_lang_Number(const java_lang_Number& cc);
	java_lang_Number(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_lang_Number();
	// Functions
	virtual byte  byteValue() ;
	virtual short  shortValue() ;
	virtual int  intValue() ;
	virtual long  longValue() ;
	virtual float  floatValue() ;
	virtual double  doubleValue() ;

protected:
	java_lang_Number();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Number
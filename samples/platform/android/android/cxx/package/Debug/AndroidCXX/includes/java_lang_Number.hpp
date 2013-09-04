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

class java_lang_Number : public AndroidCXX::java_io_Serializable
{
public:

	java_lang_Number(const java_lang_Number& cc);
	java_lang_Number(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_lang_Number();
	// Functions
	virtual byte  byteValue() ;
	virtual double  doubleValue() ;
	virtual float  floatValue() ;
	virtual int  intValue() ;
	virtual long  longValue() ;
	virtual short  shortValue() ;

protected:
	java_lang_Number();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Number
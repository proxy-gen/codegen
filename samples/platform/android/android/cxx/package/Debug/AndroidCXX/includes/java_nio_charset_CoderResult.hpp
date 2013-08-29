/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
	
	

















// Generated Code 

#ifndef _java_nio_charset_CoderResult
#define _java_nio_charset_CoderResult
//
// Scroll Down 
//


#include <java_lang_String.hpp>


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

class java_nio_charset_CoderResult 
{
public:

	// Public Constructor
	java_nio_charset_CoderResult(const java_nio_charset_CoderResult& cc);
	java_nio_charset_CoderResult(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_nio_charset_CoderResult();
	// Functions
	virtual bool  isError() ;
	virtual bool  isMalformed() ;
	virtual bool  isOverflow() ;
	virtual bool  isUnderflow() ;
	virtual bool  isUnmappable() ;
	virtual int  length() ;
	static AndroidCXX::java_nio_charset_CoderResult * malformedForLength(int const& arg0) ;
	virtual void  throwException() ;
	virtual AndroidCXX::java_lang_String * toString() ;
	static AndroidCXX::java_nio_charset_CoderResult * unmappableForLength(int const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_charset_CoderResult
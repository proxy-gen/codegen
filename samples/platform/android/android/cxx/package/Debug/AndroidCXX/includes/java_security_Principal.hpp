/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	
	











// Generated Code 

#ifndef _java_security_Principal
#define _java_security_Principal
//
// Scroll Down 
//



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

class java_security_Principal 
{
public:

	java_security_Principal(const java_security_Principal& cc);
	java_security_Principal(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_security_Principal();
	// Functions
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual int  hashCode() ;
	virtual AndroidCXX::java_lang_String * getName() ;

protected:
	java_security_Principal();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_security_Principal
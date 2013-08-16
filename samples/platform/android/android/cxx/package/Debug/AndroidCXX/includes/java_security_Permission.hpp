/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
	
	
 		 
	
	


 		 














// Generated Code 

#ifndef _java_security_Permission
#define _java_security_Permission
//
// Scroll Down 
//



#include <java_io_Serializable.hpp>

#include <java_security_Guard.hpp>

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


class java_security_PermissionCollection;

class java_security_Permission : public java_io_Serializable,public java_security_Guard
{
public:

	java_security_Permission(const java_security_Permission& cc);
	java_security_Permission(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_security_Permission();
	// Functions
	virtual void  checkGuard(AndroidCXX::java_lang_Object const& arg0) ;
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_lang_String * getActions() ;
	virtual AndroidCXX::java_lang_String * getName() ;
	virtual int  hashCode() ;
	virtual bool  implies(AndroidCXX::java_security_Permission const& arg0) ;
	virtual AndroidCXX::java_security_PermissionCollection * newPermissionCollection() ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:
	java_security_Permission();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_security_Permission
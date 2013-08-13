/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	
 		 
	
 	
 		 














// Generated Code 

#ifndef _java_security_PermissionCollection
#define _java_security_PermissionCollection
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

class java_security_Permission;

class java_lang_String;

class java_util_Enumeration;

class java_security_PermissionCollection : public java_io_Serializable
{
public:

	java_security_PermissionCollection(const java_security_PermissionCollection& cc);
	java_security_PermissionCollection(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_security_PermissionCollection();
	// Functions
	virtual void  add(AndroidCXX::java_security_Permission const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual bool  implies(AndroidCXX::java_security_Permission const& arg0) ;
	virtual void  setReadOnly() ;
	virtual AndroidCXX::java_util_Enumeration * elements() ;
	virtual bool  isReadOnly() ;

protected:
	java_security_PermissionCollection();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_security_PermissionCollection
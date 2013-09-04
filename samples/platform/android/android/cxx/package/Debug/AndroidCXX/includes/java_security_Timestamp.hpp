/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	
	
	


 		 
 		 











// Generated Code 

#ifndef _java_security_Timestamp
#define _java_security_Timestamp
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <java_security_cert_CertPath.hpp>

#include <java_util_Date.hpp>

#include <java_lang_String.hpp>


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

class java_lang_Object;

class java_security_cert_CertPath;

class java_util_Date;

class java_lang_String;

class java_security_Timestamp : public AndroidCXX::java_io_Serializable
{
public:

	// Public Constructor
	java_security_Timestamp(AndroidCXX::java_util_Date const& arg0,AndroidCXX::java_security_cert_CertPath const& arg1,Proxy * aProxy = new Proxy());
	java_security_Timestamp(const java_security_Timestamp& cc);
	java_security_Timestamp(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_security_Timestamp();
	// Functions
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_security_cert_CertPath * getSignerCertPath() ;
	virtual AndroidCXX::java_util_Date * getTimestamp() ;
	virtual int  hashCode() ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_security_Timestamp
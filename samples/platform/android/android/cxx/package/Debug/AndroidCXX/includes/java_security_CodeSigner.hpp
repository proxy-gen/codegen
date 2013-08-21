/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	
	
	


 		 
 		 











// Generated Code 

#ifndef _java_security_CodeSigner
#define _java_security_CodeSigner
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <java_security_cert_CertPath.hpp>

#include <java_security_Timestamp.hpp>

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

class java_security_Timestamp;

class java_lang_String;

class java_security_CodeSigner : public AndroidCXX::java_io_Serializable
{
public:

	// Public ConstrucXXX
	java_security_CodeSigner(AndroidCXX::java_security_cert_CertPath const& arg0,AndroidCXX::java_security_Timestamp const& arg1);
	java_security_CodeSigner(const java_security_CodeSigner& cc);
	java_security_CodeSigner(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_security_CodeSigner();
	// Functions
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_security_cert_CertPath * getSignerCertPath() ;
	virtual AndroidCXX::java_security_Timestamp * getTimestamp() ;
	virtual int  hashCode() ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_security_CodeSigner
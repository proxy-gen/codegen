/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	
	
 	
 		 
 		 
 		 
	















// Generated Code 

#ifndef _java_security_cert_Certificate
#define _java_security_cert_Certificate
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

class java_lang_Object;

class java_lang_String;

class java_security_PublicKey;

class java_security_cert_Certificate : public java_io_Serializable
{
public:

	java_security_cert_Certificate(const java_security_cert_Certificate& cc);
	java_security_cert_Certificate(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_security_cert_Certificate();
	// Functions
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual int  hashCode() ;
	virtual AndroidCXX::java_lang_String * getType() ;
	virtual std::vector<byte>  getEncoded() ;
	virtual void  verify(AndroidCXX::java_security_PublicKey const& arg0) ;
	virtual void  verify(AndroidCXX::java_security_PublicKey const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual AndroidCXX::java_security_PublicKey * getPublicKey() ;

protected:
	java_security_cert_Certificate();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_security_cert_Certificate
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

class java_security_PublicKey;

class java_lang_String;

class java_security_cert_Certificate : public AndroidCXX::java_io_Serializable
{
public:

	java_security_cert_Certificate(const java_security_cert_Certificate& cc);
	java_security_cert_Certificate(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_security_cert_Certificate();
	// Functions
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual std::vector<byte>  getEncoded() ;
	virtual AndroidCXX::java_security_PublicKey * getPublicKey() ;
	virtual AndroidCXX::java_lang_String * getType() ;
	virtual int  hashCode() ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual void  verify(AndroidCXX::java_security_PublicKey const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual void  verify(AndroidCXX::java_security_PublicKey const& arg0) ;

protected:
	java_security_cert_Certificate();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_security_cert_Certificate
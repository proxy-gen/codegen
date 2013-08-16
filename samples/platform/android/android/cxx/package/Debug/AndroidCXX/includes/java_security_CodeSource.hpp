/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 	
 		 
 	
 		 
	
 		 
	


 		 
 	
 		 
 		 
 	
 		 














// Generated Code 

#ifndef _java_security_CodeSource
#define _java_security_CodeSource
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <java_security_cert_Certificate.hpp>

#include <java_security_CodeSigner.hpp>

#include <java_net_URL.hpp>

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

class java_security_cert_Certificate;

class java_security_CodeSigner;

class java_net_URL;


class java_lang_String;

class java_security_CodeSource : public java_io_Serializable
{
public:

	// Public ConstrucXXX
	java_security_CodeSource(AndroidCXX::java_net_URL const& arg0,std::vector<java_security_CodeSigner> const& arg1);
	java_security_CodeSource(AndroidCXX::java_net_URL const& arg0,std::vector<java_security_cert_Certificate> const& arg1);
	java_security_CodeSource(const java_security_CodeSource& cc);
	java_security_CodeSource(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_security_CodeSource();
	// Functions
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual std::vector<java_security_cert_Certificate>  getCertificates() ;
	virtual std::vector<java_security_CodeSigner>  getCodeSigners() ;
	virtual AndroidCXX::java_net_URL * getLocation() ;
	virtual int  hashCode() ;
	virtual bool  implies(AndroidCXX::java_security_CodeSource const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_security_CodeSource
/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 	
 		 
	
 	
 		 
 		 
 	











// Generated Code 

#ifndef _java_security_cert_X509Extension
#define _java_security_cert_X509Extension
//
// Scroll Down 
//



#include <java_lang_Object.hpp>

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

class java_util_Set;

class java_lang_String;

class java_security_cert_X509Extension : public java_lang_Object
{
public:

	java_security_cert_X509Extension(const java_security_cert_X509Extension& cc);
	java_security_cert_X509Extension(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_security_cert_X509Extension();
	// Functions
	virtual bool  hasUnsupportedCriticalExtension() ;
	virtual AndroidCXX::java_util_Set * getCriticalExtensionOIDs() ;
	virtual AndroidCXX::java_util_Set * getNonCriticalExtensionOIDs() ;
	virtual std::vector<byte>  getExtensionValue(AndroidCXX::java_lang_String const& arg0) ;

protected:
	java_security_cert_X509Extension();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_security_cert_X509Extension
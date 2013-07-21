/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
	
 	
 		 
	
 	
 		 
 	
	
 	
 		 














// Generated Code 

#ifndef _java_security_cert_CertPath
#define _java_security_cert_CertPath
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <java_util_List.hpp>

#include <java_security_cert_Certificate.hpp>

#include <java_util_Iterator.hpp>

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


using namespace AndroidCXX;

// Forward Declarations

class java_lang_Object;

class java_lang_String;

class java_util_List;

class java_security_cert_Certificate;

class java_util_Iterator;

class java_security_cert_CertPath
{
public:

	java_security_cert_CertPath(const java_security_cert_CertPath& cc);
	java_security_cert_CertPath(void * proxy);
	// Public Constructors
	// Default Destructor
	virtual ~java_security_cert_CertPath();
	// Functions
	 bool equals(java_lang_Object& arg0);
	 java_lang_String *  toString();
	 int hashCode();
	 java_util_List *  getCertificates();
	 java_lang_String *  getType();
	 std::vector<byte> getEncoded();
	 std::vector<byte> getEncoded(java_lang_String& arg0);
	 java_util_Iterator *  getEncodings();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_security_cert_CertPath
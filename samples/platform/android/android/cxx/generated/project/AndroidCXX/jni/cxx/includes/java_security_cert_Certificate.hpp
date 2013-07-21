/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <java_security_PublicKey.hpp>

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

class java_security_PublicKey;

class java_security_cert_Certificate
{
public:

	java_security_cert_Certificate(const java_security_cert_Certificate& cc);
	java_security_cert_Certificate(void * proxy);
	// Public Constructors
	java_security_cert_Certificate();
	// Default Destructor
	virtual ~java_security_cert_Certificate();
	// Functions
	 bool equals(java_lang_Object& arg0);
	 java_lang_String toString();
	 int hashCode();
	 java_lang_String getType();
	 std::vector<byte> getEncoded();
	 void verify(java_security_PublicKey& arg0);
	 void verify(java_security_PublicKey& arg0,java_lang_String& arg1);
	 java_security_PublicKey getPublicKey();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_security_cert_Certificate
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

namespace JDKCXX {

// Forward Declarations

class java_lang_Object;

class java_lang_String;

class java_security_PublicKey;

class java_security_cert_Certificate
{
public:

	java_security_cert_Certificate(const java_security_cert_Certificate& cc);
	java_security_cert_Certificate(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_security_cert_Certificate();
	// Functions
	 bool equals(JDKCXX::java_lang_Object const& arg0);
	 JDKCXX::java_lang_String toString();
	 int hashCode();
	 JDKCXX::java_lang_String getType();
	 std::vector<byte> getEncoded();
	 void verify(JDKCXX::java_security_PublicKey const& arg0);
	 void verify(JDKCXX::java_security_PublicKey const& arg0,JDKCXX::java_lang_String const& arg1);
	 JDKCXX::java_security_PublicKey getPublicKey();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_security_cert_Certificate
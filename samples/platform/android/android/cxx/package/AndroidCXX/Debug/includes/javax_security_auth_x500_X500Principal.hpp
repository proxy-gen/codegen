/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	
 		 
 		 
 	
	
 		 
 		 
	
 		 
	
 	


 		 
 		 
 		 
 		 
 	
 		 
 		 
 	
















// Generated Code 

#ifndef _javax_security_auth_x500_X500Principal
#define _javax_security_auth_x500_X500Principal
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <java_util_Map.hpp>

#include <java_io_InputStream.hpp>

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

class java_util_Map;

class java_io_InputStream;

class javax_security_auth_x500_X500Principal
{
public:

	javax_security_auth_x500_X500Principal(const javax_security_auth_x500_X500Principal& cc);
	javax_security_auth_x500_X500Principal(Proxy proxy);
	// Public Constructors
	javax_security_auth_x500_X500Principal(AndroidCXX::java_io_InputStream const& arg0);
	javax_security_auth_x500_X500Principal(AndroidCXX::java_lang_String const& arg0);
	javax_security_auth_x500_X500Principal(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_util_Map const& arg1);
	javax_security_auth_x500_X500Principal(std::vector<byte> const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~javax_security_auth_x500_X500Principal();
	// Functions
	 bool equals(AndroidCXX::java_lang_Object const& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	 AndroidCXX::java_lang_String getName(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_util_Map const& arg1);
	 AndroidCXX::java_lang_String getName();
	 AndroidCXX::java_lang_String getName(AndroidCXX::java_lang_String const& arg0);
	 std::vector<byte> getEncoded();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _javax_security_auth_x500_X500Principal
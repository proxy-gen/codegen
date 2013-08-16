/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <java_io_Serializable.hpp>

#include <java_security_Principal.hpp>

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

class javax_security_auth_x500_X500Principal : public java_io_Serializable,public java_security_Principal
{
public:

	// Public ConstrucXXX
	javax_security_auth_x500_X500Principal(std::vector<byte> const& arg0);
	javax_security_auth_x500_X500Principal(AndroidCXX::java_io_InputStream const& arg0);
	javax_security_auth_x500_X500Principal(AndroidCXX::java_lang_String const& arg0);
	javax_security_auth_x500_X500Principal(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_util_Map const& arg1);
	javax_security_auth_x500_X500Principal(const javax_security_auth_x500_X500Principal& cc);
	javax_security_auth_x500_X500Principal(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~javax_security_auth_x500_X500Principal();
	// Functions
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual std::vector<byte>  getEncoded() ;
	virtual AndroidCXX::java_lang_String * getName(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_util_Map const& arg1) ;
	virtual AndroidCXX::java_lang_String * getName(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_String * getName() ;
	virtual int  hashCode() ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _javax_security_auth_x500_X500Principal
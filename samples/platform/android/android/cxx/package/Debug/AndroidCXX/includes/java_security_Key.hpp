/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 	
	










// Generated Code 

#ifndef _java_security_Key
#define _java_security_Key
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

class java_lang_String;

class java_security_Key : public AndroidCXX::java_io_Serializable
{
public:

	java_security_Key(const java_security_Key& cc);
	java_security_Key(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_security_Key();
	// Functions
	virtual AndroidCXX::java_lang_String * getAlgorithm() ;
	virtual std::vector<byte>  getEncoded() ;
	virtual AndroidCXX::java_lang_String * getFormat() ;

protected:
	java_security_Key();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_security_Key
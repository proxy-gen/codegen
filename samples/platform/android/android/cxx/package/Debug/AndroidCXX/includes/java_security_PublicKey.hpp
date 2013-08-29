/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//










// Generated Code 

#ifndef _java_security_PublicKey
#define _java_security_PublicKey
//
// Scroll Down 
//



#include <java_security_Key.hpp>

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

class java_security_PublicKey : public AndroidCXX::java_security_Key
{
public:

	java_security_PublicKey(const java_security_PublicKey& cc);
	java_security_PublicKey(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_security_PublicKey();
	// Functions

protected:
	java_security_PublicKey();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_security_PublicKey
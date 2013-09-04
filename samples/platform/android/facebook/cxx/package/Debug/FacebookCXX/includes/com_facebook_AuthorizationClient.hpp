/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//










// Generated Code 

#ifndef _com_facebook_AuthorizationClient
#define _com_facebook_AuthorizationClient
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

namespace FacebookCXX {

// Forward Declarations

class com_facebook_AuthorizationClient : public AndroidCXX::java_io_Serializable
{
public:

	// Public Constructor
	com_facebook_AuthorizationClient(const com_facebook_AuthorizationClient& cc);
	com_facebook_AuthorizationClient(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_AuthorizationClient();
	// Functions

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_AuthorizationClient
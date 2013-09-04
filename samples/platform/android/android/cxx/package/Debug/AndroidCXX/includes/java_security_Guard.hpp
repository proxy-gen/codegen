/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 








// Generated Code 

#ifndef _java_security_Guard
#define _java_security_Guard
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


class java_security_Guard : public AndroidCXX::java_lang_Object
{
public:

	java_security_Guard(const java_security_Guard& cc);
	java_security_Guard(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_security_Guard();
	// Functions
	virtual void  checkGuard(AndroidCXX::java_lang_Object const& arg0) ;

protected:
	java_security_Guard();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_security_Guard
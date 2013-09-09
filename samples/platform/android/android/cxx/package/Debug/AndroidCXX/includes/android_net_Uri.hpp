/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//









// Generated Code 

#ifndef _android_net_Uri
#define _android_net_Uri
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

class android_net_Uri : public AndroidCXX::java_lang_Object
{
public:

	android_net_Uri(const android_net_Uri& cc);
	android_net_Uri(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_net_Uri();
	// Functions

protected:
	android_net_Uri();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_net_Uri
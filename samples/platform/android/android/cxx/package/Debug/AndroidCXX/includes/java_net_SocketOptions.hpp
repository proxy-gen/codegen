/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 		 









// Generated Code 

#ifndef _java_net_SocketOptions
#define _java_net_SocketOptions
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


class java_net_SocketOptions : public AndroidCXX::java_lang_Object
{
public:

	java_net_SocketOptions(const java_net_SocketOptions& cc);
	java_net_SocketOptions(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_net_SocketOptions();
	// Functions
	virtual AndroidCXX::java_lang_Object * getOption(int const& arg0) ;
	virtual void  setOption(int const& arg0,AndroidCXX::java_lang_Object const& arg1) ;

protected:
	java_net_SocketOptions();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_SocketOptions
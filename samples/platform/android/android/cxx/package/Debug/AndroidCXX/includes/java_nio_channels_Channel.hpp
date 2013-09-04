/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//












// Generated Code 

#ifndef _java_nio_channels_Channel
#define _java_nio_channels_Channel
//
// Scroll Down 
//



#include <java_io_Closeable.hpp>

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

class java_nio_channels_Channel : public AndroidCXX::java_io_Closeable
{
public:

	java_nio_channels_Channel(const java_nio_channels_Channel& cc);
	java_nio_channels_Channel(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_nio_channels_Channel();
	// Functions
	virtual void  close() ;
	virtual bool  isOpen() ;

protected:
	java_nio_channels_Channel();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_channels_Channel
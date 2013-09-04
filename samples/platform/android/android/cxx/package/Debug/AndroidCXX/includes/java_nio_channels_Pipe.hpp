/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
	
	










// Generated Code 

#ifndef _java_nio_channels_Pipe
#define _java_nio_channels_Pipe
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


class java_nio_channels_Pipe_SinkChannel;

class java_nio_channels_Pipe_SourceChannel;

class java_nio_channels_Pipe : public AndroidCXX::java_lang_Object
{
public:

	java_nio_channels_Pipe(const java_nio_channels_Pipe& cc);
	java_nio_channels_Pipe(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_nio_channels_Pipe();
	// Functions
	static AndroidCXX::java_nio_channels_Pipe * open() ;
	virtual AndroidCXX::java_nio_channels_Pipe_SinkChannel * sink() ;
	virtual AndroidCXX::java_nio_channels_Pipe_SourceChannel * source() ;

protected:
	java_nio_channels_Pipe();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_channels_Pipe
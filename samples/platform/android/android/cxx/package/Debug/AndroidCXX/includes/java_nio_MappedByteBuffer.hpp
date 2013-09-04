/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
	










// Generated Code 

#ifndef _java_nio_MappedByteBuffer
#define _java_nio_MappedByteBuffer
//
// Scroll Down 
//



#include <java_nio_ByteBuffer.hpp>

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


class java_nio_MappedByteBuffer : public AndroidCXX::java_nio_ByteBuffer
{
public:

	java_nio_MappedByteBuffer(const java_nio_MappedByteBuffer& cc);
	java_nio_MappedByteBuffer(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_nio_MappedByteBuffer();
	// Functions
	virtual AndroidCXX::java_nio_MappedByteBuffer * force() ;
	virtual bool  isLoaded() ;
	virtual AndroidCXX::java_nio_MappedByteBuffer * load() ;

protected:
	java_nio_MappedByteBuffer();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_MappedByteBuffer
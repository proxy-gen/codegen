/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
	















// Generated Code 

#ifndef _java_nio_channels_FileLock
#define _java_nio_channels_FileLock
//
// Scroll Down 
//



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

class java_nio_channels_FileChannel;

class java_lang_String;

class java_nio_channels_FileLock 
{
public:

	java_nio_channels_FileLock(const java_nio_channels_FileLock& cc);
	java_nio_channels_FileLock(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_nio_channels_FileLock();
	// Functions
	virtual AndroidCXX::java_nio_channels_FileChannel * channel() ;
	virtual bool  isShared() ;
	virtual bool  isValid() ;
	virtual bool  overlaps(long const& arg0,long const& arg1) ;
	virtual long  position() ;
	virtual void  release() ;
	virtual long  size() ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:
	java_nio_channels_FileLock();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_channels_FileLock
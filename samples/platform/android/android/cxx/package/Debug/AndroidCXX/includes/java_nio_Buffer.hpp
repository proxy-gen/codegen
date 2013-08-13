/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
	
	
	
	
	
	
	
























// Generated Code 

#ifndef _java_nio_Buffer
#define _java_nio_Buffer
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


class java_lang_Object;

class java_nio_Buffer 
{
public:

	java_nio_Buffer(const java_nio_Buffer& cc);
	java_nio_Buffer(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_nio_Buffer();
	// Functions
	virtual int  limit() ;
	virtual AndroidCXX::java_nio_Buffer * limit(int const& arg0) ;
	virtual AndroidCXX::java_nio_Buffer * clear() ;
	virtual int  remaining() ;
	virtual bool  isDirect() ;
	virtual bool  hasArray() ;
	virtual AndroidCXX::java_lang_Object * array() ;
	virtual AndroidCXX::java_nio_Buffer * position(int const& arg0) ;
	virtual int  position() ;
	virtual int  arrayOffset() ;
	virtual int  capacity() ;
	virtual AndroidCXX::java_nio_Buffer * mark() ;
	virtual AndroidCXX::java_nio_Buffer * reset() ;
	virtual AndroidCXX::java_nio_Buffer * flip() ;
	virtual AndroidCXX::java_nio_Buffer * rewind() ;
	virtual bool  hasRemaining() ;
	virtual bool  isReadOnly() ;

protected:
	java_nio_Buffer();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_Buffer
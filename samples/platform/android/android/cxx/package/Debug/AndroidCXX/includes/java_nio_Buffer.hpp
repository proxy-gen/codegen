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


class java_nio_Buffer : public AndroidCXX::java_lang_Object
{
public:

	java_nio_Buffer(const java_nio_Buffer& cc);
	java_nio_Buffer(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_nio_Buffer();
	// Functions
	virtual int  arrayOffset() ;
	virtual int  capacity() ;
	virtual AndroidCXX::java_nio_Buffer * clear() ;
	virtual AndroidCXX::java_nio_Buffer * flip() ;
	virtual bool  hasArray() ;
	virtual bool  hasRemaining() ;
	virtual bool  isDirect() ;
	virtual bool  isReadOnly() ;
	virtual AndroidCXX::java_nio_Buffer * limit(int const& arg0) ;
	virtual int  limit() ;
	virtual AndroidCXX::java_nio_Buffer * mark() ;
	virtual AndroidCXX::java_nio_Buffer * position(int const& arg0) ;
	virtual int  position() ;
	virtual int  remaining() ;
	virtual AndroidCXX::java_nio_Buffer * reset() ;
	virtual AndroidCXX::java_nio_Buffer * rewind() ;

protected:
	java_nio_Buffer();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_Buffer
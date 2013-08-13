/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 	
	
 	
	
 		 
	
	
	
 	
	
 	
	
 		 
	
 		 
 	
 	
	
 	
	
	
	
	
	
	
	
































// Generated Code 

#ifndef _java_nio_IntBuffer
#define _java_nio_IntBuffer
//
// Scroll Down 
//



#include <java_lang_Comparable.hpp>

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

class java_lang_String;

class java_nio_ByteOrder;

class java_nio_IntBuffer : public java_lang_Comparable
{
public:

	java_nio_IntBuffer(const java_nio_IntBuffer& cc);
	java_nio_IntBuffer(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_nio_IntBuffer();
	// Functions
	virtual int  get() ;
	virtual AndroidCXX::java_nio_IntBuffer * get(std::vector<int> const& arg0) ;
	virtual AndroidCXX::java_nio_IntBuffer * get(std::vector<int> const& arg0,int const& arg1,int const& arg2) ;
	virtual int  get(int const& arg0) ;
	virtual AndroidCXX::java_nio_IntBuffer * put(AndroidCXX::java_nio_IntBuffer const& arg0) ;
	virtual AndroidCXX::java_nio_IntBuffer * put(int const& arg0) ;
	virtual AndroidCXX::java_nio_IntBuffer * put(int const& arg0,int const& arg1) ;
	virtual AndroidCXX::java_nio_IntBuffer * put(std::vector<int> const& arg0,int const& arg1,int const& arg2) ;
	virtual AndroidCXX::java_nio_IntBuffer * put(std::vector<int> const& arg0) ;
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual int  hashCode() ;
	virtual int  compareTo(AndroidCXX::java_nio_IntBuffer const& arg0) ;
	virtual bool  isDirect() ;
	virtual bool  hasArray() ;
	virtual std::vector<int>  array() ;
	virtual int  arrayOffset() ;
	static AndroidCXX::java_nio_IntBuffer * wrap(std::vector<int> const& arg0,int const& arg1,int const& arg2) ;
	static AndroidCXX::java_nio_IntBuffer * wrap(std::vector<int> const& arg0) ;
	static AndroidCXX::java_nio_IntBuffer * allocate(int const& arg0) ;
	virtual AndroidCXX::java_nio_IntBuffer * duplicate() ;
	virtual AndroidCXX::java_nio_IntBuffer * slice() ;
	virtual AndroidCXX::java_nio_IntBuffer * asReadOnlyBuffer() ;
	virtual AndroidCXX::java_nio_IntBuffer * compact() ;
	virtual AndroidCXX::java_nio_ByteOrder * order() ;

protected:
	java_nio_IntBuffer();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_IntBuffer
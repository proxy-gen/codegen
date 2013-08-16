/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 	
	
	
 		 
	
 		 
 	
	
 	
	
	
 	
	
 	
	
	
 		 
	
	
	
	
 	
	
 	
	
































// Generated Code 

#ifndef _java_nio_LongBuffer
#define _java_nio_LongBuffer
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

class java_nio_ByteOrder;

class java_lang_String;

class java_nio_LongBuffer : public java_lang_Comparable
{
public:

	java_nio_LongBuffer(const java_nio_LongBuffer& cc);
	java_nio_LongBuffer(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_nio_LongBuffer();
	// Functions
	static AndroidCXX::java_nio_LongBuffer * allocate(int const& arg0) ;
	virtual int  arrayOffset() ;
	virtual std::vector<long>  array() ;
	virtual AndroidCXX::java_nio_LongBuffer * asReadOnlyBuffer() ;
	virtual AndroidCXX::java_nio_LongBuffer * compact() ;
	virtual int  compareTo(AndroidCXX::java_nio_LongBuffer const& arg0) ;
	virtual AndroidCXX::java_nio_LongBuffer * duplicate() ;
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_nio_LongBuffer * get(std::vector<long> const& arg0,int const& arg1,int const& arg2) ;
	virtual AndroidCXX::java_nio_LongBuffer * get(std::vector<long> const& arg0) ;
	virtual long  get(int const& arg0) ;
	virtual long  get() ;
	virtual bool  hasArray() ;
	virtual int  hashCode() ;
	virtual bool  isDirect() ;
	virtual AndroidCXX::java_nio_ByteOrder * order() ;
	virtual AndroidCXX::java_nio_LongBuffer * put(std::vector<long> const& arg0,int const& arg1,int const& arg2) ;
	virtual AndroidCXX::java_nio_LongBuffer * put(std::vector<long> const& arg0) ;
	virtual AndroidCXX::java_nio_LongBuffer * put(int const& arg0,long const& arg1) ;
	virtual AndroidCXX::java_nio_LongBuffer * put(AndroidCXX::java_nio_LongBuffer const& arg0) ;
	virtual AndroidCXX::java_nio_LongBuffer * put(long const& arg0) ;
	virtual AndroidCXX::java_nio_LongBuffer * slice() ;
	virtual AndroidCXX::java_lang_String * toString() ;
	static AndroidCXX::java_nio_LongBuffer * wrap(std::vector<long> const& arg0,int const& arg1,int const& arg2) ;
	static AndroidCXX::java_nio_LongBuffer * wrap(std::vector<long> const& arg0) ;

protected:
	java_nio_LongBuffer();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_LongBuffer
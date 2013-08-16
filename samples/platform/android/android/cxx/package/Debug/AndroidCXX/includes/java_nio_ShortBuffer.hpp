/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 	
	
	
 		 
	
 		 
 	
	
 	
	
	
 	
	
 	
	
	
 		 
	
	
	
	
 	
	
 	
	
































// Generated Code 

#ifndef _java_nio_ShortBuffer
#define _java_nio_ShortBuffer
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

class java_nio_ShortBuffer : public java_lang_Comparable
{
public:

	java_nio_ShortBuffer(const java_nio_ShortBuffer& cc);
	java_nio_ShortBuffer(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_nio_ShortBuffer();
	// Functions
	static AndroidCXX::java_nio_ShortBuffer * allocate(int const& arg0) ;
	virtual int  arrayOffset() ;
	virtual std::vector<short>  array() ;
	virtual AndroidCXX::java_nio_ShortBuffer * asReadOnlyBuffer() ;
	virtual AndroidCXX::java_nio_ShortBuffer * compact() ;
	virtual int  compareTo(AndroidCXX::java_nio_ShortBuffer const& arg0) ;
	virtual AndroidCXX::java_nio_ShortBuffer * duplicate() ;
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_nio_ShortBuffer * get(std::vector<short> const& arg0,int const& arg1,int const& arg2) ;
	virtual AndroidCXX::java_nio_ShortBuffer * get(std::vector<short> const& arg0) ;
	virtual short  get(int const& arg0) ;
	virtual short  get() ;
	virtual bool  hasArray() ;
	virtual int  hashCode() ;
	virtual bool  isDirect() ;
	virtual AndroidCXX::java_nio_ByteOrder * order() ;
	virtual AndroidCXX::java_nio_ShortBuffer * put(std::vector<short> const& arg0,int const& arg1,int const& arg2) ;
	virtual AndroidCXX::java_nio_ShortBuffer * put(std::vector<short> const& arg0) ;
	virtual AndroidCXX::java_nio_ShortBuffer * put(int const& arg0,short const& arg1) ;
	virtual AndroidCXX::java_nio_ShortBuffer * put(AndroidCXX::java_nio_ShortBuffer const& arg0) ;
	virtual AndroidCXX::java_nio_ShortBuffer * put(short const& arg0) ;
	virtual AndroidCXX::java_nio_ShortBuffer * slice() ;
	virtual AndroidCXX::java_lang_String * toString() ;
	static AndroidCXX::java_nio_ShortBuffer * wrap(std::vector<short> const& arg0,int const& arg1,int const& arg2) ;
	static AndroidCXX::java_nio_ShortBuffer * wrap(std::vector<short> const& arg0) ;

protected:
	java_nio_ShortBuffer();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_ShortBuffer
/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 	
	
	
 		 
	
 		 
 	
	
 	
	
	
 	
	
 	
	
	
	
 		 
	
	
	
 	
	
 	
	
































// Generated Code 

#ifndef _java_nio_FloatBuffer
#define _java_nio_FloatBuffer
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

class java_nio_FloatBuffer : public AndroidCXX::java_lang_Comparable
{
public:

	java_nio_FloatBuffer(const java_nio_FloatBuffer& cc);
	java_nio_FloatBuffer(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_nio_FloatBuffer();
	// Functions
	static AndroidCXX::java_nio_FloatBuffer * allocate(int const& arg0) ;
	virtual int  arrayOffset() ;
	virtual std::vector<float>  array() ;
	virtual AndroidCXX::java_nio_FloatBuffer * asReadOnlyBuffer() ;
	virtual AndroidCXX::java_nio_FloatBuffer * compact() ;
	virtual int  compareTo(AndroidCXX::java_nio_FloatBuffer const& arg0) ;
	virtual AndroidCXX::java_nio_FloatBuffer * duplicate() ;
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_nio_FloatBuffer * get(std::vector<float> const& arg0,int const& arg1,int const& arg2) ;
	virtual AndroidCXX::java_nio_FloatBuffer * get(std::vector<float> const& arg0) ;
	virtual float  get(int const& arg0) ;
	virtual float  get() ;
	virtual bool  hasArray() ;
	virtual int  hashCode() ;
	virtual bool  isDirect() ;
	virtual AndroidCXX::java_nio_ByteOrder * order() ;
	virtual AndroidCXX::java_nio_FloatBuffer * put(std::vector<float> const& arg0,int const& arg1,int const& arg2) ;
	virtual AndroidCXX::java_nio_FloatBuffer * put(std::vector<float> const& arg0) ;
	virtual AndroidCXX::java_nio_FloatBuffer * put(float const& arg0) ;
	virtual AndroidCXX::java_nio_FloatBuffer * put(int const& arg0,float const& arg1) ;
	virtual AndroidCXX::java_nio_FloatBuffer * put(AndroidCXX::java_nio_FloatBuffer const& arg0) ;
	virtual AndroidCXX::java_nio_FloatBuffer * slice() ;
	virtual AndroidCXX::java_lang_String * toString() ;
	static AndroidCXX::java_nio_FloatBuffer * wrap(std::vector<float> const& arg0,int const& arg1,int const& arg2) ;
	static AndroidCXX::java_nio_FloatBuffer * wrap(std::vector<float> const& arg0) ;

protected:
	java_nio_FloatBuffer();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_FloatBuffer
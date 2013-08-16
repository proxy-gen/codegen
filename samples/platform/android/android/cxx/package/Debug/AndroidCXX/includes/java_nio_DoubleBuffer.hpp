/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 	
	
	
 		 
	
 		 
 	
	
 	
	
	
 		 
	
	
	
 	
	
 	
	
	
	
 	
	
 	
	
































// Generated Code 

#ifndef _java_nio_DoubleBuffer
#define _java_nio_DoubleBuffer
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

class java_nio_DoubleBuffer : public java_lang_Comparable
{
public:

	java_nio_DoubleBuffer(const java_nio_DoubleBuffer& cc);
	java_nio_DoubleBuffer(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_nio_DoubleBuffer();
	// Functions
	static AndroidCXX::java_nio_DoubleBuffer * allocate(int const& arg0) ;
	virtual std::vector<double>  array() ;
	virtual int  arrayOffset() ;
	virtual AndroidCXX::java_nio_DoubleBuffer * asReadOnlyBuffer() ;
	virtual AndroidCXX::java_nio_DoubleBuffer * compact() ;
	virtual int  compareTo(AndroidCXX::java_nio_DoubleBuffer const& arg0) ;
	virtual AndroidCXX::java_nio_DoubleBuffer * duplicate() ;
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual double  get() ;
	virtual AndroidCXX::java_nio_DoubleBuffer * get(std::vector<double> const& arg0) ;
	virtual AndroidCXX::java_nio_DoubleBuffer * get(std::vector<double> const& arg0,int const& arg1,int const& arg2) ;
	virtual double  get(int const& arg0) ;
	virtual bool  hasArray() ;
	virtual int  hashCode() ;
	virtual bool  isDirect() ;
	virtual AndroidCXX::java_nio_ByteOrder * order() ;
	virtual AndroidCXX::java_nio_DoubleBuffer * put(AndroidCXX::java_nio_DoubleBuffer const& arg0) ;
	virtual AndroidCXX::java_nio_DoubleBuffer * put(double const& arg0) ;
	virtual AndroidCXX::java_nio_DoubleBuffer * put(int const& arg0,double const& arg1) ;
	virtual AndroidCXX::java_nio_DoubleBuffer * put(std::vector<double> const& arg0,int const& arg1,int const& arg2) ;
	virtual AndroidCXX::java_nio_DoubleBuffer * put(std::vector<double> const& arg0) ;
	virtual AndroidCXX::java_nio_DoubleBuffer * slice() ;
	virtual AndroidCXX::java_lang_String * toString() ;
	static AndroidCXX::java_nio_DoubleBuffer * wrap(std::vector<double> const& arg0,int const& arg1,int const& arg2) ;
	static AndroidCXX::java_nio_DoubleBuffer * wrap(std::vector<double> const& arg0) ;

protected:
	java_nio_DoubleBuffer();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_DoubleBuffer
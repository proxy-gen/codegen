/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 	


















// Generated Code 

#ifndef _java_util_Random
#define _java_util_Random
//
// Scroll Down 
//



#include <java_io_Serializable.hpp>

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

class java_util_Random : public java_io_Serializable
{
public:

	// Public ConstrucXXX
	java_util_Random();
	java_util_Random(long const& arg0);
	java_util_Random(const java_util_Random& cc);
	java_util_Random(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_util_Random();
	// Functions
	virtual bool  nextBoolean() ;
	virtual void  nextBytes(std::vector<byte> const& arg0) ;
	virtual double  nextDouble() ;
	virtual float  nextFloat() ;
	virtual double  nextGaussian() ;
	virtual int  nextInt() ;
	virtual int  nextInt(int const& arg0) ;
	virtual long  nextLong() ;
	virtual void  setSeed(long const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_Random
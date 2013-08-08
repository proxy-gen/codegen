/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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

class java_util_Random
{
public:

	java_util_Random(const java_util_Random& cc);
	java_util_Random(Proxy proxy);
	// Public Constructors
	java_util_Random();
	java_util_Random(long const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_util_Random();
	// Functions
	 int nextInt();
	 int nextInt(int const& arg0);
	 double nextDouble();
	 long nextLong();
	 void nextBytes(std::vector<byte> const& arg0);
	 void setSeed(long const& arg0);
	 bool nextBoolean();
	 float nextFloat();
	 double nextGaussian();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_Random
/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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



#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <java_nio_ByteOrder.hpp>

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

class java_nio_DoubleBuffer;

class java_lang_Object;

class java_lang_String;

class java_nio_ByteOrder;

class java_nio_DoubleBuffer
{
public:

	java_nio_DoubleBuffer(const java_nio_DoubleBuffer& cc);
	java_nio_DoubleBuffer(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_nio_DoubleBuffer();
	// Functions
	 double get();
	 AndroidCXX::java_nio_DoubleBuffer get(std::vector<double> const& arg0);
	 AndroidCXX::java_nio_DoubleBuffer get(std::vector<double> const& arg0,int const& arg1,int const& arg2);
	 double get(int const& arg0);
	 AndroidCXX::java_nio_DoubleBuffer put(AndroidCXX::java_nio_DoubleBuffer const& arg0);
	 AndroidCXX::java_nio_DoubleBuffer put(double const& arg0);
	 AndroidCXX::java_nio_DoubleBuffer put(int const& arg0,double const& arg1);
	 AndroidCXX::java_nio_DoubleBuffer put(std::vector<double> const& arg0,int const& arg1,int const& arg2);
	 AndroidCXX::java_nio_DoubleBuffer put(std::vector<double> const& arg0);
	 bool equals(AndroidCXX::java_lang_Object const& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	 int compareTo(AndroidCXX::java_nio_DoubleBuffer const& arg0);
	 bool isDirect();
	 bool hasArray();
	 std::vector<double> array();
	 int arrayOffset();
	static AndroidCXX::java_nio_DoubleBuffer wrap(std::vector<double> const& arg0,int const& arg1,int const& arg2);
	static AndroidCXX::java_nio_DoubleBuffer wrap(std::vector<double> const& arg0);
	static AndroidCXX::java_nio_DoubleBuffer allocate(int const& arg0);
	 AndroidCXX::java_nio_DoubleBuffer duplicate();
	 AndroidCXX::java_nio_DoubleBuffer slice();
	 AndroidCXX::java_nio_DoubleBuffer asReadOnlyBuffer();
	 AndroidCXX::java_nio_DoubleBuffer compact();
	 AndroidCXX::java_nio_ByteOrder order();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_DoubleBuffer
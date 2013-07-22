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

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class java_nio_DoubleBuffer;

class java_lang_Object;

class java_lang_String;

class java_nio_ByteOrder;

class java_nio_DoubleBuffer
{
public:

	java_nio_DoubleBuffer(const java_nio_DoubleBuffer& cc);
	java_nio_DoubleBuffer(void * proxy);
	// Public Constructors
	java_nio_DoubleBuffer();
	// Default Destructor
	virtual ~java_nio_DoubleBuffer();
	// Functions
	 double get();
	 java_nio_DoubleBuffer get(std::vector<double>& arg0);
	 java_nio_DoubleBuffer get(std::vector<double>& arg0,int& arg1,int& arg2);
	 double get(int& arg0);
	 java_nio_DoubleBuffer put(java_nio_DoubleBuffer& arg0);
	 java_nio_DoubleBuffer put(double& arg0);
	 java_nio_DoubleBuffer put(int& arg0,double& arg1);
	 java_nio_DoubleBuffer put(std::vector<double>& arg0,int& arg1,int& arg2);
	 java_nio_DoubleBuffer put(std::vector<double>& arg0);
	 bool equals(java_lang_Object& arg0);
	 java_lang_String toString();
	 int hashCode();
	 int compareTo(java_nio_DoubleBuffer& arg0);
	 bool isDirect();
	 bool hasArray();
	 std::vector<double> array();
	 int arrayOffset();
	static java_nio_DoubleBuffer wrap(std::vector<double>& arg0,int& arg1,int& arg2);
	static java_nio_DoubleBuffer wrap(std::vector<double>& arg0);
	static java_nio_DoubleBuffer allocate(int& arg0);
	 java_nio_DoubleBuffer duplicate();
	 java_nio_DoubleBuffer slice();
	 java_nio_DoubleBuffer asReadOnlyBuffer();
	 java_nio_DoubleBuffer compact();
	 java_nio_ByteOrder order();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_DoubleBuffer
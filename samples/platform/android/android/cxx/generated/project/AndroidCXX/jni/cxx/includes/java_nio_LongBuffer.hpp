/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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

class AndroidCXX::java_nio_LongBuffer;

class AndroidCXX::java_lang_Object;

class AndroidCXX::java_lang_String;

class AndroidCXX::java_nio_ByteOrder;

class java_nio_LongBuffer
{
public:

	java_nio_LongBuffer(const java_nio_LongBuffer& cc);
	java_nio_LongBuffer(void * proxy);
	// Public Constructors
	java_nio_LongBuffer();
	// Default Destructor
	virtual ~java_nio_LongBuffer();
	// Functions
	 long get();
	 AndroidCXX::java_nio_LongBuffer get(std::vector<long>& arg0);
	 AndroidCXX::java_nio_LongBuffer get(std::vector<long>& arg0,int& arg1,int& arg2);
	 long get(int& arg0);
	 AndroidCXX::java_nio_LongBuffer put(AndroidCXX::java_nio_LongBuffer& arg0);
	 AndroidCXX::java_nio_LongBuffer put(long& arg0);
	 AndroidCXX::java_nio_LongBuffer put(int& arg0,long& arg1);
	 AndroidCXX::java_nio_LongBuffer put(std::vector<long>& arg0,int& arg1,int& arg2);
	 AndroidCXX::java_nio_LongBuffer put(std::vector<long>& arg0);
	 bool equals(AndroidCXX::java_lang_Object& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	 int compareTo(AndroidCXX::java_nio_LongBuffer& arg0);
	 bool isDirect();
	 bool hasArray();
	 std::vector<long> array();
	 int arrayOffset();
	static AndroidCXX::java_nio_LongBuffer wrap(std::vector<long>& arg0,int& arg1,int& arg2);
	static AndroidCXX::java_nio_LongBuffer wrap(std::vector<long>& arg0);
	static AndroidCXX::java_nio_LongBuffer allocate(int& arg0);
	 AndroidCXX::java_nio_LongBuffer duplicate();
	 AndroidCXX::java_nio_LongBuffer slice();
	 AndroidCXX::java_nio_LongBuffer asReadOnlyBuffer();
	 AndroidCXX::java_nio_LongBuffer compact();
	 AndroidCXX::java_nio_ByteOrder order();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_LongBuffer
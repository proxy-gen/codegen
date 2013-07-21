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


using namespace AndroidCXX;

// Forward Declarations

class java_nio_LongBuffer;

class java_lang_Object;

class java_lang_String;

class java_nio_ByteOrder;

class java_nio_LongBuffer
{
public:

	java_nio_LongBuffer(const java_nio_LongBuffer& cc);
	java_nio_LongBuffer(void * proxy);
	// Public Constructors
	// Default Destructor
	virtual ~java_nio_LongBuffer();
	// Functions
	 long get();
	 java_nio_LongBuffer *  get(std::vector<long>& arg0);
	 java_nio_LongBuffer *  get(std::vector<long>& arg0,int& arg1,int& arg2);
	 long get(int& arg0);
	 java_nio_LongBuffer *  put(java_nio_LongBuffer& arg0);
	 java_nio_LongBuffer *  put(long& arg0);
	 java_nio_LongBuffer *  put(int& arg0,long& arg1);
	 java_nio_LongBuffer *  put(std::vector<long>& arg0,int& arg1,int& arg2);
	 java_nio_LongBuffer *  put(std::vector<long>& arg0);
	 bool equals(java_lang_Object& arg0);
	 java_lang_String *  toString();
	 int hashCode();
	 int compareTo(java_nio_LongBuffer& arg0);
	 bool isDirect();
	 bool hasArray();
	 std::vector<long> array();
	 int arrayOffset();
	static java_nio_LongBuffer *  wrap(std::vector<long>& arg0,int& arg1,int& arg2);
	static java_nio_LongBuffer *  wrap(std::vector<long>& arg0);
	static java_nio_LongBuffer *  allocate(int& arg0);
	 java_nio_LongBuffer *  duplicate();
	 java_nio_LongBuffer *  slice();
	 java_nio_LongBuffer *  asReadOnlyBuffer();
	 java_nio_LongBuffer *  compact();
	 java_nio_ByteOrder *  order();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_LongBuffer
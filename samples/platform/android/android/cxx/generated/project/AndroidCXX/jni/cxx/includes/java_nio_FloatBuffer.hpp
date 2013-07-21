/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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

class java_nio_FloatBuffer;

class java_lang_Object;

class java_lang_String;

class java_nio_ByteOrder;

class java_nio_FloatBuffer
{
public:

	java_nio_FloatBuffer(const java_nio_FloatBuffer& cc);
	java_nio_FloatBuffer(void * proxy);
	// Public Constructors
	// Default Destructor
	virtual ~java_nio_FloatBuffer();
	// Functions
	 float get();
	 java_nio_FloatBuffer *  get(std::vector<float>& arg0);
	 java_nio_FloatBuffer *  get(std::vector<float>& arg0,int& arg1,int& arg2);
	 float get(int& arg0);
	 java_nio_FloatBuffer *  put(java_nio_FloatBuffer& arg0);
	 java_nio_FloatBuffer *  put(float& arg0);
	 java_nio_FloatBuffer *  put(int& arg0,float& arg1);
	 java_nio_FloatBuffer *  put(std::vector<float>& arg0,int& arg1,int& arg2);
	 java_nio_FloatBuffer *  put(std::vector<float>& arg0);
	 bool equals(java_lang_Object& arg0);
	 java_lang_String *  toString();
	 int hashCode();
	 int compareTo(java_nio_FloatBuffer& arg0);
	 bool isDirect();
	 bool hasArray();
	 std::vector<float> array();
	 int arrayOffset();
	static java_nio_FloatBuffer *  wrap(std::vector<float>& arg0,int& arg1,int& arg2);
	static java_nio_FloatBuffer *  wrap(std::vector<float>& arg0);
	static java_nio_FloatBuffer *  allocate(int& arg0);
	 java_nio_FloatBuffer *  duplicate();
	 java_nio_FloatBuffer *  slice();
	 java_nio_FloatBuffer *  asReadOnlyBuffer();
	 java_nio_FloatBuffer *  compact();
	 java_nio_ByteOrder *  order();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_FloatBuffer
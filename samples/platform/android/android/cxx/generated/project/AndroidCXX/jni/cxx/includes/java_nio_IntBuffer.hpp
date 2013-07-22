/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 	
	
 	
	
 		 
	
	
	
 	
	
 	
	
 		 
	
 		 
 	
 	
	
 	
	
	
	
	
	
	
	
































// Generated Code 

#ifndef _java_nio_IntBuffer
#define _java_nio_IntBuffer
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

class java_nio_IntBuffer;

class java_lang_Object;

class java_lang_String;

class java_nio_ByteOrder;

class java_nio_IntBuffer
{
public:

	java_nio_IntBuffer(const java_nio_IntBuffer& cc);
	java_nio_IntBuffer(void * proxy);
	// Public Constructors
	java_nio_IntBuffer();
	// Default Destructor
	virtual ~java_nio_IntBuffer();
	// Functions
	 int get();
	 AndroidCXX::java_nio_IntBuffer get(std::vector<int>& arg0);
	 AndroidCXX::java_nio_IntBuffer get(std::vector<int>& arg0,int& arg1,int& arg2);
	 int get(int& arg0);
	 AndroidCXX::java_nio_IntBuffer put(AndroidCXX::java_nio_IntBuffer& arg0);
	 AndroidCXX::java_nio_IntBuffer put(int& arg0);
	 AndroidCXX::java_nio_IntBuffer put(int& arg0,int& arg1);
	 AndroidCXX::java_nio_IntBuffer put(std::vector<int>& arg0,int& arg1,int& arg2);
	 AndroidCXX::java_nio_IntBuffer put(std::vector<int>& arg0);
	 bool equals(AndroidCXX::java_lang_Object& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	 int compareTo(AndroidCXX::java_nio_IntBuffer& arg0);
	 bool isDirect();
	 bool hasArray();
	 std::vector<int> array();
	 int arrayOffset();
	static AndroidCXX::java_nio_IntBuffer wrap(std::vector<int>& arg0,int& arg1,int& arg2);
	static AndroidCXX::java_nio_IntBuffer wrap(std::vector<int>& arg0);
	static AndroidCXX::java_nio_IntBuffer allocate(int& arg0);
	 AndroidCXX::java_nio_IntBuffer duplicate();
	 AndroidCXX::java_nio_IntBuffer slice();
	 AndroidCXX::java_nio_IntBuffer asReadOnlyBuffer();
	 AndroidCXX::java_nio_IntBuffer compact();
	 AndroidCXX::java_nio_ByteOrder order();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_IntBuffer
/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 	
	
 	
	
 		 
	
	
	
 	
	
 	
	
 		 
	
 		 
 	
 	
	
 	
	
	
	
	
	
	
	
































// Generated Code 

#ifndef _java_nio_ShortBuffer
#define _java_nio_ShortBuffer
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

namespace JDKCXX {

// Forward Declarations

class java_nio_ShortBuffer;

class java_lang_Object;

class java_lang_String;

class java_nio_ByteOrder;

class java_nio_ShortBuffer
{
public:

	java_nio_ShortBuffer(const java_nio_ShortBuffer& cc);
	java_nio_ShortBuffer(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// java_nio_ShortBuffer();
	// 
	// Default Destructor
	virtual ~java_nio_ShortBuffer();
	// Functions
	 short get();
	 JDKCXX::java_nio_ShortBuffer get(std::vector<short>& arg0);
	 JDKCXX::java_nio_ShortBuffer get(std::vector<short>& arg0,int& arg1,int& arg2);
	 short get(int& arg0);
	 JDKCXX::java_nio_ShortBuffer put(JDKCXX::java_nio_ShortBuffer& arg0);
	 JDKCXX::java_nio_ShortBuffer put(short& arg0);
	 JDKCXX::java_nio_ShortBuffer put(int& arg0,short& arg1);
	 JDKCXX::java_nio_ShortBuffer put(std::vector<short>& arg0,int& arg1,int& arg2);
	 JDKCXX::java_nio_ShortBuffer put(std::vector<short>& arg0);
	 bool equals(JDKCXX::java_lang_Object& arg0);
	 JDKCXX::java_lang_String toString();
	 int hashCode();
	 int compareTo(JDKCXX::java_nio_ShortBuffer& arg0);
	 bool isDirect();
	 bool hasArray();
	 std::vector<short> array();
	 int arrayOffset();
	static JDKCXX::java_nio_ShortBuffer wrap(std::vector<short>& arg0,int& arg1,int& arg2);
	static JDKCXX::java_nio_ShortBuffer wrap(std::vector<short>& arg0);
	static JDKCXX::java_nio_ShortBuffer allocate(int& arg0);
	 JDKCXX::java_nio_ShortBuffer duplicate();
	 JDKCXX::java_nio_ShortBuffer slice();
	 JDKCXX::java_nio_ShortBuffer asReadOnlyBuffer();
	 JDKCXX::java_nio_ShortBuffer compact();
	 JDKCXX::java_nio_ByteOrder order();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_ShortBuffer
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

namespace JDKCXX {

// Forward Declarations

class java_nio_LongBuffer;

class java_lang_Object;

class java_lang_String;

class java_nio_ByteOrder;

class java_nio_LongBuffer
{
public:

	java_nio_LongBuffer(const java_nio_LongBuffer& cc);
	java_nio_LongBuffer(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_nio_LongBuffer();
	// Functions
	 long get();
	 JDKCXX::java_nio_LongBuffer get(std::vector<long> const& arg0);
	 JDKCXX::java_nio_LongBuffer get(std::vector<long> const& arg0,int const& arg1,int const& arg2);
	 long get(int const& arg0);
	 JDKCXX::java_nio_LongBuffer put(JDKCXX::java_nio_LongBuffer const& arg0);
	 JDKCXX::java_nio_LongBuffer put(long const& arg0);
	 JDKCXX::java_nio_LongBuffer put(int const& arg0,long const& arg1);
	 JDKCXX::java_nio_LongBuffer put(std::vector<long> const& arg0,int const& arg1,int const& arg2);
	 JDKCXX::java_nio_LongBuffer put(std::vector<long> const& arg0);
	 bool equals(JDKCXX::java_lang_Object const& arg0);
	 JDKCXX::java_lang_String toString();
	 int hashCode();
	 int compareTo(JDKCXX::java_nio_LongBuffer const& arg0);
	 bool isDirect();
	 bool hasArray();
	 std::vector<long> array();
	 int arrayOffset();
	static JDKCXX::java_nio_LongBuffer wrap(std::vector<long> const& arg0,int const& arg1,int const& arg2);
	static JDKCXX::java_nio_LongBuffer wrap(std::vector<long> const& arg0);
	static JDKCXX::java_nio_LongBuffer allocate(int const& arg0);
	 JDKCXX::java_nio_LongBuffer duplicate();
	 JDKCXX::java_nio_LongBuffer slice();
	 JDKCXX::java_nio_LongBuffer asReadOnlyBuffer();
	 JDKCXX::java_nio_LongBuffer compact();
	 JDKCXX::java_nio_ByteOrder order();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_LongBuffer
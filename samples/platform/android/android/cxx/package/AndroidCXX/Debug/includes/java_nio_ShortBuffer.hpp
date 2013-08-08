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

namespace AndroidCXX {

// Forward Declarations

class java_nio_ShortBuffer;

class java_lang_Object;

class java_lang_String;

class java_nio_ByteOrder;

class java_nio_ShortBuffer
{
public:

	java_nio_ShortBuffer(const java_nio_ShortBuffer& cc);
	java_nio_ShortBuffer(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_nio_ShortBuffer();
	// Functions
	 short get();
	 AndroidCXX::java_nio_ShortBuffer get(std::vector<short> const& arg0);
	 AndroidCXX::java_nio_ShortBuffer get(std::vector<short> const& arg0,int const& arg1,int const& arg2);
	 short get(int const& arg0);
	 AndroidCXX::java_nio_ShortBuffer put(AndroidCXX::java_nio_ShortBuffer const& arg0);
	 AndroidCXX::java_nio_ShortBuffer put(short const& arg0);
	 AndroidCXX::java_nio_ShortBuffer put(int const& arg0,short const& arg1);
	 AndroidCXX::java_nio_ShortBuffer put(std::vector<short> const& arg0,int const& arg1,int const& arg2);
	 AndroidCXX::java_nio_ShortBuffer put(std::vector<short> const& arg0);
	 bool equals(AndroidCXX::java_lang_Object const& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	 int compareTo(AndroidCXX::java_nio_ShortBuffer const& arg0);
	 bool isDirect();
	 bool hasArray();
	 std::vector<short> array();
	 int arrayOffset();
	static AndroidCXX::java_nio_ShortBuffer wrap(std::vector<short> const& arg0,int const& arg1,int const& arg2);
	static AndroidCXX::java_nio_ShortBuffer wrap(std::vector<short> const& arg0);
	static AndroidCXX::java_nio_ShortBuffer allocate(int const& arg0);
	 AndroidCXX::java_nio_ShortBuffer duplicate();
	 AndroidCXX::java_nio_ShortBuffer slice();
	 AndroidCXX::java_nio_ShortBuffer asReadOnlyBuffer();
	 AndroidCXX::java_nio_ShortBuffer compact();
	 AndroidCXX::java_nio_ByteOrder order();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_ShortBuffer
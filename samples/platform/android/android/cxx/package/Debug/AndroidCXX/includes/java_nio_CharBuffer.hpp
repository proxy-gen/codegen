/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 	
	
 	
	
	
	
 		 
	
 		 
	
 	
	
 	
	
 		 
	
 		 
	
 		 
	
	
 		 
	
 		 
	
 	
 		 
	
 	
	
 	
	
 		 
	
 		 
	
	
	
	
	
	











































// Generated Code 

#ifndef _java_nio_CharBuffer
#define _java_nio_CharBuffer
//
// Scroll Down 
//



#include <java_lang_String.hpp>

#include <java_lang_Object.hpp>

#include <java_lang_CharSequence.hpp>

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

class java_nio_CharBuffer;

class java_lang_String;

class java_lang_Object;

class java_lang_CharSequence;

class java_nio_ByteOrder;

class java_nio_CharBuffer
{
public:

	java_nio_CharBuffer(const java_nio_CharBuffer& cc);
	java_nio_CharBuffer(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_nio_CharBuffer();
	// Functions
	 AndroidCXX::java_nio_CharBuffer get(std::vector<char> const& arg0);
	 AndroidCXX::java_nio_CharBuffer get(std::vector<char> const& arg0,int const& arg1,int const& arg2);
	 char get();
	 char get(int const& arg0);
	 AndroidCXX::java_nio_CharBuffer put(int const& arg0,char const& arg1);
	 AndroidCXX::java_nio_CharBuffer put(char const& arg0);
	 AndroidCXX::java_nio_CharBuffer put(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_nio_CharBuffer put(AndroidCXX::java_lang_String const& arg0,int const& arg1,int const& arg2);
	 AndroidCXX::java_nio_CharBuffer put(std::vector<char> const& arg0);
	 AndroidCXX::java_nio_CharBuffer put(std::vector<char> const& arg0,int const& arg1,int const& arg2);
	 AndroidCXX::java_nio_CharBuffer put(AndroidCXX::java_nio_CharBuffer const& arg0);
	 bool equals(AndroidCXX::java_lang_Object const& arg0);
	 AndroidCXX::java_lang_String toString();
	 AndroidCXX::java_nio_CharBuffer append(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1,int const& arg2);
	 AndroidCXX::java_nio_CharBuffer append(char const& arg0);
	 AndroidCXX::java_nio_CharBuffer append(AndroidCXX::java_lang_CharSequence const& arg0);
	 int hashCode();
	 int compareTo(AndroidCXX::java_nio_CharBuffer const& arg0);
	 int length();
	 char charAt(int const& arg0);
	 AndroidCXX::java_lang_CharSequence subSequence(int const& arg0,int const& arg1);
	 bool isDirect();
	 bool hasArray();
	 std::vector<char> array();
	 int arrayOffset();
	static AndroidCXX::java_nio_CharBuffer wrap(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1,int const& arg2);
	static AndroidCXX::java_nio_CharBuffer wrap(std::vector<char> const& arg0,int const& arg1,int const& arg2);
	static AndroidCXX::java_nio_CharBuffer wrap(std::vector<char> const& arg0);
	static AndroidCXX::java_nio_CharBuffer wrap(AndroidCXX::java_lang_CharSequence const& arg0);
	 int read(AndroidCXX::java_nio_CharBuffer const& arg0);
	static AndroidCXX::java_nio_CharBuffer allocate(int const& arg0);
	 AndroidCXX::java_nio_CharBuffer duplicate();
	 AndroidCXX::java_nio_CharBuffer slice();
	 AndroidCXX::java_nio_CharBuffer asReadOnlyBuffer();
	 AndroidCXX::java_nio_CharBuffer compact();
	 AndroidCXX::java_nio_ByteOrder order();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_CharBuffer
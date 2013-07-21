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


using namespace AndroidCXX;

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
	java_nio_CharBuffer(void * proxy);
	// Public Constructors
	java_nio_CharBuffer();
	// Default Destructor
	virtual ~java_nio_CharBuffer();
	// Functions
	 java_nio_CharBuffer get(std::vector<char>& arg0);
	 java_nio_CharBuffer get(std::vector<char>& arg0,int& arg1,int& arg2);
	 char get();
	 char get(int& arg0);
	 java_nio_CharBuffer put(int& arg0,char& arg1);
	 java_nio_CharBuffer put(char& arg0);
	 java_nio_CharBuffer put(java_lang_String& arg0);
	 java_nio_CharBuffer put(java_lang_String& arg0,int& arg1,int& arg2);
	 java_nio_CharBuffer put(std::vector<char>& arg0);
	 java_nio_CharBuffer put(std::vector<char>& arg0,int& arg1,int& arg2);
	 java_nio_CharBuffer put(java_nio_CharBuffer& arg0);
	 bool equals(java_lang_Object& arg0);
	 java_lang_String toString();
	 java_nio_CharBuffer append(java_lang_CharSequence& arg0,int& arg1,int& arg2);
	 java_nio_CharBuffer append(char& arg0);
	 java_nio_CharBuffer append(java_lang_CharSequence& arg0);
	 int hashCode();
	 int compareTo(java_nio_CharBuffer& arg0);
	 int length();
	 char charAt(int& arg0);
	 java_lang_CharSequence subSequence(int& arg0,int& arg1);
	 bool isDirect();
	 bool hasArray();
	 std::vector<char> array();
	 int arrayOffset();
	static java_nio_CharBuffer wrap(java_lang_CharSequence& arg0,int& arg1,int& arg2);
	static java_nio_CharBuffer wrap(std::vector<char>& arg0,int& arg1,int& arg2);
	static java_nio_CharBuffer wrap(std::vector<char>& arg0);
	static java_nio_CharBuffer wrap(java_lang_CharSequence& arg0);
	 int read(java_nio_CharBuffer& arg0);
	static java_nio_CharBuffer allocate(int& arg0);
	 java_nio_CharBuffer duplicate();
	 java_nio_CharBuffer slice();
	 java_nio_CharBuffer asReadOnlyBuffer();
	 java_nio_CharBuffer compact();
	 java_nio_ByteOrder order();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_CharBuffer
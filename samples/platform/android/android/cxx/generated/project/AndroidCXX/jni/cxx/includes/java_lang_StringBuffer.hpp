/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
 	
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 	
	
	
	
	
	
	
	
 		 
 		 
 	
 		 
 		 
	
	
	
 		 
	
	
	
	
	
	
	
	
 		 
	
 		 
	
 	
	
 	
	
	
	
 		 
	
 		 
	
	


 		 
 		 



























































// Generated Code 

#ifndef _java_lang_StringBuffer
#define _java_lang_StringBuffer
//
// Scroll Down 
//


#include <java_lang_String.hpp>


#include <java_lang_Object.hpp>

#include <java_lang_CharSequence.hpp>

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

class java_lang_String;

class java_lang_StringBuffer;

class java_lang_Object;

class java_lang_CharSequence;

class java_lang_StringBuffer
{
public:

	java_lang_StringBuffer(const java_lang_StringBuffer& cc);
	java_lang_StringBuffer(void * proxy);
	// Public Constructors
	java_lang_StringBuffer();
	java_lang_StringBuffer(int& arg0);
	java_lang_StringBuffer(java_lang_String& arg0);
	java_lang_StringBuffer(java_lang_CharSequence& arg0);
	// Default Destructor
	virtual ~java_lang_StringBuffer();
	// Functions
	 java_lang_String toString();
	 java_lang_StringBuffer append(std::vector<char>& arg0,int& arg1,int& arg2);
	 java_lang_StringBuffer append(java_lang_Object& arg0);
	 java_lang_StringBuffer append(java_lang_String& arg0);
	 java_lang_StringBuffer append(java_lang_StringBuffer& arg0);
	 java_lang_StringBuffer append(java_lang_CharSequence& arg0);
	 java_lang_StringBuffer append(java_lang_CharSequence& arg0,int& arg1,int& arg2);
	 java_lang_StringBuffer append(std::vector<char>& arg0);
	 java_lang_StringBuffer append(bool& arg0);
	 java_lang_StringBuffer append(char& arg0);
	 java_lang_StringBuffer append(int& arg0);
	 java_lang_StringBuffer append(long& arg0);
	 java_lang_StringBuffer append(float& arg0);
	 java_lang_StringBuffer append(double& arg0);
	 int indexOf(java_lang_String& arg0,int& arg1);
	 int indexOf(java_lang_String& arg0);
	 int length();
	 char charAt(int& arg0);
	 int codePointAt(int& arg0);
	 int codePointBefore(int& arg0);
	 int codePointCount(int& arg0,int& arg1);
	 int offsetByCodePoints(int& arg0,int& arg1);
	 void getChars(int& arg0,int& arg1,std::vector<char>& arg2,int& arg3);
	 int lastIndexOf(java_lang_String& arg0);
	 int lastIndexOf(java_lang_String& arg0,int& arg1);
	 java_lang_String substring(int& arg0);
	 java_lang_String substring(int& arg0,int& arg1);
	 java_lang_CharSequence subSequence(int& arg0,int& arg1);
	 java_lang_StringBuffer replace(int& arg0,int& arg1,java_lang_String& arg2);
	 int capacity();
	 void ensureCapacity(int& arg0);
	 void trimToSize();
	 void setLength(int& arg0);
	 void setCharAt(int& arg0,char& arg1);
	 java_lang_StringBuffer appendCodePoint(int& arg0);
	 java_lang_StringBuffer _delete(int& arg0,int& arg1);
	 java_lang_StringBuffer deleteCharAt(int& arg0);
	 java_lang_StringBuffer insert(int& arg0,long& arg1);
	 java_lang_StringBuffer insert(int& arg0,int& arg1);
	 java_lang_StringBuffer insert(int& arg0,char& arg1);
	 java_lang_StringBuffer insert(int& arg0,bool& arg1);
	 java_lang_StringBuffer insert(int& arg0,java_lang_CharSequence& arg1,int& arg2,int& arg3);
	 java_lang_StringBuffer insert(int& arg0,java_lang_CharSequence& arg1);
	 java_lang_StringBuffer insert(int& arg0,std::vector<char>& arg1);
	 java_lang_StringBuffer insert(int& arg0,std::vector<char>& arg1,int& arg2,int& arg3);
	 java_lang_StringBuffer insert(int& arg0,double& arg1);
	 java_lang_StringBuffer insert(int& arg0,float& arg1);
	 java_lang_StringBuffer insert(int& arg0,java_lang_String& arg1);
	 java_lang_StringBuffer insert(int& arg0,java_lang_Object& arg1);
	 java_lang_StringBuffer reverse();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_StringBuffer